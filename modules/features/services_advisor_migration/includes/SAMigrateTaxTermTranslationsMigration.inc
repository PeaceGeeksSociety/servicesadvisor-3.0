<?php

class SAMigrateTaxTermTranslationsMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->softDependencies = array();

    $this->description = t('Import Services Adivsor OG Memberships from legacy database.');

    $this->source = new MigrateSourceSQL($this->query());

    $this->destination = new MigrateDestinationTable('locales_target');

    $this->map = new MigrateSQLMap($this->machineName, array(
      'objectid' => array(
        'type' => 'int',
        'unsigned' => false,
        'not null' => true,
      ),
    ),
    MigrateDestinationTable::getKeySchema('locales_target'));

    $this->addFieldMapping('lid', null);
    $this->addFieldMapping('tid', 'objectid')
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
    $this->addFieldMapping(null, 'lid');
    $this->addFieldMapping('translation', 'translation');
    $this->addFieldMapping('language', null)->defaultValue('ar');
    $this->addFieldMapping('plid', null)->defaultValue(0);
    $this->addFieldMapping('plural', null)->defaultValue(0);
    $this->addFieldMapping('i18n_status', null)->defaultValue(0);
  }

  public function prepare(stdClass $translation, stdClass $source_row) {
    $tid = $translation->tid;

    $query = db_select('locales_source', 's');
    $query
      ->condition('s.location', "taxonomy:term:$tid:name", 'LIKE')
      ->addField('s', 'lid');
    $result = $query->execute();
    $translation->lid = $result->fetchField();
    unset($translation->tid);
  }

  protected function query() {
    $conn = Database::getConnection('default', 'legacy');
    $query = $conn->select('locales_target', 't');
    $query->join('i18n_string', 'i', 'i.lid = t.lid');
    $query
      ->fields('t', array('lid', 'translation'))
      ->fields('i', array('objectid'))
      ->condition('i.type', 'term');

    return $query;
  }

}