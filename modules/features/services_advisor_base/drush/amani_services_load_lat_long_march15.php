<?php

/*
 * Import vocabularies for Service Advisor content types.
 *
 * Usage: drush scr profiles/amani/modules/features/amani_features/services_advisor_base/drush/amani_services_load_terms.php [optional_vocabulary_name]
 *
 */

module_load_include('inc', 'services_advisor_base', 'includes/services_advisor_base.api');

services_advisor_base_load_lat_long_march15();