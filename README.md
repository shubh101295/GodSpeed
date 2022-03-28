SIT languages
Source - GOlang
Implementation - C++
Target - X86

Steps to run the parser 
```
	make
	./bin/parser <path to go file>
```


Note: make itself creates the dot file named as "parser.dot".

Steps to run AST part
```
	make
	./bin/parser <path to go file>
```

Csv for symbolTable of each function is generated in ```bin``` folder.

Do ```make clean_csv``` do remove the csv files generated in the ```bin``` folder.

