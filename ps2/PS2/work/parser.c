/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     STRING = 259,
     IDENTIFIER = 260,
     ASSIGN = 261,
     FUNC = 262,
     PRINT = 263,
     RETURN = 264,
     CONTINUE = 265,
     IF = 266,
     THEN = 267,
     ELSE = 268,
     FI = 269,
     WHILE = 270,
     DO = 271,
     DONE = 272,
     VAR = 273,
     FOR = 274,
     TO = 275,
     EQUAL = 276,
     GEQUAL = 277,
     LEQUAL = 278,
     NEQUAL = 279,
     UMINUS = 280
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STRING 259
#define IDENTIFIER 260
#define ASSIGN 261
#define FUNC 262
#define PRINT 263
#define RETURN 264
#define CONTINUE 265
#define IF 266
#define THEN 267
#define ELSE 268
#define FI 269
#define WHILE 270
#define DO 271
#define DONE 272
#define VAR 273
#define FOR 274
#define TO 275
#define EQUAL 276
#define GEQUAL 277
#define LEQUAL 278
#define NEQUAL 279
#define UMINUS 280




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nodetypes.h"
#include "tree.h"

/* This defines the type for every $$ value in the productions. */
#define YYSTYPE node_t *


/*
 * Convenience macros for repeated code. These macros are named CN for "create
 * node", number of children (3 is the most we need for a basic VSL syntax
 * tree), and with a trailing N or D for the data label (N is "NULL", D means
 * something goes in the data pointer).
 */
#define CN0D(type,data)\
    node_init ( malloc(sizeof(node_t)), type, data, 0 )
#define CN0N(type)\
    node_init ( malloc(sizeof(node_t)), type, NULL, 0 )
#define CN1D(type,data,A) \
    node_init ( malloc(sizeof(node_t)), type, data, 1, A )
#define CN1N(type,A) \
    node_init ( malloc(sizeof(node_t)), type, NULL, 1, A )
#define CN2D(type,data,A,B) \
    node_init ( malloc(sizeof(node_t)), type, data, 2, A, B )
#define CN2N(type,A,B) \
    node_init ( malloc(sizeof(node_t)), type, NULL, 2, A, B )
#define CN3N(type,A,B,C) \
    node_init ( malloc(sizeof(node_t)), type, NULL, 3, A, B, C )


/*
 * Variables connecting the parser to the state of the scanner - defs. will be
 * generated as part of the scanner (lexical analyzer).
 */
extern char yytext[];
extern int yylineno;


/*
 * Since the return value of yyparse is an integer (as defined by yacc/bison),
 * we need the top level production to finalize parsing by setting the root
 * node of the entire syntax tree inside its semantic rule instead. This global
 * variable will let us get a hold of the tree root after it has been
 * generated.
 */
node_t *root;


/*
 * These functions are referenced by the generated parser before their
 * definition. Prototyping them saves us a couple of warnings during build.
 */
int yyerror ( const char *error );  /* Defined below */
int yylex ( void );                 /* Defined in the generated scanner */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 215 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  94

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    29,    27,    32,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,     2,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,    37,    36,     2,     2,     2,     2,
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
      31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    15,    17,    21,
      23,    27,    30,    31,    33,    34,    36,    37,    44,    46,
      48,    50,    52,    54,    56,    58,    63,    67,    70,    76,
      84,    90,    98,   100,   104,   108,   112,   116,   120,   124,
     128,   132,   136,   140,   143,   147,   149,   151,   156,   159,
     161
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    -1,    47,    -1,    40,    47,    -1,
      48,    -1,    41,    48,    -1,    56,    -1,    42,    32,    56,
      -1,    58,    -1,    43,    32,    58,    -1,    44,    57,    -1,
      -1,    42,    -1,    -1,    43,    -1,    -1,     7,    58,    33,
      46,    34,    48,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    49,    -1,    35,    44,
      41,    36,    -1,    58,     6,    56,    -1,     9,    56,    -1,
      11,    56,    12,    48,    14,    -1,    11,    56,    12,    48,
      13,    48,    14,    -1,    15,    56,    16,    48,    17,    -1,
      19,    50,    20,    56,    16,    48,    17,    -1,    10,    -1,
      56,    27,    56,    -1,    56,    28,    56,    -1,    56,    29,
      56,    -1,    56,    30,    56,    -1,    56,    25,    56,    -1,
      56,    26,    56,    -1,    56,    21,    56,    -1,    56,    24,
      56,    -1,    56,    23,    56,    -1,    56,    22,    56,    -1,
      28,    56,    -1,    33,    56,    34,    -1,    59,    -1,    58,
      -1,    58,    33,    45,    34,    -1,    18,    43,    -1,     5,
      -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,   100,   101,   103,   104,   109,   110,   112,
     113,   115,   116,   118,   119,   121,   122,   124,   126,   127,
     128,   129,   130,   131,   132,   134,   136,   138,   142,   143,
     145,   147,   149,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   167,   169,
     171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "IDENTIFIER",
  "ASSIGN", "FUNC", "PRINT", "RETURN", "CONTINUE", "IF", "THEN", "ELSE",
  "FI", "WHILE", "DO", "DONE", "VAR", "FOR", "TO", "EQUAL", "GEQUAL",
  "LEQUAL", "NEQUAL", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "','", "'('", "')'", "'{'", "'}'", "'|'", "$accept", "program",
  "function_list", "statement_list", "expression_list", "variable_list",
  "declaration_list", "argument_list", "parameter_list", "function",
  "statement", "block", "assignment_statement", "return_statement",
  "if_statement", "while_statement", "for_statement", "null_statement",
  "expression", "declaration", "variable", "integer", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    60,    62,    43,    45,    42,
      47,   280,    44,    40,    41,   123,   125,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    48,    48,
      48,    48,    48,    48,    48,    49,    50,    51,    52,    52,
      53,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    58,
      59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     2,     0,     1,     0,     1,     0,     6,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     2,     5,     7,
       5,     7,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     4,     2,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,    49,     0,     1,     4,    16,
      15,     0,     9,     0,     0,    10,     0,    32,     0,     0,
       0,    12,    17,    24,    18,    19,    20,    21,    22,    23,
       0,    50,     0,     0,    27,    46,    45,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       5,    11,    26,    44,    39,    42,    41,    40,    37,    38,
      33,    34,    35,    36,    13,     0,     7,     0,     0,     0,
      48,    25,     6,     0,    47,     0,    28,    30,     0,     8,
       0,     0,    29,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    59,    74,    10,    40,    75,    11,     4,
      22,    23,    24,    25,    26,    27,    28,    29,    34,    61,
      35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int16 yypact[] =
{
       0,     6,    14,     0,   -25,   -25,   -16,   -25,   -25,     6,
      -9,     4,   -25,     6,    81,   -25,    15,   -25,    15,    15,
       6,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
      19,   -25,    15,    15,   136,    11,   -25,    82,    97,    27,
      54,    15,   -20,   122,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    81,    81,    15,     6,    41,
     -25,   -25,   136,   -25,   145,   -24,   -24,   145,   -24,   -24,
     -20,   -20,   -25,   -25,    17,    28,   136,     8,    36,   112,
      -9,   -25,   -25,    15,   -25,    81,   -25,   -25,    81,   136,
      47,    50,   -25,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -25,   -25,    10,   -25,   -25,   -25,    67,
     -14,   -25,    55,   -25,   -25,   -25,   -25,   -25,   -17,   -25,
      -1,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       6,    37,    38,    50,    51,    52,    53,     1,    12,    52,
      53,     5,    15,    30,     7,    42,    43,     9,    31,    30,
       5,    85,    86,    13,    62,    41,    60,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    76,    14,    30,
      79,    77,    78,    32,    54,    82,     5,    57,    33,    83,
      16,    17,    18,    87,    30,    30,    19,    12,    30,     5,
      20,    92,    84,    16,    17,    18,    89,    93,    80,    19,
       8,    90,    58,    20,    91,    39,    21,    81,     0,     0,
       0,     0,     0,     0,    30,     0,     5,    30,     0,    21,
      16,    17,    18,     0,    55,     0,    19,     0,     0,     0,
      20,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    56,     0,     0,    21,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    88,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,    63,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    45,    46,     0,
      48,    49,    50,    51,    52,    53
};

static const yytype_int8 yycheck[] =
{
       1,    18,    19,    27,    28,    29,    30,     7,     9,    29,
      30,     5,    13,    14,     0,    32,    33,    33,     3,    20,
       5,    13,    14,    32,    41,     6,    40,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    34,    40,
      57,    55,    56,    28,    33,    59,     5,    20,    33,    32,
       9,    10,    11,    17,    55,    56,    15,    58,    59,     5,
      19,    14,    34,     9,    10,    11,    83,    17,    58,    15,
       3,    85,    18,    19,    88,    20,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,     5,    88,    -1,    35,
       9,    10,    11,    -1,    12,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    16,    -1,    -1,    35,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    16,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    22,    23,    -1,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    39,    40,    47,     5,    58,     0,    47,    33,
      43,    46,    58,    32,    34,    58,     9,    10,    11,    15,
      19,    35,    48,    49,    50,    51,    52,    53,    54,    55,
      58,     3,    28,    33,    56,    58,    59,    56,    56,    50,
      44,     6,    56,    56,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    33,    12,    16,    20,    18,    41,
      48,    57,    56,    34,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    42,    45,    56,    48,    48,    56,
      43,    36,    48,    32,    34,    13,    14,    17,    16,    56,
      48,    48,    14,    17
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 98 "src/parser.y"
    { root = node_init ( malloc(sizeof(node_t)), program_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 3:
#line 100 "src/parser.y"
    { node_init ( (yyval) = malloc(sizeof(node_t)), function_list_n, NULL, 1, (yyvsp[(1) - (1)]) );;}
    break;

  case 4:
#line 101 "src/parser.y"
    { node_init ( (yyval) = malloc(sizeof(node_t)), function_list_n, NULL, 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );;}
    break;

  case 5:
#line 103 "src/parser.y"
    { node_init ( (yyval) = malloc(sizeof(node_t)), statement_list_n, NULL, 1, (yyvsp[(1) - (1)]) ); ;}
    break;

  case 6:
#line 104 "src/parser.y"
    {(yyval) = node_init ( malloc(sizeof(node_t)), statement_list_n, NULL, 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) ); ;}
    break;

  case 7:
#line 109 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), expression_list_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 8:
#line 110 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), expression_list_n, NULL, 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 9:
#line 112 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), variable_list_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 10:
#line 113 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), variable_list_n, NULL, 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 11:
#line 115 "src/parser.y"
    { node_init ( (yyval) =malloc(sizeof(node_t)), declaration_list_n, NULL, 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );;}
    break;

  case 12:
#line 116 "src/parser.y"
    {(yyval) = NULL;;}
    break;

  case 13:
#line 118 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), argument_list_n, NULL, 1, (yyvsp[(1) - (1)]) );;}
    break;

  case 14:
#line 119 "src/parser.y"
    {(yyval) = NULL;;}
    break;

  case 15:
#line 121 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), parameter_list_n, NULL, 1, (yyvsp[(1) - (1)]) );;}
    break;

  case 16:
#line 122 "src/parser.y"
    {(yyval) = NULL;;}
    break;

  case 17:
#line 124 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), function_n, NULL, 3, (yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]) );;}
    break;

  case 18:
#line 126 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 19:
#line 127 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 20:
#line 128 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 21:
#line 129 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 22:
#line 130 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 23:
#line 131 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 24:
#line 132 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), statement_n, NULL, 1, (yyvsp[(1) - (1)]));;}
    break;

  case 25:
#line 134 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), block_n, NULL, 2, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]) );;}
    break;

  case 26:
#line 136 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), assignment_statement_n, NULL, 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 27:
#line 138 "src/parser.y"
    {node_init ((yyval) = malloc(sizeof(node_t)), return_statement_n, NULL, 1, (yyvsp[(1) - (2)]) );;}
    break;

  case 28:
#line 142 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), if_statement_n, NULL, 2, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]));;}
    break;

  case 29:
#line 143 "src/parser.y"
    { (yyval) = node_init ( malloc(sizeof(node_t)), if_statement_n, NULL, 3, (yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]) );;}
    break;

  case 30:
#line 145 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), while_statement_n, NULL, 2, (yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]));;}
    break;

  case 31:
#line 147 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), for_statement_n, NULL, 3, (yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(3) - (7)]) );;}
    break;

  case 32:
#line 149 "src/parser.y"
    { (yyval) = node_init ( malloc(sizeof(node_t)), null_statement_n, NULL, 0 );;}
    break;

  case 33:
#line 151 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("+"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 34:
#line 152 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("-"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 35:
#line 153 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("*"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 36:
#line 154 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("/"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 37:
#line 155 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("<"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 38:
#line 156 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP(">"), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 39:
#line 157 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("=="), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 40:
#line 158 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("!="), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 41:
#line 159 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP("<="), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 42:
#line 160 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, STRDUP(">="), 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]) );;}
    break;

  case 43:
#line 161 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, NULL, 1, (yyvsp[(1) - (2)]) );;}
    break;

  case 44:
#line 162 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, NULL, 1, (yyvsp[(1) - (3)]) );;}
    break;

  case 45:
#line 163 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, NULL, 1, (yyvsp[(1) - (1)]) );;}
    break;

  case 46:
#line 164 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, NULL, 1, (yyvsp[(1) - (1)]) );;}
    break;

  case 47:
#line 165 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), expression_n, NULL, 2, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]) );;}
    break;

  case 48:
#line 167 "src/parser.y"
    {node_init ( (yyval) = malloc(sizeof(node_t)), declaration_n, NULL, 1, (yyvsp[(1) - (2)]) );;}
    break;

  case 49:
#line 169 "src/parser.y"
    { node_init ( (yyval) =  malloc(sizeof(node_t)), variable_n, NULL, 0 );;}
    break;

  case 50:
#line 171 "src/parser.y"
    {  node_init ( (yyval) = malloc(sizeof(node_t)), integer_n, NULL, 0 );;}
    break;


/* Line 1267 of yacc.c.  */
#line 1754 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 182 "src/parser.y"
 

/*
 * This function is called with an error description when parsing fails.
 * Serious error diagnosis requires a lot of code (and imagination), so in the
 * interest of keeping this project on a manageable scale, we just chuck the
 * message/line number on the error stream and stop dead.
 */
int
yyerror ( const char *error )
{
    fprintf ( stderr, "\tError: %s detected at line %d\n", error, yylineno );
    exit ( EXIT_FAILURE );
}

