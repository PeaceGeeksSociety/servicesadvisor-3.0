<?php
/**
 * @file
 * services_advisor_migration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function services_advisor_migration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'service_partner_importer-abbreviated_partner_name-required' => TRUE,
    'service_partner_importer-language-default_value' => FALSE,
    'service_location_importer-title-required' => FALSE,
    'service_location_importer-organization_name-required' => TRUE,
    'service_location_importer-start_date-required' => TRUE,
    'service_location_importer-end_date-required' => TRUE,
    'service_partner_importer-abbreviated_partner_name-unique' => FALSE,
    'service_nested_locations-name-required' => FALSE,
    'service_complaints_mechanism_importer-name-required' => FALSE,
    'service_accessibility_importer-name-required' => FALSE,
    'service_available_nationality_importer-name-required' => FALSE,
    'service_coverage_importer-name-required' => FALSE,
    'service_feedback_delay_importer-name-required' => FALSE,
    'service_feedback_mechanism_importer-name-required' => FALSE,
    'service_intake_criteria_importer-name-required' => FALSE,
    'service_referral_method_importer-name-required' => FALSE,
    'service_referral_next_step_importer-name-required' => FALSE,
    'service_registration_type_importer-name-required' => FALSE,
    'service_response_delay_importer-name-required' => FALSE,
    'service_availability_importer-name-required' => FALSE,
    'service_nested_categories_importer-name-required' => FALSE,
    'user_importer-email_address-required' => TRUE,
    'user_importer-language-default_value' => FALSE,
    'user_importer-status-default_value' => FALSE,
    'user_importer-username-required' => TRUE,
    'service_location_importer-availability-required' => TRUE,
    'service_location_importer-nationality-required' => TRUE,
    'service_location_importer-author_email-required' => TRUE,
    'service_location_importer-service_location-explode' => TRUE,
    'service_location_importer-services_provided-explode' => TRUE,
    'service_location_importer-language-default_value' => FALSE,
    'user_importer-service_organisation-explode' => TRUE,
    'user_importer-service_organisation-unique' => TRUE,
    'service_location_importer-services_provided-required' => TRUE,
    'service_location_importer-service_location-required' => TRUE,
    'service_location_importer-nationality-explode' => TRUE,
    'service_location_importer-availability-explode' => TRUE,
    'service_location_importer-accessiblity-explode' => FALSE,
    'service_location_importer-coverage-explode' => FALSE,
    'service_location_importer-legal_documents_required-strtotime' => FALSE,
    'service_location_importer-legal_documents_required-explode' => FALSE,
    'service_location_importer-intake_criteria-explode' => FALSE,
    'service_location_importer-referral_method-explode' => FALSE,
    'service_location_importer-immediate_next_step_after_referral-explode' => FALSE,
    'service_location_importer-feedback_mechanism-explode' => FALSE,
    'service_location_importer-complaints_mechanism-explode' => FALSE,
    'service_legal_document_importer-name-required' => FALSE,
    'service_location_importer-services_provided-trim' => FALSE,
    'service_location_importer-service_location-trim' => FALSE,
    'user_importer-email_address__-required' => FALSE,
    'user_importer-username__-required' => FALSE,
    'user_importer-service_organisation__-required' => FALSE,
    'service_location_importer-author_email__-required' => FALSE,
    'service_location_importer-start_date__-required' => FALSE,
    'service_location_importer-end_date__-required' => FALSE,
    'service_location_importer-organisation_name__-required' => FALSE,
    'service_location_importer-services_provided__-required' => FALSE,
    'service_location_importer-services_provided__-explode' => FALSE,
    'service_location_importer-services_provided__-trim' => FALSE,
    'service_location_importer-availability__-required' => FALSE,
    'service_location_importer-availability__-explode' => FALSE,
    'service_location_importer-service_location__-required' => FALSE,
    'service_location_importer-service_location__-explode' => FALSE,
    'service_location_importer-service_location__-trim' => FALSE,
    'service_location_importer-nationality__-required' => FALSE,
    'service_location_importer-nationality__-explode' => FALSE,
    'service_partner_importer-abbreviated_partner_name__-required' => FALSE,
    'service_partner_importer-abbreviated_partner_name__-trim' => FALSE,
    'service_partner_importer-author_email__-required' => TRUE,
    'user_importer-service_organisation__-explode' => FALSE,
    'service_coverage_importer-name-strtotime' => FALSE,
    'service_location_importer-complaints_mechanism-strtotime' => FALSE,
    'service_location_importer-services_provided__-unique' => TRUE,
    'service_location_importer-service_location__-unique' => FALSE,
    'service_location_importer-service_location__-feeds_tamper_array_select' => TRUE,
    'service_location_importer-services_provided__-feeds_tamper_array_select' => TRUE,
    'service_location_importer-services_provided__-trim_whitespace' => FALSE,
    'service_location_importer-availability__-trim' => FALSE,
    'service_location_importer-accessiblity-trim' => FALSE,
    'service_location_importer-service_location__-trim_whitespace' => FALSE,
    'service_location_importer-coverage-trim' => FALSE,
    'service_location_importer-legal_documents_required-trim' => FALSE,
    'service_location_importer-nationality__-trim' => FALSE,
    'service_location_importer-intake_criteria-trim' => FALSE,
    'service_location_importer-referral_method-strtotime' => FALSE,
    'service_location_importer-referral_method-trim' => FALSE,
    'service_location_importer-immediate_next_step_after_referral-trim' => FALSE,
    'service_location_importer-complaints_mechanism-trim' => FALSE,
    'service_location_importer-feedback_delay-trim' => FALSE,
    'service_location_importer-feedback_mechanism-trim' => FALSE,
    'service_location_importer-response_delay_after_referral-trim' => FALSE,
    'service_location_importer-organisation_name__-trim' => FALSE,
    'service_location_importer-organisation_name__-explode' => FALSE,
    'service_location_importer-organisation_name__-trim_commas' => FALSE,
    'services_advisor_location_ids-organization_etid-explode' => FALSE,
    'services_advisor_location_ids-organization_etid-unique' => FALSE,
    'services_advisor_location_ids-services_provided_tid-explode' => FALSE,
    'services_advisor_location_ids-organization_etid-trim' => FALSE,
    'services_advisor_location_ids-services_provided_tid-unique' => FALSE,
    'services_advisor_location_ids-services_provided_tid-trim' => FALSE,
    'services_advisor_location_ids-user_id-required' => FALSE,
    'services_advisor_location_ids-organization_etid-required' => FALSE,
    'services_advisor_location_ids-services_provided_tid-required' => FALSE,
    'services_advisor_location_ids-availability_tid-explode' => FALSE,
    'services_advisor_location_ids-availability_tid-trim' => FALSE,
    'services_advisor_location_ids-availability_tid-unique' => FALSE,
    'services_advisor_location_ids-availability_tid-required' => FALSE,
    'services_advisor_location_ids-accessibility_tid-explode' => FALSE,
    'services_advisor_location_ids-accessibility_tid-trim' => FALSE,
    'services_advisor_location_ids-accessibility_tid-unique' => FALSE,
    'services_advisor_location_ids-service_location_tid-explode' => FALSE,
    'services_advisor_location_ids-service_location_tid-trim' => FALSE,
    'services_advisor_location_ids-service_location_tid-unique' => FALSE,
    'services_advisor_location_ids-service_location_tid-required' => FALSE,
    'services_advisor_location_ids-coverage_tid-explode' => FALSE,
    'services_advisor_location_ids-coverage_tid-strtotime' => FALSE,
    'services_advisor_location_ids-coverage_tid-trim' => FALSE,
    'services_advisor_location_ids-coverage_tid-unique' => FALSE,
    'services_advisor_location_ids-legal_documents_required_tid-explode' => FALSE,
    'services_advisor_location_ids-legal_documents_required_tid-trim' => FALSE,
    'services_advisor_location_ids-legal_documents_required_tid-unique' => FALSE,
    'services_advisor_location_ids-nationality_tid-explode' => FALSE,
    'services_advisor_location_ids-nationality_tid-trim' => FALSE,
    'services_advisor_location_ids-nationality_tid-strtotime' => FALSE,
    'services_advisor_location_ids-nationality_tid-unique' => FALSE,
    'services_advisor_location_ids-nationality_tid-required' => FALSE,
    'services_advisor_location_ids-intake_criteria_tid-explode' => FALSE,
    'services_advisor_location_ids-intake_criteria_tid-trim' => FALSE,
    'services_advisor_location_ids-intake_criteria_tid-unique' => FALSE,
    'services_advisor_location_ids-referral_method_tid-explode' => FALSE,
    'services_advisor_location_ids-referral_method_tid-trim' => FALSE,
    'services_advisor_location_ids-referral_method_tid-unique' => FALSE,
    'services_advisor_location_ids-immediate_next_step_tid-explode' => FALSE,
    'services_advisor_location_ids-immediate_next_step_tid-trim' => FALSE,
    'services_advisor_location_ids-immediate_next_step_tid-unique' => FALSE,
    'services_advisor_location_ids-complaints_mechanism_tid-explode' => FALSE,
    'services_advisor_location_ids-complaints_mechanism_tid-trim' => FALSE,
    'services_advisor_location_ids-complaints_mechanism_tid-unique' => FALSE,
    'services_advisor_location_ids-feedback_delay_tid-strtotime' => FALSE,
    'services_advisor_location_ids-feedback_mechanism_tid-explode' => FALSE,
    'services_advisor_location_ids-response_delay_tid-trim' => FALSE,
    'services_advisor_location_ids-feedback_mechanism_tid-trim' => FALSE,
    'services_advisor_location_ids-feedback_mechanism_tid-unique' => FALSE,
    'services_advisor_location_ids-feedback_delay_tid-trim' => FALSE,
    'service_location_id_importer-author_uid-required' => FALSE,
    'service_location_id_importer-organization-required' => FALSE,
    'service_location_id_importer-organization-explode' => FALSE,
    'service_location_id_importer-organization-unique' => FALSE,
    'service_location_id_importer-organization-trim' => FALSE,
    'service_location_id_importer-services_provided-required' => FALSE,
    'service_location_id_importer-services_provided-explode' => FALSE,
    'service_location_id_importer-services_provided-unique' => FALSE,
    'service_location_id_importer-availability-required' => FALSE,
    'service_location_id_importer-availability-explode' => FALSE,
    'service_location_id_importer-availability-unique' => FALSE,
    'service_location_id_importer-accessibility-explode' => FALSE,
    'service_location_id_importer-accessibility-unique' => FALSE,
    'service_location_id_importer-service_location-required' => FALSE,
    'service_location_id_importer-coverage-explode' => FALSE,
    'service_location_id_importer-coverage-unique' => FALSE,
    'service_location_id_importer-legal_documents_required-explode' => FALSE,
    'service_location_id_importer-legal_documents_required-unique' => FALSE,
    'service_location_id_importer-nationality-required' => FALSE,
    'service_location_id_importer-nationality-explode' => FALSE,
    'service_location_id_importer-nationality-unique' => FALSE,
    'service_location_id_importer-intake_criteria-explode' => FALSE,
    'service_location_id_importer-intake_criteria-unique' => FALSE,
    'service_location_id_importer-referral_method-explode' => FALSE,
    'service_location_id_importer-referral_method-unique' => FALSE,
    'service_location_id_importer-immediate_next_step-explode' => FALSE,
    'service_location_id_importer-immediate_next_step-unique' => FALSE,
    'service_location_id_importer-feedback_mechanism-explode' => FALSE,
    'service_location_id_importer-feedback_mechanism-unique' => FALSE,
    'service_location_id_importer-complaints_mechanism-strtotime' => FALSE,
    'service_location_id_importer-complaints_mechanism-explode' => FALSE,
    'service_location_id_importer-complaints_mechanism-unique' => FALSE,
    'service_location_id_importer-start_date-required' => FALSE,
    'service_location_id_importer-end_date-required' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_code';
  $strongarm->value = 'all';
  $export['node_export_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_dsv_delimiter';
  $strongarm->value = ',';
  $export['node_export_dsv_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_dsv_enclosure';
  $strongarm->value = '"';
  $export['node_export_dsv_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_dsv_escape_eol';
  $strongarm->value = 1;
  $export['node_export_dsv_escape_eol'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_dsv_separator';
  $strongarm->value = '\\r\\n';
  $export['node_export_dsv_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_existing';
  $strongarm->value = 'revision';
  $export['node_export_existing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_filename';
  $strongarm->value = 'node-export[node_export_filename:nid-list]([node_export_filename:node-count]-nodes).[node_export_filename:timestamp].[node_export_filename:format]';
  $export['node_export_filename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_assets_path';
  $strongarm->value = '';
  $export['node_export_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_list';
  $strongarm->value = '10';
  $export['node_export_file_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_mode';
  $strongarm->value = 'inline';
  $export['node_export_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['node_export_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_types';
  $strongarm->value = array(
    'office' => 0,
    'service_location' => 0,
    'service_partner' => 0,
    'webform' => 0,
    'page' => 0,
  );
  $export['node_export_file_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_format';
  $strongarm->value = array(
    'drupal' => 'drupal',
    'dsv' => 'dsv',
    'json' => 0,
    'serialize' => 0,
    'xml' => 0,
  );
  $export['node_export_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_office';
  $strongarm->value = 1;
  $export['node_export_reset_author_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_page';
  $strongarm->value = 1;
  $export['node_export_reset_author_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_service_location';
  $strongarm->value = 0;
  $export['node_export_reset_author_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_service_partner';
  $strongarm->value = 0;
  $export['node_export_reset_author_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_webform';
  $strongarm->value = 1;
  $export['node_export_reset_author_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_office';
  $strongarm->value = 1;
  $export['node_export_reset_book_mlid_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_page';
  $strongarm->value = 1;
  $export['node_export_reset_book_mlid_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_book_mlid_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_book_mlid_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_webform';
  $strongarm->value = 1;
  $export['node_export_reset_book_mlid_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_office';
  $strongarm->value = 1;
  $export['node_export_reset_changed_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_page';
  $strongarm->value = 1;
  $export['node_export_reset_changed_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_changed_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_changed_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_webform';
  $strongarm->value = 1;
  $export['node_export_reset_changed_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_office';
  $strongarm->value = 1;
  $export['node_export_reset_created_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_page';
  $strongarm->value = 1;
  $export['node_export_reset_created_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_created_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_created_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_webform';
  $strongarm->value = 1;
  $export['node_export_reset_created_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_office';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_page';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_webform';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_office';
  $strongarm->value = 1;
  $export['node_export_reset_menu_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_page';
  $strongarm->value = 1;
  $export['node_export_reset_menu_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_menu_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_menu_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_webform';
  $strongarm->value = 1;
  $export['node_export_reset_menu_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_office';
  $strongarm->value = 1;
  $export['node_export_reset_path_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_page';
  $strongarm->value = 1;
  $export['node_export_reset_path_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_path_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_path_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_webform';
  $strongarm->value = 1;
  $export['node_export_reset_path_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_office';
  $strongarm->value = 0;
  $export['node_export_reset_promote_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_page';
  $strongarm->value = 0;
  $export['node_export_reset_promote_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_service_location';
  $strongarm->value = 0;
  $export['node_export_reset_promote_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_service_partner';
  $strongarm->value = 0;
  $export['node_export_reset_promote_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_webform';
  $strongarm->value = 0;
  $export['node_export_reset_promote_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_office';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_page';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_service_location';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_service_partner';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_webform';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_office';
  $strongarm->value = 0;
  $export['node_export_reset_status_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_page';
  $strongarm->value = 0;
  $export['node_export_reset_status_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_service_location';
  $strongarm->value = 0;
  $export['node_export_reset_status_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_service_partner';
  $strongarm->value = 0;
  $export['node_export_reset_status_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_webform';
  $strongarm->value = 0;
  $export['node_export_reset_status_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_office';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_page';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_service_location';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_service_partner';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_webform';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_hierarchy';
  $strongarm->value = 0;
  $export['taxonomy_csv_check_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_line';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_line'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_utf8';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_utf8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_delete_terms';
  $strongarm->value = 0;
  $export['taxonomy_csv_delete_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_export_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure';
  $strongarm->value = 'quotation';
  $export['taxonomy_csv_export_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_format';
  $strongarm->value = 'tree';
  $export['taxonomy_csv_export_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_line_ending';
  $strongarm->value = 'Unix';
  $export['taxonomy_csv_export_line_ending'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_order';
  $strongarm->value = 'name';
  $export['taxonomy_csv_export_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_vocabulary_id';
  $strongarm->value = array(
    45 => '45',
  );
  $export['taxonomy_csv_export_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format';
  $strongarm->value = 'plain_text';
  $export['taxonomy_csv_filter_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format_custom';
  $strongarm->value = 'none';
  $export['taxonomy_csv_filter_format_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_i18n_mode';
  $strongarm->value = '0';
  $export['taxonomy_csv_i18n_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_import_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_soft_tab_width';
  $strongarm->value = '2';
  $export['taxonomy_csv_import_delimiter_soft_tab_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure';
  $strongarm->value = 'quotation';
  $export['taxonomy_csv_import_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_fields_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_format';
  $strongarm->value = 'name';
  $export['taxonomy_csv_import_fields_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_format';
  $strongarm->value = 'structure';
  $export['taxonomy_csv_import_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_import_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_keep_order';
  $strongarm->value = 0;
  $export['taxonomy_csv_keep_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_locale_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_locale_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_duplicates';
  $strongarm->value = 1;
  $export['taxonomy_csv_result_duplicates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_level';
  $strongarm->value = 'notices';
  $export['taxonomy_csv_result_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_stats';
  $strongarm->value = 'result_stats';
  $export['taxonomy_csv_result_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_terms';
  $strongarm->value = 0;
  $export['taxonomy_csv_result_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_type';
  $strongarm->value = 'by_message';
  $export['taxonomy_csv_result_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_set_hierarchy';
  $strongarm->value = '1';
  $export['taxonomy_csv_set_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_source_choice';
  $strongarm->value = 'file';
  $export['taxonomy_csv_source_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_structure_type';
  $strongarm->value = 'tree';
  $export['taxonomy_csv_structure_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_by';
  $strongarm->value = 'name';
  $export['taxonomy_csv_translate_by'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_languages';
  $strongarm->value = '';
  $export['taxonomy_csv_translate_languages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_update_or_ignore';
  $strongarm->value = 'update';
  $export['taxonomy_csv_update_or_ignore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_id';
  $strongarm->value = '13';
  $export['taxonomy_csv_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_target';
  $strongarm->value = 'existing';
  $export['taxonomy_csv_vocabulary_target'] = $strongarm;

  return $export;
}
