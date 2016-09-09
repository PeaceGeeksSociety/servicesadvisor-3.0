<?php

class SAMigrateMembershipsMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->softDependencies = array();

    $this->description = t('Import Services Adivsor OG Memberships from legacy database.');

    $this->source = new MigrateSourceSQL($this->query());

    $this->destination = new MigrateDestinationOGMembership();

    $this->map = new MigrateSQLMap($this->machineName, array(
      'id' => array(
        'type' => 'int',
        'unsigned' => true,
        'not null' => true
      ),
    ),
    MigrateDestinationOGMembership::getKeySchema());

    $this->addSimpleMappings(array('entity_type', 'group_type', 'state', 'created'));
    $this->addFieldMapping(null, 'type');
    $this->addFieldMapping(null, 'field_name');
    $this->addFieldMapping(null, 'language');
    $this->addFieldMapping('gid', 'gid')
      ->sourceMigration('bb70f61dbNodeservice_partner');
    $this->addFieldMapping('etid', 'etid')
      ->sourceMigration('bb70f61dbNodeservice_location');
  }

  protected function query() {
    $query = Database::getConnection('default', 'legacy')
      ->select('og_membership', 'm')
      ->fields('m')
      ->condition('m.entity_type', 'node');

    return $query;
  }

}