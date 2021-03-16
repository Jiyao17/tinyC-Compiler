
#include <stdio.h>

#include "scanner.h"
#include "y.tab.h"

const char TK_TYPE_DETAIL[64][64] = 
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
    "TK_MAIN",
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
    "TK_SEPR_COMA",

    "TK_WHITE",
    "TK_ERR"
};


// ./scanner input_filename output_filename
int main(int argc, char* argv[])
{
    if (!lex_init(argv[1], argv[2]))
    {
        fprintf(stderr, "Illegal inputs.\n");
        return TRUE;
    }


    int token_num = 0;
    int token_type = 0;

    // for(int i = 0; i< 33; i++)
    //     printf("token: %s\n", TK_TYPE_DETAIL[i]);


    while (token_type = yylex())
    {
        if(token_type != TK_WHITE)
        {
            token_num++;
            if(token_type < 257)
                printf("token NO.%-3d: %-3d %c\n", token_num, token_type, token_type);
            else
                // printf("token NO.%-3d: %-3d\n", token_num, token_type);
                printf("token NO.%-3d: %-3d %s\n", token_num, token_type, TK_TYPE_DETAIL[token_type-257]);
        }
    }
    
    
    printf("There are %d tokens in the input file.\n", token_num);

    return 0;
}


// int main(int argc, char* argv[])
// {
//     if (!lex_init(argv[1], argv[2]))
//     {
//         fprintf(stderr, "Illegal inputs.\n");
//         return TRUE;
//     }

//     FILE* outfile = fopen(argv[2], "w");

//     int token_num = 0;
//     int token_type = 0;

//     for(int i = 0; i< 32; i++)
//         printf("%token: %s\n", TK_TYPE_DETAIL[i]);


//     while (token_type = yylex())
//     {
//         if(token_type != TK_WHITE)
//         {
//             token_num++;
//             // printf("token NO.%-3d: %-3d\n", token_num, token_type);
//             printf("token NO.%-3d: %-3d %s\n", token_num, token_type, TK_TYPE_DETAIL[token_type]);
//         }
//     }
    
    
//     printf("There are %d tokens in the input file.\n", token_num);

//     return 0;
// }