




semantic_analyzer: parser_objs lexer.o semantic_analyzer.o 
	gcc  lexer.o semantic_analyzer.o y.tab.o AST.o -o $@

parser_objs:
	make -C ../parser
	cp ../parser/y.tab.o ./
	cp ../parser/AST.o ./

lexer.o:
	make -C ../lexer
	cp ../lexer/lexer.o ./

semantic_analyzer.o: semantic_analyzer.c
	gcc -c $^ -o $@


.PHONY: clean
clean:
	make -C ../lexer clean
	make -C ../parser clean

	rm -f *.o semantic_analyzer

