; CLAIR make file
core = "7.x"
api = "2"
projects[drupal][version] = "7.x"

; Clair Modules
projects[clair_blog][version] = "0.1"
projects[clair_blog][subdir] = "clair"

projects[clair_events][version] = "0.4"
projects[clair_events][subdir] = "clair"

projects[clair_admin][version] = "" ; TODO add version
projects[clair_admin][subdir] = "clair"

projects[clair_panels][version] = "" ; TODO add version
projects[clair_panels][subdir] = "clair"

; Contrib Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta5"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[dummyimage][version] = "1.4"
projects[dummyimage][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[flag][version] = "2.0"
projects[flag][subdir] = "contrib"

projects[fullcalendar][version] = "2.0"
projects[fullcalendar][subdir] = "contrib"

projects[og][version] = "2.0-beta3"
projects[og][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.0"
projects[libraries][subdir] = "contrib"

projects[navbar][version] = "1.0-alpha3"
projects[navbar][subdir] = "contrib"

projects[panels_breadcrumbs][version] = "1.6"
projects[panels_breadcrumbs][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"

projects[unique_field][version] = "1.0-rc1"
projects[unique_field][subdir] = "contrib"

projects[panelizer][version] = "2.0"
projects[panelizer][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[jquery_update][version] = "2.x-dev"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[defaultconfig][version] = "1.0-alpha9"
projects[defaultconfig][subdir] = "contrib"

projects[panels_extra_layouts][version] = "7.x-2.x-dev" ; TODO add version
projects[panels_extra_layouts][subdir] = "contrib"
projects[panels_extra_layouts][download][type] = git
projects[panels_extra_layouts][download][branch] = 7.x-2.x

; ember
projects[ember][type] = "theme"
projects[ember][version] = "1.0-alpha4"
projects[ember][subdir] = "contrib"

; responsive_bartik
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][version] = "1.x-dev"
projects[responsive_bartik][subdir] = "contrib"

; Libraries
libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][destination] = "libraries"
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.4.zip" ;


; Patches
projects[responsive_bartik][patch][] = "http://drupal.org/files/navbar-logout_link_should_not_clear_on_tablets_fixed-1853092-1.patch" ;
projects[responsive_bartik][patch][] = "http://drupal.org/files/offset-issue-1852164-3.patch" ;
