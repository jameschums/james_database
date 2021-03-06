#!/bin/bash
# ls -1 *.tif | awk 'BEGIN {count=0}{count++;}{printf "%d %s\n",count,$1}END{printf "end and total %d\n",count}'
rm -fr data_write.c data.php data_write.run data_php.c
printf "\057\052 create all pages for db menu and tables edit \052\057\n" >> data_write.c
printf "\057\052 compile gcc data_write.c -o data_write.run -Wall \052\057\n" >> data_write.c
printf "\043include <stdlib.h> \n" >> data_write.c
printf "\043include <string.h> \n" >> data_write.c
printf "\043include <stdio.h> \n"  >> data_write.c
printf "int main \050\051\n" >> data_write.c
printf "{\n" >> data_write.c
printf "\n" >>  data_write.c
awk 'BEGIN {FS=","}{printf "\057\052processing formtable %d of %d of %d\052\057\n",NR,NF,FNR}END{printf " int tablenummer = %d\073\n int i = 0\073\n",NR}' formtable.txt >> data_write.c
printf "char ** dbsql_ptr = NULL\073\n" >> data_write.c 
awk 'BEGIN {FS=","}{printf "char \052 dbsql_%d = \042%s\042\073\n",(NR-1),$1}' formtable.txt >> data_write.c
printf "\n" >> data_write.c
printf "dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> data_write.c
printf "\n" >> data_write.c
awk 'BEGIN {FS=","}{printf "dbsql_ptr[%d] = dbsql_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$1} END {printf "\n"}' formtable.txt >> data_write.c
printf "if (dbsql_ptr == NULL)\n" >> data_write.c
printf "{\n" >> data_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> data_write.c
printf " return 1\073\n" >> data_write.c
printf "}\n" >> data_write.c
printf "\n" >> data_write.c
printf "char ** disply_ptr = NULL\073\n" >> data_write.c 
awk 'BEGIN {FS="," }{printf "char \052 disply_%d = \042%s\042\073\n",(NR-1),$2}' formtable.txt >> data_write.c
printf "\n" >> data_write.c
printf "disply_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> data_write.c
printf "\n" >> data_write.c
awk 'BEGIN {FS="," }{printf "disply_ptr[%d] = disply_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$2} END {printf "\n"}' formtable.txt >> data_write.c
printf "\n" >> data_write.c
printf "if (disply_ptr == NULL)\n" >> data_write.c
printf "{\n" >> data_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> data_write.c
printf " return 1\073\n" >> data_write.c
printf "}\n" >> data_write.c
printf "\n" >> data_write.c
printf "\n" >> data_write.c
printf "int wdtype\133\135 \075 \173" >> data_write.c 
awk 'BEGIN {FS=","}{printf "%d\054",$3}END{printf "\175\073\n"}' formtable.txt >> data_write.c
sed -i 's|,};|};|g' data_write.c
printf "\n" >> data_write.c
printf "now create C code from data.php file..\n"
cp std_data.php data_php.c
sed -i 's|\\|\\134|g' data_php.c
sed -i 's|\/|\\057|g' data_php.c
sed -i 's|\\057134|\\134|g' data_php.c
sed -i 's|\\134057|\\057|g' data_php.c
sed -i 's/>/\\076/g' data_php.c
sed -i 's/!/\\041/g' data_php.c 
sed -i 's/"/\\042/g' data_php.c  
sed -i 's/#/\\043/g' data_php.c 
sed -i 's/\$/\\044/g' data_php.c 
sed -i 's/\%/\\045\\045/g' data_php.c 
sed -i 's/&/\\046/g' data_php.c 
sed -i 's/(/\\050/g' data_php.c 
sed -i 's/)/\\051/g' data_php.c 
sed -i 's/*/\\052/g' data_php.c 
sed -i 's/+/\\053/g' data_php.c 
sed -i 's/,/\\054/g' data_php.c 
sed -i 's/-/\\055/g' data_php.c 
sed -i 's/\./\\056/g' data_php.c 
sed -i 's/:/\\072/g' data_php.c 
sed -i 's/;/\\073/g' data_php.c 
sed -i 's/</\\074/g' data_php.c 
sed -i 's/=/\\075/g' data_php.c  
sed -i 's/?/\\077/g' data_php.c 
sed -i 's/@/\\100/g' data_php.c 
sed -i 's/\[/\\133/g' data_php.c 
sed -i 's/]/\\135/g' data_php.c 
sed -i -e 's/\^/\\136/g' data_php.c 
#sed -i 's/_/\\137/g' data_php.c 
sed -i 's/{/\\173/g' data_php.c 
sed -i 's/|/\\174/g' data_php.c 
sed -i 's/}/\\175/g' data_php.c 
sed -i 's/~/\\176/g' data_php.c 
sed -i "s/'/\\\047/g" data_php.c
sed -i 's/$/ \\n"); /' data_php.c
sed -i 's/^/fprintf (datacode, " /' data_php.c
sed -i '1s/^/\FILE \* datacode\;\n/' data_php.c
sed -i '2s/^/\ datacode \= fopen \(\"data.php\"\,\"a\"\)\;\n/' data_php.c
printf " fclose \050datacode\051\073 \n" >> data_php.c
printf "free (dbsql_ptr)\073\n" >> data_php.c
printf "dbsql_ptr = NULL\073\n" >> data_php.c
printf "free (disply_ptr)\073\n" >> data_php.c 
printf "disply_ptr = NULL\073\n" >> data_php.c
printf "return 0\073\n" >> data_php.c 
printf "}\n" >> data_php.c 
cat data_php.c >> data_write.c
printf "now compile data_write.c\n"
gcc data_write.c -o data_write.run -Wall
./data_write.run
printf "end of script and compilation...\n"
# echo ' will now destroy delete-icon function with a sed command..'
# sed -i 's|function_delete|function-delete|g' webapp.js
# echo 'now change index page tab and index.html title ...'
# sed -i 's|axaxaxaxaxaxa|webtag|g' index.html
# sed -i 's|bxbxbxbxbxbxbxb|webpagetitle|g' index.html
echo '...stop...'
