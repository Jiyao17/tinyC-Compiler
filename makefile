

YACC_FLAGS = --debug --verbose
CFLAGS = 

TARGET = parser
OBJS = y.tab.o scanner.o parser.o




# make parser
$(TARGET): $(OBJS)
	gcc $^ -o $@

y.tab.o: parser_productions.y
	yacc -d parser_productions.y $(YACC_FLAGS)
	gcc -c y.tab.c -o $@ -Wno-incompatible-pointer-types -Wno-int-conversion

scanner.o: scanner_regex.l 
	lex -t $^ > scanner.c
	gcc -c scanner.c -o $@

parser.o: parser.c
	gcc -c $^ -o $@



# make scanner to test tokenizer
scanner: y.tab.o scanner.o scanner_tester.o
	gcc scanner.o scanner_tester.o -o $@

scanner_tester.o: scanner_tester.c
	gcc -c $^ -o $@






.PHONY: clean
clean:
	rm -f scanner.c y.tab.c y.tab.h y.output $(OBJS) $(TARGET) scanner_tester.o scanner



