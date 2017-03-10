<?php
/**
 * @file
 * services_advisor_notify.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function services_advisor_notify_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:service_partner:access partner notifications'
  $permissions['node:service_partner:access partner notifications'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
