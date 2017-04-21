<?php
/**
 * @file
 * services_advisor_partner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_advisor_partner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer og context'.
  $permissions['administer og context'] = array(
    'name' => 'administer og context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'administer og membership entities'.
  $permissions['administer og membership entities'] = array(
    'name' => 'administer og membership entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'administer og permissions'.
  $permissions['administer og permissions'] = array(
    'name' => 'administer og permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'administer og settings'.
  $permissions['administer og settings'] = array(
    'name' => 'administer og settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'create service_partner content'.
  $permissions['create service_partner content'] = array(
    'name' => 'create service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_partner content'.
  $permissions['delete any service_partner content'] = array(
    'name' => 'delete any service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_partner content'.
  $permissions['delete own service_partner content'] = array(
    'name' => 'delete own service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_partner content'.
  $permissions['edit any service_partner content'] = array(
    'name' => 'edit any service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit og field settings'.
  $permissions['edit og field settings'] = array(
    'name' => 'edit og field settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'edit own service_partner content'.
  $permissions['edit own service_partner content'] = array(
    'name' => 'edit own service_partner content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit partner author'.
  $permissions['edit partner author'] = array(
    'name' => 'edit partner author',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'services_advisor_partner',
  );

  // Exported permission: 'view any service_partner content'.
  $permissions['view any service_partner content'] = array(
    'name' => 'view any service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own service_partner content'.
  $permissions['view own service_partner content'] = array(
    'name' => 'view own service_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
