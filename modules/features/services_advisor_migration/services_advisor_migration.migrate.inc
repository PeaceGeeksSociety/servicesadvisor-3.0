<?php
/**
 * @file
 * services_advisor_migration.migrate.inc
 */

/**
 * Implements hook_migrate_api().
 */
function services_advisor_migration_migrate_api() {
  return array(
    'api' => 2,
    'groups' => array(
      'services_advisor_migration' => array(
        'title' => t('services Advisor Migration')
      ),
    ),
    'migrations' => array(
      'memberships' => array(
        'class_name' => 'SAMigrateMembershipsMigration',
        'group_name' => 'services_advisor_migration'
      ),
      'logos' => array(
        'class_name' => 'SAMigrateOgFilesMigration',
        'group_name' => 'services_advisor_migration'
      ),
      'term_translations' => array(
        'class_name' => 'SAMigrateTaxTermTranslationsMigration',
        'group_name' => 'services_advisor_migration'
      )
    ),
  );
}

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
  );
  $migrate->fields = array(
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
  );
  $migrate->fields = array(
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
      'contributor' => 'contributor',
      'editor' => 'editor',
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
    'description' => 'Migration of Legal Document Required terms from Drupal 7',
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
  );
  $migrate->fields = array(
    'picture' => (object) array(
      'machine_name' => 'bb70f61dbUser',
      'destination_field' => 'picture',
      'source_field' => 'picture',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:7:"picture";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:7:"picture";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";N;s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:16:"bb70f61dbPicture";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
    'roles' => (object) array(
      'machine_name' => 'bb70f61dbUser',
      'destination_field' => 'roles',
      'source_field' => 'roles',
      'options' => 'O:19:"MigrateFieldMapping":13:{s:19:"' . "\0" . '*' . "\0" . 'destinationField";s:5:"roles";s:14:"' . "\0" . '*' . "\0" . 'sourceField";s:5:"roles";s:16:"' . "\0" . '*' . "\0" . 'mappingSource";i:1;s:15:"' . "\0" . '*' . "\0" . 'defaultValue";s:1:"2";s:12:"' . "\0" . '*' . "\0" . 'separator";N;s:18:"' . "\0" . '*' . "\0" . 'sourceMigration";s:13:"bb70f61dbRole";s:12:"' . "\0" . '*' . "\0" . 'callbacks";a:0:{}s:9:"' . "\0" . '*' . "\0" . 'dedupe";N;s:12:"' . "\0" . '*' . "\0" . 'arguments";N;s:14:"' . "\0" . '*' . "\0" . 'description";s:0:"";s:13:"' . "\0" . '*' . "\0" . 'issueGroup";s:4:"Done";s:14:"' . "\0" . '*' . "\0" . 'issueNumber";N;s:16:"' . "\0" . '*' . "\0" . 'issuePriority";i:1;}',
    ),
  );
  $export['bb70f61dbUser'] = $migrate;

  return $export;
}
