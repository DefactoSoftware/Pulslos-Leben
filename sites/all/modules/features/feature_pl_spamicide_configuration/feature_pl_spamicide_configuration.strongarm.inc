<?php
/**
 * @file
 * feature_pl_spamicide_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_pl_spamicide_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_administration_mode';
  $strongarm->value = 1;
  $export['spamicide_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_attempt_counter';
  $strongarm->value = 0;
  $export['spamicide_attempt_counter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_description';
  $strongarm->value = 'Um zu verhindern, automatisierte SPAM-Beiträge lassen Sie dieses Feld leer.';
  $export['spamicide_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_dir';
  $strongarm->value = 'unerwunscht';
  $export['spamicide_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spamicide_log_attempts';
  $strongarm->value = 1;
  $export['spamicide_log_attempts'] = $strongarm;

  return $export;
}
