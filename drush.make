; CLAIR make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
; using 7.x gets 7.x-dev
projects[drupal][version] = "7.26"

; Default settings 
defaults[projects][subdir] = contrib

; Modules
projects[ctools][version] = 1.2
projects[context][version] = 3.0-beta5
projects[date][version] = 2.6
projects[features][version] = 1.0
projects[entityreference][version] = 1.0
projects[flag][version] = 2.0
projects[flexslider][version] = 2.x-dev
projects[flexslider_views_slideshow][version] = 2.x-dev
projects[fullcalendar][version] = 2.0
projects[media][version] = 1.2
projects[og][version] = 2.0-beta3
projects[diff][version] = 3.2
projects[entity][version] = 1.0-rc3
projects[libraries][version] = 2.0
projects[navbar][version] = 1.0-alpha3
projects[panels_breadcrumbs][version] = 1.6
projects[pathauto][version] = 1.2
projects[strongarm][version] = 2.0
projects[token][version] = 1.4
projects[unique_field][version] = 1.0-rc1
projects[panelizer][version] = 2.0
projects[panels][version] = 3.3
projects[jquery_update][version] = 2.x-dev
projects[wysiwyg][version] = 2.2
projects[views][version] = 3.5
projects[views_bulk_operations][version] = 3.1
projects[views_slideshow][version] = 3.0
projects[defaultconfig][version] = 1.0-alpha9
projects[panels_extra_layouts][version] = 2.0
; We should really see if we can eliminate the dependencies on these modules.
; There's no reason they should be included in a live site.
projects[dummyimage][version] = 1.5

; Themes
projects[ember][version] = 1.0-alpha4
projects[responsive_bartik][version] = 1.x-dev

; Libraries
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git"

libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.4.zip"

libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"
libraries[tinymce][download][type] = "git"
libraries[tinymce][download][url] = "git://github.com/woothemes/FlexSlider.git"
	
; Patches
; Fix an error that causes drush site-install to blow out
projects[drupal][patch][] = https://drupal.org/files/1093420-22.patch
; projects[responsive_bartik][patch][] = "http://drupal.org/files/navbar-logout_link_should_not_clear_on_tablets_fixed-1"
; projects[responsive_bartik][patch][] = "http://drupal.org/files/offset-issue-1852164-3.patch"
