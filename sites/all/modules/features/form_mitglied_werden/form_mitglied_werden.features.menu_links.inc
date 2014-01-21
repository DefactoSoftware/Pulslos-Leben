<?php
/**
 * @file
 * form_mitglied_werden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function form_mitglied_werden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_mitglied-werden:node/14
  $menu_links['main-menu_mitglied-werden:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Mitglied werden',
    'options' => array(
      'identifier' => 'main-menu_mitglied-werden:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mitglied werden');


  return $menu_links;
}
