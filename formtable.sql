 CREATE DATABASE IF NOT EXISTS `jamesdbtest`; 
 USE `jamesdbtest`; 
 DROP TABLE IF EXISTS `sillytest`; 
  
 CREATE TABLE `sillytest` ( 
   `indexoftable` INT(11) unsigned NOT NULL auto_increment, 
   `scores` INT(11) unsigned NOT NULL, 
   `textinform_name` VARCHAR(255) NOT NULL, 
   `Brexit` VARCHAR(255) NOT NULL, 
   `topchip` INT(11) unsigned NOT NULL, 
   `screening_year` YEAR(4) NOT NULL, 
   `flowers` INT(11) unsigned NOT NULL, 
   `roses` INT(11) unsigned NOT NULL, 
   `daffodills` INT(11) unsigned  NOT NULL, 
   `vase` DATE NOT NULL, 
   `gilson_mouse` VARCHAR(255) NOT NULL, 
   `gilson_cow` VARCHAR(255) NOT NULL, 
   `pipettes` FLOAT(9,3) NOT NULL, 
   PRIMARY KEY  (`indexoftable`) 
 ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
  
