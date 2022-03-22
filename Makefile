all:
	bison -d --verbose src/parser.y
	flex -l src/lexer.l
	mv lex.yy.c parser.tab.c parser.tab.h src/
	g++ ./src/node.cpp -o ./bin/node.out
	g++ ./src/datatypes.cpp -o ./bin/datatypes.out
	g++ ./src/tables.cpp -o ./bin/tables.out

	g++ src/parser.tab.h src/lex.yy.c src/parser.tab.c ./bin/node.out ./bin/datatypes.out ./bin/tables.out -ll -o bin/parser
	python3 src/graph.py parser.output

clean:
	rm src/parser.tab.c		
	rm src/parser.tab.h
	rm src/lex.yy.c
	rm bin/parser
	rm parser.output
	rm bin/*.out