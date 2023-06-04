#1/bin/sh

set -xe

flex -o ./lexer.yy.c ./scanner.l
gcc -Wall -Wextra -o ~/LexerParser/bin/Lexer lexer.yy.c
