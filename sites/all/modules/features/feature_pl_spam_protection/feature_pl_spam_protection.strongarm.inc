<?php
/**
 * @file
 * feature_pl_spam_protection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_pl_spam_protection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['botcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_comment_node_article_form';
  $strongarm->value = 1;
  $export['botcha_enabled_comment_node_article_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_comment_node_forum_form';
  $strongarm->value = 1;
  $export['botcha_enabled_comment_node_forum_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_comment_node_page_form';
  $strongarm->value = 1;
  $export['botcha_enabled_comment_node_page_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_comment_node_webform_form';
  $strongarm->value = 1;
  $export['botcha_enabled_comment_node_webform_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_contact_personal_form';
  $strongarm->value = 1;
  $export['botcha_enabled_contact_personal_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_contact_site_form';
  $strongarm->value = 1;
  $export['botcha_enabled_contact_site_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_forum_node_form';
  $strongarm->value = 1;
  $export['botcha_enabled_forum_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_update_script_selection_form';
  $strongarm->value = 0;
  $export['botcha_enabled_update_script_selection_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_login';
  $strongarm->value = 1;
  $export['botcha_enabled_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_login_block';
  $strongarm->value = 1;
  $export['botcha_enabled_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_pass';
  $strongarm->value = 1;
  $export['botcha_enabled_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_user_register_form';
  $strongarm->value = 1;
  $export['botcha_enabled_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_on_captcha_forms';
  $strongarm->value = 1;
  $export['botcha_on_captcha_forms'] = $strongarm;

  return $export;
}
