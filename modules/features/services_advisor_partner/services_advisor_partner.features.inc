<?php
/**
 * @file
 * services_advisor_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_partner_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function services_advisor_partner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function services_advisor_partner_node_info() {
  $items = array(
    'service_partner' => array(
      'name' => t('Service Partner'),
      'base' => 'node_content',
      'description' => t('A partner for a service source'),
      'has_title' => '1',
      'title_label' => t('Abbreviated Partner Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
