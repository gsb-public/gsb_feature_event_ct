(function ($) {
  Drupal.behaviors.gsb_feature_event_ct = {
    attach: function (context, settings) {

      // clear the registration date field if this is a new node
      var currentNid = Drupal.settings.gsb_feature_event_ct.currentNid;
      if (currentNid == null) {
        $('#edit-field-date-time-und-0-value-timeEntry-popup-1').val('');
      }

      // location on-campus
      $("input[id*='field-event-location-type-und-on-campus']").each(function() {
        var index = Drupal.gsb_feature_event_ct.get_location_index($(this));
        if (index != -1) {
          $(this).data('item_index', index);
        }
      });
      $("input[id*='field-event-location-type-und-on-campus']").on('change', function() {
        var index = $(this).data('item_index');
        Drupal.gsb_feature_event_ct.showhide_location_fields(index);
      });

      // location off-campus
      $("input[id*='field-event-location-type-und-off-campus']").each(function() {
        var index = Drupal.gsb_feature_event_ct.get_location_index($(this));
        if (index != -1) {
          $(this).data('item_index', index);
        }
      });
      $("input[id*='field-event-location-type-und-off-campus']").on('change', function() {
        var index = $(this).data('item_index');
        Drupal.gsb_feature_event_ct.showhide_location_fields(index);
      });

      // location online
      $("input[id*='field-event-location-type-und-online']").each(function() {
        var index = Drupal.gsb_feature_event_ct.get_location_index($(this));
        if (index != -1) {
          $(this).data('item_index', index);
        }
      });
      $("input[id*='field-event-location-type-und-online']").on('change', function() {
        var index = $(this).data('item_index');
        Drupal.gsb_feature_event_ct.showhide_location_fields(index);
      });

      for (var index = 0; ; index++) {
        if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').length == 0) {
          break;
        }
        else {
          if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').is(':checked')) {
            Drupal.gsb_feature_event_ct.showhide_location_fields(index);
          }
        }
      }

      // speakers
      $("input[name$='[field_person_ref][und][0][target_id]']").each(function() {
        var index = Drupal.gsb_feature_event_ct.get_speaker_index($(this));
        if (index != -1) {
          $(this).data('item_index', index);
        }
      });
      $("input[name$='[field_person_ref][und][0][target_id]']").on('blur', function(e) {
        $(this).addClass('speaker-completed');
        setTimeout("Drupal.gsb_feature_event_ct.lookup_speaker()", 100);
      });

      // hide the require * if the event detail is set to 'Link to an existing page'
      // for the 'Open URL in a New Window' checkbox on the Title URL field. Wee.
      $('#edit-field-event-detail-und-1').on('change',function() {
        if ($('#edit-field-event-detail-und-1').is(':checked')) {
          $("label[for=edit-field-link-single-und-0-attributes-target]").children().hide();
        }
      });

      var cleanupFieldsets = function($event) {

        var hide_fieldgroups = {
          node_event_form_group_description: "node_event_form_group_description",
          node_event_form_group_event_speakers: "node_event_form_group_event_speakers",
          node_event_form_group_event_registration: "node_event_form_group_event_registration",
          node_event_form_group_schedule: "node_event_form_group_schedule",
          node_event_form_group_contact_information: "node_event_form_group_contact_information"
        };

        $("fieldset").each(function(){
          var fieldset = $(this);
          var data = fieldset.data();
          // Vertical tab support
          if (data && data.verticalTab) {
            for (var key in hide_fieldgroups) {
              if (hide_fieldgroups.hasOwnProperty(key)) {
                if (data.verticalTab.fieldset[0].id === hide_fieldgroups[data.verticalTab.fieldset[0].id] && $event == 1) {
                  fieldset.data('verticalTab').item.hide();
                }
                else {
                  fieldset.data('verticalTab').item.show();
                }
              }
            }
          }
        }); // end of 'fieldset' each

      } // end of cleanupFieldsets

      $(document).ready(function() {
        $("[id^=edit-field-event-detail-und-]").change(function () {
          cleanupFieldsets($(this).val());
        });
      });

    } // end attach
  }

  Drupal.gsb_feature_event_ct = Drupal.gsb_feature_event_ct || {}

  // location functions

  Drupal.gsb_feature_event_ct.get_location_index = function(element) {
    var index = -1;
    var name = $(element).attr('name');
    var find = 'field_event_location[und][';
    var part1 = name.indexOf(find);
    if (part1 != -1) {
      name = name.replace(find, '');
    }
    var part2 = name.indexOf(']');
    if (part2 != -1) {
      index = name.substring(0,part2);
    }
    return index;
  }
  Drupal.gsb_feature_event_ct.showhide_location_fields = function(index) {
    if ($("input[id^='edit-field-event-location-und-" + index + "-field-event-location-type-und-online']").is(':checked')) {
      $("div[id^='edit-field-event-location-und-" + index + "-field-address']").hide();
    }
    else {
      $("div[id^='edit-field-event-location-und-" + index + "-field-address']").show();
    }
  }

  // speaker functions

  Drupal.gsb_feature_event_ct.get_speaker_index = function(element) {
    var index = -1;
    var name = $(element).attr('name');
    var find = 'field_event_speakers[und][';
    var part1 = name.indexOf(find);
    if (part1 != -1) {
      name = name.replace(find, '');
    }
    var part2 = name.indexOf(']');
    if (part2 != -1) {
      index = name.substring(0,part2);
    }
    return index;
  }
  Drupal.gsb_feature_event_ct.lookup_speaker = function() {
    var speaker_info = $('.speaker-completed').val();
    if (speaker_info == undefined) {
      return;
    }
    var pos_start = speaker_info.indexOf(' (');
    var pos_end = speaker_info.indexOf(')',speaker_info.length-1);
    var nid = -1;
    if (pos_start != -1 && pos_end != -1) {
      nid = speaker_info.substring(pos_start+2,pos_end);
    }
    var index = $('.speaker-completed').data('item_index');
    $.getJSON(Drupal.settings.basePath + 'gsb_feature_event_ct_speaker_lookup/' + nid + '/' + index, function(data) {
      $("input[id^='edit-field-event-speakers-und-" + data.index + "-field-title-und-0-value']").val(data.title);
    });
    $('.speaker-completed').removeClass('speaker-completed');
  }

})(jQuery);