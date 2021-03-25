


lexer.o: lexer.l
	lex -t $^ > lexer.c
	gcc -c lexer.c -o $@

lexer_tester: lexer.o lexer_tester.o
	make -C ../parser
	gcc $^ -o $@

lexer_tester.o: lexer_tester.c
	gcc -c $^ -o $@


.PHONY: clean
clean:
	rm -f lexer.c *.o lexer_tester