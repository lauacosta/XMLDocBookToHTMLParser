%{   
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    //#define YYDEBUG 1
    void yyerror(const char *str);
    const char* getExtension(const char* filename);
    int errorControl (int argc, char **argv);
    FILE *salida;
%}

%union{char* text;}

%token <text> TEXTO 
%token RUTA URL XLINK VIDEODATA IMAGEDATA DOCTYPE C_REF
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
     DOCTYPE {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n");} article {fprintf(salida,"</body>\n</html>\n");}
;

content:
   para content | para 
;

article: 
|   A_ARTICLE {fprintf(salida,"<article>\n");} info content section C_ARTICLE {fprintf(salida,"</article>\n");}
;

infocontent:
    titlesec    infocontent | titlesec
|   author  infocontent | author
;

info: 
    A_INFO {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");} infocontent C_INFO {fprintf(salida,"</p>\n</div>\n");}
;

authorcontent:
    firstname authorcontent
|   surname authorcontent
|   surname
;

author:
    A_AUTHOR {fprintf(salida,"<address>\n");} authorcontent C_AUTHOR {fprintf(salida,"</address>\n");}
;

sharedcontent:
    TEXTO {fprintf(salida,"%s",yylval);}  sharedcontent         | TEXTO {fprintf(salida,"%s",yylval);} 
;

firstname:
    A_FIRSTNAME {fprintf(salida,"<p>");} sharedcontent C_FIRSTNAME {fprintf(salida,"</p>\n");}
;

surname:
    A_SURNAME {fprintf(salida,"<p>");} sharedcontent C_SURNAME {fprintf(salida,"</p>\n");}
;


paracontent:
    TEXTO {fprintf(salida,"%s", yylval);}
;

para:
    A_PARA {fprintf(salida,"<p>");}  para paracontent      C_PARA {fprintf(salida,"</p>\n");} 
|   A_PARA {fprintf(salida,"<p>");}  paracontent           C_PARA {fprintf(salida,"</p>\n");} 
;

titlesec:
        A_TITLE {fprintf(salida,"<h2>");} titlecontent C_TITLE {fprintf(salida,"</h2>\n");}
;

titlecontent: 
        TEXTO {fprintf(salida,"%s", yylval);} titlecontent   | TEXTO  {fprintf(salida,"%s", yylval);}
;

section: 
    A_SECTION {fprintf(salida,"<section>\n");} titlesec     content     C_SECTION {fprintf(salida,"</section>\n");}
;

%%

void printWelcome(){
    printf("\n\t ANALIZADOR SINTACTICO  -  Grupo N°19\n");
    printf("\n\t Ultima modificación 24-06-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    printf("\t");    
}

void yyerror(const char *str) {
    printf("Analisis Sintactico 'INTERRUMPIDO' -  Error: '%s' ",  str);
    exit(1);
}

int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    salida = fopen("salida.html", "w");
    printWelcome();
    printf("\n");
    printf("Codigo HTML\n"); 

    //yydebug = 1;

    if (!yyparse()){printf("\n Analisis Sintactico 'CORRECTO' \n");}    
    fclose(salida);
    return 0;
}

