#1/bin/sh

set -xe
bison -d -t grammar.y
flex -o ./lexer.yy.c ./scanner.l
gcc -Wall -Wextra -o ./Parser grammar.tab.c lexer.yy.c
