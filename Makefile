all:
	bison -d --verbose src/parser.y
	flex -l src/lexer.l
	mv lex.yy.c parser.tab.c parser.tab.h src/
	g++ ./src/node.cpp -c -g -std=c++14 -Wno-write-strings -o ./bin/node.out
	g++ ./src/datatypes.cpp -c -g -std=c++14 -Wno-write-strings -o ./bin/datatypes.out
	g++ ./src/tables.cpp -c -g -std=c++14 -Wno-write-strings -o ./bin/tables.out

	g++ src/parser.tab.h src/lex.yy.c src/parser.tab.c ./bin/node.out ./bin/datatypes.out ./bin/tables.out -ll -o bin/parser
	# python3 src/graph.py parser.output

clean:
	rm src/parser.tab.c
	rm src/parser.tab.h
	rm src/lex.yy.c
	rm bin/parser
	rm parser.output
	rm bin/*.out
# 	rm ./bin/*.csv
# 	rm ./bin/*.dot
# 	rm ./bin/*.png

	rm ast.node ast.edge ast.dot *.png
	
clean_csv:
	rm ./bin/*.csv
	