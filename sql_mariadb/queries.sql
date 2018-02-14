USE scrudex2;
DROP TABLE IF EXISTS `it_recordies`;

CREATE TABLE `it_recordies` (
  `tbl_index` INT(11) unsigned NOT NULL auto_increment,
  `rank` INT(11) unsigned NOT NULL,
  `materiomics_name` VARCHAR(255) NOT NULL,
  `industries` VARCHAR(255) NOT NULL,
  `revenue` FLOAT(9,2) NOT NULL,
  `project_year` YEAR(4) NOT NULL,
  `employees` INT(11) unsigned NOT NULL,
  `market_cap` FLOAT(9,2) NOT NULL,
  `headquarters` DATE NOT NULL,
  PRIMARY KEY  (`tbl_index`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

INSERT INTO `it_recordies` (`tbl_index`, `rank`, `materiomics_name`, `industries`, `revenue`, `project_year`, `employees`, `market_cap`, `headquarters`)
VALUES
  (1,1,'Samsung Electronics','Mobile Devices, Semiconductor, Personal Computing',212.68,'2013',326000,137.91,"2017-03-14"),
  (2,2,'Apple Inc.','Mobile Devices, Personal Computing, Consumer software',182.79,'2014',98000,616.59,"2017-03-15");

