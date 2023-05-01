%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "grammar.tab.h"

    int yylex();
    void yerror(const char *msg){
        fprintf(stderr, "C-like: %s\n", msg);
    }

    int line_num = 1;
%}

%option noyywrap


%%
[013579]        {   printf("IMPAR: %s\n", yytext);      }
[2468]          {   printf("PAR: %s\n", yytext);        }
\n              {   line_num++;                         }
´[^123456789]´   {   printf("Lexical error in line :%d\n", line_num); exit(1);}
%%

int main(){
        yylex();
        return 0;
}
