<?php
/**
 * @file
 * gsb_feature_program_instance_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_program_instance_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_application|node|program_instance|form';
  $field_group->group_name = 'group_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => ' Application Information',
    'weight' => '12',
    'children' => array(
      0 => 'field_apower_id',
      1 => 'field_application_deadlines',
      2 => 'field_is_application_open',
      3 => 'field_link_for_apply_button',
      4 => 'field_application_url',
      5 => 'field_prequalification_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => ' Application Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_application|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brochure|node|program_instance|form';
  $field_group->group_name = 'group_brochure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Brochure & Download Link',
    'weight' => '13',
    'children' => array(
      0 => 'field_brochure_pdf',
      1 => 'field_download_brochure_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Brochure & Download Link',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_brochure|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_format_location|node|program_instance|form';
  $field_group->group_name = 'group_format_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Format & Location',
    'weight' => '10',
    'children' => array(
      0 => 'field_program_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-format-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_format_location|node|program_instance|form'] = $field_group;

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
  $field_groups['group_instance_dates|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_vtab|node|program_instance|form';
  $field_group->group_name = 'group_main_vtab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'group_schedule',
      1 => 'group_application',
      2 => 'group_brochure',
      3 => 'group_tuition',
      4 => 'group_format_location',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-vtab field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_vtab|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|program_instance|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '9',
    'children' => array(
      0 => 'field_program_schedule',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schedule field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_schedule|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tuition|node|program_instance|form';
  $field_group->group_name = 'group_tuition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Tuition',
    'weight' => '11',
    'children' => array(
      0 => 'field_included_in_tuition',
      1 => 'field_optional_programming',
      2 => 'field_tuition',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tuition|node|program_instance|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' Application Information');
  t('Brochure & Download Link');
  t('Format & Location');
  t('Instance Dates');
  t('Schedule');
  t('Tuition');

  return $field_groups;
}
