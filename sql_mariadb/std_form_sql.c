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

