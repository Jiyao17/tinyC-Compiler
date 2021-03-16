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
#line 3 "parser_productions.y" /* yacc.c:339  */

/*

*/


#include <stdio.h>

#include "scanner.h"

extern int yylex();

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}



#line 86 "y.tab.c" /* yacc.c:339  */

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

#line 209 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

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
       2,     2,     2,     2,     2,     2,     2,     2,    39,     2,
      37,    38,    45,    43,    40,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      41,    47,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    84,    85,    86,    89,    90,    91,    92,
      95,    96,    99,   102,   103,   106,   107,   108,   112,   113,
     114,   117,   118,   119,   120,   121,   124,   125,   126,   129,
     130,   131,   134,   135,   136,   140,   141,   142,   143,   144,
     145,   146,   149,   152,   153,   156,   159,   162,   163,   166,
     169,   172,   173,   176,   177,   178,   183,   184,   187,   190,
     191,   194,   196,   197,   200,   201,   204,   207,   208,   211,
     214,   215,   218,   219
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
  "TK_WHITE", "TK_ERR", "'('", "')'", "'&'", "','", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'='", "';'", "'{'", "'}'", "$accept", "EXPR_PRIME",
  "CONST", "FUNC_CALL", "FUNC_ARG_LIST", "FUNC_ARG_FIRST", "FUNC_ARG_MORE",
  "EXPR", "EXPR_COMP", "EXPR_ADD", "EXPR_MUL", "EXPR_UNARY", "STMT",
  "STMT_ASSIGN", "STMT_IF", "STMT_WHILE", "STMT_BLOCK", "STMT_LIST",
  "STMT_EXPR", "STMT_EMPTY", "STMT_RETURN", "TYPE", "FUNC_RETURN_TYPE",
  "FUNC_PARAM", "FUNC_PARAM_LIST", "FUNC_VAR_DEF", "FUNC_VAR_DEF_LIST",
  "FUNC_STMT_LIST", "FUNC_BODY", "FUNC_DEF", "PROGRAM",
  "PROGRAM_FUNC_DEF_LIST", "PROGRAM_MAIN_FUNC", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    40,    41,    38,
      44,    60,    62,    43,    45,    42,    47,    61,    59,   123,
     125
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,  -119,  -119,  -119,  -119,  -119,    -7,    25,    11,    21,
       9,  -119,  -119,    24,    25,    78,    -2,  -119,    12,    79,
      66,    77,    89,    81,    82,  -119,    36,    83,    84,    36,
      36,  -119,    36,    36,   116,    36,     0,    85,    86,    87,
      88,    92,  -119,    97,   103,    10,   -29,  -119,  -119,  -119,
    -119,    55,    55,    55,  -119,     0,  -119,  -119,  -119,    93,
      34,    76,    80,  -119,     0,  -119,  -119,  -119,  -119,  -119,
    -119,    94,  -119,  -119,  -119,  -119,  -119,   108,    55,    55,
     105,  -119,    95,    50,    55,    91,  -119,  -119,     0,    96,
    -119,  -119,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,  -119,    99,   107,   110,  -119,  -119,   137,   112,
     111,  -119,   104,  -119,  -119,  -119,  -119,  -119,    29,    29,
      29,    29,    29,    29,  -119,  -119,  -119,     0,     0,  -119,
    -119,    64,  -119,  -119,   145,  -119,   142,   111,     0,   111,
    -119,  -119,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      70,    56,    53,    54,    55,    57,     0,    70,     0,     0,
       0,    71,     1,     0,    70,     0,     0,    69,     0,     0,
      59,     0,     0,     0,     0,    58,     0,     0,     0,    62,
      62,    60,    62,    62,     0,    62,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     3,     6,     8,     7,
       9,     0,     0,     0,    50,    47,    32,     2,     4,     0,
      18,    21,    26,    29,     0,    35,    36,    37,    39,    40,
      41,    38,    66,    73,    68,    67,    72,     0,     0,     0,
       3,    51,     0,     0,     0,     0,    33,    34,    47,     0,
      38,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,    52,    11,     0,     0,
      15,    14,     0,     5,    48,    46,    19,    20,    23,    25,
      22,    24,    27,    28,    30,    31,    61,     0,     0,    13,
      10,     0,    12,    42,    43,    45,     0,    15,     0,    15,
      16,    44,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,    98,  -119,  -119,  -119,  -118,   -45,     3,    15,
    -119,   -49,   -53,  -119,  -119,  -119,  -119,    67,  -119,  -119,
     -19,    90,  -119,  -119,   130,  -119,   122,   100,    27,  -119,
    -119,    13,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,    57,    58,   109,   110,   132,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    89,    69,    70,
      90,    34,     6,    20,    21,    35,    36,    72,    37,     7,
       8,     9,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    22,    88,    86,    87,    10,    85,    43,    83,    44,
      45,    12,    46,    47,    48,    49,    50,    71,    84,   140,
      11,   142,    80,    47,    48,    49,    50,    17,     1,     2,
       3,     4,    13,   104,   105,    88,    23,    51,   111,   112,
       2,     3,     4,    52,    53,    71,    15,    51,    54,    55,
      24,   124,   125,    52,    53,    92,    93,    38,    81,    39,
      40,    16,    80,    47,    48,    49,    50,    80,    47,    48,
      49,    50,    98,    99,   134,   135,    80,    47,    48,    49,
      50,    18,     2,     3,     4,   141,   137,    51,   107,   108,
       5,    25,    51,    52,    53,   116,   117,     5,    52,    53,
      94,    51,    95,   136,     5,    19,    26,    52,    53,   118,
     119,   120,   121,   122,   123,    27,    19,    96,    97,    98,
      99,    47,    48,    49,    50,   100,   101,    28,    41,   113,
      29,    30,    32,    33,    78,    73,    74,    75,    76,    77,
      79,    91,    83,   106,   -64,   127,   115,   126,   128,   129,
     130,   131,   133,   138,   139,   114,    31,    42,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      45,     3,    55,    52,    53,    12,    51,     7,    37,     9,
      10,     0,    12,    13,    14,    15,    16,    36,    47,   137,
       7,   139,    12,    13,    14,    15,    16,    14,     3,     4,
       5,     6,    11,    78,    79,    88,    38,    37,    83,    84,
       4,     5,     6,    43,    44,    64,    37,    37,    48,    49,
      38,   100,   101,    43,    44,    21,    22,    30,    48,    32,
      33,    37,    12,    13,    14,    15,    16,    12,    13,    14,
      15,    16,    43,    44,   127,   128,    12,    13,    14,    15,
      16,     3,     4,     5,     6,   138,   131,    37,    38,    39,
       0,    12,    37,    43,    44,    92,    93,     7,    43,    44,
      24,    37,    26,    39,    14,    15,    40,    43,    44,    94,
      95,    96,    97,    98,    99,    38,    26,    41,    42,    43,
      44,    13,    14,    15,    16,    45,    46,    38,    12,    38,
      49,    49,    49,    49,    37,    50,    50,    50,    50,    47,
      37,    48,    37,    48,    50,    38,    50,    48,    38,    12,
      38,    40,    48,     8,    12,    88,    26,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    72,    73,    80,    81,    82,
      12,    82,     0,    11,    83,    37,    37,    82,     3,    72,
      74,    75,     3,    38,    38,    12,    40,    38,    38,    49,
      49,    75,    49,    49,    72,    76,    77,    79,    79,    79,
      79,    12,    77,     7,     9,    10,    12,    13,    14,    15,
      16,    37,    43,    44,    48,    49,    52,    53,    54,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    69,
      70,    71,    78,    50,    50,    50,    50,    47,    37,    37,
      12,    48,    58,    37,    47,    58,    62,    62,    63,    68,
      71,    48,    21,    22,    24,    26,    41,    42,    43,    44,
      45,    46,    78,    53,    58,    58,    48,    38,    39,    55,
      56,    58,    58,    38,    68,    50,    59,    59,    60,    60,
      60,    60,    60,    60,    62,    62,    48,    38,    38,    12,
      38,    40,    57,    48,    63,    63,    39,    58,     8,    12,
      57,    63,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    54,    55,    56,    56,    57,    57,    57,    58,    58,
      58,    59,    59,    59,    59,    59,    60,    60,    60,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    64,    65,    65,    66,    67,    68,    68,    69,
      70,    71,    71,    72,    72,    72,    73,    73,    74,    75,
      75,    76,    77,    77,    78,    78,    79,    80,    80,    81,
      82,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     2,     2,     1,     0,     3,     4,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     7,     5,     3,     0,     2,     2,
       1,     2,     3,     1,     1,     1,     1,     1,     2,     1,
       3,     5,     0,     2,     1,     2,     2,     8,     8,     3,
       0,     2,     7,     6
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
        case 4:
#line 85 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR_PRIME detected.\n"); }
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "parser_productions.y" /* yacc.c:1646  */
    { printf("TK_CONST_STRING detected.\n"); }
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parser_productions.y" /* yacc.c:1646  */
    { printf("FUNC_CALL detected.\n"); }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 112 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR(_COMP) detected.\n"); }
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR_COMP detected.\n"); }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR_ADD detected.\n"); }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR_MUL detected.\n"); }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "parser_productions.y" /* yacc.c:1646  */
    { printf("EXPR_UNARY detected.\n"); }
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 140 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT detected.\n"); }
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT detected.\n"); }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT detected.\n"); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_ASSIGN detected.\n"); }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 152 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_IF detected.\n"); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 153 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_IF(_ELSE) detected.\n"); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 159 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_BLCOK detected.\n"); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_LIST detected.\n"); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_EXPR detected.\n"); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 169 "parser_productions.y" /* yacc.c:1646  */
    { printf("STMT_EMPTY detected.\n"); }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 179 "parser_productions.y" /* yacc.c:1646  */
    { printf("TYPE detected.\n"); }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 194 "parser_productions.y" /* yacc.c:1646  */
    { printf("FUNC_VAR_DEF detected.\n"); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 204 "parser_productions.y" /* yacc.c:1646  */
    { printf("FUNC_BODY detected.\n"); }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 207 "parser_productions.y" /* yacc.c:1646  */
    { printf("FUNC_DEF(PARAM_LIST) detected........................\n"); }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 208 "parser_productions.y" /* yacc.c:1646  */
    { printf("FUNC_DEF(VOID) detected........................\n"); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 211 "parser_productions.y" /* yacc.c:1646  */
    { printf("PROGRAM detected....................\n"); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 214 "parser_productions.y" /* yacc.c:1646  */
    { printf("PROGRAM_FUNC_DEF_LIST(epsilon) detected.........................\n"); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 215 "parser_productions.y" /* yacc.c:1646  */
    { printf("PROGRAM_FUNC_DEF_LIST detected................................\n"); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 218 "parser_productions.y" /* yacc.c:1646  */
    { printf("PROGRAM_MAIN_FUNC(VOID) detected...........................\n"); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 219 "parser_productions.y" /* yacc.c:1646  */
    { printf("PROGRAM_MAIN_FUNC() detected...........................\n"); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1567 "y.tab.c" /* yacc.c:1646  */
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
#line 223 "parser_productions.y" /* yacc.c:1906  */



