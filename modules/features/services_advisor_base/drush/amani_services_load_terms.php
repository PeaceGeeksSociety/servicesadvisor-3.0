<?php

/*
 * Import vocabularies for Service Advisor content types.
 *
 * Usage: drush scr profiles/amani/modules/features/amani_features/services_advisor_base/drush/amani_services_load_terms.php [optional_vocabulary_name]
 *
 */

module_load_include('inc', 'services_advisor_base', 'includes/services_advisor_base.api');

if ($_SERVER['argv'][5]){
  $vocabularies_to_load = array($_SERVER['argv'][5]);
  $import_categories = FALSE;
} else {
  $import_categories = TRUE;
  $vocabularies_to_load = array(
    'service_accessibility',
    'service_available_nationality',
    'service_availability',
    'service_coverage',
    'service_intake_criteria',
    'service_registration_type',
    'service_location_availability_days',
    'service_location_hour_open',
    'service_location_hour_close',
    'service_activities',
    'service_feedback_delay',
    'service_feedback_mechanism',
    'service_referral_method',
    'service_referral_next_step',
    'service_response_delay',
    'service_location_district',
    'service_location_governorate',
    'service_location_region'
  );
}

foreach ($vocabularies_to_load as $vocabulary){
  print "Importing " . $vocabulary . "\n";
  services_advisor_base_load_vocabulary($vocabulary);
}

if ($import_categories){
  services_advisor_base_load_categories();
}