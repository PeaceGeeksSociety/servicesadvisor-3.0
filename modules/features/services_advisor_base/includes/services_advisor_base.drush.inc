<?php

/**
 * Implements hook_drush_command().
 */
function services_advisor_base_drush_command() {
  $commands = array();
  $commands['term-lineage-update'] = array(
    'category' => 'services_advisor_base',
    'description' => 'Updates the saved term values to include lineage or leaf values. If configured to include lineage, if the processed field has 1 term value it will look for term parents and set those values as well. If configured to only save leaf values it will save the deepest term found in the fields data and remove the others.',
    'aliases' => array('tlu'),
    'arguments' => array(
      'field' => 'The Taxonomy field to process',
      'entity_type' => 'The entity type to process',
      'bundle' => 'The bundle to process',
    ),
    'options' => array(
      'include-lineage' => 'Process field to resave with the entire term lineage or leaf value.'
    )
  );

  return $commands;
}

function drush_services_advisor_base_post_term_lineage_update($field = 'field_service_location_location', $entity_type = 'node', $bundle = 'service_location') {
  $include_lineage = drush_get_option('include-lineage', true);
  $batch_size = 1000;

  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', $entity_type)
    ->entityCondition('bundle', $bundle)
    ->fieldCondition($field, 'tid', 'NULL', '!=');
  $results = $query->execute();
  $ids = isset($results[$entity_type]) ? array_keys($results[$entity_type]) : array();

  if (count($ids) === 0) {
    return drush_print(dt('No content of this type to process.'));
  } else {
    $offset = 0;
    $total = count($ids);
    $functions = array();

    while ($slice = array_slice($ids, $offset, $batch_size)) {
      $offset += count($slice);
      $functions[] = array('services_advisor_base_term_lineage_update', array($entity_type, $field, $include_lineage, $offset, $total, $slice));
    }

    $batch = array(
      'operations' => $functions
    );

    batch_set($batch);
    drush_backend_batch_process();
  }
}

function services_advisor_base_term_lineage_update($entity_type, $field, $include_lineage, $progress, $total, $ids, &$context) {

  foreach(entity_metadata_wrapper('list<' . $entity_type . '>', $ids) as $wrapper) {
    $values = $wrapper->{$field}->value();
    if (count($values) === 1) {
      $lineage = array_reverse(taxonomy_get_parents_all($values[0]->tid));
      $wrapper->{$field}->set($lineage);
      $wrapper->value();
      $wrapper->save();
    }
  }
  // $context['message'] = dt('@progress/@total', ['@progress' => $progress, '@total' => $total]);
  _drush_print_progress($progress / $total);
}

/**
 * Provides progress bar.
 */
function _drush_print_progress($ratio) {
  $percentage = floor($ratio * 100) . '%';
  $columns = drush_get_context('DRUSH_COLUMNS', 80);
  // Subtract 8 characters for the percentage, brackets, spaces and arrow.
  $progress_columns = $columns - 8;
  // If ratio is 1 (complete), the > becomes a = to make a full bar.
  $arrow = ($ratio < 1) ? '>' : '=';
  // Print a new line if ratio is 1 (complete). Otherwise, use a CR.
  $line_ending = ($ratio < 1) ? "\r" : "\n";

  // Determine the current length of the progress string.
  $current_length = floor($ratio * $progress_columns);
  $progress_string = str_pad('', $current_length, '=');

  $output  = '[';
  $output .= $progress_string . $arrow;
  $output .= str_pad('', $progress_columns - $current_length);
  $output .= ']';
  $output .= str_pad('', 5 - strlen($percentage)) . $percentage;
  $output .= $line_ending;

  print $output;
}