<?php
/**
 * @file
 * services_advisor_location.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function services_advisor_location_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service_location';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service_location';
  $strongarm->value = '1';
  $export['node_preview_service_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service_location';
  $strongarm->value = 1;
  $export['node_submitted_service_location'] = $strongarm;

  return $export;
}
