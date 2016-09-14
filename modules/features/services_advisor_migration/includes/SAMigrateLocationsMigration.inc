<?php

class SAMigrateLocationsMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->softDependencies = array();

    $this->description = t('Import Services Adivsor OG Memberships from legacy database.');

    $this->source = new MigrateSourceSQL($this->query());

    $this->destination = new MigrateDestinationTable('field_data_field_location_point');

    $this->map = new MigrateSQLMap($this->machineName, array(
      'entity_id' => array(
        'type' => 'int',
        'unsigned' => false,
        'not null' => true,
      ),
    ),
    MigrateDestinationTable::getKeySchema('field_data_field_location_point'));

    $this->addSimpleMappings(array('entity_type', 'bundle', 'deleted', 'language', 'delta', 'field_location_point_geom', 'field_location_point_geo_type', 'field_location_point_lat', 'field_location_point_lon', 'field_location_point_left', 'field_location_point_top', 'field_location_point_right', 'field_location_point_bottom' , 'field_location_point_geohash'));
    $this->addFieldMapping('entity_id', 'entity_id')
      ->sourceMigration(array(
        'bb70f61dbTermservice_accessibility',
        'bb70f61dbTermservice_availability',
        'bb70f61dbTermservice_available_nationality',
        'bb70f61dbTermservice_complaints_mechanism',
        'bb70f61dbTermservice_coverage',
        'bb70f61dbTermservice_feedback_delay',
        'bb70f61dbTermservice_feedback_mechanism',
        'bb70f61dbTermservice_intake_criteria',
        'bb70f61dbTermservice_location_availability_days',
        'bb70f61dbTermservice_location_hour_close',
        'bb70f61dbTermservice_location_hour_open',
        'bb70f61dbTermservice_nested_categories',
        'bb70f61dbTermservice_nested_location',
        'bb70f61dbTermservice_referral_method',
        'bb70f61dbTermservice_referral_next_step',
        'bb70f61dbTermservice_registration_type',
        'bb70f61dbTermservice_response_delay',
        'bb70f61dbTermservice_sector',
      ));
  }

  public function prepare(stdClass $table_row, stdClass $source_row) {
    $table_row->revision_id = $table_row->entity_id;
  }

  protected function query() {
    $conn = Database::getConnection('default', 'legacy');
    $query = $conn->select('field_data_field_location_point', 'l');
    $query->fields('l');

    return $query;
  }

}