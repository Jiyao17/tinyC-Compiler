

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lexer/lexer.h"

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
        int isLeaf;

        // if isLeaf, then type is token number, pattern is the text
        // when isLeaf && type==1, this is an empty node (for some productions with epsilon)
        // when isLeaf && type==0, this is an error node
        // if not, then pattern is production name (in string)
        // and type is the number of matched production
        char* pattern;
        int type;

        int childNum;
        struct Node* children[OPRAND_NUM_MAX];
        
}Node;
Node* root;

void printNode(Node* node)
{
        if (node->isLeaf == 0)
                printf("%s %d\n", node->pattern, node->childNum);
        else if (node->type >= 258)
                printf("%s: %s\n", TK_TYPE_DETAIL[node->type - 257], node->pattern);
        else if (node->type == 1)
                printf("%s %d\n", node->pattern, node->childNum);
        else if (node->type == 0)
                printf("Node of error: %s\n", node->pattern);
        else
                printf("Error: unknown node type\n");

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


Node* makeLeaf(char* pattern, int type)
{
        Node* node = malloc(sizeof(Node));

        node->isLeaf = 1;
        node->type = type; // token number // 0 for error // 1 for empty (if isLeaf)
        node->pattern = pattern;

        node->childNum = 0;
        // printf("\033[0;32m");
        // printf("made leaf:");
        // printf("\033[0m"); 
        // printNode(node);
        
        return node;
}
Node* makeNode1(char* pattern, int type, Node* child0)
{
        Node* node = malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 1;
        node->children[0] = child0;

        return node;
}
Node* makeNode2(char* pattern, int type, Node* child0, Node* child1)
{
        Node* node = malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 2;
        node->children[0] = child0;
        node->children[1] = child1;

        return node;
}
Node* makeNode3(char* pattern, int type, Node* child0, Node* child1, Node* child2)
{
        Node* node = malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 3;
        node->children[0] = child0;
        node->children[1] = child1;
        node->children[2] = child2;

        return node;

}
Node* makeNode4(char* pattern, int type, Node* child0, Node* child1, Node* child2, Node* child3)
{
        Node* node = malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 4;
        node->children[0] = child0;
        node->children[1] = child1;
        node->children[2] = child2;
        node->children[3] = child3;

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



extern int yylex();
extern char* yytext;
extern int yyleng;

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}


int yydebug = 1; 


%}


// data type
%token    TK_TYPE_VOID TK_TYPE_INT TK_TYPE_CHAR TK_TYPE_FLOAT
// control keyword
%token    TK_CTRL_IF TK_CTRL_ELSE TK_CTRL_WHILE TK_CTRL_RETURN TK_MAIN
// constant
%token    TK_NAME_ID TK_CONS_INT TK_CONS_CHAR TK_CONS_FLOAT TK_CONS_STRING
// operators
%token    TK_OPER_ADD TK_OPER_SUB TK_OPER_MUL TK_OPER_DIV

%token    TK_OPER_EQ TK_OPER_NEQ TK_OPER_LESS TK_OPER_LE TK_OPER_GRT TK_OPER_GE

%token    TK_OPER_ASSIGN TK_OPER_POINTER
// separators
%token    TK_SEPR_LBRA TK_SEPR_RBRA TK_SEPR_LPAR TK_SEPR_RPAR TK_SEPR_SCOL TK_SEPR_COMA

%token    TK_WHITE TK_ERR


%start PROGRAM

%%

TK_NAME_ID_WRAPPER:       TK_NAME_ID {
                                char* text = (char*)malloc(yyleng+1);
                                memcpy(text, yytext, yyleng);
                                text[yyleng] = '\0'; 
                                $$ = makeLeaf(text, 267);
                                }
                        ;

EXPR_PRIME:       CONST { $$ = $1; }
                | TK_NAME_ID_WRAPPER { $$ = $1; }
                | FUNC_CALL { $$ = $1; }
                | '(' EXPR ')' { $$ = $1; }
                ;

CONST:    TK_CONS_INT { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(text, 268); }
        | TK_CONS_FLOAT { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(text, 270); }
        | TK_CONS_CHAR { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(text, 269); }
        | TK_CONS_STRING  { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; $$ = makeLeaf(text, 271); }
        ;

EXPR:     EXPR_COMP { $$ = $1;}
        | EXPR_COMP TK_OPER_EQ EXPR_COMP { $$ = makeNode3("EXPR", 1, $1, makeLeaf("==", 276), $3); }
        | EXPR_COMP TK_OPER_NEQ EXPR_COMP { $$ = makeNode3("EXPR", 2, $1, makeLeaf("!=", 277), $3); }
        ;


EXPR_COMP:        EXPR_ADD { $$ = $1;}
                | EXPR_ADD '<' EXPR_ADD { $$ = makeNode3("EXPR_COMP", 1, $1, makeLeaf("<", 278), $3); }
                | EXPR_ADD TK_OPER_LE EXPR_ADD { $$ = makeNode3("EXPR_COMP", 2, $1, makeLeaf("<=", 279), $3); }
                | EXPR_ADD '>' EXPR_ADD { $$ = makeNode3("EXPR_COMP", 3, $1, makeLeaf(">", 280), $3); }
                | EXPR_ADD TK_OPER_GE EXPR_ADD { $$ = makeNode3("EXPR_COMP", 4, $1, makeLeaf(">=", 281), $3); }
                ;

EXPR_ADD:         EXPR_MUL { $$ = $1;}
                | EXPR_ADD '+' EXPR_ADD { $$ = makeNode3("EXPR_ADD", 1, $1, makeLeaf("!=", 272), $3); }
                | EXPR_ADD '-' EXPR_ADD { $$ = makeNode3("EXPR_ADD", 2, $1, makeLeaf("!=", 273), $3); }
                ;

EXPR_MUL:         EXPR_UNARY { $$ = $1;}
                | EXPR_MUL '*' EXPR_UNARY { $$ = makeNode2("EXPR_MUL", 1, $1, $3); }
                | EXPR_MUL '/' EXPR_UNARY { $$ = makeNode2("EXPR_MUL", 2, $1, $3); }
                ;

EXPR_UNARY:       EXPR_PRIME { $$ = $1;}
                | '+' EXPR_UNARY { $$ = makeNode2("EXPR_UNARY", 1, makeLeaf("+", 272), $2);}
                | '-' EXPR_UNARY { $$ = makeNode2("EXPR_UNARY", 2, makeLeaf("-", 273), $2);}
                ;


STMT:     STMT_ASSIGN { $$ = $1;}
        | STMT_IF { $$ = $1;}
        | STMT_WHILE { $$ = $1;}
        | STMT_RETURN { $$ = $1;}
        | STMT_BLOCK { $$ = $1;}
        | STMT_FUNC_CALL { $$ = $1;}
        | STMT_EMPTY { $$ = $1;}
        | error ';' { 
                char* text = (char*)malloc(yyleng+1);
                memcpy(text, yytext, yyleng);
                text[yyleng] = '\0';
                printf("Error: Invalid statement: \"%s\".\n", text); 
                $$ = makeLeaf("STMT Error", 0); 
                }
        ;

STMT_ASSIGN:      TK_NAME_ID_WRAPPER '=' EXPR ';' { $$ = makeNode2("STMT_ASSIGN", 0, $1, $3);}
                ;

STMT_IF:  TK_CTRL_IF '(' EXPR ')'  STMT { $$ = makeNode2("STMT_IF", 0, $3, $5);}
        | TK_CTRL_IF '(' EXPR ')' STMT TK_CTRL_ELSE STMT { $$ = makeNode3("STMT_IF", 1, $3, $5, $7);}
        ;

STMT_WHILE:       TK_CTRL_WHILE '(' EXPR ')' STMT { $$ = makeNode2("STMT_WHILE", 0, $3, $5);}
                ;

STMT_BLOCK:       '{' STMT_LIST '}' { $$ = makeNode1("STMT_BLOCK", 0, $2);}
                ;

STMT_LIST:        { $$ = makeLeaf("STMT_LIST", 1); } 
                | STMT STMT_LIST { $$ = $2; $$ = addChild($2, $1);}
                ;

STMT_FUNC_CALL:   FUNC_CALL ';' { $$ = $1;}
                ;

STMT_EMPTY:       ';' { $$ = makeLeaf("STMT_EMPTY", 1); } 
                ;

STMT_RETURN:      TK_CTRL_RETURN ';' { $$ = makeNode1("STMT_RETURN", 0, makeLeaf("return", 265));}
                | TK_CTRL_RETURN EXPR ';' { $$ = makeNode2("STMT_RETURN", 1, makeLeaf("return", 265), $2); }
                ;

TYPE:     TK_TYPE_INT { $$ = makeLeaf("int", 259); }
        | TK_TYPE_CHAR { $$ = makeLeaf("char", 260); }
        | TK_TYPE_FLOAT { $$ = makeLeaf("float", 261); }
        ;


FUNC_CALL:        TK_NAME_ID_WRAPPER '(' FUNC_ARG_LIST ')' { $$ = makeNode2("FUNC_CALL", 0, $1, $3); }
                | TK_NAME_ID_WRAPPER '(' ')' { $$ = makeNode1("FUNC_CALL", 1, $1); }
                ;

FUNC_ARG_LIST:    FUNC_ARG_FIRST FUNC_ARG_MORE { $$ = makeNode2("FUNC_ARG_LIST", 0, $1, $2); }
                ;

FUNC_ARG_FIRST:   '&' TK_NAME_ID_WRAPPER { $$ = makeNode2("FUNC_ARG_FIRST", 0, makeLeaf("&TK_NAME_ID", 283), $2);}
                | EXPR { $$ = makeNode1("FUNC_ARG_FIRST", 1, $1);}
                ;

FUNC_ARG_MORE:    
                | ',' EXPR FUNC_ARG_MORE { $$ = $3; $$ = addChild($$, $2);}
                | ',' '&' TK_NAME_ID_WRAPPER FUNC_ARG_MORE { $$ = $4; $$ = addChild($4, makeLeaf("&TK_NAME_ID", 283));}
                ;

FUNC_RETURN_TYPE: TK_TYPE_VOID { $$ = makeLeaf("void", 258); }
                | TYPE { $$ = $1; }
                ;

FUNC_PARAM:       TYPE TK_NAME_ID_WRAPPER { $$ = makeNode2("FUNC_PARAM", 0, $1, $2); }
                ;

FUNC_PARAM_LIST:  FUNC_PARAM { $$ = $1; }
                | FUNC_PARAM ',' FUNC_PARAM_LIST { $$ = $3; $$ = addChild($$, $1); }
                ;

FUNC_VAR_DEF:     TYPE TK_NAME_ID_WRAPPER '=' CONST ';' { $$ = makeNode3("FUNC_VAR_DEF", 0, $1, $2, $4); }
                | error ';' {
                char* text = (char*)malloc(yyleng+1);
                memcpy(text, yytext, yyleng);
                text[yyleng] = '\0';
                printf("Error, Invalid variable definition \"%s\".\n", text); 
                $$ = makeLeaf("FUNC_VAR_DEF Error", 0); 
                        }
                ;
FUNC_VAR_DEF_LIST:        { $$ = makeLeaf("FUNC_VAR_DEF_LIST", 1);}    
                        | FUNC_VAR_DEF FUNC_VAR_DEF_LIST { $$ = $2; $$ = addChild($$, $1); }
                        ;

FUNC_STMT_LIST:   STMT_RETURN { $$ = $1; }
                | STMT FUNC_STMT_LIST { $$ = $2; $$ = addChild($$, $1); }
                ;

FUNC_BODY:        FUNC_VAR_DEF_LIST FUNC_STMT_LIST { $$ = makeNode2("FUNC_BODY", 0, $1, $2); }
                ;



FUNC_DEF:         FUNC_RETURN_TYPE TK_NAME_ID_WRAPPER '(' FUNC_PARAM_LIST ')' '{' FUNC_BODY '}' { 
                        
                        $$ = makeNode4("FUNC_DEF", 0, $1, $2, $4, $7); 
                        } 
                | FUNC_RETURN_TYPE TK_NAME_ID_WRAPPER '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}'{ 
                        $$ = makeNode4("FUNC_DEF", 1, $1, $2, $4, $7); 
                        } 
                ;

PROGRAM:  PROGRAM_FUNC_DEF_LIST PROGRAM_MAIN_FUNC PROGRAM_FUNC_DEF_LIST {
                $$ = makeNode3("PROGRAM", 0, $1, $2, $3);
                root = $$;
        }
        ;

PROGRAM_FUNC_DEF_LIST:    { $$ = makeLeaf("PROGRAM_FUNC_DEF_LIST", 1); }    
                        | FUNC_DEF PROGRAM_FUNC_DEF_LIST { $$ = makeNode2("PROGRAM_FUNC_DEF_LIST", 1, $1, $2); } 
                        ;

PROGRAM_MAIN_FUNC:        TK_MAIN '(' TK_TYPE_VOID ')' '{' FUNC_BODY '}' {
                                $$ = makeNode3("PROGRAM_MAIN_FUNC", 0, makeLeaf("int main", 266), makeLeaf("void", 258), $6);
                                }
                        | TK_MAIN '(' ')' '{' FUNC_BODY '}' {
                                $$ = makeNode2("PROGRAM_MAIN_FUNC", 1, makeLeaf("int main", 266), $5);
                                }
                        ;


%%


