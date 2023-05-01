%{
%}

%token ODD EVEN EOL
%type exp
%%

input:
    exp EOL { printf("Pertence a todos los numeros pares posibles"); return(0); }
;

exp:
    ODD exp
|   EVEN exp
|   EVEN
;

%%

int main(){
    yyparse();
    return 0;
}

yyerror(char *s) {
    printf("No pertenece a todos los numeros pares posibles");
    return 1;
}

