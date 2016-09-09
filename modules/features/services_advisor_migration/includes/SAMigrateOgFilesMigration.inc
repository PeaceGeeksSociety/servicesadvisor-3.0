<?php

class SAMigrateOgFilesMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->softDependencies = array();

    $this->description = t('Import Services Adivsor OG Logos from legacy database.');

    $this->source = new MigrateSourceSQL($this->query());

    $this->destination = new MigrateDestinationTable('field_data_field_logo');

    $this->map = new MigrateSQLMap($this->machineName, array(
      'entity_id' => array(
        'type' => 'int',
        'unsigned' => true,
        'not null' => true
      ),
    ),
    MigrateDestinationTable::getKeySchema('field_data_field_logo'));

    $this->addSimpleMappings(array('entity_type', 'bundle', 'deleted', 'language', 'delta', 'field_logo_alt', 'field_logo_title', 'field_logo_width', 'field_logo_height'));
    $this->addFieldMapping('entity_id', 'entity_id')
      ->sourceMigration('bb70f61dbNodeservice_partner');
    $this->addFieldMapping('field_logo_fid', 'field_logo_fid')
      ->sourceMigration('bb70f61dbFile');
  }

  public function prepare(stdClass $table_row, stdClass $source_row) {
    $table_row->revision_id = node_load($table_row->entity_id)->vid;
  }

  protected function query() {
    $query = Database::getConnection('default', 'legacy')
      ->select('field_data_field_logo', 'f')
      ->fields('f');

    return $query;
  }

}