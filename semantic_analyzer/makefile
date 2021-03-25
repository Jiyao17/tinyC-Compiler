




semantic_analyzer: parser_objs lexer.o semantic_analyzer.o  production_checker.o
	gcc  lexer.o semantic_analyzer.o y.tab.o AST.o production_checker.o -o $@

parser_objs:
	make -C ../parser
	cp ../parser/y.tab.o ./
	cp ../parser/AST.o ./

lexer.o:
	make -C ../lexer
	cp ../lexer/lexer.o ./

semantic_analyzer.o: semantic_analyzer.c
	gcc -c $^ -o $@

production_checker.o: production_checker.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	make -C ../lexer clean
	make -C ../parser clean

	rm -f *.o semantic_analyzer

