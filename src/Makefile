# Makefile para el Parser
CC = gcc
FLEX = flex	
BISON = bison	

BisonFlags = -d -t -Wother -Wcounterexamples -v 
CCFlags = -Wall -Wextra -pedantic

TARGETBISON = grammar.y
TARGETFLEX = scanner.l
TARGETDIR = Parser

default: $(TARGETBISON) $(TARGETFLEX) main.c
	$(BISON) $(BisonFlags) $(TARGETBISON)
	$(FLEX) -o scanner.yy.c $(TARGETFLEX)
	$(CC) $(CCFlags) -o $(TARGETDIR) grammar.tab.c scanner.yy.c main.c

.PHONY: clean
clean:
	$(RM) Parser scanner.yy.c grammar.tab.c grammar.tab.h salida.html




