/* create all pages for db menu and tables edit */
/* compile gcc sql_write.c -o sql_write.run -Wall */
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
char * disply_0 = "dbname";
char * disply_1 = "sqltable";
char * disply_2 = "INT(11) unsigned NOT NULL auto_increment";
char * disply_3 = "INT(11) unsigned NOT NULL";
char * disply_4 = "VARCHAR(255) NOT NULL";
char * disply_5 = "VARCHAR(255) NOT NULL";
char * disply_6 = "FLOAT(9";
char * disply_7 = "YEAR(4) NOT NULL";
char * disply_8 = "INT(11) unsigned NOT NULL";
char * disply_9 = "FLOAT(9";
char * disply_10 = "DATE NOT NULL";

disply_ptr = (char *) malloc (tablenummer * sizeof(char *));

disply_ptr[0] = disply_0; /* dbname */
disply_ptr[1] = disply_1; /* sqltable */
disply_ptr[2] = disply_2; /* INT(11) unsigned NOT NULL auto_increment */
disply_ptr[3] = disply_3; /* INT(11) unsigned NOT NULL */
disply_ptr[4] = disply_4; /* VARCHAR(255) NOT NULL */
disply_ptr[5] = disply_5; /* VARCHAR(255) NOT NULL */
disply_ptr[6] = disply_6; /* FLOAT(9 */
disply_ptr[7] = disply_7; /* YEAR(4) NOT NULL */
disply_ptr[8] = disply_8; /* INT(11) unsigned NOT NULL */
disply_ptr[9] = disply_9; /* FLOAT(9 */
disply_ptr[10] = disply_10; /* DATE NOT NULL */


if (disply_ptr == NULL)
{
 printf ("\nMemory allocation is as successful at materiomics - failed ending program.\n");
 return 1;
}


int wdtype[] = {0,0,1,1,0,0,1,0,1,1,0};

FILE * sqlcode;
 sqlcode = fopen ("formtable.sql","a");
 fprintf (sqlcode, " USE \140\%s\140\073 \n",dbsql_ptr[0]); 
 fprintf (sqlcode, " DROP TABLE IF EXISTS \140%s\140\073 \n",dbsql_ptr[1]); 
 fprintf (sqlcode, "  \n");  
fprintf (sqlcode, " CREATE TABLE \140%s\140 \050 \n",dbsql_ptr[1]); 
fprintf (sqlcode, "   \140%s\140 %s\054 \n",dbsql_ptr[2],disply_ptr[2]);
i=3;
for (i=3; i<tablenummer; i++)
{
fprintf (sqlcode, "   \140%s\140 %s\054 \n",dbsql_ptr[i],disply_ptr[i]); 
}
i=3;
/*fprintf (sqlcode, "   \140materiomics_name\140 VARCHAR\050255\051 NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140industries\140 VARCHAR\050255\051 NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140revenue\140 FLOAT\0509\0542\051 NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140project_year\140 YEAR\0504\051 NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140employees\140 INT\05011\051 unsigned NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140market_cap\140 FLOAT\0509\0542\051 NOT NULL\054 \n"); 
fprintf (sqlcode, "   \140headquarters\140 DATE NOT NULL\054 \n"); */
 
fprintf (sqlcode, "   PRIMARY KEY  \050\140%s\140\051 \n",dbsql_ptr[2]); 
fprintf (sqlcode, " \051 ENGINE\075InnoDB DEFAULT CHARSET\075utf8\073 \n"); 
fprintf (sqlcode, "  \n"); 
fclose (sqlcode);
i=1;
for (i=1; i < tablenummer; i++)
{
printf (" sql file contains type %d for %d record for information  %s \n",wdtype[i],i,dbsql_ptr[i]);
}
 
free (dbsql_ptr);
dbsql_ptr = NULL;
free (disply_ptr);
disply_ptr = NULL;
return 0;
}

