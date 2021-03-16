

%{
/*

*/


#include <stdio.h>

#include "scanner.h"

extern int yylex();

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}


%}

/*









*/

// data type
%token    TK_TYPE_VOID
%token    TK_TYPE_INT
%token    TK_TYPE_CHAR
%token    TK_TYPE_FLOAT
// control keyword
%token    TK_CTRL_IF
%token    TK_CTRL_ELSE
%token    TK_CTRL_WHILE
%token    TK_CTRL_RETURN
%token    TK_MAIN
// constant
%token    TK_NAME_ID
%token    TK_CONS_INT
%token    TK_CONS_CHAR
%token    TK_CONS_FLOAT
%token    TK_CONS_STRING
// operators
%token    TK_OPER_ADD
%token    TK_OPER_SUB
%token    TK_OPER_MUL
%token    TK_OPER_DIV

%token    TK_OPER_EQ
%token    TK_OPER_NEQ
%token    TK_OPER_LESS
%token    TK_OPER_LE
%token    TK_OPER_GRT
%token    TK_OPER_GE

%token    TK_OPER_ASSIGN
%token    TK_OPER_POINTER
// separators
%token    TK_SEPR_LBRA
%token    TK_SEPR_RBRA
%token    TK_SEPR_LPAR
%token    TK_SEPR_RPAR
%token    TK_SEPR_SCOL
%token    TK_SEPR_COMA

%token    TK_WHITE
%token    TK_ERR


%start PROGRAM

%%

EXPR_PRIME:       CONST
                | TK_NAME_ID 
                | FUNC_CALL { printf("EXPR_PRIME detected.\n"); }
                | '(' EXPR ')'
                ;

CONST:    TK_CONS_INT
        | TK_CONS_FLOAT
        | TK_CONS_CHAR
        | TK_CONS_STRING { printf("TK_CONST_STRING detected.\n"); }
        ;

FUNC_CALL:        TK_NAME_ID '(' FUNC_ARG_LIST ')'
                | TK_NAME_ID '(' ')'
                { printf("FUNC_CALL detected.\n"); } ;

FUNC_ARG_LIST:    FUNC_ARG_FIRST FUNC_ARG_MORE
                ;

FUNC_ARG_FIRST:   '&' TK_NAME_ID
                | EXPR
                ;

FUNC_ARG_MORE:    
                | ',' EXPR FUNC_ARG_MORE
                | ',' '&' TK_NAME_ID FUNC_ARG_MORE
                ;


EXPR:     EXPR_COMP { printf("EXPR(_COMP) detected.\n"); } 
        | EXPR_COMP TK_OPER_EQ EXPR_COMP
        | EXPR_COMP TK_OPER_NEQ EXPR_COMP
        ;

EXPR_COMP:        EXPR_ADD
                | EXPR_ADD '<' EXPR_ADD
                | EXPR_ADD TK_OPER_LE EXPR_ADD
                | EXPR_ADD '>' EXPR_ADD
                | EXPR_ADD TK_OPER_GE EXPR_ADD
                { printf("EXPR_COMP detected.\n"); } ;

EXPR_ADD:         EXPR_MUL
                | EXPR_ADD '+' EXPR_ADD
                | EXPR_ADD '-' EXPR_ADD
                { printf("EXPR_ADD detected.\n"); } ;

EXPR_MUL:         EXPR_UNARY
                | EXPR_MUL '*' EXPR_UNARY
                | EXPR_MUL '/' EXPR_UNARY
                { printf("EXPR_MUL detected.\n"); } ;

EXPR_UNARY:       EXPR_PRIME
                | '+' EXPR_UNARY
                | '-' EXPR_UNARY
                { printf("EXPR_UNARY detected.\n"); } ;


STMT:     STMT_ASSIGN { printf("STMT detected.\n"); } 
        | STMT_IF
        | STMT_WHILE
        | STMT_RETURN
        | STMT_BLOCK
        | STMT_EXPR { printf("STMT detected.\n"); } 
        | STMT_EMPTY { printf("STMT detected.\n"); } 
        ;

STMT_ASSIGN:      TK_NAME_ID '=' EXPR ';' { printf("STMT_ASSIGN detected.\n"); } 
                ;

STMT_IF:  TK_CTRL_IF '(' EXPR ')' STMT { printf("STMT_IF detected.\n"); } 
        | TK_CTRL_IF '(' EXPR ')' STMT TK_CTRL_ELSE STMT { printf("STMT_IF(_ELSE) detected.\n"); } 
        ;

STMT_WHILE:       TK_CTRL_WHILE '(' EXPR ')' STMT
                ;

STMT_BLOCK:       '{' STMT_LIST '}' { printf("STMT_BLCOK detected.\n"); } 
                ;

STMT_LIST:         
                | STMT STMT_LIST { printf("STMT_LIST detected.\n"); } 
                ;

STMT_EXPR:        EXPR ';' { printf("STMT_EXPR detected.\n"); } 
                ;

STMT_EMPTY:       ';' { printf("STMT_EMPTY detected.\n"); } 
                ;

STMT_RETURN:      TK_CTRL_RETURN ';'
                | TK_CTRL_RETURN EXPR ';'
                ;

TYPE:     TK_TYPE_INT
        | TK_TYPE_CHAR
        | TK_TYPE_FLOAT
        { printf("TYPE detected.\n"); } ;



FUNC_RETURN_TYPE: TK_TYPE_VOID
                | TYPE
                ;

FUNC_PARAM:       TYPE TK_NAME_ID
                ;

FUNC_PARAM_LIST:  FUNC_PARAM
                | FUNC_PARAM ',' FUNC_PARAM_LIST
                ;

FUNC_VAR_DEF:     TYPE TK_NAME_ID '=' CONST ';' { printf("FUNC_VAR_DEF detected.\n"); } 
                ;
FUNC_VAR_DEF_LIST:            
                        | FUNC_VAR_DEF FUNC_VAR_DEF_LIST
                        ;

FUNC_STMT_LIST:   STMT_RETURN
                | STMT FUNC_STMT_LIST
                ;

FUNC_BODY:        FUNC_VAR_DEF_LIST FUNC_STMT_LIST { printf("FUNC_BODY detected.\n"); }
                ;

FUNC_DEF:         FUNC_RETURN_TYPE TK_NAME_ID '(' FUNC_PARAM_LIST ')' '{' FUNC_BODY '}'  { printf("FUNC_DEF(PARAM_LIST) detected........................\n"); }
                | FUNC_RETURN_TYPE TK_NAME_ID '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}'  { printf("FUNC_DEF(VOID) detected........................\n"); }
                ;

PROGRAM:  PROGRAM_FUNC_DEF_LIST PROGRAM_MAIN_FUNC PROGRAM_FUNC_DEF_LIST  { printf("PROGRAM detected....................\n"); }
        ;

PROGRAM_FUNC_DEF_LIST:      { printf("PROGRAM_FUNC_DEF_LIST(epsilon) detected.........................\n"); }
                        | FUNC_DEF PROGRAM_FUNC_DEF_LIST { printf("PROGRAM_FUNC_DEF_LIST detected................................\n"); } 
                        ;

PROGRAM_MAIN_FUNC:        TK_MAIN '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}' { printf("PROGRAM_MAIN_FUNC(VOID) detected...........................\n"); } 
                        | TK_MAIN '(' ')' '{' FUNC_BODY '}' { printf("PROGRAM_MAIN_FUNC() detected...........................\n"); } 
                        ;


%%


