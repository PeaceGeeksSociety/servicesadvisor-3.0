#!/bin/bash
rm -rf modules themes libraries
drush make $1 --working-copy --no-core --contrib-destination=. servicesadvisor.make
git checkout modules
git checkout themes

# setup theme dev dependencies
# npm install themes/custom/re_foundation
# bower install themes/custom/re_foundation
