<?php
/**
 * @file
 * services_advisor_feedback.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function services_advisor_feedback_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_feedback_summary'.
  $field_bases['field_feedback_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_feedback_summary',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_feedback_type'.
  $field_bases['field_feedback_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_feedback_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'not_available' => 'Service not available',
        'incorrect_hours' => 'Opening hours incorrect',
        'incorrect_location' => 'Service location incorrect',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
