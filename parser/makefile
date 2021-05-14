YACC_FLAGS = #--debug --verbose

parser_objs: y.tab.o AST.o
	echo "making parser......"

y.tab.o: parser.y
	yacc -d parser.y $(YACC_FLAGS)
	gcc -c y.tab.c -o $@ -Wno-incompatible-pointer-types -Wno-int-conversion

AST.o:
	gcc -c AST.c -o AST.o	

parser_tester: parser_tester.o y.tab.o lexer.o AST.o
	gcc $^ -o $@

parser_tester.o: parser_tester.c
	gcc -c $^ -o $@

lexer.o:
	make -C ../lexer
	cp ../lexer/lexer.o ./

.PHONY: clean
clean:
	make -C ../lexer clean
	rm -f y.tab.* *.o parser_tester
	