
GREEN="\033[0;32m"
NC="\033[0m" # No Color





semantic_analyzer: AST.o y.tab.o lexer.o semantic_analyzer.o  production_checker.o symbol_table.o

	
	gcc  $^ -o $@

	@echo ${GREEN}"make succeeded!"${NC}

AST.o:
	make -C ../parser 
	cp ../parser/y.tab.o ./
	cp ../parser/AST.o ./

y.tab.o:
	cp ../parser/y.tab.o ./

lexer.o:
	make -C ../lexer
	cp ../lexer/lexer.o ./

semantic_analyzer.o: semantic_analyzer.c
	gcc -c $^ -o $@

production_checker.o: production_checker.c
	gcc -c $^ -o $@

symbol_table.o: symbol_table.c
	gcc -c $^ -o $@


.PHONY: clean
clean:
	make -C ../lexer clean
	make -C ../parser clean

	rm -f *.o semantic_analyzer

