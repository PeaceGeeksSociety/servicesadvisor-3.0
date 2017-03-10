<?php
/**
 * @file
 * services_advisor_partner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function services_advisor_partner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_partner|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_partner|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_partner';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View Services',
        'link class' => 'right button tiny alert',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|service_partner|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function services_advisor_partner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_around',
        1 => 'title',
        2 => 'links',
        3 => 'field_logo',
        4 => 'field_service_partner_full_name',
        5 => 'field_service_partner_url',
        6 => 'group_left',
        7 => 'group_right',
      ),
    ),
    'fields' => array(
      'group_wrapper_around' => 'ds_content',
      'title' => 'ds_content',
      'links' => 'ds_content',
      'field_logo' => 'ds_content',
      'field_service_partner_full_name' => 'ds_content',
      'field_service_partner_url' => 'ds_content',
      'group_left' => 'ds_content',
      'group_right' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|service_partner|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_partner|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_partner';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_around',
        1 => 'title',
        2 => 'group_inline_info',
        3 => 'field_service_partner_full_name',
        4 => 'body',
        5 => 'field_service_partner_url',
        6 => 'node_link',
        7 => 'group_left',
        8 => 'group_right',
        9 => 'field_logo',
      ),
    ),
    'fields' => array(
      'group_wrapper_around' => 'ds_content',
      'title' => 'ds_content',
      'group_inline_info' => 'ds_content',
      'field_service_partner_full_name' => 'ds_content',
      'body' => 'ds_content',
      'field_service_partner_url' => 'ds_content',
      'node_link' => 'ds_content',
      'group_left' => 'ds_content',
      'group_right' => 'ds_content',
      'field_logo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|service_partner|teaser'] = $ds_layout;

  return $export;
}
