all:
	bison -d src/parser.y
	flex -l src/lexer.l
	mv lex.yy.c parser.tab.c parser.tab.h src/
	g++ src/parser.tab.h src/lex.yy.c src/parser.tab.c -ll -o bin/parser

clean:
	rm src/parser.tab.c		
	rm src/parser.tab.h
	rm src/lex.yy.c
	rm bin/parser