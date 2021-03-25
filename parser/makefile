


y.tab.o: parser.y
	yacc -d parser.y $(YACC_FLAGS)
	gcc -c y.tab.c -o $@ -Wno-incompatible-pointer-types -Wno-int-conversion

parser_tester: parser_tester.o y.tab.o lexer.o 
	gcc $^ -o $@

parser_tester.o: parser_tester.c
	gcc -c $^ -o $@

lexer.o:
	make -C ../lexer
	cp ../lexer/lexer.o ./

.PHONY: clean
clean:
	rm -f y.tab.* *.o parser_tester
	