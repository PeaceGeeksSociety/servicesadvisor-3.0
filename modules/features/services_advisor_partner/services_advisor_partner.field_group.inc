<?php
/**
 * @file
 * services_advisor_partner.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function services_advisor_partner_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inline_info|node|service_partner|teaser';
  $field_group->group_name = 'group_inline_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_partner_full_name',
      1 => 'field_service_partner_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'inline-list',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_inline_info|node|service_partner|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|service_partner|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_around';
  $field_group->data = array(
    'label' => '',
    'weight' => '16',
    'children' => array(
      0 => 'field_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'medium-2 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left|node|service_partner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|service_partner|teaser';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper_around';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'medium-2 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left|node|service_partner|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|service_partner|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_around';
  $field_group->data = array(
    'label' => '',
    'weight' => '17',
    'children' => array(
      0 => 'field_service_partner_full_name',
      1 => 'field_service_partner_url',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'medium-10 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right|node|service_partner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|service_partner|teaser';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper_around';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
      3 => 'group_inline_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'medium-10 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right|node|service_partner|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_around|node|service_partner|default';
  $field_group->group_name = 'group_wrapper_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_left',
      1 => 'group_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_around|node|service_partner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_around|node|service_partner|teaser';
  $field_group->group_name = 'group_wrapper_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_partner';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_left',
      1 => 'group_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_around|node|service_partner|teaser'] = $field_group;

  return $field_groups;
}
