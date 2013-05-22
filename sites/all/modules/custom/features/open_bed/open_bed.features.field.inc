<?php
/**
 * @file
 * open_bed.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function open_bed_field_default_fields() {
  $fields = array();

  // Exported field: 'node-open_bed-body'.
  $fields['node-open_bed-body'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Details',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 8,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 15,
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-open_bed-field_address'.
  $fields['node-open_bed-field_address'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 1,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Please only include your Street and Suburb. Listing your full address may mean you have many people turn up unexpected.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 20,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => 1,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_animal_details'.
  $fields['node-open_bed-field_animal_details'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_animal_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_animal_details',
      'label' => 'Animal Details',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 120,
        ),
        'type' => 'text_textfield',
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_assisted'.
  $fields['node-open_bed-field_assisted'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_assisted',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Unassigned',
          2 => 'Connected/Transfer to Inquiry (Follow up)',
          3 => 'Details Given Out to 1 group (Follow Up)',
          4 => 'Details Given Out to 2 groups (Follow Up)',
          5 => 'Details Given Out to 3 groups (Follow Up)',
          6 => 'Details Given Out to 4 groups (Follow Up)',
          7 => 'Match Not Successful',
          8 => 'Match Successful',
          9 => 'Match Confirmed Arrival',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 9,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 22,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 12,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_assisted',
      'label' => 'Assisted Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_availability'.
  $fields['node-open_bed-field_availability'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_availability',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'have room, and welcome',
          2 => 'have room, but filled now',
          3 => 'need room and searching',
          4 => 'need room, but found a place for now',
          5 => 'Not Applicable',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => 'Once your beds are filled, or you have found a bed, please come back and change this so that others will know.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 35,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 21,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_availability',
      'label' => 'Situation Status',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_bathrooms'.
  $fields['node-open_bed-field_bathrooms'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_bathrooms',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 16,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 29,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 14,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_bathrooms',
      'label' => 'No of Bathrooms',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_children'.
  $fields['node-open_bed-field_children'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_children',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'All Ages',
          2 => 'Prefer No Babies (Only 18 mo to Adults)',
          3 => 'Prefer No Toddlers (Only 3yrs to Adults)',
          4 => 'Prefer No Kids (Only 10yrs to Adults)',
          5 => 'Prefer None (Only Adults)',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_children',
      'label' => 'Children',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 14,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_details'.
  $fields['node-open_bed-field_contact_details'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Please include any additional contact options or special instructions for contacting you. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 28,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 23,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_details',
      'label' => 'Contact details',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_email'.
  $fields['node-open_bed-field_contact_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_email',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Hidden - This is seen only by people who have verified their details with our site. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 24,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 31,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_email',
      'label' => 'Contact email',
      'required' => 1,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_name'.
  $fields['node-open_bed-field_contact_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Hidden - This is seen only by people who have verified their details with our site. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 17,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 25,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_name',
      'label' => 'Contact name',
      'required' => 1,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_number'.
  $fields['node-open_bed-field_contact_number'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Hidden - This is seen only by people who have verified their details with our site. 
Phone or mobile number.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 21,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 30,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_number',
      'label' => 'Contact number',
      'required' => 1,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_screened'.
  $fields['node-open_bed-field_contact_screened'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_screened',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'no',
          1 => 'yes',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'This shows this record has been screened',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 27,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 14,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 14,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 26,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_screened',
      'label' => 'Screened',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_screened_by'.
  $fields['node-open_bed-field_contact_screened_by'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_screened_by',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Name of person who screened this open bed.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 15,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 30,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 27,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_screened_by',
      'label' => 'Screened-by',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 11,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_contact_screened_date'.
  $fields['node-open_bed-field_contact_screened_date'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_screened_date',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'field_permissions' => NULL,
        'granularity' => array(
          'day' => 'day',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 1,
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 16,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 13,
        ),
        'rss' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 16,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 16,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact_screened_date',
      'label' => 'screened-date',
      'required' => 0,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
        ),
        'default_format' => 'short',
        'default_value' => 'strtotime',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'above',
            'text_parts' => array(
              'day' => 0,
              'hour' => 0,
              'minute' => 0,
              'month' => 0,
              'second' => 0,
              'year' => 0,
            ),
          ),
          'display_all_day' => 0,
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => 1,
          'input_format' => 'j M Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_date_from'.
  $fields['node-open_bed-field_date_from'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_date_from',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'field_permissions' => NULL,
        'granularity' => array(
          'day' => 'day',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 1,
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 10,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 12,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 8,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_from',
      'label' => 'Date Available (From)',
      'required' => 0,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
        ),
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'above',
            'text_parts' => array(
              'day' => 0,
              'hour' => 0,
              'minute' => 0,
              'month' => 0,
              'second' => 0,
              'year' => 0,
            ),
          ),
          'display_all_day' => 0,
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => 1,
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_date_to'.
  $fields['node-open_bed-field_date_to'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_date_to',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'field_permissions' => NULL,
        'granularity' => array(
          'day' => 'day',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 1,
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 11,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 14,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 9,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_to',
      'label' => 'Date Until (To)',
      'required' => 0,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
        ),
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'above',
            'text_parts' => array(
              'day' => 0,
              'hour' => 0,
              'minute' => 0,
              'month' => 0,
              'second' => 0,
              'year' => 0,
            ),
          ),
          'display_all_day' => 0,
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => 1,
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_elderly'.
  $fields['node-open_bed-field_elderly'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_elderly',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Yes - All Access',
          2 => 'Yes - must be able to navigated stairs',
          3 => 'Maybe - Other Conditions',
          4 => 'Prefer Not',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_elderly',
      'label' => 'Elderly',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 15,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_elderly_details'.
  $fields['node-open_bed-field_elderly_details'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_elderly_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 16,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_elderly_details',
      'label' => 'Age Related Notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 2,
        ),
        'type' => 'text_textarea',
        'weight' => 16,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_image'.
  $fields['node-open_bed-field_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 1,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Image',
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
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 14,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_journal'.
  $fields['node-open_bed-field_journal'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_journal',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '*example* RC - Contacted fred, left a message',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 26,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_journal',
      'label' => 'Notes/Journal',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_length_of_stay'.
  $fields['node-open_bed-field_length_of_stay'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_length_of_stay',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'emergency (1-5 days)',
          2 => 'short 1-3 weeks',
          3 => 'medium (3-6 weeks)',
          4 => 'long (6 weeks +)',
          5 => 'to be decided (TBD)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 1,
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 9,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 29,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_length_of_stay',
      'label' => 'Length of stay',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_no_beds'.
  $fields['node-open_bed-field_no_beds'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_no_beds',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Please enter in the number of people that you can accommodate. For example, 1 double bed (2 spaces) and 1 single bed (1 space) can usually be counted as 3 spaces maximum. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => 10,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 12,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => 18,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => 10,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_no_beds',
      'label' => 'Max Number of People / Spaces',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_no_doubles'.
  $fields['node-open_bed-field_no_doubles'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_no_doubles',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'How many double, queen, or king size beds available? These can usually hold 2 people. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 13,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 20,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 11,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_no_doubles',
      'label' => 'Number of Double Beds',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_no_futons'.
  $fields['node-open_bed-field_no_futons'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_no_futons',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'How many other sleeping spaces available like couches, futons, sleeping bags, air mattress, etc? These can usually hold 1 person each, but may not be suitable for all people such as those with back problems. ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 15,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 25,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 13,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_no_futons',
      'label' => 'Number of Couches / Futons / Sleeping Bags / Etc',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_no_singles'.
  $fields['node-open_bed-field_no_singles'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_no_singles',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'How many single beds are available? These can usually hold 1 person',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 14,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 23,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 12,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_no_singles',
      'label' => 'Number of Single Beds',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_options'.
  $fields['node-open_bed-field_options'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_options',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Food',
          2 => 'Clothing',
          3 => 'Elderly/handicapped friendly',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 1,
      'type' => 'list_float',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 10,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 5,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_options',
      'label' => 'Options',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 17,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_pets'.
  $fields['node-open_bed-field_pets'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_pets',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Yes - Not Specified',
          2 => 'Prefer Not',
          3 => 'Maybe',
          4 => 'Yes - Small Animals Only',
          5 => 'Yes - Including Large Pets',
          6 => 'Yes - Including Live Stock',
          7 => 'Other',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 5,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 3,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pets',
      'label' => 'Animals Allowed',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 11,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_source'.
  $fields['node-open_bed-field_source'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_source',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_blank',
        ),
        'class' => '',
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_permissions' => NULL,
        'rel' => '',
        'target' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
      ),
      'translatable' => 1,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 7,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 10,
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 10,
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 7,
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source',
      'label' => 'Source (if not originally from qldfloods.org)',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_blank',
        ),
        'class' => '',
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 0,
          'view' => 'view',
          'view own' => 0,
        ),
        'rel' => '',
        'target' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_state'.
  $fields['node-open_bed-field_state'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_state',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'QLD',
          2 => 'NSW',
          3 => 'NT',
          4 => 'VIC',
          5 => 'TAS',
          6 => 'WA',
          7 => 'SA',
          8 => 'Other',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 12,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_state',
      'label' => 'State',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_suburb'.
  $fields['node-open_bed-field_suburb'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 10,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_suburb',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'suburb',
          ),
        ),
      ),
      'translatable' => 1,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 8,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 14,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 13,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 8,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_suburb',
      'label' => 'Suburb',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_validation'.
  $fields['node-open_bed-field_validation'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_validation',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Unchecked',
          2 => 'Contact Attempted - Called',
          6 => 'Contact Attempted - Emailed',
          3 => 'Contact Made',
          4 => 'Confirmed Yes',
          5 => 'Confirmed No',
        ),
        'allowed_values_function' => '',
        'field_permissions' => NULL,
      ),
      'translatable' => 1,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 19,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_validation',
      'label' => 'Validated',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-open_bed-field_zip'.
  $fields['node-open_bed-field_zip'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_zip',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(),
      'translatable' => 1,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'open_bed',
      'default_value' => array(
        0 => array(
          'value' => 4000,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 13,
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 9,
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 7,
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 28,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_zip',
      'label' => 'Post Code',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'node-resource-field_source'.
  $fields['node-resource-field_source'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_source',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_blank',
        ),
        'class' => '',
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_permissions' => NULL,
        'rel' => '',
        'target' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
      ),
      'translatable' => 1,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'resource',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source',
      'label' => 'Source',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_blank',
        ),
        'class' => '',
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 0,
          'view' => 'view',
          'view own' => 0,
        ),
        'rel' => '',
        'target' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 7,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('*example* RC - Contacted fred, left a message');
  t('Address');
  t('Age Related Notes');
  t('Animal Details');
  t('Animals Allowed');
  t('Assisted Status');
  t('Children');
  t('Contact details');
  t('Contact email');
  t('Contact name');
  t('Contact number');
  t('Date Available (From)');
  t('Date Until (To)');
  t('Details');
  t('Elderly');
  t('Hidden - This is seen only by people who have verified their details with our site. ');
  t('Hidden - This is seen only by people who have verified their details with our site. 
Phone or mobile number.');
  t('How many double, queen, or king size beds available? These can usually hold 2 people. ');
  t('How many other sleeping spaces available like couches, futons, sleeping bags, air mattress, etc? These can usually hold 1 person each, but may not be suitable for all people such as those with back problems. ');
  t('How many single beds are available? These can usually hold 1 person');
  t('Image');
  t('Length of stay');
  t('Max Number of People / Spaces');
  t('Name of person who screened this open bed.');
  t('No of Bathrooms');
  t('Notes/Journal');
  t('Number of Couches / Futons / Sleeping Bags / Etc');
  t('Number of Double Beds');
  t('Number of Single Beds');
  t('Once your beds are filled, or you have found a bed, please come back and change this so that others will know.');
  t('Options');
  t('Please enter in the number of people that you can accommodate. For example, 1 double bed (2 spaces) and 1 single bed (1 space) can usually be counted as 3 spaces maximum. ');
  t('Please include any additional contact options or special instructions for contacting you. ');
  t('Please only include your Street and Suburb. Listing your full address may mean you have many people turn up unexpected.');
  t('Post Code');
  t('Screened');
  t('Screened-by');
  t('Situation Status');
  t('Source');
  t('Source (if not originally from qldfloods.org)');
  t('State');
  t('Suburb');
  t('This shows this record has been screened');
  t('Validated');
  t('screened-date');

  return $fields;
}
