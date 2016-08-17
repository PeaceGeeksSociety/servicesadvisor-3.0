(function ($) {
  Drupal.behaviors.ckk_archive = {
    attach: function (context, settings) {

      $('#edit-field-service-location-location select').change(function () {
        $("#edit-field-service-location-location-und").trigger("chosen:updated");
        $("#edit-field-service-location-location-und select.chosen-processed").hide();
      });

      // Clean out chosen display that don't have corresponding selects
      $("body").delegate('.form-type-hierarchical-select', 'change-hierarchical-select', function(event, hsid, updateType, settings){
        var containers = $('#edit-field-services-provided .chosen-container');
        for (var i = 0; i < containers.length; i++){
          var containerID = '#' + $(containers[i]).attr('id');
          var selectID = '#' + $(containers[i]).attr('id').replace(/_/g,'-').replace('-chosen','');
          if ($(selectID, '#edit-field-services-provided').length == 0){
            $(containerID).empty();
          }
        }
      });

    }
  };

})(jQuery);
