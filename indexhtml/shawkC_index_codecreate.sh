#!/bin/bash
# ls -1 *.tif | awk 'BEGIN {count=0}{count++;}{printf "%d %s\n",count,$1}END{printf "end and total %d\n",count}'
rm -fr index_write.c index.html index_write.run
printf "\057\052 create all pages for db menu and tables edit \052\057\n" >> index_write.c
printf "\057\052 compile gcc index_write.c -o index_write.run -Wall \052\057\n" >> index_write.c
printf "\043include <stdlib.h> \n" >> index_write.c
printf "\043include <string.h> \n" >> index_write.c
printf "\043include <stdio.h> \n"  >> index_write.c
printf "int main \050\051\n" >> index_write.c
printf "{\n" >> index_write.c
printf "\n" >>  index_write.c
awk 'BEGIN {FS=","}{printf "\057\052processing formtable %d of %d of %d\052\057\n",NR,NF,FNR}END{printf " int tablenummer = %d\073\n int i = 0\073\n",NR}' formtable.txt >> index_write.c
printf "char ** dbsql_ptr = NULL\073\n" >> index_write.c 
awk 'BEGIN {FS=","}{printf "char \052 dbsql_%d = \042%s\042\073\n",(NR-1),$1}' formtable.txt >> index_write.c
printf "\n" >> index_write.c
printf "dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> index_write.c
printf "\n" >> index_write.c
awk 'BEGIN {FS=","}{printf "dbsql_ptr[%d] = dbsql_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$1} END {printf "\n"}' formtable.txt >> index_write.c
printf "if (dbsql_ptr == NULL)\n" >> index_write.c
printf "{\n" >> index_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> index_write.c
printf " return 1\073\n" >> index_write.c
printf "}\n" >> index_write.c
printf "\n" >> index_write.c
printf "char ** disply_ptr = NULL\073\n" >> index_write.c 
awk 'BEGIN {FS="," }{printf "char \052 disply_%d = \042%s\042\073\n",(NR-1),$2}' formtable.txt >> index_write.c
printf "\n" >> index_write.c
printf "disply_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> index_write.c
printf "\n" >> index_write.c
awk 'BEGIN {FS="," }{printf "disply_ptr[%d] = disply_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$2} END {printf "\n"}' formtable.txt >> index_write.c
printf "\n" >> index_write.c
printf "if (disply_ptr == NULL)\n" >> index_write.c
printf "{\n" >> index_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> index_write.c
printf " return 1\073\n" >> index_write.c
printf "}\n" >> index_write.c
printf "\n" >> index_write.c
printf "\n" >> index_write.c
printf "int wdtype\133\135 \075 \173" >> index_write.c 
awk 'BEGIN {FS=","}{printf "%d\054",$3}END{printf "\175\073\n"}' formtable.txt >> index_write.c
sed -i 's|,};|};|g' index_write.c
printf "\n" >> index_write.c
printf "now create C code from index.html file..\n"
cp std_index.html index_html.c
sed -i 's|\\|\\134|g' index_html.c
sed -i 's|\/|\\057|g' index_html.c
sed -i 's|\\057134|\\134|g' index_html.c
sed -i 's|\\134057|\\057|g' index_html.c
sed -i 's/>/\\076/g' index_html.c
sed -i 's/!/\\041/g' index_html.c 
sed -i 's/"/\\042/g' index_html.c  
sed -i 's/#/\\043/g' index_html.c 
sed -i 's/\$/\\044/g' index_html.c 
sed -i 's/\%/\\045\\045/g' index_html.c 
sed -i 's/&/\\046/g' index_html.c 
sed -i 's/(/\\050/g' index_html.c 
sed -i 's/)/\\051/g' index_html.c 
sed -i 's/*/\\052/g' index_html.c 
sed -i 's/+/\\053/g' index_html.c 
sed -i 's/,/\\054/g' index_html.c 
sed -i 's/-/\\055/g' index_html.c 
sed -i 's/\./\\056/g' index_html.c 
sed -i 's/:/\\072/g' index_html.c 
sed -i 's/;/\\073/g' index_html.c 
sed -i 's/</\\074/g' index_html.c 
sed -i 's/=/\\075/g' index_html.c  
sed -i 's/?/\\077/g' index_html.c 
sed -i 's/@/\\100/g' index_html.c 
sed -i 's/\[/\\133/g' index_html.c 
sed -i 's/]/\\135/g' index_html.c 
sed -i -e 's/\^/\\136/g' index_html.c 
#sed -i 's/_/\\137/g' index_html.c 
sed -i 's/{/\\173/g' index_html.c 
sed -i 's/|/\\174/g' index_html.c 
sed -i 's/}/\\175/g' index_html.c 
sed -i 's/~/\\176/g' index_html.c 
sed -i "s/'/\\\047/g" index_html.c
sed -i 's/$/ \\n"); /' index_html.c
sed -i 's/^/fprintf (indexcode, " /' index_html.c
sed -i '1s/^/\FILE \* indexcode\;\n/' index_html.c
sed -i '2s/^/\ indexcode \= fopen \(\"index.html\"\,\"a\"\)\;\n/' index_html.c
printf " fclose \050indexcode\051\073 \n" >> index_html.c
printf "free (dbsql_ptr)\073\n" >> index_html.c
printf "dbsql_ptr = NULL\073\n" >> index_html.c
printf "free (disply_ptr)\073\n" >> index_html.c 
printf "disply_ptr = NULL\073\n" >> index_html.c
printf "return 0\073\n" >> index_html.c 
printf "}\n" >> index_html.c 
cat index_html.c >> index_write.c
printf "now compile index_write.c\n"
gcc index_write.c -o index_write.run -Wall
./index_write.run
printf "end of script and compilation...\n"
# echo ' will now destroy delete-icon function with a sed command..'
# sed -i 's|function_delete|function-delete|g' webapp.js
# echo 'now change index page tab and index.html title ...'
# sed -i 's|axaxaxaxaxaxa|webtag|g' index.html
# sed -i 's|bxbxbxbxbxbxbxb|webpagetitle|g' index.html
echo '...stop...'
