/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lexer/lexer.h"
#include "AST.h"



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





extern int yylex();
extern char* yytext;
extern int yyleng;
extern int line_num;

void yyerror(const char *str)
{
        fprintf(stderr, "Syntax error: ");
}



int yydebug = 1; 




#line 144 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

/* Copy the second part of user declarations.  */

#line 267 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
      37,    38,    43,    41,    50,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      39,    46,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   112,   113,   114,   115,   118,   119,   120,
     121,   124,   125,   126,   130,   131,   132,   133,   134,   137,
     138,   139,   142,   143,   144,   147,   148,   149,   153,   154,
     155,   156,   157,   158,   159,   160,   167,   171,   172,   175,
     178,   180,   181,   194,   197,   200,   201,   204,   205,   206,
     210,   211,   214,   218,   219,   222,   223,   224,   231,   232,
     235,   238,   239,   245,   246,   254,   255,   258,   259,   263,
     268,   272,   277,   283,   284,   287,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_TYPE_VOID", "TK_TYPE_INT",
  "TK_TYPE_CHAR", "TK_TYPE_FLOAT", "TK_CTRL_IF", "TK_CTRL_ELSE",
  "TK_CTRL_WHILE", "TK_CTRL_RETURN", "TK_MAIN", "TK_NAME_ID",
  "TK_CONS_INT", "TK_CONS_CHAR", "TK_CONS_FLOAT", "TK_CONS_STRING",
  "TK_OPER_ADD", "TK_OPER_SUB", "TK_OPER_MUL", "TK_OPER_DIV", "TK_OPER_EQ",
  "TK_OPER_NEQ", "TK_OPER_LESS", "TK_OPER_LE", "TK_OPER_GRT", "TK_OPER_GE",
  "TK_OPER_ASSIGN", "TK_OPER_POINTER", "TK_SEPR_LBRA", "TK_SEPR_RBRA",
  "TK_SEPR_LPAR", "TK_SEPR_RPAR", "TK_SEPR_SCOL", "TK_SEPR_COMA",
  "TK_WHITE", "TK_ERR", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "';'", "'='", "'{'", "'}'", "'&'", "','", "$accept",
  "TK_NAME_ID_WRAPPER", "EXPR_PRIME", "CONST", "EXPR", "EXPR_COMP",
  "EXPR_ADD", "EXPR_MUL", "EXPR_UNARY", "STMT", "STMT_ASSIGN", "STMT_IF",
  "STMT_WHILE", "STMT_BLOCK", "STMT_LIST", "STMT_FUNC_CALL", "STMT_EMPTY",
  "STMT_RETURN", "TYPE", "FUNC_CALL", "FUNC_ARG_LIST", "FUNC_ARG_FIRST",
  "FUNC_ARG_MORE", "FUNC_RETURN_TYPE", "FUNC_PARAM", "FUNC_PARAM_LIST",
  "FUNC_VAR_DEF", "FUNC_VAR_DEF_LIST", "FUNC_STMT_LIST", "FUNC_BODY",
  "FUNC_DEF", "PROGRAM", "PROGRAM_FUNC_DEF_LIST", "PROGRAM_MAIN_FUNC", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    40,    41,    60,
      62,    43,    45,    42,    47,    59,    61,   123,   125,    38,
      44
};
# endif

#define YYPACT_NINF -99

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

#define YYTABLE_NINF -68

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,   -99,   -99,   -99,   -99,   -99,    21,   100,    48,    44,
     -99,    37,   -99,   -99,    50,   100,   135,     3,   -99,    20,
      21,    10,    25,    43,    54,    61,   -99,    23,    63,    75,
      30,    30,   -99,    30,    30,    47,    21,    30,    52,    88,
      95,    96,    97,   -99,   103,   -99,   106,   113,   120,   111,
     -99,     9,   -24,    52,   -99,   -99,   -99,   -99,   -99,   -99,
     110,   126,   -99,   -99,   -99,   -99,   -99,   154,   -99,   118,
     118,   -99,   -99,   -99,   -99,   118,   118,   118,   -99,   136,
     -99,   -99,   127,   -14,    72,   -32,   -99,   -99,     9,   128,
     -99,    53,   118,   -99,   -99,   129,   137,   139,   140,   -99,
     -99,   -99,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   -99,   -99,   -99,    21,   -99,   141,   130,   138,
     -99,    52,    52,   -99,   -99,   -99,   -18,   -18,   -18,   -18,
     -18,   -18,   -99,   -99,   -99,   -99,   105,   -99,   -99,   173,
     -99,    21,   130,    52,   130,   -99,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      73,    58,    47,    48,    49,    59,     0,    73,     0,     0,
       2,     0,    74,     1,     0,    73,     0,     0,    72,     0,
       0,    61,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,     0,    66,     0,     0,     0,     0,
      44,     0,     0,     0,    28,    29,    30,    32,    33,    34,
      31,     0,    69,    76,    71,    70,    75,     0,    35,     0,
       0,     7,     9,     8,    10,     0,     0,     0,    45,     4,
      25,     3,     0,    11,    14,    19,    22,     5,     0,     0,
      31,     0,     0,    68,    43,     0,     0,     0,     0,    26,
      27,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    40,    51,     0,    54,     0,    55,     0,
      63,     0,     0,     6,    12,    13,    16,    18,    15,    17,
      20,    21,    23,    24,    53,    50,     0,    52,    36,    37,
      39,     0,    55,     0,    55,    56,    38,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,    -6,   -99,   115,   -66,    26,    57,   -99,   -27,   -50,
     -99,   -99,   -99,   -99,    98,   -99,   -99,   -33,    73,   -36,
     -99,   -99,   -98,   -99,   -99,   157,   -99,   148,   134,    45,
     -99,   -99,    36,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    53,
      54,    55,    56,    57,    89,    58,    59,    90,    36,    87,
     117,   118,   137,     6,    21,    22,    37,    38,    62,    39,
       7,     8,     9,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    88,    61,    96,    97,    60,    23,   102,   103,    98,
      46,   110,   111,    91,    26,    61,    47,    61,    48,    49,
      60,    10,    92,   108,   109,   116,   119,     2,     3,     4,
      44,    35,    52,    10,     2,     3,     4,   -65,    88,   -65,
     -65,    24,   -65,    12,   145,    52,   147,    52,    13,    99,
     100,    18,    61,    46,    50,    14,    51,   -41,    25,    47,
      27,    48,    49,    28,    10,    10,    71,    72,    73,    74,
     142,   139,   140,     5,    16,   -65,    40,   -65,    41,    42,
       5,    29,    52,   132,   133,    61,    61,    17,     5,    20,
      75,   114,    43,   146,    76,    77,   104,    50,   105,    51,
      20,    30,   115,     1,     2,     3,     4,    61,    31,   134,
      33,   106,   107,   108,   109,    52,    52,    10,    71,    72,
      73,    74,    34,    10,    71,    72,    73,    74,   124,   125,
      10,    71,    72,    73,    74,   144,    63,    52,    19,     2,
       3,     4,    75,    64,    65,    66,    76,    77,    75,    67,
      69,    68,    76,    77,   141,    75,    78,    70,   -67,    76,
      77,   126,   127,   128,   129,   130,   131,    71,    72,    73,
      74,    94,   101,    91,   120,   121,   113,   122,   123,   135,
     136,   143,    95,   138,    32,    45,   112,    93
};

static const yytype_uint8 yycheck[] =
{
       6,    51,    38,    69,    70,    38,     3,    21,    22,    75,
       1,    43,    44,    37,    20,    51,     7,    53,     9,    10,
      53,    12,    46,    41,    42,    91,    92,     4,     5,     6,
      36,     1,    38,    12,     4,     5,     6,     7,    88,     9,
      10,    38,    12,     7,   142,    51,   144,    53,     0,    76,
      77,    15,    88,     1,    45,    11,    47,    48,    38,     7,
      50,     9,    10,    38,    12,    12,    13,    14,    15,    16,
     136,   121,   122,     0,    37,    45,    31,    47,    33,    34,
       7,    38,    88,   110,   111,   121,   122,    37,    15,    16,
      37,    38,    45,   143,    41,    42,    24,    45,    26,    47,
      27,    47,    49,     3,     4,     5,     6,   143,    47,   115,
      47,    39,    40,    41,    42,   121,   122,    12,    13,    14,
      15,    16,    47,    12,    13,    14,    15,    16,   102,   103,
      12,    13,    14,    15,    16,   141,    48,   143,     3,     4,
       5,     6,    37,    48,    48,    48,    41,    42,    37,    46,
      37,    45,    41,    42,    49,    37,    45,    37,    48,    41,
      42,   104,   105,   106,   107,   108,   109,    13,    14,    15,
      16,    45,    45,    37,    45,    38,    48,    38,    38,    38,
      50,     8,    67,    45,    27,    37,    88,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    69,    74,    81,    82,    83,
      12,    52,    83,     0,    11,    84,    37,    37,    83,     3,
      69,    75,    76,     3,    38,    38,    52,    50,    38,    38,
      47,    47,    76,    47,    47,     1,    69,    77,    78,    80,
      80,    80,    80,    45,    52,    78,     1,     7,     9,    10,
      45,    47,    52,    60,    61,    62,    63,    64,    66,    67,
      68,    70,    79,    48,    48,    48,    48,    46,    45,    37,
      37,    13,    14,    15,    16,    37,    41,    42,    45,    52,
      53,    54,    55,    56,    57,    58,    59,    70,    60,    65,
      68,    37,    46,    79,    45,    54,    55,    55,    55,    59,
      59,    45,    21,    22,    24,    26,    39,    40,    41,    42,
      43,    44,    65,    48,    38,    49,    55,    71,    72,    55,
      45,    38,    38,    38,    56,    56,    57,    57,    57,    57,
      57,    57,    59,    59,    52,    38,    50,    73,    45,    60,
      60,    49,    55,     8,    52,    73,    60,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    56,    56,    56,    56,    56,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    62,    62,    63,
      64,    65,    65,    66,    67,    68,    68,    69,    69,    69,
      70,    70,    71,    72,    72,    73,    73,    73,    74,    74,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      81,    81,    82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     5,     7,     5,
       3,     0,     2,     2,     1,     2,     3,     1,     1,     1,
       4,     3,     2,     2,     1,     0,     3,     4,     1,     1,
       2,     1,     3,     5,     2,     0,     2,     1,     2,     2,
       8,     8,     3,     0,     2,     7,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 104 "parser.y" /* yacc.c:1646  */
    {
                                char* text = (char*)malloc(yyleng+1);
                                memcpy(text, yytext, yyleng);
                                text[yyleng] = '\0'; 
                                (yyval) = makeLeaf(text, 267);
                                }
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 113 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 118 "parser.y" /* yacc.c:1646  */
    { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; (yyval) = makeLeaf(text, 268); }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 119 "parser.y" /* yacc.c:1646  */
    { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; (yyval) = makeLeaf(text, 270); }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 120 "parser.y" /* yacc.c:1646  */
    { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; (yyval) = makeLeaf(text, 269); }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "parser.y" /* yacc.c:1646  */
    { char* text = (char*)malloc(yyleng+1); memcpy(text, yytext, yyleng); text[yyleng] = '\0'; (yyval) = makeLeaf(text, 271); }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 125 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR", 1, (yyvsp[-2]), makeLeaf("==", 276), (yyvsp[0])); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR", 2, (yyvsp[-2]), makeLeaf("!=", 277), (yyvsp[0])); }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_COMP", 1, (yyvsp[-2]), makeLeaf("<", 278), (yyvsp[0])); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_COMP", 2, (yyvsp[-2]), makeLeaf("<=", 279), (yyvsp[0])); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_COMP", 3, (yyvsp[-2]), makeLeaf(">", 280), (yyvsp[0])); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_COMP", 4, (yyvsp[-2]), makeLeaf(">=", 281), (yyvsp[0])); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_ADD", 1, (yyvsp[-2]), makeLeaf("+", 272), (yyvsp[0])); }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("EXPR_SUB", 2, (yyvsp[-2]), makeLeaf("-", 273), (yyvsp[0])); }
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 143 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("EXPR_MUL", 1, (yyvsp[-2]), (yyvsp[0])); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("EXPR_DIV", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("EXPR_UNARY", 1, makeLeaf("+", 272), (yyvsp[0]));}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("EXPR_UNARY", 2, makeLeaf("-", 273), (yyvsp[0]));}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "parser.y" /* yacc.c:1646  */
    { 
                fprintf(stderr, "Invalid statement at: line %d.\n", line_num);

                (yyval) = makeLeaf("STMT Error", 0); 
                }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("STMT_ASSIGN", 0, (yyvsp[-3]), (yyvsp[-1]));}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("STMT_IF", 0, (yyvsp[-2]), (yyvsp[0]));}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 172 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("STMT_IF", 1, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("STMT_WHILE", 0, (yyvsp[-2]), (yyvsp[0]));}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("STMT_BLOCK", 0, (yyvsp[-1]));}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("STMT_LIST empty", 1); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 181 "parser.y" /* yacc.c:1646  */
    { 
                        if(ptncmp((yyvsp[0]), "STMT_LIST empty") == 0)
                        {
                                (yyval) = makeNode1("STMT_LIST", 1, (yyvsp[-1]));
                        }
                        else
                        {
                                (yyval) = pushAsChild((yyvsp[0]), (yyvsp[-1]));
                        }
                        
                        }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("STMT_EMPTY", 1); }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("STMT_RETURN", 0, makeNode1("STMT_RETURN", 0, makeLeaf("return", 265)));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("STMT_RETURN", 1, makeLeaf("return", 265), (yyvsp[-1])); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("int", 259); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("char", 260); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("float", 261); }
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("FUNC_CALL", 0, (yyvsp[-3]), (yyvsp[-1])); }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("FUNC_CALL", 1, (yyvsp[-2])); }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 214 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval) = makeNode2("FUNC_ARG_LIST", 0, (yyvsp[-1]), (yyvsp[0])); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("FUNC_ARG_FIRST", 0, makeLeaf("&TK_NAME_ID", 283), (yyvsp[0]));}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("FUNC_ARG_FIRST", 1, (yyvsp[0]));}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("FUNC_ARG_MORE", 0, makeLeaf("FUNC_ARG_MORE empty", 1)); }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = pushAsChild((yyval), (yyvsp[-1]));}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval) = (yyvsp[0]); 
                        (yyval) = pushAsChild((yyvsp[0]), 
                                makeNode2("FUNC_ARG_MORE arg", 3, 
                                        makeLeaf("&", 283), (yyvsp[-1])));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("void", 258); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("FUNC_PARAM", 0, (yyvsp[-1]), (yyvsp[0])); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("FUNC_PARAM_LIST", 0, (yyvsp[0])); }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 239 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval) = (yyvsp[0]); 
                        
                        (yyval) = pushAsChild((yyval), (yyvsp[-2])); }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode3("FUNC_VAR_DEF", 0, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 246 "parser.y" /* yacc.c:1646  */
    {
                        char* text = (char*)malloc(yyleng+1);
                        memcpy(text, yytext, yyleng);
                        text[yyleng] = '\0';
                        fprintf(stderr, "Error, Invalid variable definition \"%s\".\n", text); 
                        (yyval) = makeLeaf("FUNC_VAR_DEF Error", 0); 
                        }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("FUNC_VAR_DEF_LIST", 1);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = pushAsChild((yyval), (yyvsp[-1])); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode1("FUNC_STMT_LIST", 0, (yyvsp[0])); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval) = pushAsChild((yyval), (yyvsp[-1])); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("FUNC_BODY", 0, (yyvsp[-1]), (yyvsp[0])); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "parser.y" /* yacc.c:1646  */
    { 
                        
                        (yyval) = makeNode4("FUNC_DEF", 0, (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); 
                        }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval) = makeNode4("FUNC_DEF", 1, (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); 
                        }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "parser.y" /* yacc.c:1646  */
    {
                (yyval) = makeNode3("PROGRAM", 0, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
                root = (yyval);
        }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeLeaf("PROGRAM_FUNC_DEF_LIST", 1); }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval) = makeNode2("PROGRAM_FUNC_DEF_LIST", 1, (yyvsp[-1]), (yyvsp[0])); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 287 "parser.y" /* yacc.c:1646  */
    {
                                (yyval) = makeNode2("PROGRAM_MAIN_FUNC", 0, makeLeaf("int main", 266), (yyvsp[-1]));
                                }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 290 "parser.y" /* yacc.c:1646  */
    {
                                (yyval) = makeNode2("PROGRAM_MAIN_FUNC", 1, makeLeaf("int main", 266), (yyvsp[-1]));
                                }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1954 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 296 "parser.y" /* yacc.c:1906  */



