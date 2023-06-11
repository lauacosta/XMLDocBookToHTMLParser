#1/bin/sh

set -xe
bison -d -t -Wother grammar.y
flex -o ./lexer.yy.c ./scanner.l
gcc -Wall -Wextra -o ./Parser grammar.tab.c lexer.yy.c
