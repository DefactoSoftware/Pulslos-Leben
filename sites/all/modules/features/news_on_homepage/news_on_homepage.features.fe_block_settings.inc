<?php
/**
 * @file
 * news_on_homepage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_on_homepage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news-block_home'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block_home',
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
        'weight' => -12,
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

  $export['views-news-block_sidebar'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block_sidebar',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'archiv',
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
        'weight' => -12,
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
