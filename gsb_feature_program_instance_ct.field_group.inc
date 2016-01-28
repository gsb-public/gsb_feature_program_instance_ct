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
  $field_group->identifier = 'group_application|node|program_instance|form';
  $field_group->group_name = 'group_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Application',
    'weight' => '13',
    'children' => array(
      0 => 'field_application_deadlines',
      1 => 'field_application_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-application field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_application|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brochure|node|program_instance|form';
  $field_group->group_name = 'group_brochure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brochure PDF/Link',
    'weight' => '14',
    'children' => array(
      0 => 'field_brochure_pdf',
      1 => 'field_download_brochure_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Brochure PDF/Link',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-brochure field-group-fieldset',
        'description' => 'Enter a link to or upload a PDF of the brochure.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_brochure|node|program_instance|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_instance_date',
      1 => 'field_instance_date_text_select',
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
      'formatter' => 'collapsible',
    ),
  );
  $export['group_instance_dates|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tuition|node|program_instance|form';
  $field_group->group_name = 'group_tuition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tuition',
    'weight' => '9',
    'children' => array(
      0 => 'field_included_in_tuition',
      1 => 'field_optional_programming',
      2 => 'field_tuition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tuition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tuition|node|program_instance|form'] = $field_group;

  return $export;
}
