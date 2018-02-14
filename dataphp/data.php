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
   $db_name     = 'scrudex2'; 
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
  $query = "SELECT * FROM it_recordies ORDER BY rank"; 
      $query = mysqli_query($db_connection, $query);  
      if (!$query){  
        $result  = 'error';  
        $message = 'query error';  
      } else {  
        $result  = 'success';  
        $message = 'query success';  
        while ($record = mysqli_fetch_array($query)){  
          $functions  = '<div class="function_buttons"><ul>'; 
	 
 $functions .= '<li class="function_edit"><a data-id="' . $record['tbl_index'] . '" data-name="' . $record['materiomics_name'] . '"><span>Edit</span></a></li>'; 
 $functions .= '<li class="function_delete"><a data-id="' . $record['tbl_index'] . '" data-name="' . $record['materiomics_name'] . '"><span>Delete</span></a></li>'; 
          $functions .= '</ul></div>';   
          $mysql_data[] = array(  
            "rank"          => $record['rank'], 
            "materiomics_name"          => $record['materiomics_name'], 
            "industries"          => $record['industries'], 
            "revenue"          => $record['revenue'], 
            "project_year"          => $record['project_year'], 
            "employees"          => $record['employees'], 
            "market_cap"          => $record['market_cap'], 
            "headquarters"          => $record['headquarters'], 
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
        $query = "SELECT * FROM it_recordies WHERE tbl_index = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
        $query = mysqli_query($db_connection, $query);  
        if (!$query){  
          $result  = 'error';   
          $message = 'query error';   
        } else {   
          $result  = 'success';   
          $message = 'query success';   
          while ($record = mysqli_fetch_array($query)){   
            $mysql_data[] = array(   
     "rank" => $record['rank'], 
     "materiomics_name" => $record['materiomics_name'], 
     "industries" => $record['industries'], 
     "revenue" => $record['revenue'], 
     "project_year" => $record['project_year'], 
     "employees" => $record['employees'], 
     "market_cap" => $record['market_cap'], 
     "headquarters" => $record['headquarters'] 
            ); 
          }  
        }  
      }  
      
    } elseif ($job == 'add_record'){  
        
      // Add record  
      $query = "INSERT INTO it_recordies SET "; 
      if (isset($_GET['rank'])) { $query .= "rank = '" . mysqli_real_escape_string($db_connection, $_GET['rank']) . "', "; } 
      if (isset($_GET['materiomics_name'])) { $query .= "materiomics_name = '" . mysqli_real_escape_string($db_connection, $_GET['materiomics_name']) . "', "; } 
      if (isset($_GET['industries'])) { $query .= "industries = '" . mysqli_real_escape_string($db_connection, $_GET['industries']) . "', "; } 
      if (isset($_GET['revenue'])) { $query .= "revenue = '" . mysqli_real_escape_string($db_connection, $_GET['revenue']) . "', "; } 
      if (isset($_GET['project_year'])) { $query .= "project_year = '" . mysqli_real_escape_string($db_connection, $_GET['project_year']) . "', "; } 
      if (isset($_GET['employees'])) { $query .= "employees = '" . mysqli_real_escape_string($db_connection, $_GET['employees']) . "', "; } 
      if (isset($_GET['market_cap'])) { $query .= "market_cap = '" . mysqli_real_escape_string($db_connection, $_GET['market_cap']) . "', "; } 
      if (isset($_GET['headquarters'])) { $query .= "headquarters = '" . mysqli_real_escape_string($db_connection, $_GET['headquarters']) . "'";   }  
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
        $query = "UPDATE it_recordies SET ";   
  if (isset($_GET['rank'])) { $query .= "rank = '" . mysqli_real_escape_string($db_connection, $_GET['rank']) . "', "; } 
  if (isset($_GET['materiomics_name'])) { $query .= "materiomics_name = '" . mysqli_real_escape_string($db_connection, $_GET['materiomics_name']) . "', "; } 
  if (isset($_GET['industries'])) { $query .= "industries = '" . mysqli_real_escape_string($db_connection, $_GET['industries']) . "', "; } 
  if (isset($_GET['revenue'])) { $query .= "revenue = '" . mysqli_real_escape_string($db_connection, $_GET['revenue']) . "', "; } 
  if (isset($_GET['project_year'])) { $query .= "project_year = '" . mysqli_real_escape_string($db_connection, $_GET['project_year']) . "', "; } 
  if (isset($_GET['employees'])) { $query .= "employees = '" . mysqli_real_escape_string($db_connection, $_GET['employees']) . "', "; } 
  if (isset($_GET['market_cap'])) { $query .= "market_cap = '" . mysqli_real_escape_string($db_connection, $_GET['market_cap']) . "', "; } 
  if (isset($_GET['headquarters'])) { $query .= "headquarters = '" . mysqli_real_escape_string($db_connection, $_GET['headquarters']) . "'";   }   
        $query .= "WHERE tbl_index = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
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
        $query = "DELETE FROM it_recordies WHERE tbl_index = '" . mysqli_real_escape_string($db_connection, $id) . "'";   
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
