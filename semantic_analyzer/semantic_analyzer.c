#include <stdio.h>
#include <time.h>


#include "../parser/y.tab.h"
#include "../lexer/lexer.h"

#include <string.h>

static const char TK_TYPE_DETAIL[64][32] = 
{
    "NONE",
    // data type
    "TK_TYPE_VOID",
    "TK_TYPE_INT",
    "TK_TYPE_CHAR",
    "TK_TYPE_FLOAT",
    // control keyword
    "TK_CTRL_IF",
    "TK_CTRL_ELSE",
    "TK_CTRL_WHILE",
    "TK_CTRL_RETURN",
    // constant
    "TK_NAME_ID",
    "TK_CONS_INT",
    "TK_CONS_CHAR",
    "TK_CONS_FLOAT",
    "TK_CONS_STRING",
    // operators
    "TK_OPER_ADD",
    "TK_OPER_SUB",
    "TK_OPER_MUL",
    "TK_OPER_DIV",

    "TK_OPER_EQ",
    "TK_OPER_NEQ",
    "TK_OPER_LESS",
    "TK_OPER_LE",
    "TK_OPER_GRT",
    "TK_OPER_GE",

    "TK_OPER_ASSIGN",
    "TK_OPER_POINTER",
    // separators
    "TK_SEPR_LBRA",
    "TK_SEPR_RBRA",
    "TK_SEPR_LPAR",
    "TK_SEPR_RPAR",
    "TK_SEPR_SCOL",

    "TK_WHITE",
    "TK_ERR"
};

typedef struct Node Node;
extern void printTree(Node* root, int indent_num);
extern Node* root;


int main(int argc, char* argv[])
{
    if (!lex_init(argv[1], argv[2]))
    {
        fprintf(stderr, "Illegal inputs.\n");
        return TRUE;
    }
    

    if (yyparse() == 0)
    {
        printf("\033[0;32m"); 
        printf("\nParse succeeded!\n\n"); 
        printf("\033[0m"); 
    }
    else
    {
        printf("\033[0;31m"); 
        printf("\nParse failed!\n\n"); 
        printf("\033[0m"); 
    }

    printf("AST:\n");
    printTree(root, 0);





    return 0;
}

