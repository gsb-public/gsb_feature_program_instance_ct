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
    'weight' => '69',
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
    'label' => 'Application & Deadlines',
    'weight' => '74',
    'children' => array(
      0 => 'field_application_deadlines',
      1 => 'field_application_url',
      2 => 'field_application_state',
      3 => 'field_admission_statement',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Application & Deadlines',
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
    'weight' => '75',
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
    'weight' => '77',
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
    'weight' => '78',
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
    'weight' => '76',
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
    'weight' => '71',
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
    'weight' => '79',
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
    'weight' => '68',
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
      9 => 'group_optional_programming',
      10 => 'group_schedule',
      11 => 'group_tuition',
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
  $field_group->identifier = 'group_optional_programming|node|program_instance|form';
  $field_group->group_name = 'group_optional_programming';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_vtab';
  $field_group->data = array(
    'label' => 'Optional Programming',
    'weight' => '73',
    'children' => array(
      0 => 'field_optional_programming',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-optional-programming field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_optional_programming|node|program_instance|form'] = $field_group;

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
    'weight' => '70',
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
    'label' => 'Tuition or Program Fee',
    'weight' => '72',
    'children' => array(
      0 => 'field_included_in_tuition',
      1 => 'field_tuition',
      2 => 'field_payment_cancellation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tuition or Program Fee',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_tuition|node|program_instance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_faculty|node|program_instance|field_program_faculty';
  $field_group->group_name = 'group_wrapper_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_instance';
  $field_group->mode = 'field_program_faculty';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty',
    'weight' => '0',
    'children' => array(
      0 => 'field_faculty_1',
      1 => 'field_faculty_2',
      2 => 'field_faculty_directors',
      3 => 'field_faculty_label_1',
      4 => 'field_faculty_label_2',
      5 => 'field_guest_speakers_advisors',
      6 => 'field_guest_speakers_advisors_fc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Faculty',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-faculty field-group-fieldset hide-if-empty',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_faculty|node|program_instance|field_program_faculty'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('APower ID');
  t('Application & Deadlines');
  t('Brochure & Download Link');
  t('Faculty');
  t('Faculty 1');
  t('Faculty 2');
  t('Faculty Directors');
  t('Format & Location');
  t('Guest Speakers and Advisors');
  t('Instance Dates');
  t('Optional Programming');
  t('Schedule');
  t('Tuition or Program Fee');

  return $field_groups;
}
