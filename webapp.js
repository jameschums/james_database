   $(document).ready(function(){   
        
     // On page load: datatable   
     var table_recordies = $('#table_recordies').dataTable({ 
       "ajax": "data.php?job=get_recordies",   
       "columns": [   
         { "data": "scores" },   
         { "data": "textinform_name",   "sClass": "textinform_name" }, 
         { "data": "brexit" },   
         { "data": "dalek" },   
         { "data": "screening_year" },   
         { "data": "flowers" },   
         { "data": "roses" },   
         { "data": "daffodills" },   
         { "data": "vase" },   
         { "data": "gilson_mouse" },   
         { "data": "gilson_cow" },   
         { "data": "pipettes" },   
         { "data": "functions",      "sClass": "functions" }   
       ],   
       "aoColumnDefs": [   
         { "bSortable": false, "aTargets": [-1] }   
       ],   
       "lengthMenu": [[10, 25, 50, 100, -1], [10, 25, 50, 100, "All"]],   
       "oLanguage": {   
         "oPaginate": {   
           "sFirst":       " ",   
           "sPrevious":    " ",   
           "sNext":        " ",   
           "sLast":        " ",   
         },   
         "sLengthMenu":    "Records per page: _MENU_",   
         "sInfo":          "Total of _TOTAL_ records (showing _START_ to _END_)",   
         "sInfoFiltered":  "(filtered from _MAX_ total records)"   
       }   
     });   
        
     // On page load: form validation   
     jQuery.validator.setDefaults({   
       success: 'valid',   
       rules: {   
         james_removed: {   
           required: true,   
           min:      1950,   
           max:      2025   
         }   
       },   
       errorPlacement: function(error, element){   
         error.insertBefore(element);   
       },   
       highlight: function(element){   
         $(element).parent('.field_container').removeClass('valid').addClass('error');   
       },   
       unhighlight: function(element){   
         $(element).parent('.field_container').addClass('valid').removeClass('error');   
       }   
     });   
     var form_record = $('#form_record');   
     form_record.validate();   
      
     // Show message   
     function show_message(message_text, message_type){   
       $('#message').html('<p>' + message_text + '</p>').attr('class', message_type);   
       $('#message_container').show();   
       if (typeof timeout_message !== 'undefined'){   
         window.clearTimeout(timeout_message);   
       }   
       timeout_message = setTimeout(function(){   
         hide_message();   
       }, 8000);   
     }   
     // Hide message   
     function hide_message(){   
       $('#message').html('').attr('class', '');   
       $('#message_container').hide();   
     }   
      
     // Show loading message   
     function show_loading_message(){   
       $('#loading_container').show();   
     }   
     // Hide loading message   
     function hide_loading_message(){   
       $('#loading_container').hide();   
     }   
      
     // Show lightbox   
     function show_lightbox(){   
       $('.lightbox_bg').show();   
       $('.lightbox_container').show();   
     }   
     // Hide lightbox   
     function hide_lightbox(){   
       $('.lightbox_bg').hide();   
       $('.lightbox_container').hide();   
     }   
     // Lightbox background   
     $(document).on('click', '.lightbox_bg', function(){   
       hide_lightbox();   
     });   
     // Lightbox close button   
     $(document).on('click', '.lightbox_close', function(){   
       hide_lightbox();   
     });   
     // Escape keyboard key   
     $(document).keyup(function(e){   
       if (e.keyCode == 27){   
         hide_lightbox();   
       }   
     });   
        
     // Hide iPad keyboard   
     function hide_ipad_keyboard(){   
       document.activeElement.blur();   
       $('input').blur();   
     }   
      
     // Add record button   
     $(document).on('click', '#add_record', function(e){   
       e.preventDefault();   
       $('.lightbox_content h2').text('Add record');   
       $('#form_record button').text('Add record');   
       $('#form_record').attr('class', 'form add');   
       $('#form_record').attr('data-id', '');   
       $('#form_record .field_container label.error').hide();   
       $('#form_record .field_container').removeClass('valid').removeClass('error');   
       $('#form_record #scores').val('');   
       $('#form_record #textinform_name').val('');   
       $('#form_record #brexit').val('');   
       $('#form_record #dalek').val('');   
       $('#form_record #screening_year').val('');   
       $('#form_record #flowers').val('');   
       $('#form_record #roses').val('');   
       $('#form_record #daffodills').val('');   
       $('#form_record #vase').val('');   
       $('#form_record #gilson_mouse').val('');   
       $('#form_record #gilson_cow').val('');   
       $('#form_record #pipettes').val('');   
       show_lightbox();   
     });   
      
     // Add record submit form   
     $(document).on('submit', '#form_record.add', function(e){   
       e.preventDefault();   
       // Validate form   
       if (form_record.valid() == true){   
         // Send record information to database   
         hide_ipad_keyboard();   
         hide_lightbox();   
         show_loading_message();   
         var form_data = $('#form_record').serialize();   
         var request   = $.ajax({   
           url:          'data.php?job=add_record',   
           cache:        false,   
           data:         form_data,   
           dataType:     'json',   
           contentType:  'application/json; charset=utf-8',   
           type:         'get'   
         });   
         request.done(function(output){   
           if (output.result == 'success'){   
             // Reload datable   
             table_recordies.api().ajax.reload(function(){   
               hide_loading_message();   
               var textinform_name = $('#textinform_name').val();   
               show_message("Record '" + textinform_name + "' added successfully.", 'success');   
             }, true);   
           } else {   
             hide_loading_message();   
             show_message('Add request failed', 'error');   
           }   
         });   
         request.fail(function(jqXHR, textStatus){   
           hide_loading_message();   
           show_message('Add request failed: ' + textStatus, 'error');   
         });   
       }   
     });   
      
     // Edit record button   
     $(document).on('click', '.function_edit a', function(e){   
       e.preventDefault();   
       // Get record information from database   
       show_loading_message();   
       var id      = $(this).data('id');   
       var request = $.ajax({   
         url:          'data.php?job=get_record',   
         cache:        false,   
         data:         'id=' + id,   
         dataType:     'json',   
         contentType:  'application/json; charset=utf-8',   
         type:         'get'   
       });   
       request.done(function(output){   
         if (output.result == 'success'){   
           $('.lightbox_content h2').text('Edit Record');   
           $('#form_record button').text('Edit Record');   
           $('#form_record').attr('class', 'form edit');   
           $('#form_record').attr('data-id', id);   
           $('#form_record .field_container label.error').hide();   
           $('#form_record .field_container').removeClass('valid').removeClass('error');   
           $('#form_record #scores').val(output.data[0].scores);   
           $('#form_record #textinform_name').val(output.data[0].textinform_name);   
           $('#form_record #brexit').val(output.data[0].brexit);   
           $('#form_record #dalek').val(output.data[0].dalek);   
           $('#form_record #screening_year').val(output.data[0].screening_year);   
           $('#form_record #flowers').val(output.data[0].flowers);   
           $('#form_record #roses').val(output.data[0].roses);   
           $('#form_record #daffodills').val(output.data[0].daffodills);   
           $('#form_record #vase').val(output.data[0].vase);   
           $('#form_record #gilson_mouse').val(output.data[0].gilson_mouse);   
           $('#form_record #gilson_cow').val(output.data[0].gilson_cow);   
           $('#form_record #pipettes').val(output.data[0].pipettes);   
           hide_loading_message();   
           show_lightbox();   
         } else {   
           hide_loading_message();   
           show_message('Information request failed', 'error');   
         }   
       });   
       request.fail(function(jqXHR, textStatus){   
         hide_loading_message();   
         show_message('Information request failed: ' + textStatus, 'error');   
       });   
     });   
        
     // Edit record submit form   
     $(document).on('submit', '#form_record.edit', function(e){   
       e.preventDefault();   
       // Validate form   
       if (form_record.valid() == true){   
         // Send record information to database   
         hide_ipad_keyboard();   
         hide_lightbox();   
         show_loading_message();   
         var id        = $('#form_record').attr('data-id');   
         var form_data = $('#form_record').serialize();   
         var request   = $.ajax({   
           url:          'data.php?job=edit_record&id=' + id,   
           cache:        false,   
           data:         form_data,   
           dataType:     'json',   
           contentType:  'application/json; charset=utf-8',   
           type:         'get'   
         });   
         request.done(function(output){   
           if (output.result == 'success'){   
             // Reload datable   
             table_recordies.api().ajax.reload(function(){   
               hide_loading_message();   
               var textinform_name = $('#textinform_name').val();   
               show_message("Record '" + textinform_name + "' edited successfully.", 'success');   
             }, true);   
           } else {   
             hide_loading_message();   
             show_message('Edit request failed', 'error');   
           }   
         });   
         request.fail(function(jqXHR, textStatus){   
           hide_loading_message();   
           show_message('Edit request failed: ' + textStatus, 'error');   
         });   
       }   
     });   
        
     // Delete record   
     $(document).on('click', '.function-delete a', function(e){   
       e.preventDefault();   
       var textinform_name = $(this).data('name');   
       if (confirm("Are you sure you want to delete, data deletion is permanent '" + textinform_name + "'?")){   
         show_loading_message();   
         var id      = $(this).data('id');   
         var request = $.ajax({   
           url:          'data.php?job=delete_record&id=' + id,   
           cache:        false,   
           dataType:     'json',   
           contentType:  'application/json; charset=utf-8',   
           type:         'get'   
         });   
         request.done(function(output){   
           if (output.result == 'success'){   
             // Reload datable   
             table_recordies.api().ajax.reload(function(){   
               hide_loading_message();   
               show_message("Record '" + textinform_name + "' deleted successfully.", 'success');   
             }, true);   
           } else {   
             hide_loading_message();   
             show_message('Delete request failed', 'error');   
           }   
         });   
         request.fail(function(jqXHR, textStatus){   
           hide_loading_message();   
           show_message('Delete request failed: ' + textStatus, 'error');   
         });   
       }   
     });   
      
   });   
