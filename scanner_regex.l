
%{ /* Literal block */
#include "scanner.h"
#include "y.tab.h"


enum yytokentype token_type;
%}

/* Regular Definitions data_type [(int)(char)(float)] */
letter [A-Za-z]
nzdigit [1-9]
digit (0|nzdigit)
sign [:\.'\"\%\{\}\(\)_\+\-\*\/=\<\>!& ]
escape ("\\\\"|"\\'"|"\\\""|"\\n"|"\\t")
unletter ({letter}|_)

whitespace [ \t\n]+

data_type ("int"|"char"|"float")
control ("if"|"else"|"while"|"return")
keyword ({data_type}|{control}|"void")

identifier {unletter}({unletter}|{digit})*

integer "0"|{nzdigit}{digit}*
float {digit}+"."{digit}+
char "'"({letter}|{digit}|{sign}|{escape})"'"
string \"(([^\"\n\\])|{escape})*\"
constant ({integer}|{float}|{char}|{string})


arith_op [\+\-\*\/]
cmp_op ("=="|"!="|"<"|"<="|">"|">=")
assign_op "="
pointer_op "&"
operator ({arith_op}|{cmp_op}|{assign_op}|{pointer_op})

separator [\{\}\(\);]

/* Regular definitions to match invalid tokens */
%% /* Second section */



"void"          { token_type = TK_TYPE_VOID; return token_type; }
"int"           { token_type = TK_TYPE_INT; return token_type; }
"char"          { token_type = TK_TYPE_CHAR; return token_type; }
"float"         { token_type = TK_TYPE_FLOAT; return token_type; }
"if"            { token_type = TK_CTRL_IF; return token_type; }
"else"          { token_type = TK_CTRL_ELSE; return token_type; }
"while"         { token_type = TK_CTRL_WHILE; return token_type; }
"return"        { token_type = TK_CTRL_RETURN; return token_type; }

"int"{whitespace}"main" { token_type = TK_MAIN; return token_type; }

{identifier}    { token_type = TK_NAME_ID; return token_type; }
{integer}       { token_type = TK_CONS_INT; return token_type; }
{float}         { token_type = TK_CONS_FLOAT; return token_type; }
{char}          { token_type = TK_CONS_CHAR; return token_type; }
{string}        { token_type = TK_CONS_STRING; return token_type; }

"+"             { token_type = TK_OPER_ADD; return '+'; }
"-"             { token_type = TK_OPER_SUB; return '-'; }
"*"             { token_type = TK_OPER_MUL; return '*'; }
"/"             { token_type = TK_OPER_DIV; return '/'; }
"=="            { token_type = TK_OPER_EQ; return token_type; }
"!="            { token_type = TK_OPER_NEQ; return token_type; }
"<"             { token_type = TK_OPER_LESS; return '<'; }
"<="            { token_type = TK_OPER_LE; return token_type; }
">"             { token_type = TK_OPER_GRT; return '>'; }
">="            { token_type = TK_OPER_GE; return token_type; }
"="             { token_type = TK_OPER_ASSIGN;  return '='; }
"&"             { token_type = TK_OPER_POINTER; return '&'; }

"{"             { token_type = TK_SEPR_LBRA; return '{'; }
"}"             { token_type = TK_SEPR_RBRA; return '}'; }
"("             { token_type = TK_SEPR_LPAR; return '('; }
")"             { token_type = TK_SEPR_RBRA; return ')'; }
";"             { token_type = TK_SEPR_SCOL; return ';'; }
","             { token_type = TK_SEPR_COMA; return ','; }

{whitespace}    { token_type = TK_WHITE; }
.               { token_type = TK_ERR; printf("Unknown token!"); return token_type; }

%% /*third section*/

int yywrap()
{
    return 1;
}

int lex_init(char* srcfile, char* destfile)
{
    yyin = fopen(srcfile, "r");
    yyout = fopen(destfile, "w");

    if (yyin == 0 || yyout == 0)
        return FALSE;
    else
        return TRUE;

}










