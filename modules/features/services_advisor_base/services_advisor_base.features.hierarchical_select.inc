<?php
/**
 * @file
 * services_advisor_base.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function services_advisor_base_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'save_lineage' => '1',
  'enforce_deepest' => '1',
  'resizable' => '1',
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      '0' => '',
      '1' => '',
      '2' => '',
      '3' => '',
    ),
  ),
  'dropbox' => array(
    'status' => 0,
    'title' => 'All selections',
    'limit' => '0',
    'reset_hs' => '1',
    'sort' => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      '0' => '',
      '1' => '',
      '2' => '',
      '3' => '',
    ),
    'allowed_levels' => array(
      '0' => 1,
      '1' => 1,
      '2' => 1,
      '3' => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels' => '4',
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
  'animation_delay' => 400,
  'special_items' => array(),
  'render_flat_select' => 0,
  'config_id' => 'taxonomy-field_service_location_location',
);

$configs['taxonomy-field_service_location_location'] = $config;
return $configs;
}
