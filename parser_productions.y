

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "scanner.h"

#define NAME_LEN_MAX 64
#define TABLE_LEN_MAX 1024*1024
#define OPRAND_NUM_MAX 8

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
    "TK_MAIN",
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

typedef struct Node{
        int type;
        char* pattern;

        int childNum;
        struct Node* children[OPRAND_NUM_MAX];
        
}Node;
void printNode(Node* node)
{
        if (node->type == 0)
                printf("%s %d\n", node->pattern, node->childNum);
        else
                printf("%s\n", TK_TYPE_DETAIL[node->type - 257]);

}
void printTree(Node* root, int indent_num)
{
        int i;
        for (i = 0; i < indent_num; i++)
                printf(" ");
        printNode(root);
        
        for(i=0; i < root->childNum; i++)
        {
                printTree(root->children[i], indent_num + 4);
        }
}

Node* root;
Node* makeLeaf(int type, char* pattern)
{
        Node* node = malloc(sizeof(Node));

        node->type = type;
        node->pattern = pattern;

        node->childNum = 0;

        // printf("\033[0;32m");
        // printf("made leaf:");
        // printf("\033[0m"); 
        // printNode(node);
        
        return node;
}
Node* makeNode1(char* pattern, Node* child0)
{
        Node* node = malloc(sizeof(Node));

        node->pattern = pattern;

        node->childNum = 1;
        node->children[0] = child0;

        return node;
}
Node* makeNode2(char* pattern, Node* child0, Node* child1)
{
        Node* node = malloc(sizeof(Node));

        node->pattern = pattern;

        node->childNum = 2;
        node->children[0] = child0;
        node->children[1] = child1;

        return node;
}
Node* makeNode3(char* pattern, Node* child0, Node* child1, Node* child2)
{
        Node* node = malloc(sizeof(Node));

        node->pattern = pattern;

        node->childNum = 3;
        node->children[0] = child0;
        node->children[1] = child1;
        node->children[2] = child2;

        return node;

}
Node* addChild(Node* node, Node* child)
{       
        if (node->childNum >= OPRAND_NUM_MAX)
        {
                printf("\033[0;31m"); 
                printf("Error: too many oprands or too long length!\n");
                printf("\033[0m"); 
        }
        else
        {
                node->children[node->childNum] = child;
                node->childNum++;
        }

        return node;
}
Node* mergeChildren(Node* node, Node* node_children)
{
        int i;
        for( i = 0; i < node_children->childNum; i++ )
        {
                addChild(node, node_children->children[i]);
        }

        return node;

        // free(node_children);
}




typedef struct{
        char name[NAME_LEN_MAX];
        int type;
}Symbol;
Symbol* symbolTable[TABLE_LEN_MAX];

extern int yylex();
extern char* yytext;
extern int yyleng;

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}


int yydebug = 1; 






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

EXPR_PRIME:       CONST { $$ = $1; }
                | TK_NAME_ID { $$ = makeLeaf(267, yytext); }
                | FUNC_CALL { $$ = $1; }
                | '(' EXPR ')' { $$ = $1; }
                ;

CONST:    TK_CONS_INT { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(268, text); }
        | TK_CONS_FLOAT { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(270, text); }
        | TK_CONS_CHAR { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(269, text); }
        | TK_CONS_STRING  { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(271, text); }
        ;

EXPR:     EXPR_COMP { $$ = $1;}
        | EXPR_COMP TK_OPER_EQ EXPR_COMP { $$ = makeNode2("==", $1, $3); }
        | EXPR_COMP TK_OPER_NEQ EXPR_COMP { $$ = makeNode2("!=", $1, $3); }
        ;


EXPR_COMP:        EXPR_ADD { $$ = $1;}
                | EXPR_ADD '<' EXPR_ADD { $$ = makeNode2("<", $1, $3); }
                | EXPR_ADD TK_OPER_LE EXPR_ADD { $$ = makeNode2("<=", $1, $3); }
                | EXPR_ADD '>' EXPR_ADD { $$ = makeNode2(">", $1, $3); }
                | EXPR_ADD TK_OPER_GE EXPR_ADD { $$ = makeNode2(">=", $1, $3); }
                ;

EXPR_ADD:         EXPR_MUL { $$ = $1;}
                | EXPR_ADD '+' EXPR_ADD { $$ = makeNode2("+", $1, $3); }
                | EXPR_ADD '-' EXPR_ADD { $$ = makeNode2("-", $1, $3); }
                ;

EXPR_MUL:         EXPR_UNARY { $$ = $1;}
                | EXPR_MUL '*' EXPR_UNARY { $$ = makeNode2("*", $1, $3); }
                | EXPR_MUL '/' EXPR_UNARY { $$ = makeNode2("/", $1, $3); }
                ;

EXPR_UNARY:       EXPR_PRIME { $$ = $1;}
                | '+' EXPR_UNARY { $$ = $2; "to be done============================";}
                | '-' EXPR_UNARY { $$ = $2; "to be done============================";}
                ;


STMT:     STMT_ASSIGN { $$ = $1;}
        | STMT_IF { $$ = $1;}
        | STMT_WHILE { $$ = $1;}
        | STMT_RETURN { $$ = $1;}
        | STMT_BLOCK { $$ = $1;}
        | STMT_FUNC_CALL { $$ = $1;}
        | STMT_EMPTY { $$ = $1;}
        | error ';' { printf("Error: Invalid statement.\n"); $$ = makeLeaf(0, "Error"); }
        ;

STMT_ASSIGN:      TK_NAME_ID '=' EXPR ';' 
                ;

STMT_IF:  TK_CTRL_IF '(' EXPR ')'  STMT
        | TK_CTRL_IF '(' EXPR ')' STMT TK_CTRL_ELSE STMT 
        ;

STMT_WHILE:       TK_CTRL_WHILE '(' EXPR ')' STMT
                ;

STMT_BLOCK:       '{' STMT_LIST '}' 
                ;

STMT_LIST:        { $$ = makeLeaf(0, "empty STMT_LIST"); } 
                | STMT STMT_LIST { $$ = $1; $$ = mergeChildren($$, $2); }
                ;

STMT_FUNC_CALL:   FUNC_CALL ';' { $$ = $1;}
                ;

STMT_EMPTY:       ';' { $$ = makeLeaf(0, "empty STMT_EMPTY"); } 
                ;

STMT_RETURN:      TK_CTRL_RETURN ';' { $$ = makeNode1("return", makeLeaf(265, "return"));}
                | TK_CTRL_RETURN EXPR ';' { $$ = makeNode2("return", makeLeaf(265, "return"), $2); }
                ;

TYPE:     TK_TYPE_INT { $$ = makeLeaf(259, yytext); }
        | TK_TYPE_CHAR { $$ = makeLeaf(260, yytext); }
        | TK_TYPE_FLOAT { $$ = makeLeaf(261, yytext); }
        ;


FUNC_CALL:        TK_NAME_ID '(' FUNC_ARG_LIST ')'
                | TK_NAME_ID '(' ')'
                ;

FUNC_ARG_LIST:    FUNC_ARG_FIRST FUNC_ARG_MORE
                ;

FUNC_ARG_FIRST:   '&' TK_NAME_ID
                | EXPR
                ;

FUNC_ARG_MORE:    
                | ',' EXPR FUNC_ARG_MORE
                | ',' '&' TK_NAME_ID FUNC_ARG_MORE
                ;
FUNC_RETURN_TYPE: TK_TYPE_VOID
                | TYPE { $$ = $1;}
                ;

FUNC_PARAM:       TYPE TK_NAME_ID
                ;

FUNC_PARAM_LIST:  FUNC_PARAM
                | FUNC_PARAM ',' FUNC_PARAM_LIST
                ;

FUNC_VAR_DEF:     TYPE TK_NAME_ID '=' CONST ';' 
                | error ';' { printf("Error: invalid variable definition.\n"); }
                ;
FUNC_VAR_DEF_LIST:        { $$ = makeLeaf(0, "FUNC_VAR_DEF_LIST (empty)");}    
                        | FUNC_VAR_DEF FUNC_VAR_DEF_LIST { $$ = $1; $$ = mergeChildren($$, $2); }
                        ;

FUNC_STMT_LIST:   STMT_RETURN { $$ = $1; }
                | STMT FUNC_STMT_LIST { $$ = $1; $$ = mergeChildren($$, $2); }
                ;

FUNC_BODY:        FUNC_VAR_DEF_LIST FUNC_STMT_LIST { $$ = makeNode2("FUNC_BODY", $1, $2); }
                ;

FUNC_DEF:         FUNC_RETURN_TYPE TK_NAME_ID '(' FUNC_PARAM_LIST ')' '{' FUNC_BODY '}'  
                | FUNC_RETURN_TYPE TK_NAME_ID '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}'
                ;

PROGRAM:  PROGRAM_FUNC_DEF_LIST PROGRAM_MAIN_FUNC PROGRAM_FUNC_DEF_LIST {
                $$ = makeNode3("PROGRAM", $1, $2, $3);
                root = $$;
        }
        ;

PROGRAM_FUNC_DEF_LIST:    { $$ = makeLeaf(0, "empty PROGRAM_FUNC_DEF_LIST"); }    
                        | FUNC_DEF PROGRAM_FUNC_DEF_LIST 
                        ;

PROGRAM_MAIN_FUNC:        TK_MAIN '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}' 
                        | TK_MAIN '(' ')' '{' FUNC_BODY '}' {
                                $$ = makeNode2("PROGRAM_MAIN_FUNC", makeLeaf(266, "int main"), $5);
                                }
                        ;


%%


