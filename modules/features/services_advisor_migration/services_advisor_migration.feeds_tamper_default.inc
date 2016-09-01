<?php
/**
 * @file
 * services_advisor_migration.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function services_advisor_migration_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_accessibility_importer-name-required';
  $feeds_tamper->importer = 'service_accessibility_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_accessibility_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_availability_importer-name-required';
  $feeds_tamper->importer = 'service_availability_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_availability_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_available_nationality_importer-name-required';
  $feeds_tamper->importer = 'service_available_nationality_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_available_nationality_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_complaints_mechanism_importer-name-required';
  $feeds_tamper->importer = 'service_complaints_mechanism_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_complaints_mechanism_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_coverage_importer-name-required';
  $feeds_tamper->importer = 'service_coverage_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Required field';
  $export['service_coverage_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_feedback_delay_importer-name-required';
  $feeds_tamper->importer = 'service_feedback_delay_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_feedback_delay_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_feedback_mechanism_importer-name-required';
  $feeds_tamper->importer = 'service_feedback_mechanism_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_feedback_mechanism_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_intake_criteria_importer-name-required';
  $feeds_tamper->importer = 'service_intake_criteria_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_intake_criteria_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_legal_document_importer-name-required';
  $feeds_tamper->importer = 'service_legal_document_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_legal_document_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-accessibility-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Accessibility';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-accessibility-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-accessibility-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Accessibility';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-accessibility-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-author_uid-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Author UID';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-author_uid-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-availability-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Availability';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-availability-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-availability-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Availability';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-availability-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-availability-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Availability';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-availability-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-complaints_mechanism-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Complaints Mechanism';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-complaints_mechanism-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-complaints_mechanism-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Complaints Mechanism';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-complaints_mechanism-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-coverage-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Coverage';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-coverage-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-coverage-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Coverage';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-coverage-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-end_date-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'End Date';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-end_date-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-feedback_mechanism-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Feedback Mechanism';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-feedback_mechanism-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-feedback_mechanism-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Feedback Mechanism';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-feedback_mechanism-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-immediate_next_step-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Immediate Next Step';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-immediate_next_step-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-immediate_next_step-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Immediate Next Step';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-immediate_next_step-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-intake_criteria-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Intake Criteria';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-intake_criteria-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-intake_criteria-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Intake Criteria';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-intake_criteria-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-legal_documents_required-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Legal Documents Required';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-legal_documents_required-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-legal_documents_required-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Legal Documents Required';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-legal_documents_required-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-nationality-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Nationality';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-nationality-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-nationality-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Nationality';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-nationality-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-nationality-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Nationality';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-nationality-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-organization-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Organization';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-organization-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-organization-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Organization';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-organization-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-organization-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Organization';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-organization-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-referral_method-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Referral Method';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-referral_method-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-referral_method-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Referral Method';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-referral_method-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-service_location-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Service Location';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-service_location-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-services_provided-explode';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Services Provided';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_complete_importer-services_provided-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-services_provided-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Services Provided';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-services_provided-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-services_provided-unique';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Services Provided';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Unique';
  $export['service_location_complete_importer-services_provided-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-start_date-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Start Date';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-start_date-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_complete_importer-username-required';
  $feeds_tamper->importer = 'service_location_complete_importer';
  $feeds_tamper->source = 'Username';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_complete_importer-username-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-accessiblity-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Accessiblity';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-accessiblity-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-accessiblity-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Accessiblity';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-accessiblity-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-author_email__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Author Email *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-author_email__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-availability__-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Availability *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-availability__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-availability__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Availability *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-availability__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-availability__-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Availability *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-availability__-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-complaints_mechanism-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Complaints Mechanism';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-complaints_mechanism-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-complaints_mechanism-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Complaints Mechanism';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-complaints_mechanism-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-coverage-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Coverage';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-coverage-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-coverage-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Coverage';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-coverage-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-end_date__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'End Date *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-end_date__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-feedback_delay-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Feedback Delay';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-feedback_delay-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-feedback_mechanism-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Feedback Mechanism';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-feedback_mechanism-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-feedback_mechanism-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Feedback Mechanism';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-feedback_mechanism-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-immediate_next_step_after_referral-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Immediate Next Step after Referral';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-immediate_next_step_after_referral-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-immediate_next_step_after_referral-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Immediate Next Step after Referral';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-immediate_next_step_after_referral-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-intake_criteria-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Intake Criteria';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-intake_criteria-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-intake_criteria-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Intake Criteria';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-intake_criteria-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-language-default_value';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default language to English';
  $export['service_location_importer-language-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-legal_documents_required-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Legal Documents Required';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-legal_documents_required-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-legal_documents_required-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Legal Documents Required';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-legal_documents_required-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-nationality__-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Nationality *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-nationality__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-nationality__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Nationality *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-nationality__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-nationality__-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Nationality *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-nationality__-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-organisation_name__-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Organisation Name *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-organisation_name__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-organisation_name__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Organisation Name *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-organisation_name__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-organisation_name__-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Organisation Name *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-organisation_name__-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-organisation_name__-trim_commas';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Organisation Name *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => ',',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim Commas';
  $export['service_location_importer-organisation_name__-trim_commas'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-referral_method-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Referral Method';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-referral_method-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-referral_method-strtotime';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Referral Method';
  $feeds_tamper->plugin_id = '';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['service_location_importer-referral_method-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-referral_method-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Referral Method';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-referral_method-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-response_delay_after_referral-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Response Delay after Referral';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-response_delay_after_referral-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-service_location__-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Service Location *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-service_location__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-service_location__-feeds_tamper_array_select';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Service Location *';
  $feeds_tamper->plugin_id = 'feeds_tamper_array_select';
  $feeds_tamper->settings = array(
    'selection' => 'End',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Select an element from input';
  $export['service_location_importer-service_location__-feeds_tamper_array_select'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-service_location__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Service Location *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-service_location__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-service_location__-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Service Location *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => ',',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim Commas';
  $export['service_location_importer-service_location__-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-service_location__-trim_whitespace';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Service Location *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-service_location__-trim_whitespace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-services_provided__-explode';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Services Provided *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['service_location_importer-services_provided__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-services_provided__-feeds_tamper_array_select';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Services Provided *';
  $feeds_tamper->plugin_id = 'feeds_tamper_array_select';
  $feeds_tamper->settings = array(
    'selection' => 'End',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Select an element from input';
  $export['service_location_importer-services_provided__-feeds_tamper_array_select'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-services_provided__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Services Provided *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-services_provided__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-services_provided__-trim';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Services Provided *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => ',',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim Commas';
  $export['service_location_importer-services_provided__-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-services_provided__-trim_whitespace';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Services Provided *';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['service_location_importer-services_provided__-trim_whitespace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_location_importer-start_date__-required';
  $feeds_tamper->importer = 'service_location_importer';
  $feeds_tamper->source = 'Start Date *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_location_importer-start_date__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_nested_categories_importer-name-required';
  $feeds_tamper->importer = 'service_nested_categories_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_nested_categories_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_nested_locations-name-required';
  $feeds_tamper->importer = 'service_nested_locations';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_nested_locations-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_partner_importer-abbreviated_partner_name__-required';
  $feeds_tamper->importer = 'service_partner_importer';
  $feeds_tamper->source = 'Abbreviated Partner Name *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_partner_importer-abbreviated_partner_name__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_partner_importer-author_email__-required';
  $feeds_tamper->importer = 'service_partner_importer';
  $feeds_tamper->source = 'Author Email *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_partner_importer-author_email__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_partner_master_importer-abbreviated_partner_name-required';
  $feeds_tamper->importer = 'service_partner_master_importer';
  $feeds_tamper->source = 'Abbreviated Partner Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_partner_master_importer-abbreviated_partner_name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_partner_master_importer-language-default_value_language';
  $feeds_tamper->importer = 'service_partner_master_importer';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default language to English if not set';
  $export['service_partner_master_importer-language-default_value_language'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_partner_master_importer-status-default_value_status';
  $feeds_tamper->importer = 'service_partner_master_importer';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value for status to \'1\'';
  $export['service_partner_master_importer-status-default_value_status'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_referral_method_importer-name-required';
  $feeds_tamper->importer = 'service_referral_method_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_referral_method_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_referral_next_step_importer-name-required';
  $feeds_tamper->importer = 'service_referral_next_step_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_referral_next_step_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'service_response_delay_importer-name-required';
  $feeds_tamper->importer = 'service_response_delay_importer';
  $feeds_tamper->source = 'Name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['service_response_delay_importer-name-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-email_address-required';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'Email Address';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['user_complete_importer-email_address-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-language-default_value';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default language to English';
  $export['user_complete_importer-language-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-service_organisation-explode';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'Service Organisation';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['user_complete_importer-service_organisation-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-service_organisation-unique';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'Service Organisation';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['user_complete_importer-service_organisation-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-user_roles-explode';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'User Roles';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['user_complete_importer-user_roles-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-user_roles-unique';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'User Roles';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unique';
  $export['user_complete_importer-user_roles-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_complete_importer-username-required';
  $feeds_tamper->importer = 'user_complete_importer';
  $feeds_tamper->source = 'Username';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['user_complete_importer-username-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_importer-email_address__-required';
  $feeds_tamper->importer = 'user_importer';
  $feeds_tamper->source = 'Email address *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['user_importer-email_address__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_importer-language-default_value';
  $feeds_tamper->importer = 'user_importer';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default language to English';
  $export['user_importer-language-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_importer-service_organisation__-explode';
  $feeds_tamper->importer = 'user_importer';
  $feeds_tamper->source = 'Service Organisation *';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['user_importer-service_organisation__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_importer-service_organisation__-required';
  $feeds_tamper->importer = 'user_importer';
  $feeds_tamper->source = 'Service Organisation *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['user_importer-service_organisation__-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'user_importer-username__-required';
  $feeds_tamper->importer = 'user_importer';
  $feeds_tamper->source = 'Username *';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['user_importer-username__-required'] = $feeds_tamper;

  return $export;
}
