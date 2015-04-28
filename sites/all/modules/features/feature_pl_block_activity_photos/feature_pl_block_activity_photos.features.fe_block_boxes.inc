<?php
/**
 * @file
 * feature_pl_block_activity_photos.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_pl_block_activity_photos_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A button to a page with photo\'s of activities';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'pl_block_photos';
  $fe_block_boxes->body = '<p><a class="btn" href="/fotos">Fotos von Aktivitäten</a></p>
';

  $export['pl_block_photos'] = $fe_block_boxes;

  return $export;
}
