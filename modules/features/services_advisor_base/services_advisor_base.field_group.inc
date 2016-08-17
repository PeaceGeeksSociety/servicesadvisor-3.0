<?php
/**
 * @file
 * services_advisor_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function services_advisor_base_field_group_info() {
  $field_groups = array();

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
      0 => 'og_group_ref',
      1 => 'field_services_provided',
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
      0 => 'field_service_location',
      1 => 'field_service_coverage',
      2 => 'field_location_address',
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
      1 => 'field_service_registration_type',
      2 => 'field_service_nationality',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('Availability ');
  t('Documentations and Specific Needs');
  t('General Information');
  t('Location');
  t('Referral and Feedback');

  return $field_groups;
}
