

#ifndef _SYMBOL_TABLE_H_
#define _SYMBOL_TABLE_H_


#define TABLE_LEN_MAX 1024*1024
#define FUNC_ARG_NUM_MAX 1024



typedef struct Symbol
{   
    char* name;
    int type; // 1: var, 2: func

    int subtype; // var: type; func: arg num
    int return_type; // 1:int 2:char 3:float 4:&
    int var_type[FUNC_ARG_NUM_MAX]; // func var type
    int var_name[FUNC_ARG_NUM_MAX]; // func var name

}Symbol;

typedef struct SymbolTable
{
    int length;
    Symbol table[TABLE_LEN_MAX];

}SymbolTable;

int table_insert(SymbolTable* symbol_table, Symbol* symbol);
int table_find(SymbolTable* symbol_table, char* symbol_name);




#endif