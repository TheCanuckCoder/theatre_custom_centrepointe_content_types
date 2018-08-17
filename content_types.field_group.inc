<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|event|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_will_you_be_selling_mercha',
      1 => 'field_event_details_ct_mainstage',
      2 => 'field_event_type_bfp',
      3 => 'field_mkt_serv_mainstage_studio',
      4 => 'field_bar',
      5 => 'field_sop_permit',
      6 => 'group_equipment',
      7 => 'group_insurance',
      8 => 'group_recordings',
      9 => 'group_socan_information',
      10 => 'group_contact_info',
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
  $field_groups['group_additional_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bar|node|event|event_report_patron_services';
  $field_group->group_name = 'group_bar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bar',
    'weight' => '63',
    'children' => array(
      0 => 'field_bar',
      1 => 'field_sop_permit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bar field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_bar|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_box_office|node|event|event_report_guest_services';
  $field_group->group_name = 'group_box_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_guest_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Box Office',
    'weight' => '1',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_pricing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-box-office field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_box_office|node|event|event_report_guest_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_box_office|node|event|event_report_patron_services';
  $field_group->group_name = 'group_box_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Box Office',
    'weight' => '1',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_pricing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-box-office field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_box_office|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|event|event_report_patron_services';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_box_office_email',
      1 => 'field_box_office_name',
      2 => 'field_box_office_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_info|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|event|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Applicant Contact Information',
    'weight' => '27',
    'children' => array(
      0 => 'field_main_contact_email',
      1 => 'field_box_office_email',
      2 => 'field_marketing_email',
      3 => 'field_production_email',
      4 => 'field_signing_authority_email',
      5 => 'field_other_email',
      6 => 'field_main_contact_name',
      7 => 'field_main_contact_phone',
      8 => 'field_production_name',
      9 => 'field_production_phone',
      10 => 'field_signing_authority_name',
      11 => 'field_signing_authority_phone',
      12 => 'field_box_office_name',
      13 => 'field_box_office_phone',
      14 => 'field_marketing_name',
      15 => 'field_marketing_phone',
      16 => 'field_other_name',
      17 => 'field_other_phone',
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
  $field_groups['group_contact_info|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|event|event_report_production';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '1',
    'children' => array(
      0 => 'field_production_email',
      1 => 'field_production_name',
      2 => 'field_production_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dashboard|node|event|form';
  $field_group->group_name = 'group_dashboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Dashboard',
    'weight' => '9',
    'children' => array(
      0 => 'field_twitter_budget',
      1 => 'field_twitter_cost',
      2 => 'field_facebook_budget',
      3 => 'field_facebook_cost',
      4 => 'field_email_budget',
      5 => 'field_email_cost',
      6 => 'field_call_centre_budget',
      7 => 'field_call_centre_cost',
      8 => 'field_banner_advertising_budget',
      9 => 'field_banner_advertising_cost',
      10 => 'field_direct_budget',
      11 => 'field_direct_cost',
      12 => 'field_share_icons',
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
  $field_groups['group_dashboard|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment|node|event|event_report_production';
  $field_group->group_name = 'group_equipment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment',
    'weight' => '2',
    'children' => array(
      0 => 'field_equip_avail_no_mainstage',
      1 => 'field_equip_avail_no_studio',
      2 => 'field_equip_rentals_mainstage',
      3 => 'field_equipment_rentals_bfp',
      4 => 'field_equipment_rentals_lobby',
      5 => 'field_equip_rentals_studio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipment field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_equipment|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment|node|event|form';
  $field_group->group_name = 'group_equipment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Equipment Rentals',
    'weight' => '26',
    'children' => array(
      0 => 'field_equip_avail_no_mainstage',
      1 => 'field_equip_avail_no_studio',
      2 => 'field_equip_rentals_mainstage',
      3 => 'field_equipment_rentals_bfp',
      4 => 'field_equipment_rentals_lobby',
      5 => 'field_equip_rentals_studio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipment field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_equipment|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|event_report_guest_services';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_guest_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_notes',
      2 => 'field_presenter_type',
      3 => 'field_event_code',
      4 => 'field_event_genre',
      5 => 'field_event_venue',
      6 => 'field_dates',
      7 => 'field_season_code',
      8 => 'field_organization',
      9 => 'field_will_you_be_selling_mercha',
      10 => 'field_length_of_intermission',
      11 => 'field_expected_attendance',
      12 => 'field_event_details_ct_mainstage',
      13 => 'field_event_type_bfp',
      14 => 'field_length_of_performance_even',
      15 => 'field_number_of_intermission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|event|event_report_guest_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|event_report_production';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_presenter_type',
      2 => 'field_age_group',
      3 => 'field_event_venue',
      4 => 'field_dates',
      5 => 'field_advisory',
      6 => 'field_organization',
      7 => 'field_will_you_be_selling_mercha',
      8 => 'field_length_of_intermission',
      9 => 'field_expected_attendance',
      10 => 'field_number_of_performers_and_c',
      11 => 'field_request_take_down_time',
      12 => 'field_length_of_performance_even',
      13 => 'field_number_of_intermission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|form';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_image',
      1 => 'field_event_type',
      2 => 'field_presenter_type',
      3 => 'field_featured_event',
      4 => 'field_age_group',
      5 => 'field_event_genre',
      6 => 'field_event_venue',
      7 => 'field_photos',
      8 => 'field_dates',
      9 => 'field_advisory_alert',
      10 => 'field_email_address',
      11 => 'field_advisory',
      12 => 'field_organization',
      13 => 'field_thumbnail',
      14 => 'title',
      15 => 'group_event_tabs',
      16 => 'group_tickets',
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
  $field_groups['group_event_info|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_settings|node|event|form';
  $field_group->group_name = 'group_event_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_children_under_6_years_of_',
      1 => 'field_season',
      2 => 'field_length_of_intermission',
      3 => 'field_expected_attendance',
      4 => 'field_number_of_performers_and_c',
      5 => 'field_request_take_down_time',
      6 => 'field_length_of_performance_even',
      7 => 'field_number_of_intermission',
      8 => 'field_requested_set_up_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_settings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_1|node|event|default';
  $field_group->group_name = 'group_event_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => '',
    'weight' => '78',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-tab-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_tab_1|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_2|node|event|default';
  $field_group->group_name = 'group_event_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 2',
    'weight' => '79',
    'children' => array(
      0 => 'field_tab_2_content',
      1 => 'field_tab_2_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-2 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_2|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_3|node|event|default';
  $field_group->group_name = 'group_event_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 3',
    'weight' => '80',
    'children' => array(
      0 => 'field_tab_3_content',
      1 => 'field_tab_3_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-3 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_3|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_4|node|event|default';
  $field_group->group_name = 'group_event_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 4',
    'weight' => '81',
    'children' => array(
      0 => 'field_tab_4_content',
      1 => 'field_tab_4_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-4 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_4|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tabs|node|event|default';
  $field_group->group_name = 'group_event_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_event_tab_1',
      1 => 'group_event_tab_2',
      2 => 'group_event_tab_3',
      3 => 'group_event_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tabs|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tabs|node|event|form';
  $field_group->group_name = 'group_event_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Event Tabs',
    'weight' => '82',
    'children' => array(
      0 => 'field_promo_use_def_url',
      1 => 'group_events_tab_1',
      2 => 'group_events_tab_2',
      3 => 'group_events_tab_3',
      4 => 'group_events_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tabs|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_tab_1|node|event|form';
  $field_group->group_name = 'group_events_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 1',
    'weight' => '78',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-tab-1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_events_tab_1|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_tab_2|node|event|form';
  $field_group->group_name = 'group_events_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 2',
    'weight' => '79',
    'children' => array(
      0 => 'field_tab_2_content',
      1 => 'field_tab_2_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-tab-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_events_tab_2|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_tab_3|node|event|form';
  $field_group->group_name = 'group_events_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 3',
    'weight' => '80',
    'children' => array(
      0 => 'field_tab_3_content',
      1 => 'field_tab_3_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-tab-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_events_tab_3|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_tab_4|node|event|form';
  $field_group->group_name = 'group_events_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 4',
    'weight' => '81',
    'children' => array(
      0 => 'field_tab_4_content',
      1 => 'field_tab_4_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-tab-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_events_tab_4|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|event_report_patron_services';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_notes',
      2 => 'field_presenter_type',
      3 => 'field_event_code',
      4 => 'field_age_group',
      5 => 'field_event_genre',
      6 => 'field_event_venue',
      7 => 'field_dates',
      8 => 'field_advisory',
      9 => 'field_season_code',
      10 => 'field_organization',
      11 => 'field_length_of_intermission',
      12 => 'field_number_of_performers_and_c',
      13 => 'field_event_type_bfp',
      14 => 'field_length_of_performance_even',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '4',
    'children' => array(
      0 => 'group_event_info',
      1 => 'group_event_settings',
      2 => 'group_dashboard',
      3 => 'group_additional_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|event|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '82',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_age_group',
      2 => 'field_event_genre',
      3 => 'field_event_venue',
      4 => 'field_advisory',
      5 => 'language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insurance|node|event|event_report_production';
  $field_group->group_name = 'group_insurance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Insurance',
    'weight' => '6',
    'children' => array(
      0 => 'field_coverage',
      1 => 'field_sop_permit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insurance field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_insurance|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insurance|node|event|form';
  $field_group->group_name = 'group_insurance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Insurance',
    'weight' => '24',
    'children' => array(
      0 => 'field_coverage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insurance field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_insurance|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_content|node|news|teaser';
  $field_group->group_name = 'group_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-news-content field-group-div news-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_news_content|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_info|node|news|default';
  $field_group->group_name = 'group_news_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-news-info field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_news_info|node|news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recordings|node|event|form';
  $field_group->group_name = 'group_recordings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Recordings',
    'weight' => '25',
    'children' => array(
      0 => 'field_recordings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recordings field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recordings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recording|node|event|event_report_production';
  $field_group->group_name = 'group_recording';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recording',
    'weight' => '59',
    'children' => array(
      0 => 'field_recordings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recording field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recording|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shareicons|node|event|default';
  $field_group->group_name = 'group_shareicons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Share Icons',
    'weight' => '84',
    'children' => array(
      0 => 'field_share_icons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_shareicons|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_details|node|event|default';
  $field_group->group_name = 'group_show_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Details',
    'weight' => '6',
    'children' => array(
      0 => 'group_info',
      1 => 'group_tickets',
      2 => 'group_shareicons',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_show_details|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socan_information|node|event|event_report_production';
  $field_group->group_name = 'group_socan_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SOCAN Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_own_licence_number',
      1 => 'field_socan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-socan-information field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_socan_information|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socan_information|node|event|form';
  $field_group->group_name = 'group_socan_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'SOCAN Information',
    'weight' => '23',
    'children' => array(
      0 => 'field_own_licence_number',
      1 => 'field_socan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-socan-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_socan_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|event|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_website',
      3 => 'field_youtube',
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
  $field_groups['group_social_media|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tickets|node|event|default';
  $field_group->group_name = 'group_tickets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Tickets (All-in Price)',
    'weight' => '83',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_event_code',
      2 => 'field_pricing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tickets field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tickets|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tickets|node|event|form';
  $field_group->group_name = 'group_tickets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Tickets',
    'weight' => '75',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_event_code',
      2 => 'field_sold_out_',
      3 => 'field_pricing',
      4 => 'field_season_code',
      5 => 'field_promo_alt_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tickets field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tickets|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('Applicant Contact Information');
  t('Bar');
  t('Box Office');
  t('Contact');
  t('Dashboard');
  t('Equipment');
  t('Equipment Rentals');
  t('Event');
  t('Event Details');
  t('Event Info');
  t('Event Tab 1');
  t('Event Tab 2');
  t('Event Tab 3');
  t('Event Tab 4');
  t('Event Tabs');
  t('Info');
  t('Insurance');
  t('Recording');
  t('Recordings');
  t('SOCAN Information');
  t('Share Icons');
  t('Show Details');
  t('Social Media');
  t('Tickets');
  t('Tickets (All-in Price)');

  return $field_groups;
}
