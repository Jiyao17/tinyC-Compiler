/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_TYPE_VOID = 258,
    TK_TYPE_INT = 259,
    TK_TYPE_CHAR = 260,
    TK_TYPE_FLOAT = 261,
    TK_CTRL_IF = 262,
    TK_CTRL_ELSE = 263,
    TK_CTRL_WHILE = 264,
    TK_CTRL_RETURN = 265,
    TK_MAIN = 266,
    TK_NAME_ID = 267,
    TK_CONS_INT = 268,
    TK_CONS_CHAR = 269,
    TK_CONS_FLOAT = 270,
    TK_CONS_STRING = 271,
    TK_OPER_ADD = 272,
    TK_OPER_SUB = 273,
    TK_OPER_MUL = 274,
    TK_OPER_DIV = 275,
    TK_OPER_EQ = 276,
    TK_OPER_NEQ = 277,
    TK_OPER_LESS = 278,
    TK_OPER_LE = 279,
    TK_OPER_GRT = 280,
    TK_OPER_GE = 281,
    TK_OPER_ASSIGN = 282,
    TK_OPER_POINTER = 283,
    TK_SEPR_LBRA = 284,
    TK_SEPR_RBRA = 285,
    TK_SEPR_LPAR = 286,
    TK_SEPR_RPAR = 287,
    TK_SEPR_SCOL = 288,
    TK_SEPR_COMA = 289,
    TK_WHITE = 290,
    TK_ERR = 291
  };
#endif
/* Tokens.  */
#define TK_TYPE_VOID 258
#define TK_TYPE_INT 259
#define TK_TYPE_CHAR 260
#define TK_TYPE_FLOAT 261
#define TK_CTRL_IF 262
#define TK_CTRL_ELSE 263
#define TK_CTRL_WHILE 264
#define TK_CTRL_RETURN 265
#define TK_MAIN 266
#define TK_NAME_ID 267
#define TK_CONS_INT 268
#define TK_CONS_CHAR 269
#define TK_CONS_FLOAT 270
#define TK_CONS_STRING 271
#define TK_OPER_ADD 272
#define TK_OPER_SUB 273
#define TK_OPER_MUL 274
#define TK_OPER_DIV 275
#define TK_OPER_EQ 276
#define TK_OPER_NEQ 277
#define TK_OPER_LESS 278
#define TK_OPER_LE 279
#define TK_OPER_GRT 280
#define TK_OPER_GE 281
#define TK_OPER_ASSIGN 282
#define TK_OPER_POINTER 283
#define TK_SEPR_LBRA 284
#define TK_SEPR_RBRA 285
#define TK_SEPR_LPAR 286
#define TK_SEPR_RPAR 287
#define TK_SEPR_SCOL 288
#define TK_SEPR_COMA 289
#define TK_WHITE 290
#define TK_ERR 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
