/* create all pages for db menu and tables edit */
/* compile gcc webapp_write.c -o webapp_write.run -Wall */
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

FILE * webappcode;
 webappcode = fopen ("webapp.js","a");
fprintf (webappcode, "   \044\050document\051\056ready\050function\050\051\173   \n"); 
fprintf (webappcode, "        \n"); 
fprintf (webappcode, "     \057\057 On page load\072 datatable   \n"); 
fprintf (webappcode, "     var table_recordies \075 \044\050\047\043table_recordies\047\051\056dataTable\050\173 \n"); 
fprintf (webappcode, "       \042ajax\042\072 \042data\056php\077job\075get_recordies\042\054   \n"); 
fprintf (webappcode, "       \042columns\042\072 \133   \n"); 
fprintf (webappcode, "         \173 \042data\042\072 \042%s\042 \175\054   \n",dbsql_ptr[3]); 
fprintf (webappcode, "         \173 \042data\042\072 \042%s\042\054   \042sClass\042\072 \042%s\042 \175\054 \n",dbsql_ptr[4],dbsql_ptr[4]); 
i =5;
for ( i = 5 ; i < tablenummer ; i++)
{fprintf (webappcode, "         \173 \042data\042\072 \042%s\042 \175\054   \n",dbsql_ptr[i]); 
/*fprintf (webappcode, "         \173 \042data\042\072 \042revenue\042 \175\054   \n"); 
fprintf (webappcode, "         \173 \042data\042\072 \042project_year\042 \175\054   \n"); 
fprintf (webappcode, "         \173 \042data\042\072 \042employees\042  \175\054   \n"); 
fprintf (webappcode, "         \173 \042data\042\072 \042market_cap\042 \175\054   \n"); 
fprintf (webappcode, "         \173 \042data\042\072 \042headquarters\042 \175\054   \n"); */
}
i=3;
/* fprintf (webappcode, "         \173 \042data\042\072 \042materiomics_name\042\054   \042sClass\042\072 \042materiomics_name\042 \175\054   \n"); */
fprintf (webappcode, "         \173 \042data\042\072 \042functions\042\054      \042sClass\042\072 \042functions\042 \175   \n"); 
fprintf (webappcode, "       \135\054   \n"); 
fprintf (webappcode, "       \042aoColumnDefs\042\072 \133   \n"); 
fprintf (webappcode, "         \173 \042bSortable\042\072 false\054 \042aTargets\042\072 \133\0551\135 \175   \n"); 
fprintf (webappcode, "       \135\054   \n"); 
fprintf (webappcode, "       \042lengthMenu\042\072 \133\13310\054 25\054 50\054 100\054 \0551\135\054 \13310\054 25\054 50\054 100\054 \042All\042\135\135\054   \n"); 
fprintf (webappcode, "       \042oLanguage\042\072 \173   \n"); 
fprintf (webappcode, "         \042oPaginate\042\072 \173   \n"); 
fprintf (webappcode, "           \042sFirst\042\072       \042 \042\054   \n"); 
fprintf (webappcode, "           \042sPrevious\042\072    \042 \042\054   \n"); 
fprintf (webappcode, "           \042sNext\042\072        \042 \042\054   \n"); 
fprintf (webappcode, "           \042sLast\042\072        \042 \042\054   \n"); 
fprintf (webappcode, "         \175\054   \n"); 
fprintf (webappcode, "         \042sLengthMenu\042\072    \042Records per page\072 _MENU_\042\054   \n"); 
fprintf (webappcode, "         \042sInfo\042\072          \042Total of _TOTAL_ records \050showing _START_ to _END_\051\042\054   \n"); 
fprintf (webappcode, "         \042sInfoFiltered\042\072  \042\050filtered from _MAX_ total records\051\042   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "        \n"); 
fprintf (webappcode, "     \057\057 On page load\072 form validation   \n"); 
fprintf (webappcode, "     jQuery\056validator\056setDefaults\050\173   \n"); 
fprintf (webappcode, "       success\072 \047valid\047\054   \n"); 
fprintf (webappcode, "       rules\072 \173   \n"); 
fprintf (webappcode, "         james_removed\072 \173   \n"); 
fprintf (webappcode, "           required\072 true\054   \n"); 
fprintf (webappcode, "           min\072      1950\054   \n"); 
fprintf (webappcode, "           max\072      2025   \n"); 
fprintf (webappcode, "         \175   \n"); 
fprintf (webappcode, "       \175\054   \n"); 
fprintf (webappcode, "       errorPlacement\072 function\050error\054 element\051\173   \n"); 
fprintf (webappcode, "         error\056insertBefore\050element\051\073   \n"); 
fprintf (webappcode, "       \175\054   \n"); 
fprintf (webappcode, "       highlight\072 function\050element\051\173   \n"); 
fprintf (webappcode, "         \044\050element\051\056parent\050\047\056field_container\047\051\056removeClass\050\047valid\047\051\056addClass\050\047error\047\051\073   \n"); 
fprintf (webappcode, "       \175\054   \n"); 
fprintf (webappcode, "       unhighlight\072 function\050element\051\173   \n"); 
fprintf (webappcode, "         \044\050element\051\056parent\050\047\056field_container\047\051\056addClass\050\047valid\047\051\056removeClass\050\047error\047\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "     var form_record \075 \044\050\047\043form_record\047\051\073   \n"); 
fprintf (webappcode, "     form_record\056validate\050\051\073   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Show message   \n"); 
fprintf (webappcode, "     function show_message\050message_text\054 message_type\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\043message\047\051\056html\050\047\074p\076\047 \053 message_text \053 \047\074\057p\076\047\051\056attr\050\047class\047\054 message_type\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043message_container\047\051\056show\050\051\073   \n"); 
fprintf (webappcode, "       if \050typeof timeout_message \041\075\075 \047undefined\047\051\173   \n"); 
fprintf (webappcode, "         window\056clearTimeout\050timeout_message\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "       timeout_message \075 setTimeout\050function\050\051\173   \n"); 
fprintf (webappcode, "         hide_message\050\051\073   \n"); 
fprintf (webappcode, "       \175\054 8000\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "     \057\057 Hide message   \n"); 
fprintf (webappcode, "     function hide_message\050\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\043message\047\051\056html\050\047\047\051\056attr\050\047class\047\054 \047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043message_container\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Show loading message   \n"); 
fprintf (webappcode, "     function show_loading_message\050\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\043loading_container\047\051\056show\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "     \057\057 Hide loading message   \n"); 
fprintf (webappcode, "     function hide_loading_message\050\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\043loading_container\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Show lightbox   \n"); 
fprintf (webappcode, "     function show_lightbox\050\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\056lightbox_bg\047\051\056show\050\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\056lightbox_container\047\051\056show\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "     \057\057 Hide lightbox   \n"); 
fprintf (webappcode, "     function hide_lightbox\050\051\173   \n"); 
fprintf (webappcode, "       \044\050\047\056lightbox_bg\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\056lightbox_container\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "     \057\057 Lightbox background   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047click\047\054 \047\056lightbox_bg\047\054 function\050\051\173   \n"); 
fprintf (webappcode, "       hide_lightbox\050\051\073   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "     \057\057 Lightbox close button   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047click\047\054 \047\056lightbox_close\047\054 function\050\051\173   \n"); 
fprintf (webappcode, "       hide_lightbox\050\051\073   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "     \057\057 Escape keyboard key   \n"); 
fprintf (webappcode, "     \044\050document\051\056keyup\050function\050e\051\173   \n"); 
fprintf (webappcode, "       if \050e\056keyCode \075\075 27\051\173   \n"); 
fprintf (webappcode, "         hide_lightbox\050\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "        \n"); 
fprintf (webappcode, "     \057\057 Hide iPad keyboard   \n"); 
fprintf (webappcode, "     function hide_ipad_keyboard\050\051\173   \n"); 
fprintf (webappcode, "       document\056activeElement\056blur\050\051\073   \n"); 
fprintf (webappcode, "       \044\050\047input\047\051\056blur\050\051\073   \n"); 
fprintf (webappcode, "     \175   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Add record button   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047click\047\054 \047\043add_record\047\054 function\050e\051\173   \n"); 
fprintf (webappcode, "       e\056preventDefault\050\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\056lightbox_content h2\047\051\056text\050\047Add record\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record button\047\051\056text\050\047Add record\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record\047\051\056attr\050\047class\047\054 \047form add\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record\047\051\056attr\050\047data\055id\047\054 \047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \056field_container label\056error\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \056field_container\047\051\056removeClass\050\047valid\047\051\056removeClass\050\047error\047\051\073   \n");
i=3; 
for (i=3; i < tablenummer; i++)
{
fprintf (webappcode, "       \044\050\047\043form_record \043%s\047\051\056val\050\047\047\051\073   \n",dbsql_ptr[i]);
} 
i=3;
/*fprintf (webappcode, "       \044\050\047\043form_record \043materiomics_name\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043industries\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043revenue\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043project_year\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043employees\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043market_cap\047\051\056val\050\047\047\051\073   \n"); 
fprintf (webappcode, "       \044\050\047\043form_record \043headquarters\047\051\056val\050\047\047\051\073   \n"); */
fprintf (webappcode, "       show_lightbox\050\051\073   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Add record submit form   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047submit\047\054 \047\043form_record\056add\047\054 function\050e\051\173   \n"); 
fprintf (webappcode, "       e\056preventDefault\050\051\073   \n"); 
fprintf (webappcode, "       \057\057 Validate form   \n"); 
fprintf (webappcode, "       if \050form_record\056valid\050\051 \075\075 true\051\173   \n"); 
fprintf (webappcode, "         \057\057 Send record information to database   \n"); 
fprintf (webappcode, "         hide_ipad_keyboard\050\051\073   \n"); 
fprintf (webappcode, "         hide_lightbox\050\051\073   \n"); 
fprintf (webappcode, "         show_loading_message\050\051\073   \n"); 
fprintf (webappcode, "         var form_data \075 \044\050\047\043form_record\047\051\056serialize\050\051\073   \n"); 
fprintf (webappcode, "         var request   \075 \044\056ajax\050\173   \n"); 
fprintf (webappcode, "           url\072          \047data\056php\077job\075add_record\047\054   \n"); 
fprintf (webappcode, "           cache\072        false\054   \n"); 
fprintf (webappcode, "           data\072         form_data\054   \n"); 
fprintf (webappcode, "           dataType\072     \047json\047\054   \n"); 
fprintf (webappcode, "           contentType\072  \047application\057json\073 charset\075utf\0558\047\054   \n"); 
fprintf (webappcode, "           type\072         \047get\047   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056done\050function\050output\051\173   \n"); 
fprintf (webappcode, "           if \050output\056result \075\075 \047success\047\051\173   \n"); 
fprintf (webappcode, "             \057\057 Reload datable   \n"); 
fprintf (webappcode, "             table_recordies\056api\050\051\056ajax\056reload\050function\050\051\173   \n"); 
fprintf (webappcode, "               hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "               var %s \075 \044\050\047\043%s\047\051\056val\050\051\073   \n",dbsql_ptr[4],dbsql_ptr[4]); 
fprintf (webappcode, "               show_message\050\042Record \047\042 \053 %s \053 \042\047 added successfully\056\042\054 \047success\047\051\073   \n",dbsql_ptr[4]); 
fprintf (webappcode, "             \175\054 true\051\073   \n"); 
fprintf (webappcode, "           \175 else \173   \n"); 
fprintf (webappcode, "             hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "             show_message\050\047Add request failed\047\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "           \175   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056fail\050function\050jqXHR\054 textStatus\051\173   \n"); 
fprintf (webappcode, "           hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "           show_message\050\047Add request failed\072 \047 \053 textStatus\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "     \057\057 Edit record button   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047click\047\054 \047\056function_edit a\047\054 function\050e\051\173   \n"); 
fprintf (webappcode, "       e\056preventDefault\050\051\073   \n"); 
fprintf (webappcode, "       \057\057 Get record information from database   \n"); 
fprintf (webappcode, "       show_loading_message\050\051\073   \n"); 
fprintf (webappcode, "       var id      \075 \044\050this\051\056data\050\047id\047\051\073   \n"); 
fprintf (webappcode, "       var request \075 \044\056ajax\050\173   \n"); 
fprintf (webappcode, "         url\072          \047data\056php\077job\075get_record\047\054   \n"); 
fprintf (webappcode, "         cache\072        false\054   \n"); 
fprintf (webappcode, "         data\072         \047id\075\047 \053 id\054   \n"); 
fprintf (webappcode, "         dataType\072     \047json\047\054   \n"); 
fprintf (webappcode, "         contentType\072  \047application\057json\073 charset\075utf\0558\047\054   \n"); 
fprintf (webappcode, "         type\072         \047get\047   \n"); 
fprintf (webappcode, "       \175\051\073   \n"); 
fprintf (webappcode, "       request\056done\050function\050output\051\173   \n"); 
fprintf (webappcode, "         if \050output\056result \075\075 \047success\047\051\173   \n"); 
fprintf (webappcode, "           \044\050\047\056lightbox_content h2\047\051\056text\050\047Edit Record\047\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record button\047\051\056text\050\047Edit Record\047\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record\047\051\056attr\050\047class\047\054 \047form edit\047\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record\047\051\056attr\050\047data\055id\047\054 id\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \056field_container label\056error\047\051\056hide\050\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \056field_container\047\051\056removeClass\050\047valid\047\051\056removeClass\050\047error\047\051\073   \n");
i=3;
for (i=3; i<tablenummer; i++)
{ 
fprintf (webappcode, "           \044\050\047\043form_record \043%s\047\051\056val\050output\056data\1330\135\056%s\051\073   \n",dbsql_ptr[i],dbsql_ptr[i]); 
/*fprintf (webappcode, "           \044\050\047\043form_record \043materiomics_name\047\051\056val\050output\056data\1330\135\056materiomics_name\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043industries\047\051\056val\050output\056data\1330\135\056industries\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043revenue\047\051\056val\050output\056data\1330\135\056revenue\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043project_year\047\051\056val\050output\056data\1330\135\056project_year\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043employees\047\051\056val\050output\056data\1330\135\056employees\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043market_cap\047\051\056val\050output\056data\1330\135\056market_cap\051\073   \n"); 
fprintf (webappcode, "           \044\050\047\043form_record \043headquarters\047\051\056val\050output\056data\1330\135\056headquarters\051\073   \n"); */ 
}
fprintf (webappcode, "           hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "           show_lightbox\050\051\073   \n"); 
fprintf (webappcode, "         \175 else \173   \n"); 
fprintf (webappcode, "           hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "           show_message\050\047Information request failed\047\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "         \175   \n"); 
fprintf (webappcode, "       \175\051\073   \n"); 
fprintf (webappcode, "       request\056fail\050function\050jqXHR\054 textStatus\051\173   \n"); 
fprintf (webappcode, "         hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "         show_message\050\047Information request failed\072 \047 \053 textStatus\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "       \175\051\073   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "        \n"); 
fprintf (webappcode, "     \057\057 Edit record submit form   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047submit\047\054 \047\043form_record\056edit\047\054 function\050e\051\173   \n"); 
fprintf (webappcode, "       e\056preventDefault\050\051\073   \n"); 
fprintf (webappcode, "       \057\057 Validate form   \n"); 
fprintf (webappcode, "       if \050form_record\056valid\050\051 \075\075 true\051\173   \n"); 
fprintf (webappcode, "         \057\057 Send record information to database   \n"); 
fprintf (webappcode, "         hide_ipad_keyboard\050\051\073   \n"); 
fprintf (webappcode, "         hide_lightbox\050\051\073   \n"); 
fprintf (webappcode, "         show_loading_message\050\051\073   \n"); 
fprintf (webappcode, "         var id        \075 \044\050\047\043form_record\047\051\056attr\050\047data\055id\047\051\073   \n"); 
fprintf (webappcode, "         var form_data \075 \044\050\047\043form_record\047\051\056serialize\050\051\073   \n"); 
fprintf (webappcode, "         var request   \075 \044\056ajax\050\173   \n"); 
fprintf (webappcode, "           url\072          \047data\056php\077job\075edit_record\046id\075\047 \053 id\054   \n"); 
fprintf (webappcode, "           cache\072        false\054   \n"); 
fprintf (webappcode, "           data\072         form_data\054   \n"); 
fprintf (webappcode, "           dataType\072     \047json\047\054   \n"); 
fprintf (webappcode, "           contentType\072  \047application\057json\073 charset\075utf\0558\047\054   \n"); 
fprintf (webappcode, "           type\072         \047get\047   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056done\050function\050output\051\173   \n"); 
fprintf (webappcode, "           if \050output\056result \075\075 \047success\047\051\173   \n"); 
fprintf (webappcode, "             \057\057 Reload datable   \n"); 
fprintf (webappcode, "             table_recordies\056api\050\051\056ajax\056reload\050function\050\051\173   \n"); 
fprintf (webappcode, "               hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "               var %s \075 \044\050\047\043%s\047\051\056val\050\051\073   \n",dbsql_ptr[4],dbsql_ptr[4]); 
fprintf (webappcode, "               show_message\050\042Record \047\042 \053 %s \053 \042\047 edited successfully\056\042\054 \047success\047\051\073   \n",dbsql_ptr[4]); 
fprintf (webappcode, "             \175\054 true\051\073   \n"); 
fprintf (webappcode, "           \175 else \173   \n"); 
fprintf (webappcode, "             hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "             show_message\050\047Edit request failed\047\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "           \175   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056fail\050function\050jqXHR\054 textStatus\051\173   \n"); 
fprintf (webappcode, "           hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "           show_message\050\047Edit request failed\072 \047 \053 textStatus\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "        \n"); 
fprintf (webappcode, "     \057\057 Delete record   \n"); 
fprintf (webappcode, "     \044\050document\051\056on\050\047click\047\054 \047\056function_delete a\047\054 function\050e\051\173   \n"); 
fprintf (webappcode, "       e\056preventDefault\050\051\073   \n"); 
fprintf (webappcode, "       var %s \075 \044\050this\051\056data\050\047name\047\051\073   \n",dbsql_ptr[4]); 
fprintf (webappcode, "       if \050confirm\050\042Are you sure you want to delete\054 data deletion is permanent \047\042 \053 %s \053 \042\047\077\042\051\051\173   \n",dbsql_ptr[4]); 
fprintf (webappcode, "         show_loading_message\050\051\073   \n"); 
fprintf (webappcode, "         var id      \075 \044\050this\051\056data\050\047id\047\051\073   \n"); 
fprintf (webappcode, "         var request \075 \044\056ajax\050\173   \n"); 
fprintf (webappcode, "           url\072          \047data\056php\077job\075delete_record\046id\075\047 \053 id\054   \n"); 
fprintf (webappcode, "           cache\072        false\054   \n"); 
fprintf (webappcode, "           dataType\072     \047json\047\054   \n"); 
fprintf (webappcode, "           contentType\072  \047application\057json\073 charset\075utf\0558\047\054   \n"); 
fprintf (webappcode, "           type\072         \047get\047   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056done\050function\050output\051\173   \n"); 
fprintf (webappcode, "           if \050output\056result \075\075 \047success\047\051\173   \n"); 
fprintf (webappcode, "             \057\057 Reload datable   \n"); 
fprintf (webappcode, "             table_recordies\056api\050\051\056ajax\056reload\050function\050\051\173   \n"); 
fprintf (webappcode, "               hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "               show_message\050\042Record \047\042 \053 %s \053 \042\047 deleted successfully\056\042\054 \047success\047\051\073   \n",dbsql_ptr[4]); 
fprintf (webappcode, "             \175\054 true\051\073   \n"); 
fprintf (webappcode, "           \175 else \173   \n"); 
fprintf (webappcode, "             hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "             show_message\050\047Delete request failed\047\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "           \175   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "         request\056fail\050function\050jqXHR\054 textStatus\051\173   \n"); 
fprintf (webappcode, "           hide_loading_message\050\051\073   \n"); 
fprintf (webappcode, "           show_message\050\047Delete request failed\072 \047 \053 textStatus\054 \047error\047\051\073   \n"); 
fprintf (webappcode, "         \175\051\073   \n"); 
fprintf (webappcode, "       \175   \n"); 
fprintf (webappcode, "     \175\051\073   \n"); 
fprintf (webappcode, "      \n"); 
fprintf (webappcode, "   \175\051\073   \n"); 
fclose (webappcode); 
free (dbsql_ptr);
dbsql_ptr = NULL;
free (disply_ptr);
disply_ptr = NULL;
return 0;
}
