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

  $export['views-recent_forum_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_forum_posts-block',
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
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-recent_forum_posts-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_forum_posts-block_1',
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
        'weight' => 0,
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
