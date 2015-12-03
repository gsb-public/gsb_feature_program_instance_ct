<?php
/**
 * @file
 * gsb_feature_program_instance_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_program_instance_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instance_dates|node|program_instance|form';
  $field_group->group_name = 'group_instance_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instance Dates',
    'weight' => '4',
    'children' => array(
      0 => 'field_instance_date_text_select',
      1 => 'field_instance_date',
      2 => 'field_instance_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Instance Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-instance-dates field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_instance_dates|node|program_instance|form'] = $field_group;

  return $export;
}
