; Created by Darren Petersen and Dan Muzyka
core = 7.x

api = 2
projects[drupal][version] = "7.x"

; Modules

projects[addthis][subdir] = "contrib"
projects[addthis][version] = "4.0-alpha1"

projects[adaptive_image][subdir] = "contrib"
projects[adaptive_image][version] = "1.4"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.0"

projects[advanced_link][subdir] = "contrib"
projects[advanced_link][version] = "1.3"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"
projects[auto_nodetitle][patch][] = "http://localhost/assets/patches/auto_nodetitle-token-empty-value.patch"

projects[block_class][subdir] = "contrib"
projects[block_class][version] = "1.2"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.12"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.5/ckeditor_3.6.5.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

; Modules
projects[ckeditor_link][subdir] = "contrib"
projects[ckeditor_link][version] = "2.2"

projects[computed_field][subdir] = "contrib"
projects[computed_field][version] = "1.0-beta1"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta6"

projects[css3pie][subdir] = "contrib"
projects[css3pie][version] = "2.0"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0"
projects[entity][patch][] = "http://localhost/assets/patches/entity-node-access-1780646-8.patch"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.0"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha4"

projects[feeds_tamper][subdir] = "contrib"
projects[feeds_tamper][version] = "1.0-beta3"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta5"
projects[field_collection][patch][] = "http://localhost/assets/patches/field_collection_issue_1329856_1.patch"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"

projects[flexslider][subdir] = "contrib"
projects[flexslider][version] = "1.0-rc3"

projects[htmlpurifier][subdir] = "contrib"
projects[htmlpurifier][version] = "1.0"

projects[media][subdir] = "contrib"
projects[media][version] = "1.2"

projects[flag][subdir] = "contrib"
projects[flag][version] = "2.0"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/flexslider1.zip"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"

; Modules
projects[fullcalendar][subdir] = "contrib"
projects[fullcalendar][version] = "2.0"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.4.zip"
libraries[fullcalendar][download][subtree] = "fullcalendar-1.5.4/fullcalendar/"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][destination] = "libraries"

; Modules
projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[htmlpurifier][download][type] = "get"
libraries[htmlpurifier][download][url] = "http://htmlpurifier.org/releases/htmlpurifier-4.4.0-lite.zip"
libraries[htmlpurifier][directory_name] = "htmlpurifier"
libraries[htmlpurifier][type] = "library"
libraries[htmlpurifier][destination] = "libraries"

; Modules
projects[image_resize_filter][subdir] = "contrib"
projects[image_resize_filter][version] = "1.13"

projects[imce][subdir] = "contrib"
projects[imce][version] = "1.6"

projects[imce_mkdir][subdir] = "contrib"
projects[imce_mkdir][version] = "1.0"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.0"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0"

projects[login_destination][subdir] = "contrib"
projects[login_destination][version] = "1.1"

projects[mailsystem][subdir] = "contrib"
projects[mailsystem][version] = "2.34"

projects[media_vimeo][subdir] = "contrib"
projects[media_vimeo][version] = "1.0-beta5"

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = "2.0-rc1"

projects[menu_attributes][subdir] = "contrib"
projects[menu_attributes][version] = "1.0-rc2"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.3"

projects[menu_minipanels][subdir] = "contrib"
projects[menu_minipanels][version] = "1.1"

projects[mimemail][subdir] = "contrib"
projects[mimemail][version] = "1.0-alpha2"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.7"

projects[override_node_options][subdir] = "contrib"
projects[override_node_options][version] = "1.12"

projects[panelizer][subdir] = "contrib"
projects[panelizer][version] = "2.0"
projects[panelizer][patch][] = "http://localhost/assets/patches/panelizer-node-revisions-variant.patch"
projects[panelizer][patch][] = "http://localhost/assets/patches/panelizer-suppress-revisioning-for-workbench-compatibility.patch"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.3"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[pathauto_persist][subdir] = "contrib"
projects[pathauto_persist][version] = "1.3"

projects[pathologic][subdir] = "contrib"
projects[pathologic][version] = "2.10"

projects[print][subdir] = "contrib"
projects[print][version] = "1.2"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[dompdf][download][type] = "get"
libraries[dompdf][download][url] = "http://dompdf.googlecode.com/files/dompdf_0-6-0_beta3.tar.gz"
libraries[dompdf][destination] = "libraries"
libraries[dompdf][directory_name] = "dompdf"
libraries[dompdf][type] = "library"

; Modules

projects[power_menu][subdir] = "contrib"
projects[power_menu][version] = "2.0-beta1"
projects[power_menu][patch][] = "http://localhost/assets/patches/power_menu_override_path_only_for_system_menu.patch"

projects[quicktabs][subdir] = "contrib"
projects[quicktabs][version] = "3.4"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[references_dialog][subdir] = "contrib"
projects[references_dialog][version] = "1.0-alpha4"

projects[sharethis][subdir] = "contrib"
projects[sharethis][version] = "2.3"

projects[simple_gmap][subdir] = "contrib"
projects[simple_gmap][version] = "1.0"


projects[simplenews][subdir] = "contrib"
projects[simplenews][version] = "1.0"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[timefield][subdir] = "contrib"
projects[timefield][version] = "1.0-alpha2"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[jquery_timepicker][download][type] = "get"
libraries[jquery_timepicker][download][url] = "http://fgelinas.com/code/timepicker/releases/jquery-ui-timepicker-0.3.1.zip"
libraries[jquery_timepicker][destination] = "libraries"
libraries[jquery_timepicker][directory_name] = "jquery.timepicker"
libraries[jquery_timepicker][type] = "library"

projects[token][subdir] = "contrib"
projects[token][version] = "1.4"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.1"

projects[filefield_paths][subdir] = "contrib"
projects[filefield_paths][version] = "1.0-beta3"
projects[filefield_paths][patch][] = "http://localhost/assets/patches/filefield_paths-issue-1714596.patch"
projects[filefield_paths][patch][] = "http://localhost/assets/patches/filefield_paths_settings_notice-1459666-10.patch"
projects[filefield_paths][patch][] = "http://localhost/assets/patches/filefield_paths-undefined_index-1474732-13.patch"

projects[views][subdir] = "contrib"
projects[views][version] = "3.5"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.18"

projects[webform_validation][subdir] = "contrib"
projects[webform_validation][version] = "1.1"

projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.1"

projects[workbench_access][subdir] = "contrib"
projects[workbench_access][version] = "1.0"
projects[workbench_access][patch][] = "http://localhost/assets/patches/workbench_access_1187424-taxonomy-form_2.patch"
projects[workbench_access][patch][] = "http://localhost/assets/patches/workbench_access_1360734-wa-field-handling-fun_2.patch"
projects[workbench_access][patch][] = "http://localhost/assets/patches/1735382-01-Fix_node_revision_typo.patch"
projects[workbench_access][patch][] = "http://localhost/assets/patches/workbench_access_1797138-section-form-too-greedy.patch"

projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][version] = "1.2"
projects[workbench_moderation][patch][] = "http://localhost/assets/patches/workbench_moderation_main_title_display2-1781744-37.patch"

; Themes
projects[omega][version] = "3.1"

projects[omega_sl][type] = "theme"
projects[omega_sl][download][type] = "git"
projects[omega_sl][download][url] = "git@serverlogic.unfuddle.com:serverlogic/omega-sl-base.git"
projects[omega_sl][download][branch] = "master"


; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[pie][download][type] = "get"
libraries[pie][download][url] = "http://css3pie.com/download-latest"
libraries[pie][directory_name] = "pie"
libraries[pie][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"

projects[ct_event][type] = "module"
projects[ct_event][subdir] = "features"
projects[ct_event][download][type] = "git"
projects[ct_event][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ctevent.git"
projects[ct_event][download][branch] = "master"

projects[ct_external_resource][type] = "module"
projects[ct_external_resource][subdir] = "features"
projects[ct_external_resource][download][type] = "git"
projects[ct_external_resource][download][url] = "git@serverlogic.unfuddle.com:serverlogic/externalresources.git"
projects[ct_external_resource][download][branch] = "master"

projects[ctfile][type] = "module"
projects[ctfile][subdir] = "features"
projects[ctfile][download][type] = "git"
projects[ctfile][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ctfile.git"
projects[ctfile][download][branch] = "master"

projects[ct_faq][type] = "module"
projects[ct_faq][subdir] = "features"
projects[ct_faq][download][type] = "git"
projects[ct_faq][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ct-faq.git"
projects[ct_faq][download][branch] = "master"

projects[faq_landing][type] = "module"
projects[faq_landing][subdir] = "features"
projects[faq_landing][download][type] = "git"
projects[faq_landing][download][url] = "git@serverlogic.unfuddle.com:serverlogic/faq-landing.git"
projects[faq_landing][download][branch] = "master"

; sl features
projects[ct_flexpage][type] = "module"
projects[ct_flexpage][subdir] = "features"
projects[ct_flexpage][download][type] = "git"
projects[ct_flexpage][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ctpage.git"
projects[ct_flexpage][download][branch] = "master"

; sl features
projects[ct_news][type] = "module"
projects[ct_news][subdir] = "features"
projects[ct_news][download][type] = "git"
projects[ct_news][download][url] = "git@serverlogic.unfuddle.com:serverlogic/news.git"
projects[ct_news][download][branch] = "master"

projects[ct_person][type] = "module"
projects[ct_person][subdir] = "features"
projects[ct_person][download][type] = "git"
projects[ct_person][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ctperson.git"
projects[ct_person][download][branch] = "master"

projects[ct_webform][type] = "module"
projects[ct_webform][subdir] = "features"
projects[ct_webform][download][type] = "git"
projects[ct_webform][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ctwebform.git"
projects[ct_webform][download][branch] = "master"

projects[flag_content_review][type] = "module"
projects[flag_content_review][subdir] = "features"
projects[flag_content_review][download][type] = "git"
projects[flag_content_review][download][url] = "git@serverlogic.unfuddle.com:serverlogic/flagcontentreview.git"
projects[flag_content_review][download][branch] = "master"

projects[roles_permissions][type] = "module"
projects[roles_permissions][subdir] = "features"
projects[roles_permissions][download][type] = "git"
projects[roles_permissions][download][url] = "git@serverlogic.unfuddle.com:serverlogic/rolespermissions.git"
projects[roles_permissions][download][branch] = "master"

; sl features
projects[sl_dates][type] = "module"
projects[sl_dates][subdir] = "features"
projects[sl_dates][download][type] = "git"
projects[sl_dates][download][url] = "git@serverlogic.unfuddle.com:serverlogic/sldates.git"
projects[sl_dates][download][branch] = "master"

projects[sl_help][type] = "module"
projects[sl_help][subdir] = "features"
projects[sl_help][download][type] = "git"
projects[sl_help][download][url] = "git@serverlogic.unfuddle.com:serverlogic/slhelp.git"
projects[sl_help][download][branch] = "master"

projects[sldistro_boxes][type] = "module"
projects[sldistro_boxes][subdir] = "features"
projects[sldistro_boxes][download][type] = "git"
projects[sldistro_boxes][download][url] = "git@serverlogic.unfuddle.com:serverlogic/boxes.git"
projects[sldistro_boxes][download][branch] = "master"

projects[sitestructure][type] = "module"
projects[sitestructure][subdir] = "custom"
projects[sitestructure][download][type] = "git"
projects[sitestructure][download][url] = "git@serverlogic.unfuddle.com:serverlogic/sitestructure.git"
projects[sitestructure][download][branch] = "master"

projects[tax_audience][type] = "module"
projects[tax_audience][subdir] = "features"
projects[tax_audience][download][type] = "git"
projects[tax_audience][download][url] = "git@serverlogic.unfuddle.com:serverlogic/taxaudience.git"
projects[tax_audience][download][branch] = "master"

projects[tax_site_section][type] = "module"
projects[tax_site_section][subdir] = "features"
projects[tax_site_section][download][type] = "git"
projects[tax_site_section][download][url] = "git@serverlogic.unfuddle.com:serverlogic/taxsitesection.git"
projects[tax_site_section][download][branch] = "master"

projects[tax_tags][type] = "module"
projects[tax_tags][subdir] = "features"
projects[tax_tags][download][type] = "git"
projects[tax_tags][download][url] = "git@serverlogic.unfuddle.com:serverlogic/taxtags.git"
projects[tax_tags][download][branch] = "master"

projects[text_formats][type] = "module"
projects[text_formats][subdir] = "features"
projects[text_formats][download][type] = "git"
projects[text_formats][download][url] = "git@serverlogic.unfuddle.com:serverlogic/textformats.git"
projects[text_formats][download][branch] = "master"

projects[workbench_panelizer][type] = "module"
projects[workbench_panelizer][subdir] = "features"
projects[workbench_panelizer][download][type] = "git"
projects[workbench_panelizer][download][url] = "git@serverlogic.unfuddle.com:serverlogic/workbenchpanelizer.git"
projects[workbench_panelizer][download][branch] = "master"

projects[ct_slides][type] = "module"
projects[ct_slides][subdir] = "features"
projects[ct_slides][download][type] = "git"
projects[ct_slides][download][url] = "git@serverlogic.unfuddle.com:serverlogic/slides.git"
projects[ct_slides][download][branch] = "master"

projects[ct_location][type] = "module"
projects[ct_location][subdir] = "features"
projects[ct_location][download][type] = "git"
projects[ct_location][download][url] = "git@serverlogic.unfuddle.com:serverlogic/ct-location.git"
projects[ct_location][download][branch] = "master"

projects[imagestyles][type] = "module"
projects[imagestyles][subdir] = "features"
projects[imagestyles][download][type] = "git"
projects[imagestyles][download][url] = "git@serverlogic.unfuddle.com:serverlogic/imagestyles.git"
projects[imagestyles][download][branch] = "master"

