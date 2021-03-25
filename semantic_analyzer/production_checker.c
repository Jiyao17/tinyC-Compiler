

#include "../parser/y.tab.h"
#include "symbol_table.h"
#include "../parser/AST.h"


#define NAME_LEN_MAX 64
#define TABLE_LEN_MAX 1024*1024


// check AST rooted at node recursively
int check_tree(Node* node)
{
    if(check_production(node) == 0)
        return 0;
    else if (node->childNum > 0)
    {
        for(int i = 0; i< node->)
    }
}

// check the single production
int check_production(Node* node)
{

}

int check_PROGRAM(Node* node)
{

}