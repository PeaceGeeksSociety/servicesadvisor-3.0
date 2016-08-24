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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
