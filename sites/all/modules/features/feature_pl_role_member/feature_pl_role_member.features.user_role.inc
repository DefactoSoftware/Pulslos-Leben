<?php
/**
 * @file
 * feature_pl_role_member.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_pl_role_member_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 3,
  );

  return $roles;
}
