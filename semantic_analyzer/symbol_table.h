

#ifndef _SYMBOL_TABLE_H_
#define _SYMBOL_TABLE_H_


#define TABLE_LEN_MAX 1024*1024
#define FUNC_ARG_NUM_MAX 1024



typedef struct Symbol
{   
    char* name;
    int type; // 1: var, 2: func
    char* scope;

    char* subtype; // var: type; 
    int arg_num;//func: arg num

    int pos; // var: position on stack

    char* return_type; // func return type
    char* var_type[FUNC_ARG_NUM_MAX]; // func var type
    char* var_name[FUNC_ARG_NUM_MAX]; // func var name

}Symbol;

typedef struct SymbolTable
{
    int length;
    char* current_scope;
    Symbol* table[TABLE_LEN_MAX];

}SymbolTable;

SymbolTable* init_st();

int symbol_print(Symbol* symbol);

int table_insert(SymbolTable* symbol_table, Symbol* symbol);
int table_find(SymbolTable* symbol_table, char* symbol_name, char* scope);
int table_print(SymbolTable* symbol_table);



#endif