CC = gcc
FLEX = flex
BISON = bison

BFLAGS = -d -t
CFLAGS = -g -Wall

TARGETB = grammar.y
TARGETF = scanner.l 

default: $(TARGETB)	$(TARGETF)
	$(BISON) $(BFLAGS) $(TARGETB)
	$(FLEX) $(TARGETF)
	$(CC) $(CFLAGS) -o ~/LexerParser/bin/test grammar.tab.c lex.yy.c  -lfl

clean:
		$(RM) test *.o *.c 
