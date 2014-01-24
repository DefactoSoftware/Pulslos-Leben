<?php
/**
 * @file
 * imce_file_manager.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imce_file_manager_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
