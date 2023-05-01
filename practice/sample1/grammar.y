%{
%}
%union {
    int num;
    char sym;
}

%token CERO UNO EOL
%type a
%%

input: /* lambda */
|   a EOL { printf("Pertenece a {0, 1}* donde hay misma cantidad de 0's que de 1's"); return(0); }
;

a:  
    CERO UNO
|   UNO CERO
|   CERO a UNO 
|   UNO a CERO
|   CERO UNO a
|   UNO CERO a
|   CERO a UNO a
|   UNO a CERO a
;

%%

int main(){
    yyparse();
    return 0;
}

yyerror(char *s) {
    printf("No pertenece a {0, 1}* donde hay misma cantidad de 0's que de 1's");
    return 1;
}

