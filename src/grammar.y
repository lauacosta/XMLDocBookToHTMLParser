%{   
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define YYDEBUG 1
    void yyerror(const char *str);
    extern int yylex();
    FILE *salida;
%}
%union{char* text;}

%token <text> TEXTO 
%token <text> URL
%token <text> RUTA

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
%token A_SIMSECTION     C_SIMSECTION
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
    DOCTYPE {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n\t");} article {fprintf(salida,"</body>\n</html>\n");}
;

article: 
    A_ARTICLE {fprintf(salida,"<article>\n");}info titledoc content recusection C_ARTICLE {fprintf(salida,"</article>\n");}
;

recusection:
    %empty
|   section recusection 
|   simsection recusection 
;

content:
    itemizedlist    content | itemizedlist
|   important       content | important
|   para            content | para 
|   simpara         content | simpara
|   address         content | address
|   mediaobject     content | mediaobject
|   informaltable   content | informaltable
|   table           content | table
|   comment         content | comment
|   abstract        content | abstract
;

section: 
    A_SECTION {fprintf(salida,"<section>\n");} info titlesec content recusection C_SECTION {fprintf(salida,"</section>\n");}
;

simsection:
    A_SIMSECTION {fprintf(salida,"<section>\n");} info titlesec content C_SIMSECTION {fprintf(salida,"</section>\n");}
;

infocontent:
    mediaobject infocontent | mediaobject
|   abstract    infocontent | abstract
|   address     infocontent | address
|   author      infocontent | author
|   date        infocontent | date
|   copyright   infocontent | copyright
;

info: 
    %empty
|    A_INFO  {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");} titlesec infocontent C_INFO {fprintf(salida,"</p>\n</div>\n");}
;

abstractcontent:
    para abstractcontent    | para
|   simpara abstractcontent | simpara
;

abstract:
    A_ABSTRACT titlesec abstractcontent C_ABSTRACT
;

addresscontent:
    TEXTO {fprintf(salida, "%s",$1);}  addresscontent    | TEXTO {fprintf(salida, "%s",$1);} 
|   street addresscontent   | street
|   city addresscontent     | city
|   state addresscontent    | state
|   phone addresscontent    | phone
|   email addresscontent    | email
|   postcode addresscontent | postcode
;

address: 
    A_ADDRESS {fprintf(salida,"<address>\n");} addresscontent C_ADDRESS {fprintf(salida,"</address>\n");}
;

authorcontent:
    firstname authorcontent
|   surname authorcontent
|   personame authorcontent
|   personame
|   surname
;

author:
    A_AUTHOR {fprintf(salida,"<address>\n");} authorcontent C_AUTHOR {fprintf(salida,"</address>\n");}
;

copyrightyearcontent:
    year copyrightyearcontent
|   year copyrightholdercontent
|   year
;

copyrightholdercontent:
    holder copyrightholdercontent | holder
;

copyright:
    A_COPYRIGHT {fprintf(salida,"<div>\n");} copyrightyearcontent C_COPYRIGHT {fprintf(salida,"</div>\n");}
|   A_COPYRIGHT {fprintf(salida,"<div>\n");} TEXTO {fprintf(salida, "%s", $3);} C_COPYRIGHT {fprintf(salida,"</div>\n");}
;

titlecontent: 
    emphasis titlecontent   | emphasis
|   link titlecontent       | link
|   email titlecontent      | email
|   TEXTO {fprintf(salida, "%s",$1);} titlecontent      | TEXTO {fprintf(salida, "%s",$1);}
;

titledoc:
    %empty
|    A_TITLE  {fprintf(salida,"<h1>\n");} titlecontent C_TITLE {fprintf(salida,"</h1>\n");}
;

titlesec:
    %empty
|    A_TITLE  {fprintf(salida,"<h2>");} titlecontent C_TITLE {fprintf(salida,"</h2>\n");}
;

simparacontent:
    emphasis | TEXTO {fprintf(salida, "%s", $1);} |   personame
|   link     | email
|   author   | comment
;

simpara:
    A_SIMPARA {fprintf(salida,"<p>");} simpara simparacontent C_SIMPARA {fprintf(salida,"</p>\n");}
|   A_SIMPARA {fprintf(salida,"<p>");} simparacontent C_SIMPARA {fprintf(salida,"</p>\n");}
;

emphasis:
    A_EMPHASIS {fprintf(salida,"<div>\n<p><i>\n");} simparacontent C_EMPHASIS {fprintf(salida,"</i></p>\n</div>\n");}
;

comment:
   A_COMMENT {fprintf(salida, "<div>\n");} simparacontent C_COMMENT {fprintf(salida, "</div>\n");}
;

link:
    A_LINK link simparacontent C_LINK
|   A_LINK simparacontent C_LINK
|   A_LINK xlink C_LINK
;

paracontent:
    emphasis    | link          | email     | author
|   comment     | itemizedlist  | important | address
|   mediaobject | informaltable | TEXTO {fprintf(salida, "%s\n",$1);}
;

para:
    A_PARA {fprintf(salida,"<p>");} para paracontent C_PARA {fprintf(salida,"</p>\n");}
|   A_PARA {fprintf(salida,"<p>");} paracontent C_PARA  {fprintf(salida,"</p>\n");}
;

important:
    A_IMPORTANT titlesec content C_IMPORTANT
;

sharedcontent:
    comment sharedcontent       | comment
|   emphasis sharedcontent      | emphasis
|   link sharedcontent          | link
|   TEXTO {fprintf(salida, "%s",$1);}  sharedcontent         | TEXTO {fprintf(salida, "%s",$1);} 
;

personame:
    A_PERSONNAME  firstname surname C_PERSONNAME 
;


firstname:
    A_FIRSTNAME {fprintf(salida,"<p>");} sharedcontent C_FIRSTNAME {fprintf(salida,"</p>\n");}
;

surname:
    A_SURNAME {fprintf(salida,"<p>\n");} sharedcontent C_SURNAME {fprintf(salida,"</p>\n");}
;

street:
    A_STREET {fprintf(salida,"<p>");}sharedcontent C_STREET{fprintf(salida,"</p>");}
;

postcode:
    A_POSTCODE {fprintf(salida,"<p>");} TEXTO {fprintf(salida, "%s",$3);}  C_POSTCODE {fprintf(salida,"</p>");}
;

city:
    A_CITY {fprintf(salida,"<p>");} sharedcontent C_CITY {fprintf(salida,"</p>");}
;

phone:
    A_PHONE {fprintf(salida,"<p>");} sharedcontent C_PHONE {fprintf(salida,"</p>");}
;

email:
    A_EMAIL {fprintf(salida,"</p>");} sharedcontent C_EMAIL{fprintf(salida,"</p>");}
;

date:
    A_DATE {fprintf(salida,"<p>");} sharedcontent C_DATE{fprintf(salida,"</p>");}
;

year:
    A_YEAR {fprintf(salida,"<p>");} sharedcontent C_YEAR {fprintf(salida,"</p>");}
;

holder:
    A_HOLDER {fprintf(salida,"<p>");} sharedcontent C_HOLDER {fprintf(salida,"</p>");}
;

state:
    A_STATE {fprintf(salida,"<p>");} sharedcontent C_STATE {fprintf(salida,"</p>");}
;

mediaobjectcontent:
    %empty
|   videoobject mediaobjectcontent 
|   imageobject mediaobjectcontent
;

mediaobject:
    A_MEDIAOBJECT info videoobject mediaobjectcontent  C_MEDIAOBJECT
|   A_MEDIAOBJECT info imageobject mediaobjectcontent  C_MEDIAOBJECT
//|   A_MEDIAOBJECT videoobject   mediaobjectcontent                      C_MEDIAOBJECT
//|   A_MEDIAOBJECT imageobject   mediaobjectcontent                      C_MEDIAOBJECT
//|   A_MEDIAOBJECT videoobject                                           C_MEDIAOBJECT
//|   A_MEDIAOBJECT imageobject                                           C_MEDIAOBJECT
;

imageobject:
    A_IMAGEOBJECT info      imagedata    C_IMAGEOBJECT
//|   A_IMAGEOBJECT imagedata              C_IMAGEOBJECT
;

videoobject:
    A_VIDEOOBJECT info      videodata   C_VIDEOOBJECT
//|   A_VIDEOOBJECT videodata             C_VIDEOOBJECT
;

videodata:
   VIDEODATA URL C_REF    
    VIDEODATA RUTA C_REF
;

imagedata:
   IMAGEDATA URL C_REF  
|    IMAGEDATA RUTA C_REF
;

itemizedlist:
    A_ITEMIZEDLIST listitem itemizedlist C_ITEMIZEDLIST
|   A_ITEMIZEDLIST listitem C_ITEMIZEDLIST
;

listitem:
    A_LISTITEM  content listitem C_LISTITEM
|   A_LISTITEM  content C_LISTITEM
;

informaltablecontent:
    mediaobject informaltablecontent    | mediaobject
|   tgroup  informaltablecontent        | tgroup
;

informaltable:
    A_INFORMALTABLE informaltablecontent C_INFORMALTABLE
;

tgroup:
    A_TGROUP thead  tbody   tfoot   C_TGROUP
|   A_TGROUP thead  tfoot           C_TGROUP
|   A_TGROUP tbody  tfoot           C_TGROUP
|   A_TGROUP tfoot                  C_TGROUP
;

table:
    A_TABLE     tablecontent      C_TABLE
;

tablecontent:
    row tablecontent    |   row
;

thead:
     A_THEAD    tablecontent    C_THEAD
;

tbody:
     A_TBODY    tablecontent    C_TBODY
;

tfoot:
     A_TFOOT    tablecontent    C_TFOOT
;

rowcontent:
    entry rowcontent    |   entry
|   entrytbl rowcontent |   entrytbl
;

row:
   A_ROW    rowcontent  C_ROW
;

entrycontent:
    TEXTO {fprintf(salida, "%s\n",$1);} entrycontent | TEXTO {fprintf(salida, "%s\n",$1);} 
|   itemizedlist    entrycontent | itemizedlist
|   important       entrycontent | important
|   para            entrycontent | para
|   simpara         entrycontent | simpara
|   mediaobject     entrycontent | mediaobject
|   comment         entrycontent | comment
|   abstract        entrycontent | abstract
;

entry:
    A_ENTRY entrycontent C_ENTRY
;

entrytbl:
    A_ENTRYTBL  thead tbody C_ENTRYTBL
|   A_ENTRYTBL  tbody C_ENTRYTBL
;

xlink:
    XLINK URL C_REF
;
%%
