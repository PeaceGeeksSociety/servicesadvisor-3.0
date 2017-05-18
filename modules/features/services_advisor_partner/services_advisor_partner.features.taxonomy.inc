<?php
/**
 * @file
 * services_advisor_partner.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function services_advisor_partner_taxonomy_default_vocabularies() {
  return array(
    'service_partner_type' => array(
      'name' => 'Partner Type',
      'machine_name' => 'service_partner_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
