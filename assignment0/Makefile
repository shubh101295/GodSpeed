all:
	flex src/lexer.l
	mv lex.yy.c src/
	g++ -Wall src/lex.yy.c src/scanner.cpp -lfl -o lexer
