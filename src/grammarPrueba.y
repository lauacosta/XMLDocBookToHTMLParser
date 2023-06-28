%{   
    #include <stdio.h>
    #define YYDEBUG 1
    void yyerror(const char *str);
    FILE *salida;
%}

%union{
    char* text;
}

%token <text> TEXTO 
%token <text> RUTA 
%token <text> URL

%token XLINK VIDEODATA IMAGEDATA DOCTYPE C_REF
%token A_ARTICLE        C_ARTICLE
%token A_INFO           C_INFO
%token A_TITLE          C_TITLE
%token A_ABSTRACT       C_ABSTRACT 
%token A_PARA           C_PARA
%token A_AUTHOR         C_AUTHOR
%token A_PERSONNAME     C_PERSONNAME
%token A_FIRSTNAME      C_FIRSTNAME
%token A_SURNAME        C_SURNAME
%token A_DATE           C_DATE
%token A_SECTION        C_SECTION
//%token A_SIMSECTION     C_SIMSECTION
%token A_COPYRIGHT      C_COPYRIGHT
%token A_ADDRESS        C_ADDRESS
%token A_CITY           C_CITY
%token A_STATE          C_STATE
%token A_POSTCODE       C_POSTCODE
%token A_STREET         C_STREET
%token A_EMAIL          C_EMAIL
%token A_PHONE          C_PHONE
%token A_ITEMIZEDLIST   C_ITEMIZEDLIST
%token A_LISTITEM       C_LISTITEM
%token A_EMPHASIS       C_EMPHASIS
%token A_HOLDER         C_HOLDER
%token A_SIMPARA        C_SIMPARA
%token A_YEAR           C_YEAR
%token A_COMMENT        C_COMMENT
%token A_IMPORTANT      C_IMPORTANT
%token A_LINK           C_LINK
%token A_MEDIAOBJECT    C_MEDIAOBJECT
%token A_VIDEOOBJECT    C_VIDEOOBJECT
%token A_IMAGEOBJECT    C_IMAGEOBJECT
%token A_INFORMALTABLE  C_INFORMALTABLE
%token A_TGROUP         C_TGROUP
%token A_ROW            C_ROW
%token A_TABLE          C_TABLE
%token A_THEAD          C_THEAD
%token A_TFOOT          C_TFOOT
%token A_TBODY          C_TBODY  
%token A_ENTRYTBL       C_ENTRYTBL
%token A_ENTRY          C_ENTRY

%start sigma

%%
sigma:
     DOCTYPE {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n");} article {fprintf(salida,"</body>\n</html>\n");}
;
/*---------------------------------PRODUCCIONES PRINCIPALES---------------------------------*/
section: 
//    %empty
   A_SECTION {fprintf(salida,"<section>\n");} section info titlesec content C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} section titlesec content C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} section info content C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} section content C_SECTION {fprintf(salida,"</section>\n");}
//|   A_SECTION {fprintf(salida,"<section>\n");} info titlesec content simsection     C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} info titlesec content                C_SECTION {fprintf(salida,"</section>\n");}
//|   A_SECTION {fprintf(salida,"<section>\n");} titlesec content simsection          C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} titlesec content                     C_SECTION {fprintf(salida,"</section>\n");}
//|   A_SECTION {fprintf(salida,"<section>\n");} info content simsection              C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} info content                         C_SECTION {fprintf(salida,"</section>\n");}
//|   A_SECTION {fprintf(salida,"<section>\n");} content simsection                   C_SECTION {fprintf(salida,"</section>\n");}
|   A_SECTION {fprintf(salida,"<section>\n");} content                              C_SECTION {fprintf(salida,"</section>\n");}
;


articlecontent:
    %empty
|   info titledoc content section
|   info content section
|   titledoc content section
//|   info titledoc content simsection
//|   info titledoc content
//|   info content simsection
//|   info content 
//|   titledoc content simsection
//|   titledoc content
;

article:
   A_ARTICLE {/*fprintf(salida,"<article>\n");*/} articlecontent C_ARTICLE {fprintf(salida,"</article>\n");}
;

infocontent:
    infocontent titlesec    | titlesec
|   infocontent author      | author
|   infocontent date        | date
|   infocontent copyright   | copyright
|   infocontent abstract    | abstract
|   infocontent address     | address
|   infocontent mediaobject | mediaobject
;

info: 
    A_INFO {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");} infocontent C_INFO {fprintf(salida,"</p>\n</div>\n");}
;

titledoc:
    A_TITLE {fprintf(salida,"<h1>\n");} titlecontent C_TITLE {fprintf(salida,"</h1>\n");}

titlesec:
    A_TITLE {fprintf(salida,"<h2>");} titlecontent C_TITLE {fprintf(salida,"</h2>\n");}
;

/*---------------------------------PRODUCCIONES SECUNDARIAS---------------------------------*/

author:
    A_AUTHOR {fprintf(salida,"<address>\n");} authorcontent     C_AUTHOR {fprintf(salida,"</address>\n");}
|   A_AUTHOR {fprintf(salida,"<address>\n");} personname        C_AUTHOR {fprintf(salida,"</address>\n");}
;

para:
    A_PARA {fprintf(salida,"<p>");}  para paracontent      C_PARA {fprintf(salida,"</p>\n");} 
|   A_PARA {fprintf(salida,"<p>");}  paracontent           C_PARA {fprintf(salida,"</p>\n");} 
;

simpara:
    A_SIMPARA {fprintf(salida,"<p>");} seclcontent C_SIMPARA {fprintf(salida,"</p>\n");} 
;

address:
    A_ADDRESS {fprintf(salida,"<address>\n");} addresscontent C_ADDRESS {fprintf(salida,"</address>\n");}
;

firstname:/*VER ETIQUETAS EN HTML*/
    A_FIRSTNAME {fprintf(salida,"<p>");} sharedcontent C_FIRSTNAME {fprintf(salida,"</p>\n");}
;

surname:/*VER ETIQUETAS EN HTML*/
    A_SURNAME {fprintf(salida,"<p>");} sharedcontent C_SURNAME {fprintf(salida,"</p>\n");}
;

email:/*VER ETIQUETAS EN HTML*/
    A_EMAIL {fprintf(salida,"<p>");} sharedcontent C_EMAIL {fprintf(salida,"</p>\n");}
;

postcode:
    A_POSTCODE {fprintf(salida,"<p>");} sharedcontent C_POSTCODE {fprintf(salida,"</p>");}
;

street:/*VER ETIQUETAS EN HTML*/
    A_STREET {fprintf(salida,"<p>");} sharedcontent C_STREET {fprintf(salida,"</p>\n");}
;

city:/*VER ETIQUETAS EN HTML*/
    A_CITY {fprintf(salida,"<p>");} sharedcontent C_CITY {fprintf(salida,"</p>\n");}
;

state:/*VER ETIQUETAS EN HTML*/
    A_STATE {fprintf(salida,"<p>");} sharedcontent C_STATE {fprintf(salida,"</p>\n");}
;

phone:/*VER ETIQUETAS EN HTML*/
    A_PHONE {fprintf(salida,"<p>");} sharedcontent C_PHONE {fprintf(salida,"</p>\n");}
;

date:/*VER ETIQUETAS EN HTML*/
    A_DATE {fprintf(salida,"<p>");} sharedcontent C_DATE {fprintf(salida,"</p>\n");}
;

year:/*VER ETIQUETAS EN HTML*/
    A_YEAR {fprintf(salida,"<p>");} sharedcontent C_YEAR {fprintf(salida,"</p>\n");}
;

holder:/*VER ETIQUETAS EN HTML*/
    A_HOLDER {fprintf(salida,"<p>");} sharedcontent C_HOLDER {fprintf(salida,"</p>\n");}
;

comment: /*VER ETIQUETAS EN HTML*/
    A_COMMENT {fprintf(salida,"<p>");} seclcontent C_COMMENT {fprintf(salida,"</p>\n");} 
;

seclcontent: /*Contenido de simpara, link, emphasis y commment*/
    seclcontent TEXTO {fprintf(salida,"%s", yylval);}   | TEXTO {fprintf(salida,"%s", yylval);}
|   seclcontent emphasis                            | emphasis
|   seclcontent comment                             | comment
|   seclcontent email                               | email
|   seclcontent author                              | author
;



emphasis:   /*VER ETIQUETAS EN HTML*/
    A_EMPHASIS {fprintf(salida,"<p>");} seclcontent C_EMPHASIS {fprintf(salida,"</p>\n");} 
;

link:   /*VER ETIQUETAS EN HTML*/
    A_LINK {fprintf(salida,"<p>");} seclcontent C_LINK {fprintf(salida,"</p>\n");} 
|   XLINK {fprintf(salida,"html:a href=\"");} URL {fprintf(salida,"%s", yylval);} C_REF {fprintf(salida,"\">\n");} 
;

personname:/*VER ETIQUETAS EN HTML aunque no creo que sea para personname sea el caso*/
    A_PERSONNAME authorcontent C_PERSONNAME
;

important: /*VER ETIQUETAS EN HTML*/
    A_IMPORTANT {fprintf(salida,"<p>");} titlesec content C_IMPORTANT {fprintf(salida,"</p>\n");}
|   A_IMPORTANT {fprintf(salida,"<p>");} content C_IMPORTANT {fprintf(salida,"</p>\n");} 
;

copyright:/*VER ETIQUETAS EN HTML*/
    A_COPYRIGHT copyrightcontent C_COPYRIGHT
;

abstract:/*VER ETIQUETAS EN HTML*/
    A_ABSTRACT titlesec abstractcontent C_ABSTRACT
|   A_ABSTRACT abstractcontent C_ABSTRACT
;

mediaobject:/*VER ETIQUETAS EN HTML*/
    A_MEDIAOBJECT mediaobjectcontent C_MEDIAOBJECT
|   A_MEDIAOBJECT info mediaobjectcontent C_MEDIAOBJECT
;

videoobject:/*VER ETIQUETAS EN HTML*/
    A_VIDEOOBJECT videocontent C_VIDEOOBJECT 
;

imageobject:/*VER ETIQUETAS EN HTML*/
    A_IMAGEOBJECT imagecontent C_IMAGEOBJECT 
;

itemizedlist:/*VER ETIQUETAS EN HTML*/
    A_ITEMIZEDLIST listitem C_ITEMIZEDLIST
;

listitem:/*VER ETIQUETAS EN HTML*/
    A_LISTITEM content C_LISTITEM
;

informaltable:/*VER ETIQUETAS EN HTML*/
    A_INFORMALTABLE informalcontent C_INFORMALTABLE
|   A_TABLE informalcontent C_TABLE
;

tgroup:/*VER ETIQUETAS EN HTML*/
     A_TGROUP thead tfoot tbody C_TGROUP
|    A_TGROUP thead tbody C_TGROUP
|    A_TGROUP tfoot tbody C_TGROUP
|    A_TGROUP tbody C_TGROUP
;

thead:/*VER ETIQUETAS EN HTML*/
    A_THEAD variosrow C_THEAD 
;

tfoot:/*VER ETIQUETAS EN HTML*/
    A_TFOOT variosrow C_TFOOT 
;

tbody:/*VER ETIQUETAS EN HTML*/
    A_TBODY variosrow C_TBODY 
;

row:/*VER ETIQUETAS EN HTML*/
    A_ROW rowcontent C_ROW
;

entry:/*VER ETIQUETAS EN HTML*/
    A_ENTRY entrycontent C_ENTRY
;

entrytbl:/*VER ETIQUETAS EN HTML*/
    A_ENTRYTBL thead tbody C_ENTRYTBL
|   A_ENTRYTBL tbody C_ENTRYTBL
;

/*---------------------------------PRODUCCIONES DE CONTENIDO---------------------------------*/
content:
   content          para | para
|  content  itemizedlist | itemizedlist
|  content     important | important
|  content       simpara | simpara
|  content       address | address
|  content   mediaobject | mediaobject
|  content informaltable | informaltable
|  content       comment | comment
|  content      abstract | abstract
;

abstractcontent:
    abstractcontent para | para
|   abstractcontent simpara | simpara
;

copyrightcontent:/* la regla de copyright es (year)+ (holder)* */
    copyrightcontent year | year | year holders
;

holders:
    holders holder | holder 
;

addresscontent:
    TEXTO {fprintf(salida,"%s",yylval);} addresscontent | TEXTO {fprintf(salida,"%s",yylval);}
|   addresscontent street   | street
|   addresscontent city     | street
|   addresscontent state    | state
|   addresscontent phone    | phone
|   addresscontent email    | email
|   addresscontent postcode | postcode
;

titlecontent: 
    titlecontent   TEXTO {fprintf(salida,"%s", yylval);} | TEXTO  {fprintf(salida,"%s", yylval);}
|   titlecontent emphasis | emphasis
|   titlecontent email    | email
|   titlecontent link     | link   
;

authorcontent:
    authorcontent firstname 
|   authorcontent surname 
|   surname
;

sharedcontent:
    sharedcontent TEXTO {fprintf(salida,"%s",yylval);}  | TEXTO {fprintf(salida,"%s",yylval);} 
|   sharedcontent link                                  | link
|   sharedcontent emphasis                              | emphasis
|   sharedcontent comment                               | comment
;

paracontent:
    paracontent TEXTO {fprintf(salida,"%s", yylval);} | TEXTO {fprintf(salida,"%s", yylval);}
|   paracontent emphasis        | emphasis
|   paracontent link            | link
|   paracontent email           | email
|   paracontent author          | author
|   paracontent comment         | comment
|   paracontent itemizedlist    | itemizedlist
|   paracontent important       | important
|   paracontent address         | address
|   paracontent mediaobject     | mediaobject
|   paracontent informaltable   | informaltable
;

entrycontent:
    entrycontent TEXTO {fprintf(salida,"%s", yylval);} | TEXTO {fprintf(salida,"%s", yylval);}
|   entrycontent comment            | comment
|   entrycontent itemizedlist       | itemizedlist
|   entrycontent important          | important
|   entrycontent mediaobject        | mediaobject
|   entrycontent abstract           | abstract
|   entrycontent para               | para
|   entrycontent simpara            | simpara
;

mediaobjectcontent:
    videoobject mediaobject | videoobject
|   imageobject mediaobject | imageobject
;

videocontent:
    info VIDEODATA {fprintf(salida,"html:a href=\"");} URL {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   VIDEODATA {fprintf(salida,"html:a href=\"");} URL {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   info VIDEODATA {fprintf(salida,"html:a href=\"");} RUTA {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   VIDEODATA {fprintf(salida,"html:a href=\"");} RUTA {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
;

imagecontent:
    info IMAGEDATA {fprintf(salida,"html:a href=\"");} URL {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   IMAGEDATA {fprintf(salida,"html:a href=\"");} URL {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   info IMAGEDATA {fprintf(salida,"html:a href=\"");} RUTA {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
|   IMAGEDATA {fprintf(salida,"html:a href=\"");} RUTA {fprintf(salida,"%s",yylval);} C_REF {fprintf(salida,"\">");}
;

informalcontent:
    informalcontent mediaobject | mediaobject
|   informalcontent tgroup      | tgroup
;

variosrow:
    row | variosrow row 
;

rowcontent:
    entry       | rowcontent entry 
|   entrytbl    | rowcontent entrytbl 
;

%%
