<?php
/**
 * @file
 * services_advisor_migration.migrate.inc
 */

/**
 * Implements hook_migrate_preset().
 */
function services_advisor_migration_migrate_preset() {
  $export = array();

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbFile';
  $migrate->class_name = 'DrupalFile7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'source_dir' => '',
    'description' => 'Migration of files from Drupal 7',
    'user_migration' => 'bb70f61dbUser',
  );
  $migrate->fields = '';
  $export['bb70f61dbFile'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbNodeservice_location';
  $migrate->class_name = 'DrupalNode7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'source_type' => 'service_location',
    'destination_type' => 'service_location',
    'description' => 'Migration of Service Location nodes from Drupal 7',
    'user_migration' => 'bb70f61dbUser',
    'soft_dependencies' => array(
      0 => 'bb70f61dbFile',
    ),
    'dependencies' => array(
      0 => 'bb70f61dbTermservice_accessibility',
      1 => 'bb70f61dbTermservice_availability',
      2 => 'bb70f61dbTermservice_available_nationality',
      3 => 'bb70f61dbTermservice_complaints_mechanism',
      4 => 'bb70f61dbTermservice_coverage',
      5 => 'bb70f61dbTermservice_feedback_delay',
      6 => 'bb70f61dbTermservice_feedback_mechanism',
      7 => 'bb70f61dbTermservice_intake_criteria',
      8 => 'bb70f61dbTermservice_location_availability_days',
      9 => 'bb70f61dbTermservice_nested_categories',
      10 => 'bb70f61dbTermservice_nested_location',
      11 => 'bb70f61dbTermservice_referral_method',
      12 => 'bb70f61dbTermservice_referral_next_step',
      13 => 'bb70f61dbTermservice_registration_type',
      14 => 'bb70f61dbTermservice_response_delay',
      15 => 'bb70f61dbUser',
      16 => 'bb70f61dbNodeservice_partner',
    ),
  );
  $migrate->fields = array(
    '' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => '',
      'source_field' => 'comment',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";N;s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:7:"comment";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:3:"DNM";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'comment' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'comment',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:7:"comment";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:2;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:3:"DNM";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_complaints_mechanism' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_complaints_mechanism',
      'source_field' => 'field_complaints_mechanism',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_complaints_mechanism";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_complaints_mechanism";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:41:"bb70f61dbTermservice_complaints_mechanism";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_complaints_mechanism:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_complaints_mechanism:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_complaints_mechanism:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_complaints_mechanism:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_complaints_mechanism:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_complaints_mechanism:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_complaints_mechanism:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_complaints_mechanism:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_complaints_mechanism:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_location_address' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_location_address',
      'source_field' => 'field_location_address',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:22:"field_location_address";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:22:"field_location_address";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_response_delay_after_refer' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_response_delay_after_refer',
      'source_field' => 'field_response_delay_after_refer',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:32:"field_response_delay_after_refer";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:32:"field_response_delay_after_refer";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:35:"bb70f61dbTermservice_response_delay";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_response_delay_after_refer:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_response_delay_after_refer:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_response_delay_after_refer:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_response_delay_after_refer:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_response_delay_after_refer:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_response_delay_after_refer:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_response_delay_after_refer:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_response_delay_after_refer:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_response_delay_after_refer:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_services_provided' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_services_provided',
      'source_field' => 'field_services_provided',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:23:"field_services_provided";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:23:"field_services_provided";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:38:"bb70f61dbTermservice_nested_categories";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_services_provided:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_services_provided:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:35:"field_services_provided:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_services_provided:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_services_provided:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:35:"field_services_provided:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_services_provided:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_services_provided:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:35:"field_services_provided:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_accessibility' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_accessibility',
      'source_field' => 'field_service_accessibility',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_service_accessibility";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:27:"field_service_accessibility";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:34:"bb70f61dbTermservice_accessibility";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_accessibility:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_accessibility:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:39:"field_service_accessibility:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_accessibility:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_accessibility:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:39:"field_service_accessibility:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_accessibility:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_accessibility:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:39:"field_service_accessibility:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_availability' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_availability',
      'source_field' => 'field_service_availability',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_availability";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_availability";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:33:"bb70f61dbTermservice_availability";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_availability:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_availability:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_service_availability:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_availability:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_availability:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_service_availability:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_availability:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_availability:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:38:"field_service_availability:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_comments' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_comments',
      'source_field' => 'field_service_comments',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:22:"field_service_comments";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:22:"field_service_comments";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_contact_email' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_contact_email',
      'source_field' => 'field_service_contact_email',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_service_contact_email";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:27:"field_service_contact_email";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_contact_name' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_contact_name',
      'source_field' => 'field_service_contact_name',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_contact_name";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_contact_name";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_contact_phone' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_contact_phone',
      'source_field' => 'field_service_contact_phone',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_service_contact_phone";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:27:"field_service_contact_phone";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_coverage' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_coverage',
      'source_field' => 'field_service_coverage',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:22:"field_service_coverage";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:22:"field_service_coverage";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:29:"bb70f61dbTermservice_coverage";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_coverage:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_coverage:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:34:"field_service_coverage:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_coverage:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_coverage:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:34:"field_service_coverage:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_coverage:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_coverage:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:34:"field_service_coverage:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_end_date' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_end_date',
      'source_field' => 'field_service_end_date',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:22:"field_service_end_date";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:22:"field_service_end_date";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_end_date:rrule' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_end_date:rrule',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:28:"field_service_end_date:rrule";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_end_date:timezone' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_end_date:timezone',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_end_date:timezone";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_end_date:to' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_end_date:to',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:25:"field_service_end_date:to";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_delay' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_delay',
      'source_field' => 'field_service_feedback_delay',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:28:"field_service_feedback_delay";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:28:"field_service_feedback_delay";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:35:"bb70f61dbTermservice_feedback_delay";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_delay:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_delay:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:40:"field_service_feedback_delay:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_delay:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_delay:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:40:"field_service_feedback_delay:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_delay:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_delay:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:40:"field_service_feedback_delay:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_mechanism' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_mechanism',
      'source_field' => 'field_service_feedback_mechanism',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:32:"field_service_feedback_mechanism";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:32:"field_service_feedback_mechanism";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:39:"bb70f61dbTermservice_feedback_mechanism";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_mechanism:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_mechanism:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_feedback_mechanism:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_mechanism:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_mechanism:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_feedback_mechanism:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_feedback_mechanism:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_feedback_mechanism:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_feedback_mechanism:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_intake_criteria' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_intake_criteria',
      'source_field' => 'field_service_intake_criteria',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:29:"field_service_intake_criteria";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:29:"field_service_intake_criteria";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:36:"bb70f61dbTermservice_intake_criteria";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_intake_criteria:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_intake_criteria:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_intake_criteria:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_intake_criteria:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_intake_criteria:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_intake_criteria:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_intake_criteria:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_intake_criteria:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_intake_criteria:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location',
      'source_field' => 'field_service_location',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:22:"field_service_location";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:22:"field_service_location";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:bottom' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:bottom',
      'source_field' => 'field_service_location:bottom',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:29:"field_service_location:bottom";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:29:"field_service_location:bottom";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:geohash' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:geohash',
      'source_field' => 'field_service_location:geohash',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:30:"field_service_location:geohash";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:30:"field_service_location:geohash";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:geo_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:geo_type',
      'source_field' => 'field_service_location:geo_type',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_location:geo_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:31:"field_service_location:geo_type";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:lat' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:lat',
      'source_field' => 'field_service_location:lat',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_location:lat";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_location:lat";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:left' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:left',
      'source_field' => 'field_service_location:left',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_service_location:left";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:27:"field_service_location:left";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:lon' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:lon',
      'source_field' => 'field_service_location:lon',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_location:lon";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_location:lon";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:right' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:right',
      'source_field' => 'field_service_location:right',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:28:"field_service_location:right";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:28:"field_service_location:right";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location:top' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location:top',
      'source_field' => 'field_service_location:top',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_location:top";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_location:top";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location_details' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location_details',
      'source_field' => 'field_service_location_details',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:30:"field_service_location_details";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:30:"field_service_location_details";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location_location' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location_location',
      'source_field' => 'field_service_location_location',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_location_location";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:31:"field_service_location_location";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:36:"bb70f61dbTermservice_nested_location";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location_location:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location_location:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_location_location:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location_location:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location_location:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_location_location:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_location_location:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_location_location:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_location_location:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_more_info_link' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_more_info_link',
      'source_field' => 'field_service_more_info_link',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:28:"field_service_more_info_link";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:28:"field_service_more_info_link";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_more_info_link:attributes' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_more_info_link:attributes',
      'source_field' => 'field_service_more_info_link:attributes',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:39:"field_service_more_info_link:attributes";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:39:"field_service_more_info_link:attributes";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_more_info_link:language' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_more_info_link:language',
      'source_field' => 'field_service_more_info_link:language',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:37:"field_service_more_info_link:language";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:37:"field_service_more_info_link:language";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_more_info_link:title' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_more_info_link:title',
      'source_field' => 'field_service_more_info_link:title',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:34:"field_service_more_info_link:title";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:34:"field_service_more_info_link:title";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_nationality' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_nationality',
      'source_field' => 'field_service_nationality',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:25:"field_service_nationality";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:25:"field_service_nationality";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:42:"bb70f61dbTermservice_available_nationality";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_nationality:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_nationality:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:37:"field_service_nationality:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_nationality:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_nationality:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:37:"field_service_nationality:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_nationality:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_nationality:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:37:"field_service_nationality:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_office_hours' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_office_hours',
      'source_field' => 'field_service_office_hours',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_service_office_hours";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:26:"field_service_office_hours";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_office_hours:endhours' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_office_hours:endhours',
      'source_field' => 'field_service_office_hours:endhours',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:35:"field_service_office_hours:endhours";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:35:"field_service_office_hours:endhours";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_office_hours:starthours' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_office_hours:starthours',
      'source_field' => 'field_service_office_hours:starthours',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:37:"field_service_office_hours:starthours";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:37:"field_service_office_hours:starthours";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_method' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_method',
      'source_field' => 'field_service_referral_method',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:29:"field_service_referral_method";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:29:"field_service_referral_method";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:36:"bb70f61dbTermservice_referral_method";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_method:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_method:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_referral_method:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_method:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_method:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_referral_method:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_method:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_method:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:41:"field_service_referral_method:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_next_step' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_next_step',
      'source_field' => 'field_service_referral_next_step',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:32:"field_service_referral_next_step";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:32:"field_service_referral_next_step";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:39:"bb70f61dbTermservice_referral_next_step";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_next_step:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_next_step:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_referral_next_step:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_next_step:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_next_step:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_referral_next_step:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_referral_next_step:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_referral_next_step:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:44:"field_service_referral_next_step:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_registration_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_registration_type',
      'source_field' => 'field_service_registration_type',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_registration_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:31:"field_service_registration_type";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:38:"bb70f61dbTermservice_registration_type";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_registration_type:create_term' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_registration_type:create_term',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_registration_type:create_term";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_registration_type:ignore_case' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_registration_type:ignore_case',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_registration_type:ignore_case";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_registration_type:source_type' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_registration_type:source_type',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:43:"field_service_registration_type:source_type";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_start_date' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_start_date',
      'source_field' => 'field_service_start_date',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:24:"field_service_start_date";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:24:"field_service_start_date";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_start_date:rrule' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_start_date:rrule',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:30:"field_service_start_date:rrule";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_start_date:timezone' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_start_date:timezone',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:33:"field_service_start_date:timezone";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_start_date:to' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'field_service_start_date:to',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_service_start_date:to";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'og_group_ref' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'og_group_ref',
      'source_field' => 'og_group_ref',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:12:"og_group_ref";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:12:"og_group_ref";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:28:"bb70f61dbNodeservice_partner";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'uid' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_location',
      'destination_field' => 'uid',
      'source_field' => 'uid',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:3:"uid";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:3:"uid";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:13:"bb70f61dbUser";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbNodeservice_location'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbNodeservice_partner';
  $migrate->class_name = 'DrupalNode7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'source_type' => 'service_partner',
    'destination_type' => 'service_partner',
    'description' => 'Migration of Service Partner nodes from Drupal 7',
    'user_migration' => 'bb70f61dbUser',
    'soft_dependencies' => array(
      0 => 'bb70f61dbFile',
    ),
    'dependencies' => array(
      0 => 'bb70f61dbRole',
      1 => 'bb70f61dbUser',
    ),
  );
  $migrate->fields = array(
    '' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => '',
      'source_field' => 'comment',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";N;s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:7:"comment";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:3:"DNM";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'body:language' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'body:language',
      'source_field' => 'body:language',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:13:"body:language";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:13:"body:language";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:3:"und";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'comment' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'comment',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:7:"comment";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:2;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:3:"DNM";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo',
      'source_field' => 'field_logo',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:10:"field_logo";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:10:"field_logo";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:alt' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:alt',
      'source_field' => 'field_logo:alt',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:14:"field_logo:alt";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:14:"field_logo:alt";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:destination_dir' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:destination_dir',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:26:"field_logo:destination_dir";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:destination_file' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:destination_file',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:27:"field_logo:destination_file";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:file_class' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:file_class',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:21:"field_logo:file_class";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:file_replace' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:file_replace',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:23:"field_logo:file_replace";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:preserve_files' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:preserve_files',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:25:"field_logo:preserve_files";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:source_dir' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:source_dir',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:21:"field_logo:source_dir";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:title' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:title',
      'source_field' => 'field_logo:title',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:16:"field_logo:title";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:16:"field_logo:title";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_logo:urlencode' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_logo:urlencode',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:20:"field_logo:urlencode";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_partner_full_name' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_service_partner_full_name',
      'source_field' => 'field_service_partner_full_name',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_partner_full_name";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:31:"field_service_partner_full_name";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_partner_url' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_service_partner_url',
      'source_field' => 'field_service_partner_url',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:25:"field_service_partner_url";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:25:"field_service_partner_url";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_partner_url:attributes' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_service_partner_url:attributes',
      'source_field' => 'field_service_partner_url:attributes',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:36:"field_service_partner_url:attributes";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:36:"field_service_partner_url:attributes";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_partner_url:language' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_service_partner_url:language',
      'source_field' => 'field_service_partner_url:language',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:34:"field_service_partner_url:language";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:34:"field_service_partner_url:language";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'field_service_partner_url:title' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'field_service_partner_url:title',
      'source_field' => 'field_service_partner_url:title',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:31:"field_service_partner_url:title";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:31:"field_service_partner_url:title";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'group_group' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'group_group',
      'source_field' => 'group_group',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:11:"group_group";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:11:"group_group";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'language' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'language',
      'source_field' => 'language',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:8:"language";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:8:"language";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:2:"en";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'sticky' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'sticky',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:6:"sticky";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:2;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:3:"DNM";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'uid' => (object) array(
      'machine_name' => 'bb70f61dbNodeservice_partner',
      'destination_field' => 'uid',
      'source_field' => 'uid',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:3:"uid";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:3:"uid";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:13:"bb70f61dbUser";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbNodeservice_partner'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbPicture';
  $migrate->class_name = 'DrupalPicture7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'source_dir' => '',
    'description' => 'Migration of user pictures from Drupal 7',
    'soft_dependencies' => array(),
    'dependencies' => array(),
  );
  $migrate->fields = array(
    'destination_file' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'destination_file',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:16:"destination_file";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'path' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'path',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:4:"path";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'pathauto' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'pathauto',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:8:"pathauto";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'timestamp' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'timestamp',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:9:"timestamp";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'uid' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'uid',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:3:"uid";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:1:"1";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:13:"bb70f61dbUser";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'urlencode' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'urlencode',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:9:"urlencode";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'value' => (object) array(
      'machine_name' => 'bb70f61dbPicture',
      'destination_field' => 'value',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:5:"value";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbPicture'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbRole';
  $migrate->class_name = 'DrupalRole7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'description' => 'Migration of roles from Drupal 7',
    'role_mappings' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'authenticated user',
      'contributor' => 'authenticated user',
      'editor' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
  );
  $migrate->fields = '';
  $export['bb70f61dbRole'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_accessibility';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_accessibility',
    'description' => 'Migration of Service Accessibility terms from Drupal 7',
    'source_vocabulary' => 'service_accessibility',
    'soft_dependencies' => array(),
    'dependencies' => array(),
  );
  $migrate->fields = array(
    'parent' => (object) array(
      'machine_name' => 'bb70f61dbTermservice_accessibility',
      'destination_field' => 'parent',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:6:"parent";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:34:"bb70f61dbTermservice_accessibility";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbTermservice_accessibility'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_availability';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_availability',
    'description' => 'Migration of Service Availability terms from Drupal 7',
    'source_vocabulary' => 'service_availability',
    'soft_dependencies' => array(),
    'dependencies' => array(),
  );
  $migrate->fields = array(
    'parent' => (object) array(
      'machine_name' => 'bb70f61dbTermservice_availability',
      'destination_field' => 'parent',
      'source_field' => 'tid',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:6:"parent";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:3:"tid";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:33:"bb70f61dbTermservice_availability";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbTermservice_availability'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_available_nationality';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_available_nationality',
    'description' => 'Migration of Service Available Nationality terms from Drupal 7',
    'source_vocabulary' => 'service_available_nationality',
    'soft_dependencies' => array(),
    'dependencies' => array(),
  );
  $migrate->fields = array(
    'parent' => (object) array(
      'machine_name' => 'bb70f61dbTermservice_available_nationality',
      'destination_field' => 'parent',
      'source_field' => '',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:6:"parent";s:14:"' . "\0" . '*' . "\0" . 'sourceField";N;s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:42:"bb70f61dbTermservice_available_nationality";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbTermservice_available_nationality'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_complaints_mechanism';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_complaints_mechanism',
    'description' => 'Migration of Service Complaints Mechanism terms from Drupal 7',
    'source_vocabulary' => 'service_complaints_mechanism',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_complaints_mechanism'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_coverage';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_coverage',
    'description' => 'Migration of Service Coverage terms from Drupal 7',
    'source_vocabulary' => 'service_coverage',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_coverage'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_feedback_delay';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_feedback_delay',
    'description' => 'Migration of Service Feedback Delay terms from Drupal 7',
    'source_vocabulary' => 'service_feedback_delay',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_feedback_delay'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_feedback_mechanism';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_feedback_mechanism',
    'description' => 'Migration of Service Feedback Mechanism terms from Drupal 7',
    'source_vocabulary' => 'service_feedback_mechanism',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_feedback_mechanism'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_intake_criteria';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_intake_criteria',
    'description' => 'Migration of Service Intake Criteria terms from Drupal 7',
    'source_vocabulary' => 'service_intake_criteria',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_intake_criteria'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_location_availability_days';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_location_availability_days',
    'description' => 'Migration of Service Location Availability days terms from Drupal 7',
    'source_vocabulary' => 'service_location_availability_days',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_location_availability_days'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_location_hour_close';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_location_hour_close',
    'description' => 'Migration of Service Location Office closes at terms from Drupal 7',
    'source_vocabulary' => 'service_location_hour_close',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_location_hour_close'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_location_hour_open';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_location_hour_open',
    'description' => 'Migration of Service Location Office opens at terms from Drupal 7',
    'source_vocabulary' => 'service_location_hour_open',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_location_hour_open'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_nested_categories';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_nested_categories',
    'description' => 'Migration of Service Nested Categories terms from Drupal 7',
    'source_vocabulary' => 'service_nested_categories',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_nested_categories'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_nested_location';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_nested_location',
    'description' => 'Migration of Service Nested Location terms from Drupal 7',
    'source_vocabulary' => 'service_nested_location',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_nested_location'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_referral_method';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_referral_method',
    'description' => 'Migration of Service Referral Method terms from Drupal 7',
    'source_vocabulary' => 'service_referral_method',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_referral_method'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_referral_next_step';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_referral_next_step',
    'description' => 'Migration of Service Referral Next Step terms from Drupal 7',
    'source_vocabulary' => 'service_referral_next_step',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_referral_next_step'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_registration_type';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_registration_type',
    'description' => 'Migration of Service Registration Type terms from Drupal 7',
    'source_vocabulary' => 'service_registration_type',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_registration_type'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_response_delay';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_response_delay',
    'description' => 'Migration of Service Response Delay terms from Drupal 7',
    'source_vocabulary' => 'service_response_delay',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_response_delay'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbTermservice_sector';
  $migrate->class_name = 'DrupalTerm7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'destination_vocabulary' => 'service_sector',
    'description' => 'Migration of Service Sector terms from Drupal 7',
    'source_vocabulary' => 'service_sector',
  );
  $migrate->fields = '';
  $export['bb70f61dbTermservice_sector'] = $migrate;

  $migrate = new stdClass();
  $migrate->disabled = FALSE; /* Edit this to true to make a default migrate disabled initially */
  $migrate->api_version = 1;
  $migrate->machine_name = 'bb70f61dbUser';
  $migrate->class_name = 'DrupalUser7Migration';
  $migrate->group_name = 'bb70f61db';
  $migrate->status = FALSE;
  $migrate->arguments = array(
    'description' => 'Migration of users from Drupal 7',
    'role_migration' => 'bb70f61dbRole',
    'picture_migration' => 'bb70f61dbPicture',
    'soft_dependencies' => array(),
    'dependencies' => array(
      0 => 'bb70f61dbPicture',
      1 => 'bb70f61dbRole',
    ),
  );
  $migrate->fields = array(
    'og_user_node' => (object) array(
      'machine_name' => 'bb70f61dbUser',
      'destination_field' => 'og_user_node',
      'source_field' => 'og_user_node',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:12:"og_user_node";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:12:"og_user_node";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:28:"bb70f61dbNodeservice_partner";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'roles' => (object) array(
      'machine_name' => 'bb70f61dbUser',
      'destination_field' => 'roles',
      'source_field' => 'roles',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:5:"roles";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:5:"roles";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:1:"2";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:13:"bb70f61dbRole";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'status' => (object) array(
      'machine_name' => 'bb70f61dbUser',
      'destination_field' => 'status',
      'source_field' => 'status',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:6:"status";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:6:"status";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:1:"0";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";N;s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbUser'] = $migrate;

  return $export;
}
