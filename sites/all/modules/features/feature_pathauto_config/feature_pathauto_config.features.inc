<?php
/**
 * @file
 * feature_pathauto_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pathauto_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
