(function ($) {
  Drupal.behaviors.gsb_feature_event_ct = {
    attach: function (context, settings) {

      for (var index = 0; ; index++) {
        if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').length == 0) {
          break;
        }
        else {
          $('#edit-field-event-speakers-und-' + index + '-field-person-ref-und-0-target-id').data('item_index', index);
          $('#edit-field-event-speakers-und-' + index + '-field-person-ref-und-0-target-id').blur(function(e) {
            $(this).addClass('speaker-completed');
            setTimeout("Drupal.gsb_feature_event_ct.lookup_speaker()", 100);
          });
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-on-campus').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-on-campus').change(function() {
            Drupal.gsb_feature_event_ct.showhide_location_fields($(this));
          });
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-off-campus').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-off-campus').change(function() {
            Drupal.gsb_feature_event_ct.showhide_location_fields($(this));
          });
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').change(function() {
            Drupal.gsb_feature_event_ct.showhide_location_fields($(this));
          });
          if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').is(':checked')) {
            Drupal.gsb_feature_event_ct.showhide_location_fields($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online'));
          }
        }
      }
    }
  }
  Drupal.gsb_feature_event_ct = Drupal.gsb_feature_event_ct || {}
  Drupal.gsb_feature_event_ct.lookup_speaker = function() {
    var speaker_info = $('.speaker-completed').val();
    var pos_start = speaker_info.indexOf(' (');
    var pos_end = speaker_info.indexOf(')',speaker_info.length-1);
    var nid = -1;
    if (pos_start != -1 && pos_end != -1) {
      nid = speaker_info.substring(pos_start+2,pos_end);
    }
    var index = $('.speaker-completed').data('item_index');
    $.getJSON(Drupal.settings.basePath + 'gsb_feature_event_ct_speaker_lookup/' + nid + '/' + index, function(data) {
      $('#edit-field-event-speakers-und-' + data.index + '-field-title-und-0-value').val(data.title);
    });
    $('.speaker-completed').removeClass('speaker-completed');
  }
  Drupal.gsb_feature_event_ct.showhide_location_fields = function(item) {
    var index = $(item).data('item_index');
    if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').is(':checked')) {
      $('#edit-field-event-location-und-' + index + '-field-address').hide();
    }
    else {
      $('#edit-field-event-location-und-' + index + '-field-address').show();
    }
  }
})(jQuery);