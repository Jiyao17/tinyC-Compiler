




semantic_analyzer: y.tab.o lexer.o semantic_analyzer.o 
	gcc $^ -o $@

y.tab.o:
	make -C ../parser
	cp ../parser/y.tab.o ./

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

