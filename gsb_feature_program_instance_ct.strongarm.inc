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
  $strongarm->value = '1';
  $export['auto_entitylabel_node_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_program_instance';
  $strongarm->value = '[node:field-instance-date:value:day_month_and_year] [node:field_instance_text] [node:field_instance_label] - [node:field-program:title]';
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
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'program_viewmode1' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => TRUE,
      ),
      'expanded' => array(
        'custom_settings' => TRUE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'featured_program' => array(
        'custom_settings' => TRUE,
      ),
      'field_fieldx' => array(
        'custom_settings' => FALSE,
      ),
      'field_fieldy' => array(
        'custom_settings' => FALSE,
      ),
      'field_fieldz' => array(
        'custom_settings' => FALSE,
      ),
      'program_director' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_ctas' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_director' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_related' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_faculty' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_curriculum_one' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_two' => array(
        'custom_settings' => FALSE,
      ),
      'program_contact' => array(
        'custom_settings' => FALSE,
      ),
      'program_explore_other' => array(
        'custom_settings' => TRUE,
      ),
      'faculty_leadership' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_one' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_two' => array(
        'custom_settings' => FALSE,
      ),
      'guest_speakers_advisors' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'gsb_time_commitment' => array(
          'expanded' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'field_program_faculty' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'program_explore_other' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'featured_program' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_key_image' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'program_explore_other' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'field_program_faculty' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'featured_program' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_display_image' => array(
          'program_explore_other' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'expanded' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'featured_program' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
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
  $strongarm->value = 1;
  $export['workbench_access_node_type_program_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_program_instance';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_program_instance'] = $strongarm;

  return $export;
}
