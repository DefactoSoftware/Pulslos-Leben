<?php
/**
 * @file
 * feature_pl_forum_attachments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pl_forum_attachments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_pl_forum_attachments_image_default_styles() {
  $styles = array();

  // Exported image style: page_wide.
  $styles['page_wide'] = array(
    'name' => 'page_wide',
    'label' => 'page wide',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 906,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
