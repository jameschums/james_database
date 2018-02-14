/* create all pages for db menu and tables edit */
/* compile gcc index_write.c -o index_write.run -Wall */
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 
int main ()
{

/*processing formtable 1 of 4 of 1*/
/*processing formtable 2 of 4 of 2*/
/*processing formtable 3 of 5 of 3*/
/*processing formtable 4 of 5 of 4*/
/*processing formtable 5 of 5 of 5*/
/*processing formtable 6 of 5 of 6*/
/*processing formtable 7 of 6 of 7*/
/*processing formtable 8 of 5 of 8*/
/*processing formtable 9 of 5 of 9*/
/*processing formtable 10 of 6 of 10*/
/*processing formtable 11 of 5 of 11*/
 int tablenummer = 11;
 int i = 0;
char ** dbsql_ptr = NULL;
char * dbsql_0 = "scrudex2";
char * dbsql_1 = "it_recordies";
char * dbsql_2 = "tbl_index";
char * dbsql_3 = "rank";
char * dbsql_4 = "materiomics_name";
char * dbsql_5 = "industries";
char * dbsql_6 = "revenue";
char * dbsql_7 = "project_year";
char * dbsql_8 = "employees";
char * dbsql_9 = "market_cap";
char * dbsql_10 = "headquarters";

dbsql_ptr = (char *) malloc (tablenummer * sizeof(char *));

dbsql_ptr[0] = dbsql_0; /* scrudex2 */
dbsql_ptr[1] = dbsql_1; /* it_recordies */
dbsql_ptr[2] = dbsql_2; /* tbl_index */
dbsql_ptr[3] = dbsql_3; /* rank */
dbsql_ptr[4] = dbsql_4; /* materiomics_name */
dbsql_ptr[5] = dbsql_5; /* industries */
dbsql_ptr[6] = dbsql_6; /* revenue */
dbsql_ptr[7] = dbsql_7; /* project_year */
dbsql_ptr[8] = dbsql_8; /* employees */
dbsql_ptr[9] = dbsql_9; /* market_cap */
dbsql_ptr[10] = dbsql_10; /* headquarters */

if (dbsql_ptr == NULL)
{
 printf ("\nMemory allocation is as successful at materiomics - failed ending program.\n");
 return 1;
}

char ** disply_ptr = NULL;
char * disply_0 = "scrudex2";
char * disply_1 = "it_recordies";
char * disply_2 = "tbl Index";
char * disply_3 = "rank";
char * disply_4 = "materiomic name";
char * disply_5 = "industries";
char * disply_6 = "revenue";
char * disply_7 = "project year";
char * disply_8 = "employees";
char * disply_9 = "market cap";
char * disply_10 = "headquarters";

disply_ptr = (char *) malloc (tablenummer * sizeof(char *));

disply_ptr[0] = disply_0; /* scrudex2 */
disply_ptr[1] = disply_1; /* it_recordies */
disply_ptr[2] = disply_2; /* tbl Index */
disply_ptr[3] = disply_3; /* rank */
disply_ptr[4] = disply_4; /* materiomic name */
disply_ptr[5] = disply_5; /* industries */
disply_ptr[6] = disply_6; /* revenue */
disply_ptr[7] = disply_7; /* project year */
disply_ptr[8] = disply_8; /* employees */
disply_ptr[9] = disply_9; /* market cap */
disply_ptr[10] = disply_10; /* headquarters */


if (disply_ptr == NULL)
{
 printf ("\nMemory allocation is as successful at materiomics - failed ending program.\n");
 return 1;
}


int wdtype[] = {0,0,1,1,0,0,1,0,1,1,0};

FILE * indexcode;
 indexcode = fopen ("index.html","a");
fprintf (indexcode, " \074\077php session_start\050\051\073 \077\076 \n"); 
fprintf (indexcode, "  \n"); 
fprintf (indexcode, " \074\077php \n"); 
fprintf (indexcode, " if\050\041isset\050\044_SESSION\133\047valid\047\135\051\051  \n"); 
fprintf (indexcode, " \173 \n"); 
fprintf (indexcode, "  header\050\047Location\072 \057dbs\057login\056php\047\051\073 \n"); 
fprintf (indexcode, " \175 \n"); 
fprintf (indexcode, " \077\076 \n"); 
fprintf (indexcode, "  \n"); 
fprintf (indexcode, " \074\041DOCTYPE html\076   \n"); 
fprintf (indexcode, "   \074html lang\075\042en\042 dir\075\042ltr\042\076   \n"); 
fprintf (indexcode, "     \074head\076   \n"); 
fprintf (indexcode, "       \074title\076axaxaxaxaxaxa\074\057title\076   \n"); 
fprintf (indexcode, "       \074meta charset\075\042utf\0558\042\076   \n"); 
fprintf (indexcode, "        \074meta name\075\042viewport\042 content\075\042width\075device\055width\054 initial\055scale\0751\0560\042\076   \n"); 
fprintf (indexcode, "       \074meta http\055equiv\075\042X\055UA\055Compatible\042 content\075\042IE\075Edge\042\076   \n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042\057\057fonts\056googleapis\056com\057css\077family\075Oxygen\072400\054700\042\076   \n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042\057\057maxcdn\056bootstrapcdn\056com\057font\055awesome\0574\0563\0560\057css\057font\055awesome\056min\056css\042\076   \n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042layout\056css\042\076   \n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057ajax\056googleapis\056com\057ajax\057libs\057jquery\0571\05611\0562\057jquery\056min\056js\042\076\074\057script\076   \n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057cdn\056datatables\056net\0571\05610\0560\057js\057jquery\056dataTables\056js\042\076\074\057script\076   \n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057cdn\056jsdelivr\056net\057jquery\056validation\0571\05613\0561\057jquery\056validate\056min\056js\042\076\074\057script\076   \n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042webapp\056js\042\076\074\057script\076   \n"); 
fprintf (indexcode, "     \074\057head\076   \n"); 
fprintf (indexcode, "     \074body\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "     \074div id\075\042page_container\042\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "         \074h1\076bxbxbxbxbxbxbxb\074\057h1\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "         \074button type\075\042button\042 class\075\042button\042 id\075\042add_record\042\076Add Record\074\057button\076   \n"); 
fprintf (indexcode, "         \074a button type\075\042button\042 class\075\042btn btn\055default col\055sm\0554\042 href\075\042\057dbs\057index\056html\042 role\075\042button\042\076Back to Main Menu\074\057a\076   \n"); 
fprintf (indexcode, "            \n"); 
fprintf (indexcode, "         \074table class\075\042datatable\042 id\075\042table_recordies\042\076   \n"); 
fprintf (indexcode, "           \074thead\076   \n"); 
fprintf (indexcode, "             \074tr\076   \n"); 
fprintf (indexcode, "               \074th\076rank\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076materiomics name\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076industries\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076revenue\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076project year\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076employees\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076market cap\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076headquarters\074\057th\076   \n"); 
fprintf (indexcode, "               \074th\076Functions\074\057th\076   \n"); 
fprintf (indexcode, "             \074\057tr\076   \n"); 
fprintf (indexcode, "           \074\057thead\076   \n"); 
fprintf (indexcode, "           \074tbody\076   \n"); 
fprintf (indexcode, "           \074\057tbody\076   \n"); 
fprintf (indexcode, "         \074\057table\076   \n"); 
fprintf (indexcode, "       \074\057div\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "       \074div class\075\042lightbox_bg\042\076\074\057div\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "       \074div class\075\042lightbox_container\042\076   \n"); 
fprintf (indexcode, "         \074div class\075\042lightbox_close\042\076\074\057div\076   \n"); 
fprintf (indexcode, "         \074div class\075\042lightbox_content\042\076   \n"); 
fprintf (indexcode, "              \n"); 
fprintf (indexcode, "           \074h2\076Add Record\074\057h2\076   \n"); 
fprintf (indexcode, "           \074form class\075\042form add\042 id\075\042form_record\042 data\055id\075\042\042 novalidate\076   \n"); 
fprintf (indexcode, " 	   \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042rank\042\076rank\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042number\042 step\075\0421\042 min\075\0420\042 class\075\042text\042 name\075\042rank\042 id\075\042rank\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076 \n"); 
fprintf (indexcode, " 	       \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042materiomics_name\042\076materiomics name\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042text\042 class\075\042text\042 name\075\042materiomics_name\042 id\075\042materiomics_name\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042industries\042\076industries\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042text\042 class\075\042text\042 name\075\042industries\042 id\075\042industries\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042revenue\042\076revenue\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                \074input type\075\042number\042 step\075\0421\042 min\075\0420\042 class\075\042text\042 name\075\042revenue\042 id\075\042revenue\042 value\075\042\042 required\076 \n"); 
fprintf (indexcode, "                 \074\041\055\055\074input type\075\042text\042 class\075\042text\042 name\075\042revenue\042 id\075\042revenue\042 value\075\042\042 required\076 \055\055\076 \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042project_year\042\076project year\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042number\042 min\075\0420\042 class\075\042text\042 name\075\042project_year\042 id\075\042project_year\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042employees\042\076employees\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042number\042 min\075\0420\042 class\075\042text\042 name\075\042employees\042 id\075\042employees\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042market_cap\042\076market cap\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076                   \n"); 
fprintf (indexcode, "                 \074input type\075\042text\042 class\075\042text\042 name\075\042market_cap\042 id\075\042market_cap\042 value\075\042\042 required\076  \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042input_container\042\076   \n"); 
fprintf (indexcode, "               \074label for\075\042headquarters\042\076headquarters\072 \074span class\075\042required\042\076\052\074\057span\076\074\057label\076   \n"); 
fprintf (indexcode, "               \074div class\075\042field_container\042\076   \n"); 
fprintf (indexcode, "                 \074input type\075\042text\042 class\075\042text\042 name\075\042headquarters\042 id\075\042headquarters\042 value\075\042\042 required\076   \n"); 
fprintf (indexcode, "               \074\057div\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, " 	     \n"); 
fprintf (indexcode, "             \074div class\075\042button_container\042\076   \n"); 
fprintf (indexcode, "               \074button type\075\042submit\042\076Add Record\074\057button\076   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, "           \074\057form\076   \n"); 
fprintf (indexcode, "              \n"); 
fprintf (indexcode, "         \074\057div\076   \n"); 
fprintf (indexcode, "       \074\057div\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "       \074noscript id\075\042noscript_container\042\076   \n"); 
fprintf (indexcode, "         \074div id\075\042noscript\042 class\075\042error\042\076   \n"); 
fprintf (indexcode, "           \074p\076JavaScript support is needed to use this page\056\074\057p\076   \n"); 
fprintf (indexcode, "         \074\057div\076   \n"); 
fprintf (indexcode, "       \074\057noscript\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "       \074div id\075\042message_container\042\076   \n"); 
fprintf (indexcode, "         \074div id\075\042message\042 class\075\042success\042\076   \n"); 
fprintf (indexcode, "           \074p\076This is a success message\056\074\057p\076   \n"); 
fprintf (indexcode, "         \074\057div\076   \n"); 
fprintf (indexcode, "       \074\057div\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "       \074div id\075\042loading_container\042\076   \n"); 
fprintf (indexcode, "         \074div id\075\042loading_container2\042\076   \n"); 
fprintf (indexcode, "           \074div id\075\042loading_container3\042\076   \n"); 
fprintf (indexcode, "             \074div id\075\042loading_container4\042\076   \n"); 
fprintf (indexcode, "               Loading\054 please wait\056\056\056   \n"); 
fprintf (indexcode, "             \074\057div\076   \n"); 
fprintf (indexcode, "           \074\057div\076   \n"); 
fprintf (indexcode, "         \074\057div\076   \n"); 
fprintf (indexcode, "       \074\057div\076   \n"); 
fprintf (indexcode, "      \n"); 
fprintf (indexcode, "     \074\057body\076   \n"); 
fprintf (indexcode, "   \074\057html\076   \n"); 
 fclose (indexcode); 
free (dbsql_ptr);
dbsql_ptr = NULL;
free (disply_ptr);
disply_ptr = NULL;
return 0;
}
