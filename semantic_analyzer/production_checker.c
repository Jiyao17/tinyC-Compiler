
#include <string.h>


#include "../parser/y.tab.h"
#include "symbol_table.h"
#include "../parser/AST.h"



extern SymbolTable* st;


int check_FUNC_DEF(Node* node)
{
    if (strcmp(node->pattern, "FUNC_DEF") != 0)
    {
        printf("ERROR: shouldn't call check_FUNC_DEF!\n");
        exit(-1);
    }

    Symbol* symbol = (Symbol*) malloc(sizeof(Symbol));

    symbol->type = 2;
    symbol->return_type = node->children[0]->pattern;
    symbol->name = node->children[1]->pattern;
    symbol->arg_num = node->children[2]->childNum;

    for(int i = 0; i< node->children[2]->childNum; i++)
    {
        symbol->var_type[i] = node->children[2]->children[i]->children[0]->pattern;
        symbol->var_name[i] = node->children[2]->children[i]->children[1]->pattern;     
    
        Symbol* varSymbol = (Symbol*) malloc(sizeof(Symbol));
        varSymbol->type = 1;
        varSymbol->subtype = symbol->var_type[i];
        varSymbol->name = symbol->var_name[i];
    
        table_insert(st, varSymbol);
    
    }
    
    table_insert(st, symbol);
}

int check_FUNC_VAR_DEF(Node* node)
{
    if (strcmp(node->pattern, "FUNC_VAR_DEF") != 0)
    {
        printf("ERROR: shouldn't call check_FUNC_VAR_DEF!\n");
        exit(-1);
    }

    Symbol* symbol = (Symbol*) malloc(sizeof(Symbol));

    symbol->type = 1;
    symbol->subtype = node->children[0]->pattern;
    symbol->name = node->children[1]->pattern;
    
    table_insert(st, symbol);
}

int check_STMT_ASSIGN(Node* node)
{
    if (strcmp(node->pattern, "STMT_ASSIGN") != 0)
    {
        printf("ERROR: shouldn't call check_STMT_ASSIGN!\n");
        exit(-1);
    }


    char* leftVarName = node->children[0]->pattern;
    
    // printf("checking: %s...\n", left->pattern);

    if (table_find(st, leftVarName) == -1)
        fprintf(stderr, "Semantic error: variable %s is not defined before use.\n", leftVarName);

    
}

int check_FUNC_CALL(Node* node)
{
    if (strcmp(node->pattern, "FUNC_CALL") != 0)
    {
        printf("ERROR: shouldn't call check_FUNC_CALL!\n");
        exit(-1);
    }


    char* funcName = node->children[0]->pattern;
    
    // printf("checking: %s...\n", left->pattern);

    if (table_find(st, funcName) == -1)
    {
        if(strcmp(funcName, "printf") != 0 && strcmp(funcName, "scanf") != 0)
            fprintf(stderr, "Semantic error: function %s is not defined before use.\n", funcName);
    }

}

// check the single production
int check_production(Node* node)
{
    // printf("checking: %s\n", node->pattern);
    if (strcmp(node->pattern, "FUNC_DEF") == 0)
        return check_FUNC_DEF(node);
    if (strcmp(node->pattern, "FUNC_VAR_DEF") == 0)
        return check_FUNC_VAR_DEF(node);
    if (strcmp(node->pattern, "STMT_ASSIGN") == 0)
        return check_STMT_ASSIGN(node);
    if (strcmp(node->pattern, "FUNC_CALL") == 0)
        return check_FUNC_CALL(node);
}


// check AST rooted at node recursively
int check_tree(Node* node)
{
    check_production(node);

    if (node->childNum > 0)
    {   
        for(int i = 0; i< node->childNum; i++)
        {   
            check_tree(node->children[i]);
        }
    }

    return 0;
}

// empty node
    // if(node->children[i]->childNum == 1 && node->children[i]->isLeaf && node->children[i]->type== 1 )
    //     free();