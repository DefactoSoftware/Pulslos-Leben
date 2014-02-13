<?php
/**
 * @file
 * community_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function community_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-173bb6914e5c691eb635ac08e69d1db0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '173bb6914e5c691eb635ac08e69d1db0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'pulslosleben' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'pulslosleben',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_forum_posts-block_home'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_forum_posts-block_home',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'pulslosleben' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'pulslosleben',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
