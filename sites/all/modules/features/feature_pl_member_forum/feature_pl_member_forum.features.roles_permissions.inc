<?php
/**
 * @file
 * feature_pl_member_forum.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function feature_pl_member_forum_default_roles_permissions() {
  $roles = array();

  // Exported role: member
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 3,
    'permissions' => array(
      'use text format filtered_html' => TRUE,
    ),
  );

  return $roles;
}
