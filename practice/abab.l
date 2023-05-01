%{
#include "abab.tab.h"
%}


%%
[0-9]+      { yylval.num = atoi(yytext); return NUMBER;}
\+          { return PLUS; }
\-          { return MINUS;}
\*          { return TIMES;}
\n          { return EOL;  }
.           {}

%%

yywrap() {}
