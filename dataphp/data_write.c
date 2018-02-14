/* create all pages for db menu and tables edit */
/* compile gcc data_write.c -o data_write.run -Wall */
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

int lastloop=0;
lastloop=(tablenummer - 1);
printf ("lastloop is %d and tablenummer is %d \n",lastloop,tablenummer);
FILE * datacode;
 datacode = fopen ("data.php","a");
fprintf (datacode, " \074\077php session_start\050\051\073 \077\076 \n");
fprintf (datacode, "  \n");
fprintf (datacode, " \074\077php \n");
fprintf (datacode, " if\050\041isset\050\044_SESSION\133\047valid\047\135\051\051  \n");
fprintf (datacode, " \173 \n");
fprintf (datacode, "  header\050\047Location\072 \057dbs\057login\056php\047\051\073 \n");
fprintf (datacode, " \175 \n");
fprintf (datacode, " \077\076 \n");
fprintf (datacode, "  \n");
fprintf (datacode, "   \074\077php   \n");
fprintf (datacode, "   \057\057 Database details   \n");
fprintf (datacode, "   \044db_server   \075 \047localhost\047\073   \n");
fprintf (datacode, "   \044db_username \075 \047root\047\073   \n");
fprintf (datacode, "   \044db_password \075 \047Fox8eel\047\073   \n");
fprintf (datacode, "   \044db_name     \075 \047%s\047\073 \n",dbsql_ptr[0]);
fprintf (datacode, "   \057\057 Get job \050and id\051   \n");
fprintf (datacode, "   \044job \075 \047\047\073   \n");
fprintf (datacode, "   \044id  \075 \047\047\073   \n");
fprintf (datacode, "   if \050isset\050\044_GET\133\047job\047\135\051\051\173   \n");
fprintf (datacode, "     \044job \075 \044_GET\133\047job\047\135\073   \n");
fprintf (datacode, "     if \050\044job \075\075 \047get_recordies\047 \174\174   \n");
fprintf (datacode, "         \044job \075\075 \047get_record\047   \174\174   \n");
fprintf (datacode, "         \044job \075\075 \047add_record\047   \174\174   \n");
fprintf (datacode, "         \044job \075\075 \047edit_record\047  \174\174   \n");
fprintf (datacode, "         \044job \075\075 \047delete_record\047\051\173   \n");
fprintf (datacode, "       if \050isset\050\044_GET\133\047id\047\135\051\051\173   \n");
fprintf (datacode, "         \044id \075 \044_GET\133\047id\047\135\073   \n");
fprintf (datacode, "         if \050\041is_numeric\050\044id\051\051\173   \n");
fprintf (datacode, "           \044id \075 \047\047\073   \n");
fprintf (datacode, "         \175   \n");
fprintf (datacode, "       \175   \n");
fprintf (datacode, "     \175 else \173   \n");
fprintf (datacode, "       \044job \075 \047\047\073   \n");
fprintf (datacode, "     \175   \n");
fprintf (datacode, "   \175   \n");
fprintf (datacode, "   \057\057 Prepare array   \n");
fprintf (datacode, "   \044mysql_data \075 array\050\051\073   \n");
fprintf (datacode, "   \057\057 Valid job found   \n");
fprintf (datacode, "   if \050\044job \041\075 \047\047\051\173   \n");
fprintf (datacode, "        \n");
fprintf (datacode, "     \057\057 Connect to database   \n");
fprintf (datacode, "     \044db_connection \075 mysqli_connect\050\044db_server\054 \044db_username\054 \044db_password\054 \044db_name\051\073   \n");
fprintf (datacode, "     if \050mysqli_connect_errno\050\051\051\173   \n");
fprintf (datacode, "       \044result  \075 \047error\047\073   \n");
fprintf (datacode, "       \044message \075 \047Failed to connect to database\072 \047 \056 mysqli_connect_error\050\051\073   \n");
fprintf (datacode, "       \044job     \075 \047\047\073   \n");
fprintf (datacode, "     \175   \n");
fprintf (datacode, "        \n");
fprintf (datacode, "     \057\057 Execute job   \n");
fprintf (datacode, "     if \050\044job \075\075 \047get_recordies\047\051\173   \n");
fprintf (datacode, "          \n");
fprintf (datacode, "       \057\057 Get recordies \n");
fprintf (datacode, "  \044query = \042SELECT \052 FROM %s ORDER BY %s\042\073 \n",dbsql_ptr[1],dbsql_ptr[3]);
fprintf (datacode, "      \044query \075 mysqli_query\050\044db_connection\054 \044query\051\073  \n");
fprintf (datacode, "      if \050\041\044query\051\173  \n");
fprintf (datacode, "        \044result  \075 \047error\047\073  \n");
fprintf (datacode, "        \044message \075 \047query error\047\073  \n");
fprintf (datacode, "      \175 else \173  \n");
fprintf (datacode, "        \044result  \075 \047success\047\073  \n");
fprintf (datacode, "        \044message \075 \047query success\047\073  \n");
fprintf (datacode, "        while \050\044record \075 mysqli_fetch_array\050\044query\051\051\173  \n");
fprintf (datacode, "          \044functions  \075 \047\074div class\075\042function_buttons\042\076\074ul\076\047\073 \n");
fprintf (datacode, "	 \n");
fprintf (datacode, " \044functions \056\075 \047\074li class\075\042function_edit\042\076\074a data-id\075\042\047 \056 \044record[\047%s\047] \056 \047\042 data-name\075\042\047 \056 \044record[\047%s\047] \056 \047\042\076\074span\076Edit\074\057span\076\074\057a\076\074\057li\076\047\073 \n",dbsql_ptr[2],dbsql_ptr[4]);
fprintf (datacode, " \044functions \056\075 \047\074li class\075\042function_delete\042\076\074a data-id\075\042\047 \056 \044record[\047%s\047] \056 \047\042 data-name\075\042\047 \056 \044record[\047%s\047] \056 \047\042\076\074span\076Delete\074\057span\076\074\057a\076\074\057li\076\047\073 \n",dbsql_ptr[2],dbsql_ptr[4]);
fprintf (datacode, "          \044functions \056\075 \047\074\057ul\076\074\057div\076\047\073   \n");
fprintf (datacode, "          \044mysql_data[] \075 array\050  \n");
i=3;
for ( i =3; i < (tablenummer) ; i++)
{
fprintf (datacode, "            \042%s\042          \075\076 \044record[\047%s\047]\054 \n",dbsql_ptr[i],dbsql_ptr[i]);
printf ("%d  tablenummer...first loop which ends in function in data.php and i is %d\n",tablenummer,i);
}
/*fprintf (datacode, "            \042%s\042          \075\076 \044record[\047%s\047]\054 \n",dbsql_ptr[i],dbsql_ptr[i]); */
i=3;
fprintf (datacode, "            \042functions\042     \075\076 \044functions  \n");
fprintf (datacode, "          \051\073  \n");
fprintf (datacode, "        \175  \n");
fprintf (datacode, "      \175   \n");
fprintf (datacode, "   \n");
fprintf (datacode, "    \175 elseif \050\044job \075\075 \047get_record\047\051\173   \n");
fprintf (datacode, "   \n");
fprintf (datacode, "      \057\057 Get record   \n");
fprintf (datacode, "      if \050\044id \075\075 \047\047\051\173   \n");
fprintf (datacode, "        \044result  \075 \047error\047\073   \n");
fprintf (datacode, "        \044message \075 \047id missing\047\073   \n");
fprintf (datacode, "      \175 else \173   \n");
fprintf (datacode, "        \044query \075 \042SELECT * FROM %s WHERE %s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044id\051 \056 \042\047\042\073   \n",dbsql_ptr[1],dbsql_ptr[2]);
fprintf (datacode, "        \044query \075 mysqli_query\050\044db_connection\054 \044query\051\073  \n");
fprintf (datacode, "        if \050\041\044query\051\173  \n");
fprintf (datacode, "          \044result  \075 \047error\047\073   \n");
fprintf (datacode, "          \044message \075 \047query error\047\073   \n");
fprintf (datacode, "        \175 else \173   \n");
fprintf (datacode, "          \044result  \075 \047success\047\073   \n");
fprintf (datacode, "          \044message \075 \047query success\047\073   \n");
fprintf (datacode, "          while \050\044record \075 mysqli_fetch_array\050\044query\051\051\173   \n");
fprintf (datacode, "            \044mysql_data[] \075 array\050   \n");
i=3;
for ( i = 3; i < (tablenummer) ; i++)
{
    if ( lastloop > i )
    {
    fprintf (datacode, "     \042%s\042 \075\076 \044record[\047%s\047]\054 \n",dbsql_ptr[i],dbsql_ptr[i]);
    }
    else
    {
    fprintf (datacode, "     \042%s\042 \075\076 \044record[\047%s\047] \n",dbsql_ptr[i],dbsql_ptr[i]);
    }
 printf ("%d  tablenummer...second loop in data.php and i is %d\n",tablenummer,i);
}
/*i=tablenummer; */
/*fprintf (datacode, "     \042%s\042 \075\076 \044record[\047%s\047] \n",dbsql_ptr[i],dbsql_ptr[i]); */
i=3;
/*fprintf (datacode, "              \042materiomics_name\042  \075\076 \044record[\047materiomics_name\047]\054   \n");
fprintf (datacode, "              \042industries\042    \075\076 \044record[\047industries\047]\054   \n");
fprintf (datacode, "              \042revenue\042       \075\076 \044record[\047revenue\047]\054   \n");
fprintf (datacode, "              \042project_year\042   \075\076 \044record[\047project_year\047]\054   \n");
fprintf (datacode, "              \042employees\042     \075\076 \044record[\047employees\047]\054   \n");
fprintf (datacode, "              \042market_cap\042    \075\076 \044record[\047market_cap\047]\054   \n");
fprintf (datacode, "              \042headquarters\042  \075\076 \044record[\047headquarters\047]  \n"); */
fprintf (datacode, "            \051\073 \n");
fprintf (datacode, "          \175  \n");
fprintf (datacode, "        \175  \n");
fprintf (datacode, "      \175  \n");
fprintf (datacode, "      \n");
fprintf (datacode, "    \175 elseif \050\044job \075\075 \047add_record\047\051\173  \n");
fprintf (datacode, "        \n");
fprintf (datacode, "      \057\057 Add record  \n");
fprintf (datacode, "      \044query \075 \042INSERT INTO %s SET \042\073 \n",dbsql_ptr[1]);
i=3;
for (i=3; i< (tablenummer); i++)
{
 if ( lastloop > i )
  {
  fprintf (datacode, "      if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\054 \042\073 \175 \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]);
  }
  else
  {
  fprintf (datacode, "      if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\042\073   \175  \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]);
  }
  printf ("%d  tablenummer...second loop in data.php and i is %d\n",tablenummer,i);
}

/*fprintf (datacode, "      if \050isset\050\044_GET[\047materiomics_name\047]\051\051 \173 \044query \056\075 \042materiomics_name \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047materiomics_name\047]\051 \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "      if \050isset\050\044_GET[\047industries\047]\051\051   \173 \044query \056\075 \042industries   \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047industries\047]\051   \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "      if \050isset\050\044_GET[\047revenue\047]\051\051      \173 \044query \056\075 \042revenue      \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047revenue\047]\051      \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "      if \050isset\050\044_GET[\047project_year\047]\051\051  \173 \044query \056\075 \042project_year  \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047project_year\047]\051  \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "      if \050isset\050\044_GET[\047employees\047]\051\051    \173 \044query \056\075 \042employees    \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047employees\047]\051    \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "      if \050isset\050\044_GET[\047market_cap\047]\051\051   \173 \044query \056\075 \042market_cap   \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047market_cap\047]\051   \056 \042\047\054 \042\073 \175   \n"); */
/*fprintf (datacode, "      if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\042\073   \175  \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]); */
fprintf (datacode, "      \044query \075 mysqli_query\050\044db_connection\054 \044query\051\073   \n");
fprintf (datacode, "      if \050\041\044query\051\173   \n");
fprintf (datacode, "        \044result  \075 \047error\047\073   \n");
fprintf (datacode, "        \044message \075 \047query error\047\073   \n");
fprintf (datacode, "      \175 else \173   \n");
fprintf (datacode, "        \044result  \075 \047success\047\073   \n");
fprintf (datacode, "        \044message \075 \047query success\047\073   \n");
fprintf (datacode, "      \175   \n");
fprintf (datacode, "       \n");
fprintf (datacode, "    \175 elseif \050\044job \075\075 \047edit_record\047\051\173   \n");
fprintf (datacode, "         \n");
fprintf (datacode, "      \057\057 Edit record   \n");
fprintf (datacode, "      if \050\044id \075\075 \047\047\051\173   \n");
fprintf (datacode, "        \044result  \075 \047error\047\073   \n");
fprintf (datacode, "        \044message \075 \047id missing\047\073   \n");
fprintf (datacode, "      \175 else \173   \n");
fprintf (datacode, "        \044query \075 \042UPDATE %s SET \042\073   \n",dbsql_ptr[1]);
i=3;
for (i=3; i< (tablenummer); i++)
{
if ( lastloop > i )
  {
  fprintf (datacode, "  if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\054 \042\073 \175 \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]);
  }
  else
  {
  fprintf (datacode, "  if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\042\073   \175   \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]);
  }
printf ("data loop 4 tablenummer is %d and lastloop is %d and i is %d\n",tablenummer,lastloop,i);
}
/*i=tablenummer; */
/*fprintf (datacode, "        if \050isset\050\044_GET[\047materiomics_name\047]\051\051 \173 \044query \056\075 \042materiomics_name \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047materiomics_name\047]\051 \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "        if \050isset\050\044_GET[\047industries\047]\051\051   \173 \044query \056\075 \042industries   \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047industries\047]\051   \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "        if \050isset\050\044_GET[\047revenue\047]\051\051      \173 \044query \056\075 \042revenue      \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047revenue\047]\051      \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "        if \050isset\050\044_GET[\047project_year\047]\051\051  \173 \044query \056\075 \042project_year  \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047project_year\047]\051  \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "        if \050isset\050\044_GET[\047employees\047]\051\051    \173 \044query \056\075 \042employees    \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047employees\047]\051    \056 \042\047\054 \042\073 \175   \n");
fprintf (datacode, "        if \050isset\050\044_GET[\047market_cap\047]\051\051   \173 \044query \056\075 \042market_cap   \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047market_cap\047]\051   \056 \042\047\054 \042\073 \175   \n"); */
/* fprintf (datacode, "        if \050isset\050\044_GET[\047%s\047]\051\051 \173 \044query \056\075 \042%s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044_GET[\047%s\047]\051 \056 \042\047\042\073   \175   \n",dbsql_ptr[i],dbsql_ptr[i],dbsql_ptr[i]); */
fprintf (datacode, "        \044query \056\075 \042WHERE %s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044id\051 \056 \042\047\042\073   \n",dbsql_ptr[2]);
fprintf (datacode, "        \044query  \075 mysqli_query\050\044db_connection\054 \044query\051\073   \n");
fprintf (datacode, "        if \050\041\044query\051\173   \n");
fprintf (datacode, "          \044result  \075 \047error\047\073   \n");
fprintf (datacode, "          \044message \075 \047query error\047\073   \n");
fprintf (datacode, "        \175 else \173   \n");
fprintf (datacode, "          \044result  \075 \047success\047\073   \n");
fprintf (datacode, "          \044message \075 \047query success\047\073   \n");
fprintf (datacode, "        \175   \n");
fprintf (datacode, "      \175   \n");
fprintf (datacode, "         \n");
fprintf (datacode, "    \175 elseif \050\044job \075\075 \047delete_record\047\051\173   \n");
fprintf (datacode, "       \n");
fprintf (datacode, "      \057\057 Delete record   \n");
fprintf (datacode, "      if \050\044id \075\075 \047\047\051\173   \n");
fprintf (datacode, "        \044result  \075 \047error\047\073   \n");
fprintf (datacode, "        \044message \075 \047id missing\047\073   \n");
fprintf (datacode, "      \175 else \173   \n");
fprintf (datacode, "        \044query \075 \042DELETE FROM %s WHERE %s \075 \047\042 \056 mysqli_real_escape_string\050\044db_connection\054 \044id\051 \056 \042\047\042\073   \n",dbsql_ptr[1],dbsql_ptr[2]);
fprintf (datacode, "        \044query \075 mysqli_query\050\044db_connection\054 \044query\051\073   \n");
fprintf (datacode, "        if \050\041\044query\051\173   \n");
fprintf (datacode, "          \044result  \075 \047error\047\073   \n");
fprintf (datacode, "          \044message \075 \047query error\047\073   \n");
fprintf (datacode, "        \175 else \173   \n");
fprintf (datacode, "          \044result  \075 \047success\047\073   \n");
fprintf (datacode, "          \044message \075 \047query success\047\073   \n");
fprintf (datacode, "        \175   \n");
fprintf (datacode, "      \175   \n");
fprintf (datacode, "       \n");
fprintf (datacode, "    \175   \n");
fprintf (datacode, "       \n");
fprintf (datacode, "    \057\057 Close database connection   \n");
fprintf (datacode, "    mysqli_close\050\044db_connection\051\073   \n");
fprintf (datacode, "  \175   \n");
fprintf (datacode, "  \057\057 Prepare data   \n");
fprintf (datacode, "  \044data \075 array\050   \n");
fprintf (datacode, "    \042result\042  \075\076 \044result\054   \n");
fprintf (datacode, "    \042message\042 \075\076 \044message\054   \n");
fprintf (datacode, "    \042data\042    \075\076 \044mysql_data   \n");
fprintf (datacode, "  \051\073   \n");
fprintf (datacode, "  \057\057 Convert PHP array to JSON array   \n");
fprintf (datacode, "  \044json_data \075 json_encode\050\044data\051\073   \n");
fprintf (datacode, "  print \044json_data\073   \n");
fprintf (datacode, "  \077\076  \n");
fclose (datacode);

free (dbsql_ptr);
dbsql_ptr = NULL;
free (disply_ptr);
disply_ptr = NULL;

return 0;
}
