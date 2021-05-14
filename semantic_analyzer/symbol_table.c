

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "symbol_table.h"


SymbolTable* st;

SymbolTable* init_st()
{
    st = (SymbolTable*) malloc(sizeof(SymbolTable));

    return st;
}


int table_insert(SymbolTable* symbol_table, Symbol* symbol)
{
    if(symbol_table->length == TABLE_LEN_MAX)
    {
        printf("Error: symbol table is full!\n");
        exit(-1);
    }
    else
    {   
        // printf("adding new entry to symbol table...\n");
        symbol_table->table[symbol_table->length] = symbol;
        (symbol_table->length)++;
        return 1;
    }
}

int table_find(SymbolTable* symbol_table, char* symbol_name, char* scope)
{   
    for (int i = 0; i < symbol_table->length; i++)
    {
        int same_name = strcmp((symbol_table->table)[i]->name, symbol_name) == 0 ? 1 : 0;
        if (same_name == 1)
        {
            // find func
            if ((symbol_table->table)[i]->type == 2 && scope == NULL)
                return i;
            // find var
            else
            {
                int same_scope = strcmp((symbol_table->table)[i]->scope, scope) == 0 ? 1 : 0;
                if( same_scope == 1)
                    return i;
            }
        }        
    }
    
    return -1;
}

int symbol_print(Symbol* symbol)
{
    if(symbol->type == 1)
    {
        printf("Variable: %s %s %s %d\n", symbol->subtype, symbol->name, symbol->scope, symbol->pos);
    }
    else if(symbol->type == 2)
    {
        printf("Function: %s %s(", symbol->return_type, symbol->name);
        for(int i = 0; i < symbol->arg_num; i++)
        {
            if( i == symbol->arg_num - 1)
                printf("%s", symbol->var_type[i]);
            else
                printf("%s, ", symbol->var_type[i]);
        }
        printf(")\n");
    }
}

int table_print(SymbolTable* symbol_table)
{
    for(int i=0; i< symbol_table->length; i++)
    {
        symbol_print(symbol_table->table[i]);
    }
}