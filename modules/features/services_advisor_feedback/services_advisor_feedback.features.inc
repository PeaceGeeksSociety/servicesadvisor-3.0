<?php
/**
 * @file
 * services_advisor_feedback.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_feedback_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function services_advisor_feedback_node_info() {
  $items = array(
    'feedback' => array(
      'name' => t('Feedback'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
