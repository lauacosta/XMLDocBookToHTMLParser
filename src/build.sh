#1/bin/sh

set -xe
bison -d -t -Wother grammarPrueba.y
flex -o ./lexer.yy.c ./scanner.l
gcc -Wall -Wextra -o ./Parser grammarPrueba.tab.c lexer.yy.c
