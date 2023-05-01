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
	$(CC) $(CFLAGS) -o test	grammar.tab.c lex.yy.c 
# lexer:	$(TARGETF)
# 	$(FLEX) $(TARGETF)

# default:
# 	$(CC) $(CFLAGS) -o test	grammar.tab.c lex.yy.c 

clean:
		$(RM) test *.o *.c 
