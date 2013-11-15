<?php
/**
 * @file
 * ireq_external.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ireq_external_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ireq_external_node_info() {
  $items = array(
    'ireq_external' => array(
      'name' => t('External Request'),
      'base' => 'node_content',
      'description' => t('External Report'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
