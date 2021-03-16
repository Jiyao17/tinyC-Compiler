

TARGET = parser
OBJS = y.tab.o scanner.o parser.o


$(TARGET): $(OBJS)
	gcc $^ -o $@

y.tab.o: parser_productions.y
	yacc -d parser_productions.y
	gcc -c y.tab.c -o $@

scanner.o: scanner_regex.l 
	lex -t $^ > scanner.c
	gcc -c scanner.c -o $@

parser.o: parser.c
	gcc -c $^ -o $@








scanner: y.tab.o scanner.o scanner_tester.o
	gcc scanner.o scanner_tester.o -o $@

scanner_tester.o: scanner_tester.c
	gcc -c $^ -o $@




.PHONY: clean
clean:
	rm -f scanner.c y.tab.c y.tab.h $(OBJS) $(TARGET) main.o



