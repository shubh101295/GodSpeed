all:
	flex src/lexer.l
	mv lex.yy.c src/
	g++ -Wall src/lex.yy.c -lfl -o bin/lexer

clean:
	rm src/lex.yy.c
	rm bin/lexer
