<?php
/**
 * @file
 * gsb_feature_program_instance_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_program_instance_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_program_instance';
  $strongarm->value = '0';
  $export['auto_entitylabel_node_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_program_instance';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_program_instance';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__program_instance';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '18',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '17',
        ),
        'redirect' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_program_instance';
  $strongarm->value = array();
  $export['menu_options_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_program_instance';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program_instance';
  $strongarm->value = array(
    0 => 'force_pathauto',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program_instance';
  $strongarm->value = '0';
  $export['node_preview_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program_instance';
  $strongarm->value = 1;
  $export['node_submitted_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_program_instance_pattern';
  $strongarm->value = '';
  $export['pathauto_node_program_instance_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_program_instance';
  $strongarm->value = 0;
  $export['workbench_access_node_type_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_program_instance';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_program_instance'] = $strongarm;

  return $export;
}
