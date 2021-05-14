#include <stdio.h>
#include <time.h>

#include "../parser/y.tab.h"
#include "../lexer/lexer.h"
#include "../parser/AST.h"
#include "../semantic_analyzer/production_checker.h"
#include "../semantic_analyzer/symbol_table.h"
#include "../code_generator/code_generator.h"

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

extern SymbolTable* st;


int main(int argc, char* argv[])
{
    // two files required: input file and output file
    if (!lex_init(argv[1], argv[2]))
    {
        fprintf(stderr, "\033[0;31m"); 
        fprintf(stderr, "Illegal inputs.\n");
        fprintf(stderr, "\033[0m"); 
        return FALSE;
    }
    
    //parse
    if (yyparse() == 0)
    {
        fprintf(stderr, "\033[0;32m"); 
        fprintf(stderr, "\nParse succeeded!\n\n"); 
        fprintf(stderr, "\033[0m"); 
    }
    else
    {
        printf("\033[0;31m"); 
        printf("\nParse failed!\n\n"); 
        printf("\033[0m"); 

        exit(-1);
    }

    // printf("AST:\n");
    // printTree(root, 0);
    // printf("\n");

    st = init_st();
    check_tree(root);
    // printf("Symbol table %d: \n", st->length);
    // table_print(st);

    printf("Generating assembly code...\n");
    FILE* outfile=fopen(argv[2], "w+");
    code_gen(root, outfile);
    fclose(outfile);

    fprintf(stderr, "\033[0;32m"); 
    fprintf(stderr, "\nAssembly code generation succeeded!\n"); 
    fprintf(stderr, "\033[0m"); 

    // printf("Symbol table %d: \n", st->length);
    // table_print(st);

    return 0;
}


    // printf("AST:\n");
    // printTree(root, 0);
    // printf("\n");

    // st = init_st();
    // check_tree(root);
    
    // printf("Symbol table %d: \n", st->length);
    // table_print(st);
