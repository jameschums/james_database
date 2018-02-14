#!/bin/bash
rm -vfr data_write.* webapp_write.* layout_write.* sql_write.* index_write.* index.html data.php webapp.js layout.css *.sql
sh shawkC_sql_pagecreate.sh
sh shawkC_data_pagecreate.sh
sh shawkC_webapp_pagecreate.sh
sh shawkC_layout_pagecreate.sh
sh shawkC_index_pagecreate.sh
rm -vfr layout_write.* index_write.* webapp_write.* sql_write.* data_write.*
cat formtable.sql
echo 'now check the db and sql..in phpmyadmin'
echo '...all pages created..STOP!'
