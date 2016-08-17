<?php
/**
 * @file
 * services_advisor_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_advisor_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'site administrator' => 'site administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_accessibility'.
  $permissions['delete terms in service_accessibility'] = array(
    'name' => 'delete terms in service_accessibility',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_availability'.
  $permissions['delete terms in service_availability'] = array(
    'name' => 'delete terms in service_availability',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_available_nationality'.
  $permissions['delete terms in service_available_nationality'] = array(
    'name' => 'delete terms in service_available_nationality',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_complaints_mechanism'.
  $permissions['delete terms in service_complaints_mechanism'] = array(
    'name' => 'delete terms in service_complaints_mechanism',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_coverage'.
  $permissions['delete terms in service_coverage'] = array(
    'name' => 'delete terms in service_coverage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_feedback_delay'.
  $permissions['delete terms in service_feedback_delay'] = array(
    'name' => 'delete terms in service_feedback_delay',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_feedback_mechanism'.
  $permissions['delete terms in service_feedback_mechanism'] = array(
    'name' => 'delete terms in service_feedback_mechanism',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_intake_criteria'.
  $permissions['delete terms in service_intake_criteria'] = array(
    'name' => 'delete terms in service_intake_criteria',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_location_availability_days'.
  $permissions['delete terms in service_location_availability_days'] = array(
    'name' => 'delete terms in service_location_availability_days',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_location_hour_close'.
  $permissions['delete terms in service_location_hour_close'] = array(
    'name' => 'delete terms in service_location_hour_close',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_location_hour_open'.
  $permissions['delete terms in service_location_hour_open'] = array(
    'name' => 'delete terms in service_location_hour_open',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_nested_categories'.
  $permissions['delete terms in service_nested_categories'] = array(
    'name' => 'delete terms in service_nested_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_nested_location'.
  $permissions['delete terms in service_nested_location'] = array(
    'name' => 'delete terms in service_nested_location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_referral_method'.
  $permissions['delete terms in service_referral_method'] = array(
    'name' => 'delete terms in service_referral_method',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_referral_next_step'.
  $permissions['delete terms in service_referral_next_step'] = array(
    'name' => 'delete terms in service_referral_next_step',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_registration_type'.
  $permissions['delete terms in service_registration_type'] = array(
    'name' => 'delete terms in service_registration_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_response_delay'.
  $permissions['delete terms in service_response_delay'] = array(
    'name' => 'delete terms in service_response_delay',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_accessibility'.
  $permissions['edit terms in service_accessibility'] = array(
    'name' => 'edit terms in service_accessibility',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_availability'.
  $permissions['edit terms in service_availability'] = array(
    'name' => 'edit terms in service_availability',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_available_nationality'.
  $permissions['edit terms in service_available_nationality'] = array(
    'name' => 'edit terms in service_available_nationality',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_complaints_mechanism'.
  $permissions['edit terms in service_complaints_mechanism'] = array(
    'name' => 'edit terms in service_complaints_mechanism',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_coverage'.
  $permissions['edit terms in service_coverage'] = array(
    'name' => 'edit terms in service_coverage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_feedback_delay'.
  $permissions['edit terms in service_feedback_delay'] = array(
    'name' => 'edit terms in service_feedback_delay',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_feedback_mechanism'.
  $permissions['edit terms in service_feedback_mechanism'] = array(
    'name' => 'edit terms in service_feedback_mechanism',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_intake_criteria'.
  $permissions['edit terms in service_intake_criteria'] = array(
    'name' => 'edit terms in service_intake_criteria',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_location_availability_days'.
  $permissions['edit terms in service_location_availability_days'] = array(
    'name' => 'edit terms in service_location_availability_days',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_location_hour_close'.
  $permissions['edit terms in service_location_hour_close'] = array(
    'name' => 'edit terms in service_location_hour_close',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_location_hour_open'.
  $permissions['edit terms in service_location_hour_open'] = array(
    'name' => 'edit terms in service_location_hour_open',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_nested_categories'.
  $permissions['edit terms in service_nested_categories'] = array(
    'name' => 'edit terms in service_nested_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_nested_location'.
  $permissions['edit terms in service_nested_location'] = array(
    'name' => 'edit terms in service_nested_location',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_referral_method'.
  $permissions['edit terms in service_referral_method'] = array(
    'name' => 'edit terms in service_referral_method',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_referral_next_step'.
  $permissions['edit terms in service_referral_next_step'] = array(
    'name' => 'edit terms in service_referral_next_step',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_registration_type'.
  $permissions['edit terms in service_registration_type'] = array(
    'name' => 'edit terms in service_registration_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_response_delay'.
  $permissions['edit terms in service_response_delay'] = array(
    'name' => 'edit terms in service_response_delay',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  return $permissions;
}
