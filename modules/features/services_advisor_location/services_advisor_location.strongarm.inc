<?php
/**
 * @file
 * services_advisor_location.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function services_advisor_location_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-field_services_provided';
  $strongarm->value = array(
    'config_id' => 'taxonomy-field_services_provided',
    'save_lineage' => '1',
    'enforce_deepest' => '1',
    'resizable' => '0',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
        1 => '',
        2 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'Selections',
      'limit' => '0',
      'reset_hs' => '0',
      'sort' => 1,
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
        1 => '',
        2 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
        1 => 1,
        2 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '2',
    ),
    'entity_count' => array(
      'enabled' => 0,
      'require_entity' => 0,
      'settings' => array(
        'count_children' => 0,
        'entity_types' => array(
          'node' => array(
            'count_node' => array(
              'page' => 0,
              'service_location' => 0,
              'service_partner' => 0,
            ),
          ),
        ),
      ),
    ),
  );
  $export['hs_config_taxonomy-field_services_provided'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service_location';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service_location';
  $strongarm->value = '1';
  $export['node_preview_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service_location';
  $strongarm->value = 1;
  $export['node_submitted_service_location'] = $strongarm;

  return $export;
}
