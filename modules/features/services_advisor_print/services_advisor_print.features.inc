<?php
/**
 * @file
 * services_advisor_print.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_print_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
