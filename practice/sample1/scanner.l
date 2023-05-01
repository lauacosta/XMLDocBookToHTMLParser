%{
    #include "grammar.tab.h"
%}


%%
[1]     { return UNO;}
[0]     { return CERO;}
\n      { return EOL;}
.       {}
%%

yywrap() {}
