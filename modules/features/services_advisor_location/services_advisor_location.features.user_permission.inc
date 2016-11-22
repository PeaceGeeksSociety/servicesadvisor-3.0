<?php
/**
 * @file
 * services_advisor_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_advisor_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create service_location content'.
  $permissions['create service_location content'] = array(
    'name' => 'create service_location content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_location content'.
  $permissions['delete any service_location content'] = array(
    'name' => 'delete any service_location content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_location content'.
  $permissions['delete own service_location content'] = array(
    'name' => 'delete own service_location content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_location content'.
  $permissions['edit any service_location content'] = array(
    'name' => 'edit any service_location content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_location content'.
  $permissions['edit own service_location content'] = array(
    'name' => 'edit own service_location content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any service_location content'.
  $permissions['view any service_location content'] = array(
    'name' => 'view any service_location content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own service_location content'.
  $permissions['view own service_location content'] = array(
    'name' => 'view own service_location content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
