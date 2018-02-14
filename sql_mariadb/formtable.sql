 USE `scrudex2`; 
 DROP TABLE IF EXISTS `it_recordies`; 
  
 CREATE TABLE `it_recordies` ( 
   `tbl_index` INT(11) unsigned NOT NULL auto_increment, 
   `rank` INT(11) unsigned NOT NULL, 
   `materiomics_name` VARCHAR(255) NOT NULL, 
   `industries` VARCHAR(255) NOT NULL, 
   `revenue` FLOAT(9, 
   `project_year` YEAR(4) NOT NULL, 
   `employees` INT(11) unsigned NOT NULL, 
   `market_cap` FLOAT(9, 
   `headquarters` DATE NOT NULL, 
   PRIMARY KEY  (`tbl_index`) 
 ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
  
