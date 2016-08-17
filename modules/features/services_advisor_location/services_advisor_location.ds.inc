<?php
/**
 * @file
 * services_advisor_location.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function services_advisor_location_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_location|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_location';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '13',
      'label' => 'inline',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '14',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
    ),
    'expired_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_location|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_location|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_location';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'submitted_by' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'edit_node' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'expired_node' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_language' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_location|teaser'] = $ds_fieldsetting;

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
function services_advisor_location_ds_layout_settings_info() {
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'node_language',
        1 => 'edit_node',
        2 => 'og_group_ref',
        3 => 'title',
        4 => 'field_service_location_location',
        5 => 'field_services_provided',
        6 => 'group_inline',
        7 => 'field_service_start_date',
        8 => 'field_service_end_date',
        9 => 'submitted_by',
        10 => 'expired_node',
      ),
    ),
    'fields' => array(
      'node_language' => 'ds_content',
      'edit_node' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'title' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'group_inline' => 'ds_content',
      'field_service_start_date' => 'ds_content',
      'field_service_end_date' => 'ds_content',
      'submitted_by' => 'ds_content',
      'expired_node' => 'ds_content',
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
  $export['node|service_location|teaser'] = $ds_layout;

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
