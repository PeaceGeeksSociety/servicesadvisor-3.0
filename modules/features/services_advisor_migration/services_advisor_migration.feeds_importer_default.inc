<?php
/**
 * @file
 * services_advisor_migration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function services_advisor_migration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_location_importer';
  $feeds_importer->config = array(
    'name' => 'Service Location Importer',
    'description' => 'imports Service Locations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'TItle',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Start Date',
            'target' => 'field_service_start_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'End Date',
            'target' => 'field_service_end_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Services Provided',
            'target' => 'field_services_provided',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Availability',
            'target' => 'field_service_availability',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Availability Days',
            'target' => 'field__service_location_days',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Organization Name',
            'target' => 'og_group_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Accessiblity',
            'target' => 'field_service_accessibility',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Additional Details',
            'target' => 'field_service_location_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Service Location',
            'target' => 'field_service_location_location',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Coverage',
            'target' => 'field_service_coverage',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Registration Type Requirement',
            'target' => 'field_service_registration_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Nationality',
            'target' => 'field_service_nationality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Intake Criteria',
            'target' => 'field_service_intake_criteria',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Referral Contact Name',
            'target' => 'field_service_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Referral Contact Email',
            'target' => 'field_service_contact_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Referral Contact Phone',
            'target' => 'field_service_contact_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg_advanced',
        'skip_hash_check' => 0,
        'bundle' => 'service_location',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_location_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_partner_importer';
  $feeds_importer->config = array(
    'name' => 'Service Partner Importer',
    'description' => 'Imports Service Partners',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Abbreviated Partner Name',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Author Email',
            'target' => 'user_mail',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Full Partner Name',
            'target' => 'field_service_partner_full_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Partner URL (Path)',
            'target' => 'field_service_partner_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Partner URL (Title)',
            'target' => 'field_service_partner_url:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Organization Overview',
            'target' => 'body',
            'format' => 'wysiwyg_advanced',
            'field_language' => 'und',
          ),
          7 => array(
            'source' => 'Organization Summary',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_partner',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_partner_importer'] = $feeds_importer;

  return $export;
}
