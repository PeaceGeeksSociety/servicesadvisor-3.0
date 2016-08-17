<?php
/**
 * @file
 * services_advisor_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function services_advisor_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-service_nested_location-field_location_point'.
  $field_instances['taxonomy_term-service_nested_location-field_location_point'] = array(
    'bundle' => 'service_nested_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_location_point',
    'label' => 'Location Point',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location Point');

  return $field_instances;
}
