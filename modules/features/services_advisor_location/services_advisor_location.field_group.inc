<?php
/**
 * @file
 * services_advisor_location.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function services_advisor_location_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_active_dates|node|service_location|default';
  $field_group->group_name = 'group_active_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service active dates',
    'weight' => '1',
    'children' => array(
      0 => 'group_hours',
      1 => 'group_start_end_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Service active dates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-active-dates field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_active_dates|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_info|node|service_location|default';
  $field_group->group_name = 'group_add_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_service_comments',
      1 => 'field_service_more_info_link',
      2 => 'author',
      3 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-add-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_add_info|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|service_location|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_comments',
      1 => 'field_service_more_info_link',
      2 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_additional|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_group|node|service_location|form';
  $field_group->group_name = 'group_date_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service active dates',
    'weight' => '0',
    'children' => array(
      0 => 'field_service_end_date',
      1 => 'field_service_start_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Service active dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_date_group|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info|node|service_location|default';
  $field_group->group_name = 'group_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General information',
    'weight' => '2',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'General information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-general-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_general_info|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|service_location|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_services_provided',
      1 => 'og_group_ref',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_general|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_head|node|service_location|default';
  $field_group->group_name = 'group_head';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Head',
    'weight' => '0',
    'children' => array(
      0 => 'field_service_location_location',
      1 => 'field_services_provided',
      2 => 'title',
      3 => 'links',
      4 => 'expired_node',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Head',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-head field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_head|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours|node|service_location|default';
  $field_group->group_name = 'group_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_active_dates';
  $field_group->data = array(
    'label' => 'Hours:',
    'weight' => '30',
    'children' => array(
      0 => 'field_service_office_hours',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hours:',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-hours field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hours|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inline|node|service_location|default';
  $field_group->group_name = 'group_inline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '15',
    'children' => array(
      0 => 'field_service_location',
      1 => 'changed_date',
      2 => 'submitted_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_inline|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inline|node|service_location|teaser';
  $field_group->group_name = 'group_inline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_end_date',
      1 => 'field_service_start_date',
      2 => 'submitted_by',
      3 => 'expired_node',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_inline|node|service_location|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|service_location|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_coverage',
      1 => 'field_location_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nex_steps|node|service_location|default';
  $field_group->group_name = 'group_nex_steps';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral and Feedback',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_contact_email',
      1 => 'field_service_contact_name',
      2 => 'field_service_contact_phone',
      3 => 'field_response_delay_after_refer',
      4 => 'field_service_feedback_delay',
      5 => 'field_service_feedback_mechanism',
      6 => 'field_service_referral_method',
      7 => 'field_service_referral_next_step',
      8 => 'field_complaints_mechanism',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Referral and Feedback',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-nex-steps field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_nex_steps|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_info|node|service_location|default';
  $field_group->group_name = 'group_office_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_service_accessibility',
      1 => 'field_service_availability',
      2 => 'field_service_location_details',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Office Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-office-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_office_info|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reg|node|service_location|default';
  $field_group->group_name = 'group_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentations and Specific Needs',
    'weight' => '5',
    'children' => array(
      0 => 'field_service_intake_criteria',
      1 => 'field_service_registration_type',
      2 => 'field_service_nationality',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Documentations and Specific Needs',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-reg field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_reg|node|service_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_feedback|node|service_location|form';
  $field_group->group_name = 'group_service_feedback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral and Feedback',
    'weight' => '5',
    'children' => array(
      0 => 'field_complaints_mechanism',
      1 => 'field_response_delay_after_refer',
      2 => 'field_service_contact_email',
      3 => 'field_service_contact_name',
      4 => 'field_service_contact_phone',
      5 => 'field_service_feedback_delay',
      6 => 'field_service_feedback_mechanism',
      7 => 'field_service_referral_method',
      8 => 'field_service_referral_next_step',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Referral and Feedback',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-feedback field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_feedback|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_location_details|node|service_location|form';
  $field_group->group_name = 'group_service_location_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_location_address',
      1 => 'field_service_coverage',
      2 => 'field_service_location',
      3 => 'field_service_location_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-location-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_location_details|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_location_office|node|service_location|form';
  $field_group->group_name = 'group_service_location_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Availability ',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_accessibility',
      1 => 'field_service_availability',
      2 => 'field_service_location_details',
      3 => 'field_service_office_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-location-office field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_location_office|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_referral|node|service_location|form';
  $field_group->group_name = 'group_service_referral';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentations and Specific Needs',
    'weight' => '4',
    'children' => array(
      0 => 'field_service_intake_criteria',
      1 => 'field_service_nationality',
      2 => 'field_service_registration_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Documentations and Specific Needs',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-referral field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_referral|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start_end_date|node|service_location|default';
  $field_group->group_name = 'group_start_end_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_active_dates';
  $field_group->data = array(
    'label' => 'Start Date / End Date:',
    'weight' => '31',
    'children' => array(
      0 => 'field_service_end_date',
      1 => 'field_service_start_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Start Date / End Date:',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-start-end-date field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_start_end_date|node|service_location|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('Availability ');
  t('Documentations and Specific Needs');
  t('General Information');
  t('General information');
  t('Head');
  t('Hours:');
  t('Location');
  t('Office Information');
  t('Referral and Feedback');
  t('Service active dates');
  t('Start Date / End Date:');

  return $field_groups;
}
