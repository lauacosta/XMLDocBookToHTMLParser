%{   
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    //#define YYDEBUG 1
    void yyerror(const char *str);
    //FILE *yyin;
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
     DOCTYPE {printf("<!DOCTYPE html>\n<html>\n");} article {printf("</html>\n");}
;

content:
   para content | para 
;

article: 
|   A_ARTICLE {printf("<article>\n");} info content section C_ARTICLE {printf("</article>\n");}
;

infocontent:
    titlesec    infocontent | titlesec
|   author  infocontent | author
;

info: 
    A_INFO {printf("<info> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");} infocontent C_INFO {printf("</info>\n");}
;

authorcontent:
    firstname authorcontent
|   surname authorcontent
|   surname
;

author:
    A_AUTHOR {printf("<author>\n");} authorcontent C_AUTHOR {printf("</author>\n");}
;

sharedcontent:
    TEXTO {printf("%s",yylval);}  sharedcontent         | TEXTO {printf("%s",yylval);} 
;

firstname:
    A_FIRSTNAME {printf("<firstname>");} sharedcontent C_FIRSTNAME {printf("</firstname>\n");}
;

surname:
    A_SURNAME {printf("<surname>");} sharedcontent C_SURNAME {printf("</surname>\n");}
;


paracontent:
    TEXTO
;

para:
    A_PARA {printf("<p>");}  para paracontent {printf("%s", yylval);}     C_PARA {printf("</p>\n");} 
|   A_PARA {printf("<p>");}  paracontent {printf("%s", yylval);}          C_PARA {printf("</p>\n");} 
;

titlesec:
        A_TITLE {printf("<h2>");} titlecontent C_TITLE {printf("</h2>\n");}
;

titlecontent: 
        TEXTO {printf("%s", yylval);} titlecontent   | TEXTO  {printf("%s", yylval);}
;

section: 
    A_SECTION {printf("<section>\n");} titlesec     content     C_SECTION {printf("</section>\n");}
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
    printf("Analisis Sintactico 'INTERRUMPIDO' -  Error: caracter '%s' no reconocido",  str);
    exit(1);
}

int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    printWelcome();
    printf("\n");
    printf("Codigo HTML\n"); 

    //yydebug = 1;

    if (!yyparse()){printf("\n Analisis Sintactico 'CORRECTO' \n");}    
    return 0;
}

