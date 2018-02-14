FILE * indexcode;
 indexcode = fopen ("index.html","a");
fprintf (indexcode, " \074\077php session_start\050\051\073 \077\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, " \074\077php\n"); 
fprintf (indexcode, " if\050\041isset\050\044_SESSION\133\047valid\047\135\051\051\n"); 
fprintf (indexcode, " \173\n"); 
fprintf (indexcode, "  header\050\047Location\072 \057dbs\057login\056php\047\051\073\n"); 
fprintf (indexcode, " \175\n"); 
fprintf (indexcode, " \077\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, " \074\041DOCTYPE html\076\n"); 
fprintf (indexcode, "   \074html lang\075\042en\042 dir\075\042ltr\042\076\n"); 
fprintf (indexcode, "     \074head\076\n"); 
fprintf (indexcode, "       \074title\076%s\074\057title\076 \n",dbsql_ptr[0]); 
fprintf (indexcode, "       \074meta charset\075\042utf\0558\042\076\n"); 
fprintf (indexcode, "        \074meta name\075\042viewport\042 content\075\042width\075device\055width\054 initial\055scale\0751\0560\042\076\n"); 
fprintf (indexcode, "       \074meta http\055equiv\075\042X\055UA\055Compatible\042 content\075\042IE\075Edge\042\076\n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042\057\057fonts\056googleapis\056com\057css\077family\075Oxygen\072400\054700\042\076\n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042\057\057maxcdn\056bootstrapcdn\056com\057font\055awesome\0574\0563\0560\057css\057font\055awesome\056min\056css\042\076\n"); 
fprintf (indexcode, "       \074link rel\075\042stylesheet\042 href\075\042layout\056css\042\076\n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057ajax\056googleapis\056com\057ajax\057libs\057jquery\0571\05611\0562\057jquery\056min\056js\042\076\074\057script\076\n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057cdn\056datatables\056net\0571\05610\0560\057js\057jquery\056dataTables\056js\042\076\074\057script\076\n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042\057\057cdn\056jsdelivr\056net\057jquery\056validation\0571\05613\0561\057jquery\056validate\056min\056js\042\076\074\057script\076\n"); 
fprintf (indexcode, "       \074script charset\075\042utf\0558\042 src\075\042webapp\056js\042\076\074\057script\076\n"); 
fprintf (indexcode, "     \074\057head\076\n"); 
fprintf (indexcode, "     \074body\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "       \074div id\075\042page_container\042\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "         \074h1\076%s\074\057h1\076\n",dbsql_ptr[1]); 
fprintf (indexcode, "  \n"); 
fprintf (indexcode, "         \074button type\075\042button\042 class\075\042button\042 id\075\042add_record\042\076Add Record\074\057button\076\n"); 
fprintf (indexcode, "         \074a button type\075\042button\042 class\075\042btn btn\055default col\055sm\0554\042 href\075\042\057dbs\057index\056html\042 role\075\042button\042\076Back to Main Menu\074\057a\076\n"); 
fprintf (indexcode, "          \074table class\075\042datatable\042 id\075\042table_recordies\042\076\n");
fprintf (indexcode, "            \074thead\076\n");
fprintf (indexcode, "              \074tr\076\n");
i=3;
for (i = 3; i < tablenummer; i++)
{
fprintf (indexcode, "                 \074th\076%s\074\057th\076\n",disply_ptr[i]);
}
i=3;
fprintf (indexcode, "                 \074th\076Functions\074\057th\076\n");
fprintf (indexcode, "              \074\057tr\076\n");
fprintf (indexcode, "            \074\057thead\076\n");
fprintf (indexcode, "            \074tbody\076\n");
fprintf (indexcode, "            \074\057tbody\076\n");
fprintf (indexcode, "          \074\057table\076\n");
fprintf (indexcode, "         \n");   
fprintf (indexcode, "        \074\057div\076\n");
fprintf (indexcode, "        \074div class\075\042lightbox_bg\042\076\074\057div\076\n");
fprintf (indexcode, "        \074div class\075\042lightbox_container\042\076\n");
fprintf (indexcode, "          \074div class\075\042lightbox_close\042\076\074\057div\076\n");
fprintf (indexcode, "          \074div class\075\042lightbox_content\042\076\n");
fprintf (indexcode, "            \074h2\076Add Record\074\057h2\076\n");
fprintf (indexcode, "            \074form class\075\042form add\042 id\075\042form_record\042 data-id\075\042\042 novalidate\076\n");
fprintf (indexcode, "         \n");

 for ( i = 3; i < tablenummer; i++)
 {
  if ( wdtype[i]==0 )
  {
  printf ("writing index.html outlines and types for %s SQL and %s  DISPLAY with type %d TEXT\n",dbsql_ptr[i],disply_ptr[i],wdtype[i]);
  fprintf (indexcode, "            \074div class\075\042input_container\042\076\n");
  fprintf (indexcode, "              \074label for\075\042%s\042\076%s\072 \074span class\075\042required\042\076*\074\057span>\074\057label>\n",dbsql_ptr[i],disply_ptr[i]);
  fprintf (indexcode, "              \074div class\075\042field_container\042\076\n");
  fprintf (indexcode, "                \074input type\075\042text\042 class\075\042text\042 name\075\042%s\042 id\075\042%s\042 value\075\042\042 required>\n",dbsql_ptr[i],dbsql_ptr[i]);
  fprintf (indexcode, "              \074\057div>\n");
  fprintf (indexcode, "            \074\057div>\n");
  fprintf (indexcode, "\n");
  }
  else
  {
  printf ("writing index.html outlines and types for %s SQL and %s DISPLAY with type %d NUMBERS\n",dbsql_ptr[i],disply_ptr[i],wdtype[i]);
  fprintf (indexcode, "            \074div class\075\042input_container\042\076\n");
  fprintf (indexcode, "              \074label for\075\042%s\042\076%s\072 \074span class\075\042required\042\076*\074\057span>\074\057label>\n",dbsql_ptr[i],disply_ptr[i]);
  fprintf (indexcode, "              \074div class\075\042field_container\042\076\n");
  fprintf (indexcode, "               \074input type\075\042number\042 step\075\0421\042 min\075\0420\042 class\075\042text\042 name\075\042%s\042 id\075\042%s\042 value\075\042\042 required>\n",dbsql_ptr[i],dbsql_ptr[i]);
  fprintf (indexcode, "              \074\057div>\n");
  fprintf (indexcode, "             \074\057div>\n");
  fprintf (indexcode, "\n");
  }
 }
fprintf (indexcode, "             \074div class\075\042button_container\042\076\n"); 
fprintf (indexcode, "               \074button type\075\042submit\042\076Add Record\074\057button\076\n"); 
fprintf (indexcode, "             \074\057div\076\n"); 
fprintf (indexcode, "           \074\057form\076\n"); 
fprintf (indexcode, "          \n"); 
fprintf (indexcode, "         \074\057div\076\n"); 
fprintf (indexcode, "       \074\057div\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "       \074noscript id\075\042noscript_container\042\076\n"); 
fprintf (indexcode, "         \074div id\075\042noscript\042 class\075\042error\042\076\n"); 
fprintf (indexcode, "           \074p\076JavaScript support is needed to use this page\056\074\057p\076\n"); 
fprintf (indexcode, "         \074\057div\076\n"); 
fprintf (indexcode, "       \074\057noscript\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "       \074div id\075\042message_container\042\076\n"); 
fprintf (indexcode, "         \074div id\075\042message\042 class\075\042success\042\076\n"); 
fprintf (indexcode, "           \074p\076This is a success message\056\074\057p\076\n"); 
fprintf (indexcode, "         \074\057div\076\n"); 
fprintf (indexcode, "       \074\057div\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "       \074div id\075\042loading_container\042\076\n"); 
fprintf (indexcode, "         \074div id\075\042loading_container2\042\076\n"); 
fprintf (indexcode, "           \074div id\075\042loading_container3\042\076\n"); 
fprintf (indexcode, "             \074div id\075\042loading_container4\042\076\n"); 
fprintf (indexcode, "               Loading\054 please wait\056\056\056\n"); 
fprintf (indexcode, "             \074\057div\076\n"); 
fprintf (indexcode, "           \074\057div\076\n"); 
fprintf (indexcode, "         \074\057div\076\n"); 
fprintf (indexcode, "       \074\057div\076\n"); 
fprintf (indexcode, "\n"); 
fprintf (indexcode, "     \074\057body\076\n"); 
fprintf (indexcode, "   \074\057html\076\n"); 
fclose (indexcode); 

free (dbsql_ptr);
dbsql_ptr = NULL;

free (disply_ptr);
disply_ptr = NULL;
return 0;

}


 
