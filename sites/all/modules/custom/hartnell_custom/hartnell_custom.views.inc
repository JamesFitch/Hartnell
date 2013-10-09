<?php

function hartnell_custom_views_data() {

  $data['open_sections']['table']['group'] = t('Open Sections');

  $data['open_sections']['table']['base'] = array(
    'database' => 'hartnell.edu',
    'field' => 'SEC_ID', // This is the identifier field for the view.
    'title' => t('Open Sections'),
    'help' => t('Open Sections data.'),
    'weight' => -10,
  );


  # SEC_ID
  $data['open_sections']['SEC_ID'] = array(
    'title' => t('SEC_ID'),
    'help' => t('Section ID'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # SEC_NAME
  $data['open_sections']['SEC_NAME'] = array(
    'title' => t('SEC_NAME'),
    'help' => t('Section Name'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # SHORT_TITLE
  $data['open_sections']['SHORT_TITLE'] = array(
    'title' => t('SHORT_TITLE'),
    'help' => t('Short title'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # TERM
  $data['open_sections']['TERM'] = array(
    'title' => t('TERM'),
    'help' => t('Term'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # LOCATION
  $data['open_sections']['LOCATION'] = array(
    'title' => t('LOCATION'),
    'help' => t('Location'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # SUBJECT
  $data['open_sections']['SUBJECT'] = array(
    'title' => t('SUBJECT'),
    'help' => t('Subject'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # NO_WEEKS
  $data['open_sections']['NO_WEEKS'] = array(
    'title' => t('NO_WEEKS'),
    'help' => t('Number of weeks'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );



  # MIN_CRED
  $data['open_sections']['MIN_CRED'] = array(
    'title' => t('MIN_CRED'),
    'help' => t('Minimum credits'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # FACULTY_INFO
  $data['open_sections']['FACULTY_INFO'] = array(
    'title' => t('FACULTY_INFO'),
    'help' => t('Faculty info'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # MEETING_INFO
  $data['open_sections']['MEETING_INFO'] = array(
    'title' => t('MEETING_INFO'),
    'help' => t('Meeting info'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # OCW_STATUS
  $data['open_sections']['OCW_STATUS'] = array(
    'title' => t('OCW_STATUS'),
    'help' => t('OCW status'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # LOCAL_AVAIL
  $data['open_sections']['LOCAL_AVAIL'] = array(
    'title' => t('LOCAL_AVAIL'),
    'help' => t('Local availability'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # LOCAL_USED
  $data['open_sections']['LOCAL_USED'] = array(
    'title' => t('LOCAL_USED'),
    'help' => t('Local used'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  # COURSE_NAME
  $data['open_sections']['COURSE_NAME'] = array(
    'title' => t('COURSE_NAME'),
    'help' => t('Course name'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


    // unused fields
    // 
    /*
        # COURSE_NO
        $data['open_sections']['COURSE_NO'] = array(
          'title' => t('COURSE_NO'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # SEC_NO
        $data['open_sections']['SEC_NO'] = array(
          'title' => t('SEC_NO'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # START_DATE
        $data['open_sections']['START_DATE'] = array(
          'title' => t('START_DATE'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # END_DATE
        $data['open_sections']['END_DATE'] = array(
          'title' => t('END_DATE'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # MDAYS
        $data['open_sections']['MDAYS'] = array(
          'title' => t('MDAYS'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # MTIME
        $data['open_sections']['MTIME'] = array(
          'title' => t('MTIME'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # LOCAL_CAPACITY
        $data['open_sections']['LOCAL_CAPACITY'] = array(
          'title' => t('LOCAL_CAPACITY'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );


        # LOCAL_WAIT
        $data['open_sections']['LOCAL_WAIT'] = array(
          'title' => t('LOCAL_WAIT'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );




        # RECORD_DATETIME
        $data['open_sections']['RECORD_DATETIME'] = array(
          'title' => t('RECORD_DATETIME'),
          'help' => t('help'),
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE, // This is use by the table display plugin.
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_string',
          ),
          'argument' => array(
            'handler' => 'views_handler_argument_string',
          ),

        );

      */
  return $data;
}

