%{
    extern int yylineno;
%}
%union {
    int num;
    char sym;
}

%locations
%token A B C EOL
%type exp
%%

input: /* lambda */
|   exp EOL { printf("Pertenece a {a^i c b^j /i=2j; j >= 0}"); return(0); }
;

exp:  
    A A exp B
|   C
;

%%

int main(){
    yyparse();
    return 0;
}

yyerror(char *s) {
    fprintf(stderr, "Error | Line: %d\n", yylineno);
    printf("No pertenece a {a^i c b^j /i=2j; j >= 0}\n");
    return 1;
}
/* yyerror(char *s) { */
/*     printf("No pertenece a {a^i c b^j /i=2j; j >= 0}\n"); */
/*     return 1; */
/* } */

