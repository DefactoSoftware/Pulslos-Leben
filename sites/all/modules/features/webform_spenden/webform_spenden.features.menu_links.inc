<?php
/**
 * @file
 * webform_spenden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function webform_spenden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_spenden:node/15
  $menu_links['main-menu_spenden:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Spenden',
    'options' => array(
      'identifier' => 'main-menu_spenden:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Spenden');


  return $menu_links;
}
