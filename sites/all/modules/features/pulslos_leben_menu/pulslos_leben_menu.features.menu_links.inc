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

  // Exported menu link: main-menu_abmelden:user/logout
  $menu_links['main-menu_abmelden:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Abmelden',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_abmelden:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:forum/',
  );
  // Exported menu link: main-menu_aktuelles--projekte:archiv
  $menu_links['main-menu_aktuelles--projekte:archiv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'archiv',
    'router_path' => 'archiv',
    'link_title' => 'Aktuelles & Projekte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_aktuelles--projekte:archiv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pulslos-leben:<front>',
  );
  // Exported menu link: main-menu_anmelden:user/login
  $menu_links['main-menu_anmelden:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Anmelden',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_anmelden:user/login',
      'query' => array(
        'destination' => 'forum',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:forum/',
  );
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
    'has_children' => 1,
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
  // Exported menu link: main-menu_profil:user
  $menu_links['main-menu_profil:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Profil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_profil:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:forum/',
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
  // Exported menu link: main-menu_registrieren:user/register
  $menu_links['main-menu_registrieren:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Registrieren',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_registrieren:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:forum/',
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
  t('Abmelden');
  t('Aktuelles & Projekte');
  t('Anmelden');
  t('Community');
  t('Der Verein');
  t('Profil');
  t('Pulslos Leben');
  t('Registrieren');
  t('Ziele');


  return $menu_links;
}
