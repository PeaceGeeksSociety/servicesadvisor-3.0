<?php
/**
 * @file
 * services_advisor_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function services_advisor_base_taxonomy_default_vocabularies() {
  return array(
    'service_sector' => array(
      'name' => 'Service Sector',
      'machine_name' => 'service_sector',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
