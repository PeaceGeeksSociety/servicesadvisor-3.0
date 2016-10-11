<?php
/**
 * @file
 * services_advisor_migration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_migration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function services_advisor_migration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
