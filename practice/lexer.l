%{
#include "abab.tab.h"
%}

%%
"+" { printf("Plus: %s\n", yytext);}
"-" { printf("Minus: %s\n", yytext);}
"A" { printf("Letter A: %s\n", yytext);}
"a" { printf("Letter a: %s\n", yytext);}
.   { exit(1);}

%%

int main(){
        yylex();
        return 0;
}
int yywrap(){return(1);}

