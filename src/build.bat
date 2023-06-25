@echo off
setlocal enabledelayedexpansion

REM Ejecutar bison
bison -d -t grammarPrueba.y

REM Ejecutar flex
flex -o lexer.yy.c scanner.l

REM Compilar con gcc
gcc -Wall -Wextra -o Parser.exe grammarPrueba.tab.c lexer.yy.c

