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
  'config_id'       => 'taxonomy-field_service_location_location',
  'save_lineage'    => 0,
  'enforce_deepest' => 1,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
      2 => '',
      3 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
      2 => '',
      3 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
      2 => 1,
      3 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 4,
  ),
);

$configs['taxonomy-field_service_location_location'] = $config;
return $configs;
}
