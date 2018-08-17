<?php
/**
 * @file
 * content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_expiry_date'.
  $permissions['create field_expiry_date'] = array(
    'name' => 'create field_expiry_date',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'rental partner' => 'rental partner',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_notes'.
  $permissions['create field_notes'] = array(
    'name' => 'create field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_expiry_date'.
  $permissions['edit field_expiry_date'] = array(
    'name' => 'edit field_expiry_date',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'rental partner' => 'rental partner',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_notes'.
  $permissions['edit field_notes'] = array(
    'name' => 'edit field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_expiry_date'.
  $permissions['edit own field_expiry_date'] = array(
    'name' => 'edit own field_expiry_date',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'rental partner' => 'rental partner',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_notes'.
  $permissions['edit own field_notes'] = array(
    'name' => 'edit own field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_expiry_date'.
  $permissions['view field_expiry_date'] = array(
    'name' => 'view field_expiry_date',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'rental partner' => 'rental partner',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_notes'.
  $permissions['view field_notes'] = array(
    'name' => 'view field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_expiry_date'.
  $permissions['view own field_expiry_date'] = array(
    'name' => 'view own field_expiry_date',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'rental partner' => 'rental partner',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_notes'.
  $permissions['view own field_notes'] = array(
    'name' => 'view own field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
