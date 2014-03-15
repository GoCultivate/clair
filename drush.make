; CLAIR make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.x"

; Get the CLAIR profile (which includes the CLAIR modules).
libraries[clair][download][type] = "git"
libraries[clair][download][url] = "https://github.com/mraichelson/clair.git"
libraries[clair][download][destination] = "profiles"

; Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta5"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

; projects[coder][version] = "1.2"
; projects[coder][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[flag][version] = "2.0"
projects[flag][subdir] = "contrib"

projects[flexslider][version] = "2.x-dev"
projects[flexslider][subdir] = "contrib"

projects[fullcalendar][version] = "2.0"
projects[fullcalendar][subdir] = "contrib"

projects[media][version] = "1.2"
projects[media][subdir] = "contrib"

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

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"

projects[defaultconfig][version] = "1.0-alpha9"
projects[defaultconfig][subdir] = "contrib"

projects[panels_extra_layouts][version] = "2.x-dev";
projects[panels_extra_layouts][subdir] = "contrib"

; Themes
;
; projects[][type] = "theme"
; projects[][version] = "7.17"
; projects[][subdir] = "contrib"
; ember
projects[ember][type] = "theme"
projects[ember][version] = "1.0-alpha4"
projects[ember][subdir] = "contrib"
; responsive_bartik
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][version] = "1.x-dev"
projects[responsive_bartik][subdir] = "contrib"

; Libraries
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][destination] = "sites/all/libraries"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git" ;

libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][destination] = "sites/all/libraries"
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.4.zip" ;

libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][destination] = "sites/all/libraries"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js" ;

libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"
libraries[profiler][destination] = "sites/all/libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"

libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"
libraries[tinymce][destination] = "sites/all/libraries"
libraries[tinymce][download][type] = "git"
libraries[tinymce][download][url] = "git://github.com/woothemes/FlexSlider.git" ;


; Patches
; projects[responsive_bartik][patch][] = "http://drupal.org/files/navbar-logout_link_should_not_clear_on_tablets_fixed-1" ;
projects[responsive_bartik][patch][] = "http://drupal.org/files/offset-issue-1852164-3.patch" ;
