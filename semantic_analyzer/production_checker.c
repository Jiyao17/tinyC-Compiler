

#include "../parser/y.tab.h"


#define NAME_LEN_MAX 64
#define TABLE_LEN_MAX 1024*1024

typedef struct Node Node;
extern void printTree(Node* root, int indent_num);


enum SymbolType
{
        VAR,
        FUNC,
        VAR_INT, VAR_CHAR, VAR_FLOAT, VAR_STRING,
        FUNC_NAME,
}

typedef struct{
        char* name;
        int type; //
        


}Symbol;
Symbol* symbolTable[TABLE_LEN_MAX];

// check AST rooted at node recursively
int check_tree(Node* node)
{
    if(check_production(node) == 0)
        return 0;
    else if
}

// check the single production
int check_production(Node* node)
{

}

int check_PROGRAM(Node* node)
{

}