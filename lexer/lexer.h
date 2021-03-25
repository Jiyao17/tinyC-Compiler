
#ifndef SCAN_H
#define SCAN_H


#ifndef TRUE
    #define TRUE 1
#endif
#ifndef FALSE
    #define FALSE 0
#endif



int yylex();

int lex_init(char* input_file, char* ouput_file);



// typedef enum
// {
//     NONE = 0,
//     // data type
//     TK_TYPE_VOID,
//     TK_TYPE_INT,
//     TK_TYPE_CHAR,
//     TK_TYPE_FLOAT,
//     // control keyword
//     TK_CTRL_IF,
//     TK_CTRL_ELSE,
//     TK_CTRL_WHILE,
//     TK_CTRL_RETURN,
//     // constant
//     TK_NAME_ID,
//     TK_CONS_INT,
//     TK_CONS_CHAR,
//     TK_CONS_FLOAT,
//     TK_CONS_STRING,
//     // operators
//     TK_OPER_ADD,
//     TK_OPER_SUB,
//     TK_OPER_MUL,
//     TK_OPER_DIV,

//     TK_OPER_EQ,
//     TK_OPER_NEQ,
//     TK_OPER_LESS,
//     TK_OPER_LE,
//     TK_OPER_GRT,
//     TK_OPER_GE,

//     TK_OPER_ASSIGN,
//     TK_OPER_POINTER,
//     // separators
//     TK_SEPR_LBRA,
//     TK_SEPR_RBRA,
//     TK_SEPR_LPAR,
//     TK_SEPR_RPAR,
//     TK_SEPR_SCOL, 

//     TK_WHITE,
//     TK_ERR

// }TK_TYPE;




#endif