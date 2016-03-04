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
  $field_group->identifier = 'group_apower_id|node|program_instance|form';
  $field_group->group_name = 'group_apower_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'APower ID',
    'weight' => '9',
    'children' => array(
      0 => 'field_apower_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apower-id field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_apower_id|node|program_instance|form'] = $field_group;

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
    'weight' => '13',
    'children' => array(
      0 => 'field_application_deadlines',
      1 => 'field_is_application_open',
      2 => 'field_application_url',
      3 => 'field_link_apply_button',
      4 => 'field_prequalification_url',
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
    'weight' => '14',
    'children' => array(
      0 => 'field_brochure_pdf',
      1 => 'field_download_brochure_link',
      2 => 'field_brochure_options',
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
  $field_group->identifier = 'group_faculty1|node|program_instance|form';
  $field_group->group_name = 'group_faculty1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Faculty 1',
    'weight' => '16',
    'children' => array(
      0 => 'field_faculty_1',
      1 => 'field_faculty_label_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faculty 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-faculty1 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_faculty1|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty2|node|program_instance|form';
  $field_group->group_name = 'group_faculty2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Faculty 2',
    'weight' => '17',
    'children' => array(
      0 => 'field_faculty_2',
      1 => 'field_faculty_label_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faculty2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faculty2|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty|node|program_instance|form';
  $field_group->group_name = 'group_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Faculty Directors',
    'weight' => '15',
    'children' => array(
      0 => 'field_faculty_directors',
      1 => 'field_edit_faculty_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Faculty Directors',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-faculty field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_faculty|node|program_instance|form'] = $field_group;

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
    'weight' => '11',
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
  $field_group->identifier = 'group_guest_speakers_advisors|node|program_instance|form';
  $field_group->group_name = 'group_guest_speakers_advisors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Guest Speakers and Advisors',
    'weight' => '18',
    'children' => array(
      0 => 'field_guest_speakers_advisors',
      1 => 'field_guest_speakers_advisors_fc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-guest-speakers-advisors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_guest_speakers_advisors|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instance_dates_vtab|node|program_instance|form';
  $field_group->group_name = 'group_instance_dates_vtab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Instance Dates',
    'weight' => '8',
    'children' => array(
      0 => 'field_instance_date',
      1 => 'field_instance_date_text_select',
      2 => 'field_instance_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-instance-dates-vtab field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_instance_dates_vtab|node|program_instance|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'group_apower_id',
      1 => 'group_application',
      2 => 'group_brochure',
      3 => 'group_faculty1',
      4 => 'group_faculty2',
      5 => 'group_faculty',
      6 => 'group_format_location',
      7 => 'group_guest_speakers_advisors',
      8 => 'group_instance_dates_vtab',
      9 => 'group_schedule',
      10 => 'group_tuition',
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
    'weight' => '10',
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
    'weight' => '12',
    'children' => array(
      0 => 'field_included_in_tuition',
      1 => 'field_optional_programming',
      2 => 'field_tuition',
      3 => 'field_payment_cancellation',
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
  t('APower ID');
  t('Brochure & Download Link');
  t('Faculty 1');
  t('Faculty 2');
  t('Faculty Directors');
  t('Format & Location');
  t('Guest Speakers and Advisors');
  t('Instance Dates');
  t('Schedule');
  t('Tuition');

  return $field_groups;
}
