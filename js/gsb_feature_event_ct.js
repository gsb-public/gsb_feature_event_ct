(function ($) {
  Drupal.behaviors.gsb_feature_admission_event_ct = {
    attach: function (context, settings) {
      for (var index = 0; ; index++) {
        if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').length == 0) {
          break;
        }
        else {
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-on-campus').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-on-campus').change(function() {
            Drupal.gsb_feature_admission_event_ct_showhide_location_fields($(this));
          });
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-off-campus').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-off-campus').change(function() {
            Drupal.gsb_feature_admission_event_ct_showhide_location_fields($(this));
          });
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').data('item_index', index);
          $('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').change(function() {
            Drupal.gsb_feature_admission_event_ct_showhide_location_fields($(this));
          });
          if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').is(':checked')) {
            Drupal.gsb_feature_admission_event_ct_showhide_location_fields($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online'));
          }
        }
      }
    }
  }
  Drupal.gsb_feature_admission_event_ct_showhide_location_fields = function(item) {
    var index = $(item).data('item_index');
    if ($('#edit-field-event-location-und-' + index + '-field-event-location-type-und-online').is(':checked')) {
      $('#edit-field-event-location-und-' + index + '-field-address').hide();
    }
    else {
      $('#edit-field-event-location-und-' + index + '-field-address').show();
    }
  }
})(jQuery);