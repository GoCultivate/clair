; CLAIR make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
; using 7.x gets 7.x-dev
projects[drupal][version] = "7.26"

; Default settings 
defaults[projects][subdir] = contrib

; Modules
projects[context][version] = 3.2
projects[ctools][version] = 1.4
projects[date][version] = 2.7
; Should this module be removed?
projects[defaultconfig][version] = 1.0-alpha9
projects[devel][version] = 1.4
projects[diff][version] = 3.2
; We should really elimate dependency on dummyimage, should not be included on live site
projects[dummyimage][version] = 1.5
projects[entity][version] = 1.4
projects[entityreference][version] = 1.1
projects[features][version] = 2.0
projects[field_group][version] = 1.3
; Flags will need to be recreated if we choose to move to Flag 7.x-3.x.
projects[flag][version] = 2.2
projects[flexslider][version] = 2.0-alpha3
projects[flexslider_views_slideshow][version] = 2.x-dev
projects[fullcalendar][version] = 2.0
projects[jquery_update][version] = 2.3
projects[libraries][version] = 2.2
projects[media][version] = 1.4
projects[metatag][version] = 1.0-beta9
projects[navbar][version] = 1.4
projects[og][version] = 2.6
projects[og_menu][version] = 3.0-rc5
projects[panelizer][version] = 3.1
projects[panels][version] = 3.4
projects[panels_breadcrumbs][version] = 2.1
projects[panels_extra_layouts][version] = 2.0
projects[pathauto][version] = 1.2
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[unique_field][version] = 1.0-rc1
projects[views][version] = 3.7
projects[views_bulk_operations][version] = 3.2
projects[views_slideshow][version] = 3.1
projects[wysiwyg][version] = 2.2

; Themes
projects[ember][version] = 2.0-alpha2
projects[responsive_bartik][version] = 1.0-beta2

; Libraries
libraries[backbone][directory_name] = "backbone"
libraries[backbone][type] = "library"
libraries[backbone][download][type] = "get"
libraries[backbone][download][url] = "https://github.com/jashkenas/backbone/archive/1.0.0.zip"

libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.zip"

libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git"

libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "https://github.com/arshaw/fullcalendar/releases/download/v1.6.4/fullcalendar-1.6.4.zip"
libraries[fullcalendar][download][subtree] = "fullcalendar-1.6.4/fullcalendar"

libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

libraries[modernizr][directory_name] = "modernizr"
libraries[modernizr][type] = "library"
libraries[modernizr][download][type] = "get"
libraries[modernizr][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip"

libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://download.moxiecode.com/tinymce/tinymce_4.0.21.zip"
libraries[tinymce][download][subtree] = "tinymce/js/tinymce"

libraries[underscore][directory_name] = "underscore"
libraries[underscore][type] = "library"
libraries[underscore][download][type] = "get"
libraries[underscore][download][url] = "https://github.com/jashkenas/underscore/archive/master.zip"

; Patches
; Fix an error that causes drush site-install to blow out
projects[drupal][patch][] = https://drupal.org/files/1093420-22.patch
; enable devel module to use --since flag when drush_generate content
projects[devel][patch][] = https://drupal.org/files/devel-provide-drush-option-1560078-5.patch