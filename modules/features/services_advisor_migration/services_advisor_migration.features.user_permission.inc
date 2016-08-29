<?php
/**
 * @file
 * services_advisor_migration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_advisor_migration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'clear service_accessibility_importer feeds'.
  $permissions['clear service_accessibility_importer feeds'] = array(
    'name' => 'clear service_accessibility_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_availability_importer feeds'.
  $permissions['clear service_availability_importer feeds'] = array(
    'name' => 'clear service_availability_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_available_nationality_importer feeds'.
  $permissions['clear service_available_nationality_importer feeds'] = array(
    'name' => 'clear service_available_nationality_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_complaints_mechanism_importer feeds'.
  $permissions['clear service_complaints_mechanism_importer feeds'] = array(
    'name' => 'clear service_complaints_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_coverage_importer feeds'.
  $permissions['clear service_coverage_importer feeds'] = array(
    'name' => 'clear service_coverage_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_feedback_delay_importer feeds'.
  $permissions['clear service_feedback_delay_importer feeds'] = array(
    'name' => 'clear service_feedback_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_feedback_mechanism_importer feeds'.
  $permissions['clear service_feedback_mechanism_importer feeds'] = array(
    'name' => 'clear service_feedback_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_intake_criteria_importer feeds'.
  $permissions['clear service_intake_criteria_importer feeds'] = array(
    'name' => 'clear service_intake_criteria_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_legal_document_importer feeds'.
  $permissions['clear service_legal_document_importer feeds'] = array(
    'name' => 'clear service_legal_document_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_location_importer feeds'.
  $permissions['clear service_location_importer feeds'] = array(
    'name' => 'clear service_location_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_nested_categories_importer feeds'.
  $permissions['clear service_nested_categories_importer feeds'] = array(
    'name' => 'clear service_nested_categories_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_nested_locations feeds'.
  $permissions['clear service_nested_locations feeds'] = array(
    'name' => 'clear service_nested_locations feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_partner_importer feeds'.
  $permissions['clear service_partner_importer feeds'] = array(
    'name' => 'clear service_partner_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_referral_method_importer feeds'.
  $permissions['clear service_referral_method_importer feeds'] = array(
    'name' => 'clear service_referral_method_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_referral_next_step_importer feeds'.
  $permissions['clear service_referral_next_step_importer feeds'] = array(
    'name' => 'clear service_referral_next_step_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_response_delay_importer feeds'.
  $permissions['clear service_response_delay_importer feeds'] = array(
    'name' => 'clear service_response_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user_importer feeds'.
  $permissions['clear user_importer feeds'] = array(
    'name' => 'clear user_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'import service_accessibility_importer feeds'.
  $permissions['import service_accessibility_importer feeds'] = array(
    'name' => 'import service_accessibility_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_availability_importer feeds'.
  $permissions['import service_availability_importer feeds'] = array(
    'name' => 'import service_availability_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_available_nationality_importer feeds'.
  $permissions['import service_available_nationality_importer feeds'] = array(
    'name' => 'import service_available_nationality_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_complaints_mechanism_importer feeds'.
  $permissions['import service_complaints_mechanism_importer feeds'] = array(
    'name' => 'import service_complaints_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_coverage_importer feeds'.
  $permissions['import service_coverage_importer feeds'] = array(
    'name' => 'import service_coverage_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_feedback_delay_importer feeds'.
  $permissions['import service_feedback_delay_importer feeds'] = array(
    'name' => 'import service_feedback_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_feedback_mechanism_importer feeds'.
  $permissions['import service_feedback_mechanism_importer feeds'] = array(
    'name' => 'import service_feedback_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_intake_criteria_importer feeds'.
  $permissions['import service_intake_criteria_importer feeds'] = array(
    'name' => 'import service_intake_criteria_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_legal_document_importer feeds'.
  $permissions['import service_legal_document_importer feeds'] = array(
    'name' => 'import service_legal_document_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_location_importer feeds'.
  $permissions['import service_location_importer feeds'] = array(
    'name' => 'import service_location_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_nested_categories_importer feeds'.
  $permissions['import service_nested_categories_importer feeds'] = array(
    'name' => 'import service_nested_categories_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_nested_locations feeds'.
  $permissions['import service_nested_locations feeds'] = array(
    'name' => 'import service_nested_locations feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_partner_importer feeds'.
  $permissions['import service_partner_importer feeds'] = array(
    'name' => 'import service_partner_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_referral_method_importer feeds'.
  $permissions['import service_referral_method_importer feeds'] = array(
    'name' => 'import service_referral_method_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_referral_next_step_importer feeds'.
  $permissions['import service_referral_next_step_importer feeds'] = array(
    'name' => 'import service_referral_next_step_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import service_response_delay_importer feeds'.
  $permissions['import service_response_delay_importer feeds'] = array(
    'name' => 'import service_response_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import user_importer feeds'.
  $permissions['import user_importer feeds'] = array(
    'name' => 'import user_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import users'.
  $permissions['import users'] = array(
    'name' => 'import users',
    'roles' => array(),
    'module' => 'uif',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'tamper service_accessibility_importer'.
  $permissions['tamper service_accessibility_importer'] = array(
    'name' => 'tamper service_accessibility_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_availability_importer'.
  $permissions['tamper service_availability_importer'] = array(
    'name' => 'tamper service_availability_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_available_nationality_importer'.
  $permissions['tamper service_available_nationality_importer'] = array(
    'name' => 'tamper service_available_nationality_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_complaints_mechanism_importer'.
  $permissions['tamper service_complaints_mechanism_importer'] = array(
    'name' => 'tamper service_complaints_mechanism_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_coverage_importer'.
  $permissions['tamper service_coverage_importer'] = array(
    'name' => 'tamper service_coverage_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_feedback_delay_importer'.
  $permissions['tamper service_feedback_delay_importer'] = array(
    'name' => 'tamper service_feedback_delay_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_feedback_mechanism_importer'.
  $permissions['tamper service_feedback_mechanism_importer'] = array(
    'name' => 'tamper service_feedback_mechanism_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_intake_criteria_importer'.
  $permissions['tamper service_intake_criteria_importer'] = array(
    'name' => 'tamper service_intake_criteria_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_legal_document_importer'.
  $permissions['tamper service_legal_document_importer'] = array(
    'name' => 'tamper service_legal_document_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_location_importer'.
  $permissions['tamper service_location_importer'] = array(
    'name' => 'tamper service_location_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_nested_categories_importer'.
  $permissions['tamper service_nested_categories_importer'] = array(
    'name' => 'tamper service_nested_categories_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_nested_locations'.
  $permissions['tamper service_nested_locations'] = array(
    'name' => 'tamper service_nested_locations',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_partner_importer'.
  $permissions['tamper service_partner_importer'] = array(
    'name' => 'tamper service_partner_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_referral_method_importer'.
  $permissions['tamper service_referral_method_importer'] = array(
    'name' => 'tamper service_referral_method_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_referral_next_step_importer'.
  $permissions['tamper service_referral_next_step_importer'] = array(
    'name' => 'tamper service_referral_next_step_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper service_response_delay_importer'.
  $permissions['tamper service_response_delay_importer'] = array(
    'name' => 'tamper service_response_delay_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper user_importer'.
  $permissions['tamper user_importer'] = array(
    'name' => 'tamper user_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock service_accessibility_importer feeds'.
  $permissions['unlock service_accessibility_importer feeds'] = array(
    'name' => 'unlock service_accessibility_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_availability_importer feeds'.
  $permissions['unlock service_availability_importer feeds'] = array(
    'name' => 'unlock service_availability_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_available_nationality_importer feeds'.
  $permissions['unlock service_available_nationality_importer feeds'] = array(
    'name' => 'unlock service_available_nationality_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_complaints_mechanism_importer feeds'.
  $permissions['unlock service_complaints_mechanism_importer feeds'] = array(
    'name' => 'unlock service_complaints_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_coverage_importer feeds'.
  $permissions['unlock service_coverage_importer feeds'] = array(
    'name' => 'unlock service_coverage_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_feedback_delay_importer feeds'.
  $permissions['unlock service_feedback_delay_importer feeds'] = array(
    'name' => 'unlock service_feedback_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_feedback_mechanism_importer feeds'.
  $permissions['unlock service_feedback_mechanism_importer feeds'] = array(
    'name' => 'unlock service_feedback_mechanism_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_intake_criteria_importer feeds'.
  $permissions['unlock service_intake_criteria_importer feeds'] = array(
    'name' => 'unlock service_intake_criteria_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_legal_document_importer feeds'.
  $permissions['unlock service_legal_document_importer feeds'] = array(
    'name' => 'unlock service_legal_document_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_location_importer feeds'.
  $permissions['unlock service_location_importer feeds'] = array(
    'name' => 'unlock service_location_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_nested_categories_importer feeds'.
  $permissions['unlock service_nested_categories_importer feeds'] = array(
    'name' => 'unlock service_nested_categories_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_nested_locations feeds'.
  $permissions['unlock service_nested_locations feeds'] = array(
    'name' => 'unlock service_nested_locations feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_partner_importer feeds'.
  $permissions['unlock service_partner_importer feeds'] = array(
    'name' => 'unlock service_partner_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_referral_method_importer feeds'.
  $permissions['unlock service_referral_method_importer feeds'] = array(
    'name' => 'unlock service_referral_method_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_referral_next_step_importer feeds'.
  $permissions['unlock service_referral_next_step_importer feeds'] = array(
    'name' => 'unlock service_referral_next_step_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_response_delay_importer feeds'.
  $permissions['unlock service_response_delay_importer feeds'] = array(
    'name' => 'unlock service_response_delay_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user_importer feeds'.
  $permissions['unlock user_importer feeds'] = array(
    'name' => 'unlock user_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  return $permissions;
}
