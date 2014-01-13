<?php
/**
 * @file
 * pulslos_leben_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pulslos_leben_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_community:forum/
  $menu_links['main-menu_community:forum/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/',
    'router_path' => 'forum/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_community:forum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_der-verein:node/4
  $menu_links['main-menu_der-verein:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Der Verein',
    'options' => array(
      'identifier' => 'main-menu_der-verein:node/4',
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
  // Exported menu link: main-menu_mitglied-werden:node/3
  $menu_links['main-menu_mitglied-werden:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Mitglied werden',
    'options' => array(
      'identifier' => 'main-menu_mitglied-werden:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Exported menu link: main-menu_pulslos-leben:<front>
  $menu_links['main-menu_pulslos-leben:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pulslos Leben',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pulslos-leben:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_spenden:node/7
  $menu_links['main-menu_spenden:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Spenden',
    'options' => array(
      'identifier' => 'main-menu_spenden:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 0,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Exported menu link: main-menu_ziele:node/6
  $menu_links['main-menu_ziele:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Ziele',
    'options' => array(
      'identifier' => 'main-menu_ziele:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');
  t('Der Verein');
  t('Mitglied werden');
  t('Pulslos Leben');
  t('Spenden');
  t('Ziele');


  return $menu_links;
}
