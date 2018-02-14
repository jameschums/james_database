# james_database
awk, bash scripts and some C to create database for Linux Server
I have combined other GPL codes to create an AWK and C driven automated database creation thing.
Ensure that the server has MariaDB, phpMyAdmin, GCC (C) and AWK installed.
Set up and enable http deamon, firewall, Apache Web server.
Grab css, jss and font folder from Bootstrap 3 or even Bootstrap 4 - those guys rock. 

The file formtable.txt will be read by the create5script.sh script and a webpage, sql files are autogenrated. Run everything
from /var/www/html folder. Use phpMyAdmin to build the entries for MariaDB and to use the SQL files to create database entries.

The database will handle text and numbers (ints and floats). First field is db field name (cf. SQL), second field is the text that appears in the html web-page, next is a number 1 or 0 ( 1- number types, 0 - text types), next is the SQL datatype and followed by 'NOT NULL' to help with MariaDB declarations. 

Once you have downloaded, one merely uses the create5script and read database information from the file formtable.txt. 

#sh create5script.sh

14-FEB-2018 18:32 Somerset,UK.
