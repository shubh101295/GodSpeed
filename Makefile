all:
	flex src/lexer.l
	mv lex.yy.c src/
	g++ -Wall src/lex.yy.c -ll -o bin/lexer

clean:
	rm src/lex.yy.c
	rm bin/lexer
