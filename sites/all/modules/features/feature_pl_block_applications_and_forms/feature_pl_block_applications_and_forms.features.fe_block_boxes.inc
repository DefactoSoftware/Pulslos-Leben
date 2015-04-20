<?php
/**
 * @file
 * feature_pl_block_applications_and_forms.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_pl_block_applications_and_forms_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A button to a page with applications and forms';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'pl_block_application_and_forms';
  $fe_block_boxes->body = '<p><a class="btn" href="/antrage-formulare">Anträge und Formulare</a></p>
';

  $export['pl_block_application_and_forms'] = $fe_block_boxes;

  return $export;
}
