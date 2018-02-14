#!/bin/bash
# ls -1 *.tif | awk 'BEGIN {count=0}{count++;}{printf "%d %s\n",count,$1}END{printf "end and total %d\n",count}'
rm -fr sql_write.c formtable.sql sql_write.run sqlcode.c
printf "\057\052 create all pages for db menu and tables edit \052\057\n" >> sql_write.c
printf "\057\052 compile gcc sql_write.c -o index_write.run -Wall \052\057\n" >> sql_write.c
printf "\043include <stdlib.h> \n" >> sql_write.c
printf "\043include <string.h> \n" >> sql_write.c
printf "\043include <stdio.h> \n"  >> sql_write.c
printf "int main \050\051\n" >> sql_write.c
printf "{\n" >> sql_write.c
printf "\n" >>  sql_write.c
awk 'BEGIN {FS=","}{printf "\057\052processing formtable %d of %d of %d\052\057\n",NR,NF,FNR}END{printf " int tablenummer = %d\073\n int i = 0\073\n",NR}' formtable.txt >> sql_write.c
printf "char ** dbsql_ptr = NULL\073\n" >> sql_write.c 
awk 'BEGIN {FS=","}{printf "char \052 dbsql_%d = \042%s\042\073\n",(NR-1),$1}' formtable.txt >> sql_write.c
printf "\n" >> sql_write.c
printf "dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> sql_write.c
printf "\n" >> sql_write.c
awk 'BEGIN {FS=","}{printf "dbsql_ptr[%d] = dbsql_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$1} END {printf "\n"}' formtable.txt >> sql_write.c
printf "if (dbsql_ptr == NULL)\n" >> sql_write.c
printf "{\n" >> sql_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> sql_write.c
printf " return 1\073\n" >> sql_write.c
printf "}\n" >> sql_write.c
printf "\n" >> sql_write.c
printf "char ** disply_ptr = NULL\073\n" >> sql_write.c 
awk 'BEGIN {FS="," }{printf "char \052 disply_%d = \042%s\042\073\n",(NR-1),$4}' formtable.txt >> sql_write.c
printf "\n" >> sql_write.c
printf "disply_ptr = (char *) malloc (tablenummer * sizeof(char *))\073\n" >> sql_write.c
printf "\n" >> sql_write.c
awk 'BEGIN {FS="," }{printf "disply_ptr[%d] = disply_%d\073 \057\052 %s \052\057\n",(NR-1),(NR-1),$4} END {printf "\n"}' formtable.txt >> sql_write.c
printf "\n" >> sql_write.c
printf "if (disply_ptr == NULL)\n" >> sql_write.c
printf "{\n" >> sql_write.c
printf " printf \050\042\134nMemory allocation is as successful at materiomics - failed ending program.\134n\042\051\073\n" >> sql_write.c
printf " return 1\073\n" >> sql_write.c
printf "}\n" >> sql_write.c
printf "\n" >> sql_write.c
printf "\n" >> sql_write.c
printf "int wdtype\133\135 \075 \173" >> sql_write.c 
awk 'BEGIN {FS=","}{printf "%d\054",$3}END{printf "\175\073\n"}' formtable.txt >> sql_write.c
sed -i 's|,};|};|g' sql_write.c
printf "\n" >> sql_write.c
cp std_form_sql.c formtablesql.c
sed -i 's|\\|\\134|g' formtablesql.c
sed -i 's|\/|\\057|g' formtablesql.c
sed -i 's|\\057134|\\134|g' formtablesql.c
sed -i 's|\\134057|\\057|g' formtablesql.c
sed -i 's/>/\\076/g' formtablesql.c
sed -i 's/!/\\041/g' formtablesql.c 
sed -i 's/"/\\042/g' formtablesql.c  
sed -i 's/#/\\043/g' formtablesql.c 
sed -i 's/\$/\\044/g' formtablesql.c 
sed -i 's/\%/\\045\\045/g' formtablesql.c 
sed -i 's/&/\\046/g' formtablesql.c 
sed -i 's/(/\\050/g' formtablesql.c 
sed -i 's/)/\\051/g' formtablesql.c 
sed -i 's/*/\\052/g' formtablesql.c 
sed -i 's/+/\\053/g' formtablesql.c 
sed -i 's/,/\\054/g' formtablesql.c 
sed -i 's/-/\\055/g' formtablesql.c 
sed -i 's/\./\\056/g' formtablesql.c 
sed -i 's/:/\\072/g' formtablesql.c 
sed -i 's/;/\\073/g' formtablesql.c 
sed -i 's/</\\074/g' formtablesql.c 
sed -i 's/=/\\075/g' formtablesql.c  
sed -i 's/?/\\077/g' formtablesql.c 
sed -i 's/@/\\100/g' formtablesql.c 
sed -i 's/\[/\\133/g' formtablesql.c 
sed -i 's/]/\\135/g' formtablesql.c 
sed -i -e 's/\^/\\136/g' formtablesql.c 
#sed -i 's/_/\\137/g' formtablesql.c 
sed -i 's/{/\\173/g' formtablesql.c 
sed -i 's/|/\\174/g' formtablesql.c 
sed -i 's/}/\\175/g' formtablesql.c 
sed -i 's/~/\\176/g' formtablesql.c
sed -i 's/`/\\140/g' formtablesql.c
sed -i "s/'/\\\047/g" formtablesql.c
sed -i 's/$/ \\n"); /' formtablesql.c
sed -i 's/^/fprintf (sqlcode, " /' formtablesql.c
sed -i '1s/^/\FILE \* sqlcode\;\n/' formtablesql.c
sed -i '2s/^/\ sqlcode \= fopen \(\"formtable.sql\"\,\"a\"\)\;\n/' formtablesql.c
printf "now create C code from formtatble file..\n"
cp formtablesql.c sqlcode.c
printf " fclose \050sqlcode\051\073 \n" >> sqlcode.c
printf "free (dbsql_ptr)\073\n" >> sqlcode.c
printf "dbsql_ptr = NULL\073\n" >> sqlcode.c
printf "free (disply_ptr)\073\n" >> sqlcode.c 
printf "disply_ptr = NULL\073\n" >> sqlcode.c
printf "return 0\073\n" >> sqlcode.c 
printf "}\n" >> sqlcode.c 
cat sqlcode.c >> sql_write.c
echo 'stop..finished'
