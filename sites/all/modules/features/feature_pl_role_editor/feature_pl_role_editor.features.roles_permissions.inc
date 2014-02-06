<?php
/**
 * @file
 * feature_pl_role_editor.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function feature_pl_role_editor_default_roles_permissions() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access all webform results' => TRUE,
      'access ckeditor link' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access overlay' => TRUE,
      'access own webform results' => TRUE,
      'access own webform submissions' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'administer advanced forum' => TRUE,
      'administer comments' => TRUE,
      'administer forums' => TRUE,
      'administer menu' => TRUE,
      'administer nodes' => TRUE,
      'administer users' => TRUE,
      'bypass node access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'create article content' => TRUE,
      'create forum content' => TRUE,
      'create page content' => TRUE,
      'create webform content' => TRUE,
      'delete all webform submissions' => TRUE,
      'delete any article content' => TRUE,
      'delete any forum content' => TRUE,
      'delete any group content' => TRUE,
      'delete any page content' => TRUE,
      'delete any webform content' => TRUE,
      'delete own article content' => TRUE,
      'delete own forum content' => TRUE,
      'delete own group content' => TRUE,
      'delete own page content' => TRUE,
      'delete own webform content' => TRUE,
      'delete own webform submissions' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 2' => TRUE,
      'delete terms in 3' => TRUE,
      'edit all webform submissions' => TRUE,
      'edit any article content' => TRUE,
      'edit any forum content' => TRUE,
      'edit any group content' => TRUE,
      'edit any page content' => TRUE,
      'edit any webform content' => TRUE,
      'edit own article content' => TRUE,
      'edit own comments' => TRUE,
      'edit own forum content' => TRUE,
      'edit own page content' => TRUE,
      'edit own webform content' => TRUE,
      'edit own webform submissions' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'translate interface' => TRUE,
      'use advanced search' => TRUE,
      'view advanced help index' => TRUE,
      'view advanced help popup' => TRUE,
      'view advanced help topic' => TRUE,
      'view forum statistics' => TRUE,
      'view last edited notice' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}
