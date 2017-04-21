api = 2
core = 7.x

;--------
; Modules
;--------

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][subdir] = contrib
projects[admin_views][version] = "1.6"
projects[admin_views][patch][] = "https://www.drupal.org/files/issues/admin_views-duplicate_system_path-1780004-54.patch"

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = "3.1"

projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = "3.4"

projects[captcha][subdir] = contrib
projects[captcha][version] = "1.3"

projects[chained_selects][subdir] = contrib
projects[chained_selects][version] = "1.x-dev"

projects[chosen][subdir] = contrib
projects[chosen][version] = "2.0"

projects[color_field][subdir] = contrib
projects[color_field][version] = "1.8"

projects[colorbox][subdir] = contrib
projects[colorbox][version] = "2.12"

projects[conditional_fields][subdir] = contrib
projects[conditional_fields][version] = "3.0-alpha2"

projects[context][subdir] = contrib
projects[context][version] = "3.7"

projects[ctools][subdir] = contrib
projects[ctools][version] = "1.12"

projects[date][subdir] = contrib
projects[date][version] = "2.9"

projects[datepicker][subdir] = contrib
projects[datepicker][version] = "1.0"

projects[devel][subdir] = contrib
projects[devel][version] = "1.5"

projects[diff][subdir] = contrib
projects[diff][version] = "3.3"

projects[ds][subdir] = contrib
projects[ds][version] = "2.14"

projects[email][subdir] = contrib
projects[email][version] = "1.3"

projects[email_registration][subdir] = contrib
projects[email_registration][version] = "1.3"

projects[entity][subdir] = contrib
projects[entity][version] = "1.8"

projects[entityreference][subdir] = contrib
projects[entityreference][version] = "1.2"

projects[entityreference_prepopulate][subdir] = contrib
projects[entityreference_prepopulate][version] = "1.7"

projects[eva][subdir] = contrib
projects[eva][version] = "1.2"

projects[features][subdir] = contrib
projects[features][version] = "2.10"

projects[features_extra][subdir] = contrib
projects[features_extra][version] = "1.0"

projects[feeds][subdir] = contrib
projects[feeds][version] = "2.0-beta3"

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = "1.1"

projects[field_group][subdir] = contrib
projects[field_group][version] = "1.5"

projects[field_preset][subdir] = contrib
projects[field_preset][type] = module
projects[field_preset][download][type] = git
projects[field_preset][download][branch] = "7.x-1.x"
projects[field_preset][download][url] = http://git.drupal.org/sandbox/smithmilner/2827971.git
projects[field_preset][download][revision] = "60b5feb27c13e294cc402ee195246f0a12a0a90e"

projects[file_entity][subdir] = contrib
projects[file_entity][version] = "2.0-beta3"

projects[geocoder][subdir] = contrib
projects[geocoder][version] = "1.3"

projects[geofield][subdir] = contrib
projects[geofield][version] = "2.3"

projects[geolocation][subdir] = contrib
projects[geolocation][version] = "1.6"

projects[geophp][subdir] = contrib
projects[geophp][version] = "1.x-dev"
projects[geophp][download][revision] = "2777c5ebc953841dea71fba6b91ff388499fc59e"

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = "1.5"

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = "2.3"

projects[hierarchical_select][subdir] = contrib
projects[hierarchical_select][version] = "3.0-beta7"
projects[hierarchical_select][patch][] = "https://www.drupal.org/files/issues/feature-code-export-error-2764871-4.patch"
projects[hierarchical_select][patch][] = "https://www.drupal.org/files/issues/hierarchical_select-fix_selection_keys-2719141-22-7.x-3.x-dev.patch"

projects[i18n][subdir] = contrib
projects[i18n][version] = "1.15"

projects[i18nviews][subdir] = contrib
projects[i18nviews][version] = "3.0-alpha1"

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = "2.1"

projects[imagefield_crop][subdir] = contrib
projects[imagefield_crop][version] = "1.1"

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "2.7"

projects[leaflet][subdir] = contrib
projects[leaflet][version] = "1.4"

projects[leaflet_widget][subdir] = contrib
projects[leaflet_widget][type] = module
projects[leaflet_widget][download][type] = git
projects[leaflet_widget][download][url] = git://git.drupal.org/project/leaflet_widget.git
projects[leaflet_widget][download][revision] = e2c24f9b
projects[leaflet_widget][download][branch] = 7.x-2.x
projects[leaflet_widget][patch][] = "https://www.drupal.org/files/issues/configurable-draw-handlers-2812687-6.patch"
projects[leaflet_widget][patch][] = "https://www.drupal.org/files/issues/geom-type-ajax-2456915-9.patch"

projects[libraries][subdir] = contrib
projects[libraries][version] = "2.3"

projects[link][subdir] = contrib
projects[link][version] = "1.4"

projects[masquerade][subdir] = contrib
projects[masquerade][version] = "1.0-rc7"

projects[migrate][subdir] = contrib
projects[migrate[version] = "2.8"

projects[migrate_extras][subdir] = contrib
projects[migrate_extras[version] = "2.5"

projects[migrate_d2d][subdir] = contrib
projects[migrate_d2d[version] = "2.1"

projects[node_export][subdir] = contrib
projects[node_export][version] = "3.1"

projects[node_clone][subdir] = contrib
projects[node_clone][version] = "1.0"

projects[node_view_permissions][subdir] = contrib
projects[node_view_permissions][version] = "1.5"
projects[node_view_permissions][patch][] = "https://www.drupal.org/files/issues/node_view_permissions-D7-2564273-22.patch"

projects[office_hours][subdir] = contrib
projects[office_hours][version] = "1.x-dev"
projects[office_hours][download][revision] = "9377182c38080968313b86470278df92ed1fe3c7"
projects[office_hours][patch][] = "https://www.drupal.org/files/issues/office_hours-midnight_values-2553501-7.patch"

projects[og][subdir] = contrib
projects[og][version] = "2.9"

projects[pathauto][subdir] = contrib
projects[pathauto][version] = "1.3"

projects[print][subdir] = contrib
projects[print][version] = "2.0"

projects[redirect][subdir] = contrib
projects[redirect][version] = "1.0-rc3"

projects[role_delegation][subdir] = contrib
projects[role_delegation][version] = "1.1"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = "2.0"

projects[taxonomy_access_fix][subdir] = contrib
projects[taxonomy_access_fix][version] = "2.3"

projects[taxonomy_csv][subdir] = contrib
projects[taxonomy_csv][version] = "5.10"

projects[taxonomy_term_depth][subdir] = contrib
projects[taxonomy_term_depth][version] = "1.0-beta3"

projects[telephone][subdir] = contrib
projects[telephone][version] = "1.0-alpha1"

projects[token][subdir] = contrib
projects[token][version] = "1.7"

projects[translation_own_nodes][subdir] = contrib
projects[translation_own_nodes][version] = "1.x-dev"
projects[translation_own_nodes][download][revision] = "fefe38b91260b021a76b97e6a21f5af308af87a9"

projects[translation_table][subdir] = contrib
projects[translation_table][version] = "1.x-dev"
projects[translation_table][download][revision] = "e83f56b3f48ecf80b35da03b9aef7862541f7f4c"

projects[transliteration][subdir] = contrib
projects[transliteration][version] = "3.2"

projects[unique_field][subdir] = contrib
projects[unique_field][version] = "1.0-rc1"

projects[uuid][subdir] = contrib
projects[uuid][version] = "1.0-beta2"

projects[uif][subdir] = contrib
projects[uif][version] = "1.5"

projects[uif_plus][subdir] = contrib
projects[uif_plus][version] = "1.x"

projects[variable][subdir] = contrib
projects[variable][version] = "2.5"

projects[varnish][subdir] = contrib
projects[varnish][version] = "1.1"

projects[views][subdir] = contrib
projects[views][version] = "3.15"
projects[views][patch][] = "https://www.drupal.org/files/issues/views-exposed-type-2303939.patch"

projects[views_aggregator][subdir] = contrib
projects[views_aggregator][version] = "1.4"

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = "3.4"

projects[views_data_export][subdir] = contrib
projects[views_data_export][version] = "3.1"

projects[views_datasource][subdir] = contrib
projects[views_datasource][version] = "1.0-alpha2"
projects[views_datasource][patch][] = "https://www.drupal.org/files/issues/views_datasource-2720063-labels-prevent-translation.patch"

projects[views_geojson][subdir] = contrib
projects[views_geojson][version] = "1.0-beta3"

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = "2.3"

;----------
; Libraries
;----------

; Chosen
libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.6.1/chosen_v1.6.1.zip
libraries[chosen][directory_name] = chosen
libraries[chosen][destination] = libraries

; CKEditor library
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.2/ckeditor_3.6.6.2.zip
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][destination] = libraries

; jQuery Simple Color
libraries[jquery-simple-color][download][type] = get
libraries[jquery-simple-color][download][url] = https://github.com/recurser/jquery-simple-color/archive/v1.2.1.zip
libraries[jquery-simple-color][directory_name] = jquery-simple-color
libraries[jquery-simple-color][destination] = libraries

; Leaflet
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "http://cdn.leafletjs.com/downloads/leaflet-0.7.5.zip"

; Leaflet.widget
libraries[Leaflet.widget][download][type] = git
libraries[Leaflet.widget][download][url] = https://github.com/tnightingale/Leaflet.widget.git
libraries[Leaflet.widget][directory_name] = Leaflet.widget
libraries[Leaflet.widget][destination] = libraries
libraries[Leaflet.widget][download][revision] = 668b335

;-------
; Themes
;-------

projects[zurb-foundation][type] = theme
projects[zurb-foundation][version] = "4.4"
projects[zurb-foundation][subdir] = contrib
projects[zurb-foundation][download][revision] = "581dbdd895e6e401093b7661d47c9290996c94f6"
projects[zurb-foundation][directory_name] = "zurb_foundation"
