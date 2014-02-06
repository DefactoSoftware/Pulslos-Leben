<?php
/**
 * @file
 * feature_pl_member_forum.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_pl_member_forum_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forum_access_rids';
  $strongarm->value = array(
    0 => '1',
    1 => '2',
  );
  $export['forum_access_rids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forum_nav_vocabulary';
  $strongarm->value = '2';
  $export['forum_nav_vocabulary'] = $strongarm;

  return $export;
}
