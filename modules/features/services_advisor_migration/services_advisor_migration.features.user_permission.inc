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

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear service_partner_importer feeds'.
  $permissions['clear service_partner_importer feeds'] = array(
    'name' => 'clear service_partner_importer feeds',
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

  // Exported permission: 'import service_partner_importer feeds'.
  $permissions['import service_partner_importer feeds'] = array(
    'name' => 'import service_partner_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock service_partner_importer feeds'.
  $permissions['unlock service_partner_importer feeds'] = array(
    'name' => 'unlock service_partner_importer feeds',
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
