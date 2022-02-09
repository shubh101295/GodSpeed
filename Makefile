all:
	bison -d src/parser.y
	flex src/lexer.l
	mv lex.yy.c src/
	g++ src/scanner.cpp src/parser.tab.c src/lex.yy.c -ll -o bin/parser

clean:
	rm src/lex.yy.c
	rm bin/lexer
	rm parser.tab.c
	rm parser.tab.h
	rm bin/parser