#!/bin/bash
# ls -1 *.tif | awk 'BEGIN {count=0}{count++;}{printf "%d %s\n",count,$1}END{printf "end and total %d\n",count}'
#awk 'BEGIN {FS=","}{printf "grep -in \047%s\047 layout.css\n",$1}' formtable.txt > searchform.sh
rm -fr layout_write.c layout.css layout_write.run
printf "\057\052 create all pages for db menu and tables edit \052\057\n" >> layout_write.c
printf "\057\052 compile gcc layout_write.c -o layout_write.run -Wall \052\057\n" >> layout_write.c
printf "\043include <stdlib.h> \n" >> layout_write.c
printf "\043include <string.h> \n" >> layout_write.c
printf "\043include <stdio.h> \n"  >> layout_write.c
printf "int main \050\051\n" >> layout_write.c
printf "{\n" >> layout_write.c
printf "\n" >>  layout_write.c
awk 'BEGIN {FS=","}{printf "\057\052processing formtable %d of %d of %d\052\057\n",NR,NF,FNR}END{printf " int tablenummer = %d\073\n int i = 0\073\n",NR}' formtable.txt >> layout_write.c
printf "char ** dbsql_ptr = NULL\073\n" >> layout_write.c 
awk 'BEGIN {FS=","}{printf "char \052 dbsql_%d = \042%s\042\073\n",(NR-1),$1}' formtable.txt >> layout_write.c
printf "\n" >> layout_write.c
printf "dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> layout_write.c
printf "\n" >> layout_write.c
awk 'BEGIN {FS=","}{printf "dbsql_ptr[%d] = dbsql_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$1} END {printf "\n"}' formtable.txt >> layout_write.c
printf "if (dbsql_ptr == NULL)\n" >> layout_write.c
printf "{\n" >> layout_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> layout_write.c
printf " return 1\073\n" >> layout_write.c
printf "}\n" >> layout_write.c
printf "\n" >> layout_write.c
printf "char ** disply_ptr = NULL\073\n" >> layout_write.c 
awk 'BEGIN {FS="," }{printf "char \052 disply_%d = \042%s\042\073\n",(NR-1),$2}' formtable.txt >> layout_write.c
printf "\n" >> layout_write.c
printf "disply_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> layout_write.c
printf "\n" >> layout_write.c
awk 'BEGIN {FS="," }{printf "disply_ptr[%d] = disply_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$2} END {printf "\n"}' formtable.txt >> layout_write.c
printf "\n" >> layout_write.c
printf "if (disply_ptr == NULL)\n" >> layout_write.c
printf "{\n" >> layout_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> layout_write.c
printf " return 1\073\n" >> layout_write.c
printf "}\n" >> layout_write.c
printf "\n" >> layout_write.c
printf "\n" >> layout_write.c
printf "int wdtype\133\135 \075 \173" >> layout_write.c 
awk 'BEGIN {FS=","}{printf "%d\054",$3}END{printf "\175\073\n"}' formtable.txt >> layout_write.c
sed -i 's|,};|};|g' layout_write.c
printf "\n" >> layout_write.c
printf "now create C code from layout.css file..\n"
cp std_layout.css layout_css.c
sed -i 's|\\|\\134|g' layout_css.c
sed -i 's|\/|\\057|g' layout_css.c
sed -i 's|\\057134|\\134|g' layout_css.c
sed -i 's|\\134057|\\057|g' layout_css.c
sed -i 's/>/\\076/g' layout_css.c
sed -i 's/!/\\041/g' layout_css.c 
sed -i 's/"/\\042/g' layout_css.c  
sed -i 's/#/\\043/g' layout_css.c 
sed -i 's/\$/\\044/g' layout_css.c 
sed -i 's/\%/\\045\\045/g' layout_css.c 
sed -i 's/&/\\046/g' layout_css.c 
sed -i 's/(/\\050/g' layout_css.c 
sed -i 's/)/\\051/g' layout_css.c 
sed -i 's/*/\\052/g' layout_css.c 
sed -i 's/+/\\053/g' layout_css.c 
sed -i 's/,/\\054/g' layout_css.c 
sed -i 's/-/\\055/g' layout_css.c 
sed -i 's/\./\\056/g' layout_css.c 
sed -i 's/:/\\072/g' layout_css.c 
sed -i 's/;/\\073/g' layout_css.c 
sed -i 's/</\\074/g' layout_css.c 
sed -i 's/=/\\075/g' layout_css.c  
sed -i 's/?/\\077/g' layout_css.c 
sed -i 's/@/\\100/g' layout_css.c 
sed -i 's/\[/\\133/g' layout_css.c 
sed -i 's/]/\\135/g' layout_css.c 
sed -i -e 's/\^/\\136/g' layout_css.c 
#sed -i 's/_/\\137/g' layout_css.c 
sed -i 's/{/\\173/g' layout_css.c 
sed -i 's/|/\\174/g' layout_css.c 
sed -i 's/}/\\175/g' layout_css.c 
sed -i 's/~/\\176/g' layout_css.c 
sed -i "s/'/\\\047/g" layout_css.c
sed -i 's/$/ \\n"); /' layout_css.c
sed -i 's/^/fprintf (layoutcode, " /' layout_css.c
sed -i '1s/^/\FILE \* layoutcode\;\n/' layout_css.c
sed -i '2s/^/\ layoutcode \= fopen \(\"layout.css\"\,\"a\"\)\;\n/' layout_css.c
printf " fclose \050layoutcode\051\073 \n" >> layout_css.c
printf "free (dbsql_ptr)\073\n" >> layout_css.c
printf "dbsql_ptr = NULL\073\n" >> layout_css.c
printf "free (disply_ptr)\073\n" >> layout_css.c 
printf "disply_ptr = NULL\073\n" >> layout_css.c
printf "return 0\073\n" >> layout_css.c 
printf "}\n" >> layout_css.c 
cat layout_css.c >> layout_write.c
printf "now compile layout_write.c\n"
gcc layout_write.c -o layout_write.run -Wall
./layout_write.run
printf "end of script and compilation...\n"
# echo ' will now destroy delete-icon function with a sed command..'
# sed -i 's|function_delete|function-delete|g' webapp.js
# echo 'now change index page tab and index.html title ...'
# sed -i 's|axaxaxaxaxaxa|webtag|g' index.html
# sed -i 's|bxbxbxbxbxbxbxb|webpagetitle|g' index.html
echo '...stop...layout css created'
