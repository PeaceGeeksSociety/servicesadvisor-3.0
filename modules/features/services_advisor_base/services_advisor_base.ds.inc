<?php
/**
 * @file
 * services_advisor_base.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function services_advisor_base_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'service_partners_service_locatio' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_partner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function services_advisor_base_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'service_partners_service_locatio';
  $ds_field->label = 'Service Partners: Service Locations with Translations';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service_partner|*';
  $ds_field->properties = array(
    'block' => 'views|ecdd3e3a5684bee9e40fbfd8db70e522',
    'block_render' => '1',
  );
  $export['service_partners_service_locatio'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'services_add_links';
  $ds_field->label = 'Service Partners: Add links';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service_partner|*';
  $ds_field->properties = array(
    'block' => 'services_advisor_base|services_links',
    'block_render' => '2',
  );
  $export['services_add_links'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function services_advisor_base_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_head',
        1 => 'links',
        2 => 'group_active_dates',
        3 => 'expired_node',
        4 => 'og_group_ref',
        5 => 'group_general_info',
        6 => 'title',
        7 => 'field_service_location_location',
        8 => 'group_location',
        9 => 'field_services_provided',
        10 => 'group_office_info',
        11 => 'group_reg',
        12 => 'group_nex_steps',
        13 => 'group_add_info',
        14 => 'field_service_registration_type',
        15 => 'field_service_nationality',
        16 => 'field_service_intake_criteria',
        17 => 'field_service_comments',
        18 => 'field_service_referral_method',
        19 => 'field_service_more_info_link',
        20 => 'field_service_contact_name',
        21 => 'author',
        22 => 'field_service_contact_phone',
        23 => 'post_date',
        24 => 'field_service_contact_email',
        25 => 'field_service_referral_next_step',
        26 => 'field_service_availability',
        27 => 'field_response_delay_after_refer',
        28 => 'field_service_accessibility',
        29 => 'field_service_feedback_mechanism',
        30 => 'field_service_location_details',
        31 => 'field_service_feedback_delay',
        32 => 'field_complaints_mechanism',
        33 => 'field_location_address',
        34 => 'field_service_coverage',
        35 => 'group_hours',
        36 => 'group_start_end_date',
        37 => 'field_service_start_date',
        38 => 'field_service_end_date',
        39 => 'field_service_office_hours',
      ),
    ),
    'fields' => array(
      'group_head' => 'ds_content',
      'links' => 'ds_content',
      'group_active_dates' => 'ds_content',
      'expired_node' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_general_info' => 'ds_content',
      'title' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'group_location' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'group_office_info' => 'ds_content',
      'group_reg' => 'ds_content',
      'group_nex_steps' => 'ds_content',
      'group_add_info' => 'ds_content',
      'field_service_registration_type' => 'ds_content',
      'field_service_nationality' => 'ds_content',
      'field_service_intake_criteria' => 'ds_content',
      'field_service_comments' => 'ds_content',
      'field_service_referral_method' => 'ds_content',
      'field_service_more_info_link' => 'ds_content',
      'field_service_contact_name' => 'ds_content',
      'author' => 'ds_content',
      'field_service_contact_phone' => 'ds_content',
      'post_date' => 'ds_content',
      'field_service_contact_email' => 'ds_content',
      'field_service_referral_next_step' => 'ds_content',
      'field_service_availability' => 'ds_content',
      'field_response_delay_after_refer' => 'ds_content',
      'field_service_accessibility' => 'ds_content',
      'field_service_feedback_mechanism' => 'ds_content',
      'field_service_location_details' => 'ds_content',
      'field_service_feedback_delay' => 'ds_content',
      'field_complaints_mechanism' => 'ds_content',
      'field_location_address' => 'ds_content',
      'field_service_coverage' => 'ds_content',
      'group_hours' => 'ds_content',
      'group_start_end_date' => 'ds_content',
      'field_service_start_date' => 'ds_content',
      'field_service_end_date' => 'ds_content',
      'field_service_office_hours' => 'ds_content',
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
  $export['node|service_location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_date_group',
        1 => 'group_general',
        2 => 'og_group_ref',
        3 => 'group_service_location_office',
        4 => 'group_service_location_details',
        5 => 'group_service_referral',
        6 => 'group_service_feedback',
        7 => 'group_additional',
        9 => 'field_service_start_date',
        11 => 'field_service_end_date',
        15 => 'field_service_availability',
        16 => 'field_service_comments',
        17 => 'field_service_office_hours',
        18 => 'field_service_location_location',
        19 => 'field_service_more_info_link',
        21 => 'field_service_accessibility',
        22 => 'field_service_location',
        23 => 'field_service_location_details',
        24 => 'field_location_address',
        25 => 'field_service_coverage',
        26 => 'path',
        27 => 'field_service_registration_type',
        28 => 'field_service_nationality',
        29 => 'field_service_intake_criteria',
        30 => 'field_service_referral_method',
        31 => 'field_service_contact_name',
        32 => 'field_service_contact_phone',
        33 => 'field_service_contact_email',
        34 => 'field_service_referral_next_step',
        35 => 'field_response_delay_after_refer',
        36 => 'field_service_feedback_mechanism',
        37 => 'field_service_feedback_delay',
        38 => 'field_complaints_mechanism',
        39 => 'field_services_provided',
        40 => 'title',
      ),
      'hidden' => array(
        8 => 'field__service_location_days',
        10 => 'field_service_location_hour_open',
        12 => 'field_service_location_hour_clos',
        13 => 'language',
        14 => 'redirect',
        20 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_date_group' => 'ds_content',
      'group_general' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'group_service_location_office' => 'ds_content',
      'group_service_location_details' => 'ds_content',
      'group_service_referral' => 'ds_content',
      'group_service_feedback' => 'ds_content',
      'group_additional' => 'ds_content',
      'field__service_location_days' => 'hidden',
      'field_service_start_date' => 'ds_content',
      'field_service_location_hour_open' => 'hidden',
      'field_service_end_date' => 'ds_content',
      'field_service_location_hour_clos' => 'hidden',
      'language' => 'hidden',
      'redirect' => 'hidden',
      'field_service_availability' => 'ds_content',
      'field_service_comments' => 'ds_content',
      'field_service_office_hours' => 'ds_content',
      'field_service_location_location' => 'ds_content',
      'field_service_more_info_link' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'field_service_accessibility' => 'ds_content',
      'field_service_location' => 'ds_content',
      'field_service_location_details' => 'ds_content',
      'field_location_address' => 'ds_content',
      'field_service_coverage' => 'ds_content',
      'path' => 'ds_content',
      'field_service_registration_type' => 'ds_content',
      'field_service_nationality' => 'ds_content',
      'field_service_intake_criteria' => 'ds_content',
      'field_service_referral_method' => 'ds_content',
      'field_service_contact_name' => 'ds_content',
      'field_service_contact_phone' => 'ds_content',
      'field_service_contact_email' => 'ds_content',
      'field_service_referral_next_step' => 'ds_content',
      'field_response_delay_after_refer' => 'ds_content',
      'field_service_feedback_mechanism' => 'ds_content',
      'field_service_feedback_delay' => 'ds_content',
      'field_complaints_mechanism' => 'ds_content',
      'field_services_provided' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|service_location|form'] = $ds_layout;

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
        2 => 'service_partners_service_locatio',
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
      'service_partners_service_locatio' => 'ds_content',
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

  return $export;
}
