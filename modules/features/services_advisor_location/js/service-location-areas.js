(function ($) {
    Drupal.behaviors.geofield_blur_submit_widget = {
        attach: function (context, settings) {
            $('.field-widget-leaflet-widget-widget').once().each(
                function (i, item) {
                    var settings = Drupal.settings['service_location_areas'];
                    var serviceAreas = settings['areas'];
                    var defaults = settings['defaults'];
                    if (!settings || !serviceAreas) {
                        return;
                    }

                    var id = $('.leaflet-widget', item).attr('id');
                    var map = Drupal.leaflet_widget[id];
                    var fieldId = '#edit-field-service-location-location';
                    var inputClass = '.hierarchical-select select';
                    // var selectedArea = undefined;

                    $(fieldId).on('change', inputClass, function (e) {
                        // if (selectedArea) {
                        //     map.removeLayer(selectedArea);
                        //     selectedArea = undefined;
                        // }
                        // TODO: We want to use selected values as keys to
                        //       access polygons in our polygon lookup table.
                        //
                        //       The lookup table is created as a PHP array
                        //       with tids for keys. Because tids are numeric,
                        //       PHP's json_encode() will encode them as
                        //       numeric properties in the resulting POJO.
                        //       However <select> element's values are always
                        //       strings.
                        //
                        //       This means we need to convert selected values
                        //       to numbers before using them as lookup keys.
                        //       This is easier than modifying PHP/Drupal's
                        //       default encoding method.
                        var tid = parseInt(e.target.value, 10);
                        var area = serviceAreas[tid]
                        if (area && area.features && area.features.length) {
                            // selectedArea = L.geoJson(area);
                            // selectedArea.addTo(map);

                            var bounds = L.latLngBounds([]);
                            var latLngs = area.features.forEach(function (feature) {
                                var bbox = feature.properties.bbox;
                                bounds.extend(L.latLngBounds(
                                    [bbox.maxy, bbox.maxx],
                                    [bbox.miny, bbox.minx]
                                ));
                            });
                            map.fitBounds(bounds);
                        } else {
                            map.setView([defaults.lat, defaults.lng], defaults.zoom);
                        }
                    })
                }
            );
        }
    }
}(jQuery));
