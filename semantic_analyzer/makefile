

semantic_objs: semantic_analyzer.o production_checker.o symbol_table.o

semantic_analyzer.o: semantic_analyzer.c
	gcc -c $^ -o $@

production_checker.o: production_checker.c
	gcc -c $^ -o $@

symbol_table.o: symbol_table.c
	gcc -c $^ -o $@


.PHONY: clean
clean:
	rm -f *.o

