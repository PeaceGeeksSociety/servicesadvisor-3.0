(function ($) {

  Drupal.behaviors.geofield_blur_submit_widget = {
    attach: function (context, settings) {
      $('.field-widget-leaflet-widget-widget').once().each(function (i, item) {
        var id = $('.leaflet-widget', item).attr('id'),
            map = Drupal.leaflet_widget[id],
            geocoderInput = $(':input.geocoder', item),
            geocoderInputValue;

        // Save form value on focus so we can check for changes on blur.
        geocoderInput.bind('focus', function (e) {
          geocoderInputValue = $(this).val();
        });

        geocoderInput.bind('blur', function (e) {
          // React to blur only if value changed.
          if (geocoderInputValue !== $(this).val()) {
            e.preventDefault();
            e.stopPropagation();
            e.stopImmediatePropagation();
            Drupal.behaviors.geofield_widget.geocoder(id);
          }
        });

        // Populate geocoder field with marker location.
        map.on('draw:created', function(e) {
          var type = e.layerType,
              layer = e.layer;

          if (type == 'marker') {
            var location = layer.getLatLng();
            var lat = location.lat.toFixed(3);
            var lng = location.lng.toFixed(3);

            geocoderInput.val(lat + ', ' + lng);
          }
        });

        map.on('draw:edited', function(e) {
          var layers = e.layers;

          layers.eachLayer(function (layer) {
            var location = layer.getLatLng();
            var lat = location.lat.toFixed(3);
            var lng = location.lng.toFixed(3);

            geocoderInput.val(lat + ', ' + lng);
          });
        });

        // Empty geocoder field on layer deletion.
        map.on('draw:deleted', function(e) {
          geocoderInput.val('');
        });
      });
    }
  };

}(jQuery));
