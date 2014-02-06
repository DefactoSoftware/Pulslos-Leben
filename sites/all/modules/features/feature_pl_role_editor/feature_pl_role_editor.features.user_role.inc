<?php
/**
 * @file
 * feature_pl_role_editor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_pl_role_editor_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  return $roles;
}
