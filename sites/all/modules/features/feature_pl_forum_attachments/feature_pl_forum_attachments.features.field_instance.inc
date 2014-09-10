<?php
/**
 * @file
 * feature_pl_forum_attachments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_pl_forum_attachments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_forum-field_attachments'
  $field_instances['comment-comment_node_forum-field_attachments'] = array(
    'bundle' => 'comment_node_forum',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_attachments',
    'label' => 'attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'attachments/[current-user:uid]/[current-user:name]/[current-date:custom:Y-m-d]',
      'file_extensions' => 'txt pdf doc docx xls xlsx jpg png mp4 3gp',
      'max_filesize' => '5 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'comment-comment_node_forum-field_images'
  $field_instances['comment-comment_node_forum-field_images'] = array(
    'bundle' => 'comment_node_forum',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'page_wide',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-forum-field_attachments'
  $field_instances['node-forum-field_attachments'] = array(
    'bundle' => 'forum',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_attachments',
    'label' => 'attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'attachments/[current-user:uid]/[current-user:name]/[current-date:custom:Y-m-d]',
      'file_extensions' => 'txt pdf doc docx xls xlsx jpg png mp4 3gp',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-forum-field_images'
  $field_instances['node-forum-field_images'] = array(
    'bundle' => 'forum',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'page_wide',
        ),
        'type' => 'image',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('attachments');

  return $field_instances;
}
