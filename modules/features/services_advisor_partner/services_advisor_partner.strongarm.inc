<?php
/**
 * @file
 * services_advisor_partner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function services_advisor_partner_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service_partner';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service_partner';
  $strongarm->value = '1';
  $export['node_preview_service_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service_partner';
  $strongarm->value = 0;
  $export['node_submitted_service_partner'] = $strongarm;

  return $export;
}
