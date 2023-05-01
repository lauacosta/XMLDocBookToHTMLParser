%{
%}

%union {
    int num;
    char sym;
}

%token EOL
%token <num> NUMBER
%type <num> exp
%token PLUS MINUS TIMES


%%

input:
|   line input
;

line: 
    exp EOL { printf("%d\n", $1); }
|   EOL
;

exp: 
    NUMBER {$$ = $1; }
|   exp PLUS exp { $$ = $1 + $3;}
|   exp MINUS exp { $$ = $1 - $3;}
|   exp TIMES exp { $$ = $1 * $3;}
;
%%

int main(){
    yyparse();
    return 0;
}

yyerror(char *s) {
    printf("ERROR: %s\n", s);
    return 0;
}
