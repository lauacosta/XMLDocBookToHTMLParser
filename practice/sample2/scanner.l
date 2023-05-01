%{
    #include "grammar.tab.h"
    static int next_column = 1;
    int column = 1;
    #define HANDLE_COLUMN column = next_column; next_column += stylen(yytext)
    
    #define YYERROR_VERBOSE 1
%}

%option yylineno noyywrap

%%
[a]         {  HANDLE_COLUMN; return A;}
[b]         {  HANDLE_COLUMN; return B;}
[c]         {  HANDLE_COLUMN; return C;}
\n          {  next_column = 1; return EOL;}
.           {}
%%

yywrap() {}

