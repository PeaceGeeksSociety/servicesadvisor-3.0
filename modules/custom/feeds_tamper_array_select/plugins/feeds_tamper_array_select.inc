<?php
/**
 * @file
 * A Feeds Tamper plugin that selects an element from a multivalue fields.
 */

$plugin = array(
  'form' => 'feeds_tamper_array_select_form',
  'callback' => 'feeds_tamper_array_select_callback',
  'name' => 'Select an element from input',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_array_select_form($importer, $element_key, $settings) {

  $form = array();
  $form['selection'] = array(
    '#type' => 'radios',
    '#title' => t('Select element used.'),
    '#required' => true,
    '#default_value' => isset($node->active) ? $node->active : 1,
    '#options' => array(
      'Begin' => 'Begin',
      'End' => 'End',
    ),
    '#description' => t('Select which element is used from the array. Only one element may be used.'),
  );

  return $form;
}

function feeds_tamper_array_select_callback($source, $item_key, $element_key, &$field, $settings) {
  if (!is_array($field)) {
    $field = array($field);
  }
  
  switch($settings['selection']) {
    case 'Begin':
      $field = $field[0];
      break;
    case 'End':
      $field = array_filter($field);
      $field = end($field);
      break;
  }
}

?>