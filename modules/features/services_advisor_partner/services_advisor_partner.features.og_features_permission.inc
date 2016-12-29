<?php
/**
 * @file
 * services_advisor_partner.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function services_advisor_partner_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:service_partner:add user'
  $permissions['node:service_partner:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:service_partner:administer group'
  $permissions['node:service_partner:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:approve and deny subscription'
  $permissions['node:service_partner:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:service_partner:create service_location content'
  $permissions['node:service_partner:create service_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:delete any service_location content'
  $permissions['node:service_partner:delete any service_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:delete own service_location content'
  $permissions['node:service_partner:delete own service_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:manage members'
  $permissions['node:service_partner:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:service_partner:manage permissions'
  $permissions['node:service_partner:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:service_partner:manage roles'
  $permissions['node:service_partner:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:service_partner:subscribe'
  $permissions['node:service_partner:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:service_partner:subscribe without approval'
  $permissions['node:service_partner:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:service_partner:unsubscribe'
  $permissions['node:service_partner:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:update any service_location content'
  $permissions['node:service_partner:update any service_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:update group'
  $permissions['node:service_partner:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:service_partner:update own service_location content'
  $permissions['node:service_partner:update own service_location content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
