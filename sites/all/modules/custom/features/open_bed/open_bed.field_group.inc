<?php
/**
 * @file
 * open_bed.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function open_bed_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_only|node|open_bed|form';
  $field_group->group_name = 'group_admin_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Only',
    'weight' => '8',
    'children' => array(
      0 => 'field_contact_screened',
      1 => 'field_contact_screened_by',
      2 => 'field_contact_screened_date',
      3 => 'field_assisted',
      4 => 'field_journal',
      5 => 'field_validation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin Only',
      'instance_settings' => array(
        'classes' => 'admin',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_admin_only|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_only|node|open_bed|full';
  $field_group->group_name = 'group_admin_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Only',
    'weight' => '7',
    'children' => array(
      0 => 'field_contact_screened',
      1 => 'field_contact_screened_by',
      2 => 'field_contact_screened_date',
      3 => 'field_assisted',
      4 => 'field_journal',
      5 => 'field_validation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_admin_only|node|open_bed|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|open_bed|default';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '1',
    'children' => array(
      0 => 'field_no_beds',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'classes' => 'basics',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_basics|node|open_bed|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|open_bed|form';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '4',
    'children' => array(
      0 => 'field_no_beds',
      1 => 'field_length_of_stay',
      2 => 'field_bathrooms',
      3 => 'field_date_from',
      4 => 'field_date_to',
      5 => 'field_no_doubles',
      6 => 'field_no_futons',
      7 => 'field_no_singles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basics|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|node|open_bed|full';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '1',
    'children' => array(
      0 => 'field_no_beds',
      1 => 'field_length_of_stay',
      2 => 'field_bathrooms',
      3 => 'field_date_from',
      4 => 'field_date_to',
      5 => 'field_no_doubles',
      6 => 'field_no_futons',
      7 => 'field_no_singles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basics|node|open_bed|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|open_bed|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_contact_details',
      1 => 'field_contact_name',
      2 => 'field_contact_number',
      3 => 'field_contact_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contact Details',
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|open_bed|full';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_details',
      1 => 'field_contact_name',
      2 => 'field_contact_number',
      3 => 'field_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_contact|node|open_bed|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|open_bed|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Details',
      'formatter' => 'collapsible',
    ),
  );
  $export['group_details|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|open_bed|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_suburb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => 'location',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_location|node|open_bed|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|open_bed|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_suburb',
      1 => 'field_address',
      2 => 'field_zip',
      3 => 'field_state',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Location',
      'formatter' => 'collapsed',
    ),
  );
  $export['group_location|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|open_bed|full';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_suburb',
      1 => 'field_address',
      2 => 'field_zip',
      3 => 'field_state',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_location|node|open_bed|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferences|node|open_bed|form';
  $field_group->group_name = 'group_preferences';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferences',
    'weight' => '6',
    'children' => array(
      0 => 'field_pets',
      1 => 'field_options',
      2 => 'field_animal_details',
      3 => 'field_children',
      4 => 'field_elderly',
      5 => 'field_elderly_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Preferences',
      'formatter' => 'collapsible',
    ),
  );
  $export['group_preferences|node|open_bed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferences|node|open_bed|full';
  $field_group->group_name = 'group_preferences';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'open_bed';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferences',
    'weight' => '5',
    'children' => array(
      0 => 'field_pets',
      1 => 'field_options',
      2 => 'field_animal_details',
      3 => 'field_children',
      4 => 'field_elderly',
      5 => 'field_elderly_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_preferences|node|open_bed|full'] = $field_group;

  return $export;
}
