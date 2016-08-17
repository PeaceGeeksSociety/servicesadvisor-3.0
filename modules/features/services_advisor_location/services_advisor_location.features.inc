<?php
/**
 * @file
 * services_advisor_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function services_advisor_location_node_info() {
  $items = array(
    'service_location' => array(
      'name' => t('Service Location'),
      'base' => 'node_content',
      'description' => t('A Service Location for the Service Advisor'),
      'has_title' => '1',
      'title_label' => t('Location: Sector'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
