<?php
/**
 * @file
 * services_advisor_base.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function services_advisor_base_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'language',
        2 => 'redirect',
        3 => 'path',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'language' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|form'] = $ds_layout;

  return $export;
}
