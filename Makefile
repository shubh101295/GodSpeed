all:
	flex src/lexer.l
	mv lex.yy.c src/
	g++ src/scanner.cpp src/y.tab.h src/lex.yy.c -ll -o bin/lexer

clean:
	rm src/lex.yy.c
	rm bin/lexer
