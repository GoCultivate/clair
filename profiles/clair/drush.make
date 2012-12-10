; CLAIR make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.x"

; Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc2"
projects[profiler_builder][subdir] = "contrib"

projects[navbar][version] = "1.0-alpha3"
projects[navbar][subdir] = "contrib"
projects[navbar][patch][] = "http://drupal.org/files/offset-issue-1852164-3.patch"

projects[panels_breadcrumbs][version] = "1.6"
projects[panels_breadcrumbs][subdir] = "contrib"

projects[panelizer][version] = "2.0"
projects[panelizer][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[jquery_update][version] = "2.x-dev"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"


; Themes
; responsive_bartik
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][version] = "1.x-dev"
projects[responsive_bartik][subdir] = "contrib"


