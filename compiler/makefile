

PARSER_OBJS=y.tab.o AST.o
LEXER_OBJS=lexer.o
SEMANTIC_OBJS=production_checker.o symbol_table.o
CODE_OBJS=code_generator.o



TARGET=compiler
OBJS=${PARSER_OBJS} ${LEXER_OBJS} ${SEMANTIC_OBJS} ${CODE_OBJS}

${TARGET}: parser_objs lexer_objs semantic_objs code_objs compiler.o
	gcc ${OBJS} compiler.o -o $@

parser_objs:
	make -C ../parser 
	cp ../parser/y.tab.o ./
	cp ../parser/AST.o ./

lexer_objs:
	make -C ../lexer
	cp ../lexer/lexer.o ./

semantic_objs:
	make -C ../semantic_analyzer
	cp ../semantic_analyzer/production_checker.o ./
	cp ../semantic_analyzer/symbol_table.o ./

code_objs:
	make -C ../code_generator
	cp ../code_generator/code_generator.o ./

compiler.o: compiler.c
	gcc -c $^ -o $@



.PHONY: clean
clean:
	rm -f *.o compiler