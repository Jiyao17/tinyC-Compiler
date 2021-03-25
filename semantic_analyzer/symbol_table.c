

#include <string.h>
#include "symbol_table.h"


int table_insert(SymbolTable* symbol_table, Symbol* symbol)
{
    if(symbol_table->length == TABLE_LEN_MAX)
    {
        printf("Error: symbol table is full!\n");
        exit(-1);
    }
    else
    {
        symbol_table->table[symbol_table->length] = *symbol;
        return 1;
    }
}

int table_find(SymbolTable* symbol_table, char* symbol_name)
{
    for (int i = 0; i < symbol_table->length; i++)
    {
        if(strcmp((symbol_table->table)[i].name, symbol_name) == 0)
        return i;
    }
    
    return -1;
}