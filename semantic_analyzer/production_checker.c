
#include <string.h>


#include "../parser/y.tab.h"
#include "symbol_table.h"
#include "../parser/AST.h"



SymbolTable* st;

int init_st()
{
    st = (SymbolTable*) malloc(sizeof(SymbolTable));

    return 0;
}


int check_FUNC_DEF(Node* node)
{
    
}




// check the single production
int check_production(Node* node)
{
    if (strcmp(node->pattern, "FUNC_DEF") == 0)
        return check_FUNC_DEF(node);

}


// check AST rooted at node recursively
int check_tree(Node* node)
{
    check_production(node);

    if (node->childNum > 0)
    {
        for(int i = 0; i< node->childNum; i++)
        {
            check_production(node->children[i]);
        }
    }

    return 0;
}