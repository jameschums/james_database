#!/bin/bash
# ls -1 *.tif | awk 'BEGIN {count=0}{count++;}{printf "%d %s\n",count,$1}END{printf "end and total %d\n",count}'
rm -fr webapp_write.c webapp.js webapp_write.run
printf "\057\052 create all pages for db menu and tables edit \052\057\n" >> webapp_write.c
printf "\057\052 compile gcc webapp_write.c -o webapp_write.run -Wall \052\057\n" >> webapp_write.c
printf "\043include <stdlib.h> \n" >> webapp_write.c
printf "\043include <string.h> \n" >> webapp_write.c
printf "\043include <stdio.h> \n"  >> webapp_write.c
printf "int main \050\051\n" >> webapp_write.c
printf "{\n" >> webapp_write.c
printf "\n" >>  webapp_write.c
awk 'BEGIN {FS=","}{printf "\057\052processing formtable %d of %d of %d\052\057\n",NR,NF,FNR}END{printf " int tablenummer = %d\073\n int i = 0\073\n",NR}' formtable.txt >> webapp_write.c
printf "char ** dbsql_ptr = NULL\073\n" >> webapp_write.c 
awk 'BEGIN {FS=","}{printf "char \052 dbsql_%d = \042%s\042\073\n",(NR-1),$1}' formtable.txt >> webapp_write.c
printf "\n" >> webapp_write.c
printf "dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> webapp_write.c
printf "\n" >> webapp_write.c
awk 'BEGIN {FS=","}{printf "dbsql_ptr[%d] = dbsql_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$1} END {printf "\n"}' formtable.txt >> webapp_write.c
printf "if (dbsql_ptr == NULL)\n" >> webapp_write.c
printf "{\n" >> webapp_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> webapp_write.c
printf " return 1\073\n" >> webapp_write.c
printf "}\n" >> webapp_write.c
printf "\n" >> webapp_write.c
printf "char ** disply_ptr = NULL\073\n" >> webapp_write.c 
awk 'BEGIN {FS="," }{printf "char \052 disply_%d = \042%s\042\073\n",(NR-1),$2}' formtable.txt >> webapp_write.c
printf "\n" >> webapp_write.c
printf "disply_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> webapp_write.c
printf "\n" >> webapp_write.c
awk 'BEGIN {FS="," }{printf "disply_ptr[%d] = disply_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$2} END {printf "\n"}' formtable.txt >> webapp_write.c
printf "\n" >> webapp_write.c
printf "if (disply_ptr == NULL)\n" >> webapp_write.c
printf "{\n" >> webapp_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> webapp_write.c
printf " return 1\073\n" >> webapp_write.c
printf "}\n" >> webapp_write.c
printf "\n" >> webapp_write.c
printf "\n" >> webapp_write.c
printf "int wdtype\133\135 \075 \173" >> webapp_write.c 
awk 'BEGIN {FS=","}{printf "%d\054",$3}END{printf "\175\073\n"}' formtable.txt >> webapp_write.c
sed -i 's|,};|};|g' webapp_write.c
printf "\n" >> webapp_write.c
printf "now create C code from std_webapp.js file..\n"
cat std_webapp.js >> webapp_js.c
sed -i 's|\\|\\134|g' webapp_js.c
sed -i 's|\/|\\057|g' webapp_js.c
sed -i 's|\\057134|\\134|g' webapp_js.c
sed -i 's|\\134057|\\057|g' webapp_js.c
sed -i 's/>/\\076/g' webapp_js.c
sed -i 's/!/\\041/g' webapp_js.c 
sed -i 's/"/\\042/g' webapp_js.c  
sed -i 's/#/\\043/g' webapp_js.c 
sed -i 's/\$/\\044/g' webapp_js.c 
sed -i 's/\%/\\045\\045/g' webapp_js.c 
sed -i 's/&/\\046/g' webapp_js.c 
sed -i 's/(/\\050/g' webapp_js.c 
sed -i 's/)/\\051/g' webapp_js.c 
sed -i 's/*/\\052/g' webapp_js.c 
sed -i 's/+/\\053/g' webapp_js.c 
sed -i 's/,/\\054/g' webapp_js.c 
sed -i 's/-/\\055/g' webapp_js.c 
sed -i 's/\./\\056/g' webapp_js.c 
sed -i 's/:/\\072/g' webapp_js.c 
sed -i 's/;/\\073/g' webapp_js.c 
sed -i 's/</\\074/g' webapp_js.c 
sed -i 's/=/\\075/g' webapp_js.c  
sed -i 's/?/\\077/g' webapp_js.c 
sed -i 's/@/\\100/g' webapp_js.c 
sed -i 's/\[/\\133/g' webapp_js.c 
sed -i 's/]/\\135/g' webapp_js.c 
sed -i -e 's/\^/\\136/g' webapp_js.c 
#sed -i 's/_/\\137/g' webapp_js.c 
sed -i 's/{/\\173/g' webapp_js.c 
sed -i 's/|/\\174/g' webapp_js.c 
sed -i 's/}/\\175/g' webapp_js.c 
sed -i 's/~/\\176/g' webapp_js.c 
sed -i "s/'/\\\047/g" webapp_js.c
sed -i 's/$/ \\n"); /' webapp_js.c
sed -i 's/^/fprintf (webappcode, " /' webapp_js.c
sed -i '1s/^/\FILE \* webappcode\;\n/' webapp_js.c
sed -i '2s/^/\ webappcode \= fopen \(\"webapp.js\"\,\"a\"\)\;\n/' webapp_js.c
printf " fclose \050webappcode\051\073 \n" >> webapp_js.c
printf "free (dbsql_ptr)\073\n" >> webapp_js.c
printf "dbsql_ptr = NULL\073\n" >> webapp_js.c
printf "free (disply_ptr)\073\n" >> webapp_js.c 
printf "disply_ptr = NULL\073\n" >> webapp_js.c
printf "return 0\073\n" >> webapp_js.c 
printf "}\n" >> webapp_js.c 
cat webapp_js.c >>webapp_write.c
printf "now compile webapp_write.c\n"
gcc webapp_write.c -o webapp_write.run -Wall
./webapp_write.run
printf "end of script and compilation...\n"
# sed -i 's|function_delete|function-delete|g' webapp.js
echo '...stop...'
