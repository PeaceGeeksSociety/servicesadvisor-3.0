; Use this file to build a full distro including Drupal core (with patches) and
; the Services Advisor install profile using the following command:
;
;     $ drush make --working-copy servicesadvisor-distro.make [directory]

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.50

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch


; Download the Services Advisor install profile
projects[servicesadvisor][type] = profile
projects[servicesadvisor][download][type] = git
projects[servicesadvisor][download][url] = git@github.com:PeaceGeeksSociety/servicesadvisor.git
projects[servicesadvisor][download][branch] = master
