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
  $feeds_importer->id = 'service_accessibility_importer';
  $feeds_importer->config = array(
    'name' => 'Service Accessibility Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_accessibility',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_accessibility_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_availability_importer';
  $feeds_importer->config = array(
    'name' => 'Service Availability Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_availability',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_availability_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_available_nationality_importer';
  $feeds_importer->config = array(
    'name' => 'Service Available Nationality Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_available_nationality',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_available_nationality_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_complaints_mechanism_importer';
  $feeds_importer->config = array(
    'name' => 'Service Complaints Mechanism Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_complaints_mechanism',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['service_complaints_mechanism_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_coverage_importer';
  $feeds_importer->config = array(
    'name' => 'Service Coverage Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_coverage',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_coverage_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_feedback_delay_importer';
  $feeds_importer->config = array(
    'name' => 'Service Feedback Delay Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_feedback_delay',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_feedback_delay_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_feedback_mechanism_importer';
  $feeds_importer->config = array(
    'name' => 'Service Feedback Mechanism Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_feedback_mechanism',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_feedback_mechanism_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_intake_criteria_importer';
  $feeds_importer->config = array(
    'name' => 'Service Intake Criteria Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_intake_criteria',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_intake_criteria_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_legal_document_importer';
  $feeds_importer->config = array(
    'name' => 'Service Legal Document Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_registration_type',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_legal_document_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_location_complete_importer';
  $feeds_importer->config = array(
    'name' => 'Service Location Complete Importer',
    'description' => 'Imports ALL values of a Service Location. Used for migration',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
            'source' => 'Author UID',
            'target' => 'uid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Published Date',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Start Date',
            'target' => 'field_service_start_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          5 => array(
            'source' => 'End Date',
            'target' => 'field_service_end_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Organization',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Services Provided',
            'target' => 'field_services_provided',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'Availability',
            'target' => 'field_service_availability',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          9 => array(
            'source' => 'Accessibility',
            'target' => 'field_service_accessibility',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          10 => array(
            'source' => 'Additional Details',
            'target' => 'field_service_location_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Service Location',
            'target' => 'field_service_location_location',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          12 => array(
            'source' => 'Public Address / Location Details',
            'target' => 'field_location_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Coverage',
            'target' => 'field_service_coverage',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          14 => array(
            'source' => 'Legal Documents Required',
            'target' => 'field_service_registration_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          15 => array(
            'source' => 'Nationality',
            'target' => 'field_service_nationality',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          16 => array(
            'source' => 'Intake Criteria',
            'target' => 'field_service_intake_criteria',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          17 => array(
            'source' => 'Referral Method',
            'target' => 'field_service_referral_method',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          18 => array(
            'source' => 'Referral Contact Email',
            'target' => 'field_service_contact_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Referral Contact Name',
            'target' => 'field_service_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Referral Contact Phone',
            'target' => 'field_service_contact_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Immediate Next Step',
            'target' => 'field_service_referral_next_step',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          22 => array(
            'source' => 'Response Delay',
            'target' => 'field_response_delay_after_refer',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          23 => array(
            'source' => 'Feedback Mechanism',
            'target' => 'field_service_feedback_mechanism',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          24 => array(
            'source' => 'Feedback Delay',
            'target' => 'field_service_feedback_delay',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          25 => array(
            'source' => 'Complaints Mechanism',
            'target' => 'field_complaints_mechanism',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          26 => array(
            'source' => 'Comments',
            'target' => 'field_service_comments',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'More Info Link Title',
            'target' => 'field_service_more_info_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'More Info Link URL',
            'target' => 'field_service_more_info_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_location',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['service_location_complete_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_location_id_importer';
  $feeds_importer->config = array(
    'name' => 'Service Location ID Importer',
    'description' => 'Import Service Locations using line numbers',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
            'source' => 'Author UID',
            'target' => 'uid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Published Date',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Start Date',
            'target' => 'field_service_start_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          5 => array(
            'source' => 'End Date',
            'target' => 'field_service_end_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Organization',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Services Provided',
            'target' => 'field_services_provided',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Availability',
            'target' => 'field_service_availability',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Accessibility',
            'target' => 'field_service_accessibility',
            'term_search' => '1',
            'autocreate' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Additional Details',
            'target' => 'field_service_location_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Service Location',
            'target' => 'field_service_location_location',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Public Address / Location Details',
            'target' => 'field_location_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Coverage',
            'target' => 'field_service_coverage',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Legal Documents Required',
            'target' => 'field_service_registration_type',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Nationality',
            'target' => 'field_service_nationality',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Intake Criteria',
            'target' => 'field_service_intake_criteria',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Referral Method',
            'target' => 'field_service_referral_method',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Referral Contact Email',
            'target' => 'field_service_contact_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Referral Contact Name',
            'target' => 'field_service_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Referral Contact Phone',
            'target' => 'field_service_contact_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Immediate Next Step',
            'target' => 'field_service_referral_next_step',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'Response Delay',
            'target' => 'field_response_delay_after_refer',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Feedback Mechanism',
            'target' => 'field_service_feedback_mechanism',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'Feedback Delay',
            'target' => 'field_service_feedback_delay',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'Complaints Mechanism',
            'target' => 'field_complaints_mechanism',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'Comments',
            'target' => 'field_service_comments',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'More Info Link Title',
            'target' => 'field_service_more_info_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'More Info Link URL',
            'target' => 'field_service_more_info_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_location',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['service_location_id_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_location_importer';
  $feeds_importer->config = array(
    'name' => 'Service Location Importer',
    'description' => 'Import the Service Location nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Author Email *',
            'target' => 'user_mail',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Start Date *',
            'target' => 'field_service_start_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'End Date *',
            'target' => 'field_service_end_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Organisation Name *',
            'target' => 'og_group_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Services Provided *',
            'target' => 'field_services_provided',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Availability *',
            'target' => 'field_service_availability',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Accessiblity',
            'target' => 'field_service_accessibility',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Additional Details',
            'target' => 'field_service_location_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Service Location *',
            'target' => 'field_service_location_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Coverage',
            'target' => 'field_service_coverage',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Public Address/Location Details',
            'target' => 'field_location_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Legal Documents Required',
            'target' => 'field_service_registration_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Nationality *',
            'target' => 'field_service_nationality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Intake Criteria',
            'target' => 'field_service_intake_criteria',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Referral Method',
            'target' => 'field_service_referral_method',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Referral Contact Name',
            'target' => 'field_service_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Referral Contact Phone',
            'target' => 'field_service_contact_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Referral Contact Email',
            'target' => 'field_service_contact_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Immediate Next Step after Referral',
            'target' => 'field_service_referral_next_step',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Response Delay after Referral',
            'target' => 'field_response_delay_after_refer',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Feedback Mechanism',
            'target' => 'field_service_feedback_mechanism',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'Feedback Delay',
            'target' => 'field_service_feedback_delay',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Complaints Mechanism',
            'target' => 'field_complaints_mechanism',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'Comments',
            'target' => 'field_service_comments',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'More Info Link (URL)',
            'target' => 'field_service_more_info_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
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
  $feeds_importer->id = 'service_nested_categories_importer';
  $feeds_importer->config = array(
    'name' => 'Service Nested Categories Importer',
    'description' => 'Import the taxonomy terms for Service Nested Categories',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_accessibility',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_nested_categories_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_nested_locations';
  $feeds_importer->config = array(
    'name' => 'Service Nested Locations',
    'description' => 'Import the taxonomy terms for Service Nested Locations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Longitude',
            'target' => 'field_location_point:lon',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Latitude',
            'target' => 'field_location_point:lat',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Location Point',
            'target' => 'field_location_point:combined',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_nested_location',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_nested_locations'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_partner_importer';
  $feeds_importer->config = array(
    'name' => 'Service Partner Importer',
    'description' => 'Import Service Partners',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Abbreviated Partner Name *',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Full Partner Name',
            'target' => 'field_service_partner_full_name',
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
            'source' => 'Author Email *',
            'target' => 'user_mail',
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
            'source' => 'Organization Summary',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Organization Overview',
            'target' => 'body',
            'format' => 'plain_text',
            'field_language' => 'und',
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
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

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_referral_method_importer';
  $feeds_importer->config = array(
    'name' => 'Service Referral Method Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_referral_method',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_referral_method_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_referral_next_step_importer';
  $feeds_importer->config = array(
    'name' => 'Service Referral Next Step Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_referral_next_step',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_referral_next_step_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'service_response_delay_importer';
  $feeds_importer->config = array(
    'name' => 'Service Response Delay Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'service_response_delay',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['service_response_delay_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_importer';
  $feeds_importer->config = array(
    'name' => 'User Importer',
    'description' => 'Import users',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
        'delete_uploaded_file' => FALSE,
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Email address *',
            'target' => 'mail',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Username *',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'User Roles',
            'target' => 'roles_list',
            'role_search' => 'name',
            'allowed_roles' => array(
              6 => '6',
              3 => 0,
              4 => 0,
              5 => 0,
            ),
            'autocreate' => 0,
            'revoke_roles' => 1,
          ),
          3 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Service Organisation *',
            'target' => 'og_user_node:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['user_importer'] = $feeds_importer;

  return $export;
}
