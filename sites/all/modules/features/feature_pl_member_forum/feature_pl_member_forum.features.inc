<?php
/**
 * @file
 * feature_pl_member_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pl_member_forum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
