<?php
/**
 * @file
 * feature_pl_block_activity_photos.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_pl_block_activity_photos_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-pl_block_photos'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'pl_block_photos',
    'module' => 'block',
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
    'title' => 'Photo\'s of activities',
    'visibility' => 0,
  );

  return $export;
}
