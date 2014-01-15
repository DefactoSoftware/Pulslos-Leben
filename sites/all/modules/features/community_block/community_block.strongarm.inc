<?php
/**
 * @file
 * community_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function community_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style';
  $strongarm->value = 'blue_and_grey';
  $export['advanced_forum_style'] = $strongarm;

  return $export;
}
