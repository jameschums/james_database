 <?php session_start(); ?> 
  
 <?php 
 if(!isset($_SESSION['valid']))  
 { 
  header('Location: /dbs/login.php'); 
 } 
 ?> 
  
   <?php   
   // Database details   
   $db_server   = 'localhost';   
   $db_username = 'root';   
   $db_password = 'Fox8eel';   
   $db_name     = 'jamesdbtest'; 
   // Get job (and id)   
   $job = '';   
   $id  = '';   
   if (isset($_GET['job'])){   
     $job = $_GET['job'];   
     if ($job == 'get_recordies' ||   
         $job == 'get_record'   ||   
         $job == 'add_record'   ||   
         $job == 'edit_record'  ||   
         $job == 'delete_record'){   
       if (isset($_GET['id'])){   
         $id = $_GET['id'];   
         if (!is_numeric($id)){   
           $id = '';   
         }   
       }   
     } else {   
       $job = '';   
     }   
   }   
   // Prepare array   
   $mysql_data = array();   
   // Valid job found   
   if ($job != ''){   
        
     // Connect to database   
     $db_connection = mysqli_connect($db_server, $db_username, $db_password, $db_name);   
     if (mysqli_connect_errno()){   
       $result  = 'error';   
       $message = 'Failed to connect to database: ' . mysqli_connect_error();   
       $job     = '';   
     }   
        
     // Execute job   
     if ($job == 'get_recordies'){   
          
       // Get recordies 
  $query = "SELECT * FROM sillytest ORDER BY scores"; 
      $query = mysqli_query($db_connection, $query);  
      if (!$query){  
        $result  = 'error';  
        $message = 'query error';  
      } else {  
        $result  = 'success';  
        $message = 'query success';  
        while ($record = mysqli_fetch_array($query)){  
          $functions  = '<div class="function_buttons"><ul>'; 
	 
 $functions .= '<li class="function_edit"><a data-id="' . $record['indexoftable'] . '" data-name="' . $record['textinform_name'] . '"><span>Edit</span></a></li>'; 
 $functions .= '<li class="function_delete"><a data-id="' . $record['indexoftable'] . '" data-name="' . $record['textinform_name'] . '"><span>Delete</span></a></li>'; 
          $functions .= '</ul></div>';   
          $mysql_data[] = array(  
            "scores"          => $record['scores'], 
            "textinform_name"          => $record['textinform_name'], 
            "Brexit"          => $record['Brexit'], 
            "dalek"          => $record['dalek'], 
            "screening_year"          => $record['screening_year'], 
            "flowers"          => $record['flowers'], 
            "roses"          => $record['roses'], 
            "daffodills"          => $record['daffodills'], 
            "vase"          => $record['vase'], 
            "gilson_mouse"          => $record['gilson_mouse'], 
            "gilson_cow"          => $record['gilson_cow'], 
            "pipettes"          => $record['pipettes'], 
            "functions"     => $functions  
          );  
        }  
      }   
   
    } elseif ($job == 'get_record'){   
   
      // Get record   
      if ($id == ''){   
        $result  = 'error';   
        $message = 'id missing';   
      } else {   
        $query = "SELECT * FROM sillytest WHERE indexoftable = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
        $query = mysqli_query($db_connection, $query);  
        if (!$query){  
          $result  = 'error';   
          $message = 'query error';   
        } else {   
          $result  = 'success';   
          $message = 'query success';   
          while ($record = mysqli_fetch_array($query)){   
            $mysql_data[] = array(   
     "scores" => $record['scores'], 
     "textinform_name" => $record['textinform_name'], 
     "Brexit" => $record['Brexit'], 
     "dalek" => $record['dalek'], 
     "screening_year" => $record['screening_year'], 
     "flowers" => $record['flowers'], 
     "roses" => $record['roses'], 
     "daffodills" => $record['daffodills'], 
     "vase" => $record['vase'], 
     "gilson_mouse" => $record['gilson_mouse'], 
     "gilson_cow" => $record['gilson_cow'], 
     "pipettes" => $record['pipettes'] 
            ); 
          }  
        }  
      }  
      
    } elseif ($job == 'add_record'){  
        
      // Add record  
      $query = "INSERT INTO sillytest SET "; 
      if (isset($_GET['scores'])) { $query .= "scores = '" . mysqli_real_escape_string($db_connection, $_GET['scores']) . "', "; } 
      if (isset($_GET['textinform_name'])) { $query .= "textinform_name = '" . mysqli_real_escape_string($db_connection, $_GET['textinform_name']) . "', "; } 
      if (isset($_GET['Brexit'])) { $query .= "Brexit = '" . mysqli_real_escape_string($db_connection, $_GET['Brexit']) . "', "; } 
      if (isset($_GET['dalek'])) { $query .= "dalek = '" . mysqli_real_escape_string($db_connection, $_GET['dalek']) . "', "; } 
      if (isset($_GET['screening_year'])) { $query .= "screening_year = '" . mysqli_real_escape_string($db_connection, $_GET['screening_year']) . "', "; } 
      if (isset($_GET['flowers'])) { $query .= "flowers = '" . mysqli_real_escape_string($db_connection, $_GET['flowers']) . "', "; } 
      if (isset($_GET['roses'])) { $query .= "roses = '" . mysqli_real_escape_string($db_connection, $_GET['roses']) . "', "; } 
      if (isset($_GET['daffodills'])) { $query .= "daffodills = '" . mysqli_real_escape_string($db_connection, $_GET['daffodills']) . "', "; } 
      if (isset($_GET['vase'])) { $query .= "vase = '" . mysqli_real_escape_string($db_connection, $_GET['vase']) . "', "; } 
      if (isset($_GET['gilson_mouse'])) { $query .= "gilson_mouse = '" . mysqli_real_escape_string($db_connection, $_GET['gilson_mouse']) . "', "; } 
      if (isset($_GET['gilson_cow'])) { $query .= "gilson_cow = '" . mysqli_real_escape_string($db_connection, $_GET['gilson_cow']) . "', "; } 
      if (isset($_GET['pipettes'])) { $query .= "pipettes = '" . mysqli_real_escape_string($db_connection, $_GET['pipettes']) . "'";   }  
      $query = mysqli_query($db_connection, $query);   
      if (!$query){   
        $result  = 'error';   
        $message = 'query error';   
      } else {   
        $result  = 'success';   
        $message = 'query success';   
      }   
       
    } elseif ($job == 'edit_record'){   
         
      // Edit record   
      if ($id == ''){   
        $result  = 'error';   
        $message = 'id missing';   
      } else {   
        $query = "UPDATE sillytest SET ";   
  if (isset($_GET['scores'])) { $query .= "scores = '" . mysqli_real_escape_string($db_connection, $_GET['scores']) . "', "; } 
  if (isset($_GET['textinform_name'])) { $query .= "textinform_name = '" . mysqli_real_escape_string($db_connection, $_GET['textinform_name']) . "', "; } 
  if (isset($_GET['Brexit'])) { $query .= "Brexit = '" . mysqli_real_escape_string($db_connection, $_GET['Brexit']) . "', "; } 
  if (isset($_GET['dalek'])) { $query .= "dalek = '" . mysqli_real_escape_string($db_connection, $_GET['dalek']) . "', "; } 
  if (isset($_GET['screening_year'])) { $query .= "screening_year = '" . mysqli_real_escape_string($db_connection, $_GET['screening_year']) . "', "; } 
  if (isset($_GET['flowers'])) { $query .= "flowers = '" . mysqli_real_escape_string($db_connection, $_GET['flowers']) . "', "; } 
  if (isset($_GET['roses'])) { $query .= "roses = '" . mysqli_real_escape_string($db_connection, $_GET['roses']) . "', "; } 
  if (isset($_GET['daffodills'])) { $query .= "daffodills = '" . mysqli_real_escape_string($db_connection, $_GET['daffodills']) . "', "; } 
  if (isset($_GET['vase'])) { $query .= "vase = '" . mysqli_real_escape_string($db_connection, $_GET['vase']) . "', "; } 
  if (isset($_GET['gilson_mouse'])) { $query .= "gilson_mouse = '" . mysqli_real_escape_string($db_connection, $_GET['gilson_mouse']) . "', "; } 
  if (isset($_GET['gilson_cow'])) { $query .= "gilson_cow = '" . mysqli_real_escape_string($db_connection, $_GET['gilson_cow']) . "', "; } 
  if (isset($_GET['pipettes'])) { $query .= "pipettes = '" . mysqli_real_escape_string($db_connection, $_GET['pipettes']) . "'";   }   
        $query .= "WHERE indexoftable = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
        $query  = mysqli_query($db_connection, $query);   
        if (!$query){   
          $result  = 'error';   
          $message = 'query error';   
        } else {   
          $result  = 'success';   
          $message = 'query success';   
        }   
      }   
         
    } elseif ($job == 'delete_record'){   
       
      // Delete record   
      if ($id == ''){   
        $result  = 'error';   
        $message = 'id missing';   
      } else {   
        $query = "DELETE FROM sillytest WHERE indexoftable = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
        $query = mysqli_query($db_connection, $query);   
        if (!$query){   
          $result  = 'error';   
          $message = 'query error';   
        } else {   
          $result  = 'success';   
          $message = 'query success';   
        }   
      }   
       
    }   
       
    // Close database connection   
    mysqli_close($db_connection);   
  }   
  // Prepare data   
  $data = array(   
    "result"  => $result,   
    "message" => $message,   
    "data"    => $mysql_data   
  );   
  // Convert PHP array to JSON array   
  $json_data = json_encode($data);   
  print $json_data;   
  ?>  
