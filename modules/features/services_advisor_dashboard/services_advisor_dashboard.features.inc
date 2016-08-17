<?php
/**
 * @file
 * services_advisor_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function services_advisor_dashboard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
