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
#line 1 "lab5/main.y" /* yacc.c:339  */

    #include"common.h"
    extern TreeNode * root;
    int yylex();
    int yyerror( char const * );
    TreeNode* IdNode(TreeNode *);
    TreeNode* OpNode(TreeNode *, TreeNode*, OpType);

#line 75 "main.tab.c" /* yacc.c:339  */

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
   by #include "main.tab.h".  */
#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
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
    ID = 258,
    INTEGER = 259,
    CONSTSTRING = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    FOR = 264,
    INT = 265,
    VOID = 266,
    CHAR = 267,
    LPAREN = 268,
    RPAREN = 269,
    LBRACE = 270,
    RBRACE = 271,
    SEMICOLON = 272,
    LBRACKET = 273,
    RBRACKET = 274,
    TRUE = 275,
    FALSE = 276,
    ADD = 277,
    ASSIGN = 278,
    EQUAL = 279,
    NOT = 280,
    MINUS = 281,
    MUL = 282,
    DIV = 283,
    MOD = 284,
    AND = 285,
    OR = 286,
    NOTEQUAL = 287,
    LESS = 288,
    GREATER = 289,
    LESSEQUAL = 290,
    GREATEREQUAL = 291,
    PRINTF = 292,
    SCANF = 293,
    MAIN = 294,
    RETURN = 295,
    COMMA = 296,
    AASIGN = 297,
    ADDASSIGN = 298,
    MINUSASSIGN = 299,
    MULASSIGN = 300,
    DIVASSIGN = 301,
    MODASSIGN = 302,
    BANDASSIGN = 303,
    BEORASSIGN = 304,
    BORASSIGN = 305,
    BOR = 306,
    BAND = 307,
    BEOR = 308,
    BNEGATION = 309,
    UMINUS = 310,
    ADDRESS_OF = 311,
    ADDONE = 312,
    SL = 313,
    SR = 314,
    LOWER_THEN_ELSE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "main.tab.c" /* yacc.c:358  */

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   759

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    46,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    60,    68,    83,    87,    92,    99,
     107,   114,   124,   133,   142,   153,   161,   169,   170,   176,
     186,   189,   192,   195,   198,   201,   204,   207,   210,   213,
     216,   219,   222,   225,   228,   231,   234,   237,   240,   243,
     246,   249,   252,   253,   254,   255,   256,   257,   258,   261,
     264,   267,   270,   273,   276,   279,   282,   285,   291,   296,
     301
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "CONSTSTRING", "IF",
  "ELSE", "WHILE", "FOR", "INT", "VOID", "CHAR", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "LBRACKET", "RBRACKET", "TRUE", "FALSE",
  "ADD", "ASSIGN", "EQUAL", "NOT", "MINUS", "MUL", "DIV", "MOD", "AND",
  "OR", "NOTEQUAL", "LESS", "GREATER", "LESSEQUAL", "GREATEREQUAL",
  "PRINTF", "SCANF", "MAIN", "RETURN", "COMMA", "AASIGN", "ADDASSIGN",
  "MINUSASSIGN", "MULASSIGN", "DIVASSIGN", "MODASSIGN", "BANDASSIGN",
  "BEORASSIGN", "BORASSIGN", "BOR", "BAND", "BEOR", "BNEGATION", "UMINUS",
  "ADDRESS_OF", "ADDONE", "SL", "SR", "LOWER_THEN_ELSE", "$accept",
  "program", "statements", "statement", "stmt_expr", "stmt_decl",
  "id_list", "var_decl", "stmt_if_else", "stmt_while", "stmt_for",
  "stmt_printf", "stmt_scanf", "params", "stmt_main", "expr", "type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -75

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,    46,   -75,   -75,    -6,    -1,     0,   -75,   -75,   -75,
     162,   132,   -75,   -75,   162,   162,     3,     4,    15,   162,
       2,   132,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   391,    -2,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   -75,   162,   162,   151,   193,    62,   700,   700,
     162,   162,   -75,   700,   -75,   -75,   -75,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   -20,     6,    -9,   -75,   -75,
     543,   543,   543,   543,   543,   543,   543,   543,   233,   273,
     162,   429,    17,   -75,   -75,    -3,   543,     1,   208,   -75,
     208,   -18,   -18,   -18,   619,   581,   -75,   172,   172,   172,
     172,   657,   672,   700,    97,    97,   162,     7,   -75,    17,
     132,   132,   467,   162,     5,   162,    22,   543,   132,   -75,
      36,   -75,   162,   505,   -75,   543,   -75,   -75,   132,   313,
     162,   -75,   132,   353,   -75,   132,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    52,    53,    55,     0,     0,     0,    68,    69,    70,
       0,     0,    54,    56,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     5,     6,     7,     8,    12,    10,    11,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,    51,    32,
       0,     0,    67,    50,     1,     4,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,    17,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,    57,    13,     0,    27,     0,    30,    37,
      31,    34,    35,    36,    43,    44,    42,    38,    39,    40,
      41,    45,    47,    46,    48,    49,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    16,
      20,    22,     0,     0,    25,    28,    26,    29,     0,     0,
       0,    21,     0,     0,    24,     0,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,    33,   -11,   -75,    31,   -75,   -74,   -75,   -75,
     -75,   -75,   -75,    -5,   -75,   -10,    34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    24,    77,    78,    25,    26,
      27,    28,    29,    95,    30,    31,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    75,    54,   116,    48,    49,    58,    43,   118,    53,
      55,   124,    44,    45,    65,   126,    50,    51,    52,   117,
      75,   128,   134,    79,    80,    81,    82,    83,    84,    85,
      86,    87,   119,    88,    89,    91,    55,    76,   125,   136,
      96,    96,   125,   138,    47,   129,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     1,     2,     3,     4,    33,
       5,     6,     7,     8,     9,    10,    90,    11,    94,    92,
     122,     0,    12,    13,     0,     0,     0,    14,    15,    34,
      35,    36,    37,    38,    39,    40,    41,     0,     0,    16,
      17,     0,     0,    42,     0,     0,   127,     0,     0,   130,
     131,     0,     0,   133,    18,   135,    19,   137,     0,    57,
       0,    58,   139,    59,    60,    61,    62,   141,     0,    65,
     143,   144,     0,     0,   146,     1,     2,     3,     4,     0,
       5,     6,     7,     8,     9,    10,     0,    11,     0,     0,
       0,     0,    12,    13,     1,     2,     3,    14,    15,     0,
       0,     7,     8,     9,    10,     1,     2,     3,     0,    16,
      17,    12,    13,     0,     0,    10,    14,    15,     0,     0,
       0,     0,    12,    13,    18,     0,    19,    14,    15,     0,
       0,     0,     0,     0,    57,     0,    58,     0,    59,    60,
      61,    62,     0,    18,    65,    19,     0,    93,     0,     0,
       0,     0,     0,     0,    18,    57,    19,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      73,    74,    58,     0,     0,    60,    61,    62,     0,     0,
      65,     0,     0,     0,    70,    71,    72,   120,     0,     0,
       0,    73,    74,     0,     0,    57,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,   121,     0,     0,
       0,    73,    74,     0,     0,    57,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,   142,     0,     0,
       0,    73,    74,     0,     0,    57,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,   145,     0,     0,
       0,    73,    74,     0,     0,    57,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,     0,    56,     0,
       0,    73,    74,    57,     0,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,     0,   123,     0,     0,    73,
      74,    57,     0,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,     0,   132,     0,     0,    73,    74,    57,
       0,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,     0,   140,     0,     0,    73,    74,    57,     0,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,     0,
       0,     0,     0,    73,    74,    57,     0,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,     0,     0,     0,
       0,    73,    74,    57,     0,    58,     0,    59,    60,    61,
      62,    63,     0,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,     0,     0,     0,     0,    73,
      74,    57,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,     0,     0,     0,     0,    73,    74,    57,
       0,    58,     0,    59,    60,    61,    62,     0,     0,    65,
      66,    67,    68,    69,    57,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    65,    66,    67,    68,    69,    71,
      72,     0,     0,     0,     0,    73,    74,     0,     0,     0,
       0,     0,    57,     0,    58,    72,    59,    60,    61,    62,
      73,    74,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74
};

static const yytype_int16 yycheck[] =
{
      10,     3,     0,    23,    14,    15,    24,    13,    17,    19,
      21,    14,    13,    13,    32,    14,    13,    13,     3,    13,
       3,    14,    17,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    41,    43,    44,    45,    47,    39,    41,    17,
      50,    51,    41,     7,    11,   119,    51,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,     4,     5,     6,    23,
       8,     9,    10,    11,    12,    13,    45,    15,    16,    45,
      90,    -1,    20,    21,    -1,    -1,    -1,    25,    26,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    37,
      38,    -1,    -1,    57,    -1,    -1,   116,    -1,    -1,   120,
     121,    -1,    -1,   123,    52,   125,    54,   128,    -1,    22,
      -1,    24,   132,    26,    27,    28,    29,   138,    -1,    32,
     140,   142,    -1,    -1,   145,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,     3,     4,     5,    25,    26,    -1,
      -1,    10,    11,    12,    13,     3,     4,     5,    -1,    37,
      38,    20,    21,    -1,    -1,    13,    25,    26,    -1,    -1,
      -1,    -1,    20,    21,    52,    -1,    54,    25,    26,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    52,    32,    54,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    22,    54,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      58,    59,    24,    -1,    -1,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    51,    52,    53,    14,    -1,    -1,
      -1,    58,    59,    -1,    -1,    22,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    14,    -1,    -1,
      -1,    58,    59,    -1,    -1,    22,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    14,    -1,    -1,
      -1,    58,    59,    -1,    -1,    22,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    14,    -1,    -1,
      -1,    58,    59,    -1,    -1,    22,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    17,    -1,
      -1,    58,    59,    22,    -1,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    17,    -1,    -1,    58,
      59,    22,    -1,    24,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    17,    -1,    -1,    58,    59,    22,
      -1,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    17,    -1,    -1,    58,    59,    22,    -1,    24,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    22,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    59,    22,    -1,    24,    -1,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    36,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    24,    53,    26,    27,    28,    29,
      58,    59,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    15,    20,    21,    25,    26,    37,    38,    52,    54,
      62,    63,    64,    65,    66,    69,    70,    71,    72,    73,
      75,    76,    77,    23,    43,    44,    45,    46,    47,    48,
      49,    50,    57,    13,    13,    13,    76,    63,    76,    76,
      13,    13,     3,    76,     0,    64,    17,    22,    24,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      51,    52,    53,    58,    59,     3,    39,    67,    68,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      66,    76,    77,    14,    16,    74,    76,    74,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    23,    13,    17,    41,
      14,    14,    76,    17,    14,    41,    14,    76,    14,    68,
      64,    64,    17,    76,    17,    76,    17,    64,     7,    76,
      17,    64,    14,    76,    64,    14,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    71,    72,    73,    74,    74,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     3,     1,     3,     1,
       5,     7,     5,     9,     8,     5,     5,     1,     3,     5,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1
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
#line 42 "lab5/main.y" /* yacc.c:1646  */
    {root=new TreeNode(NODE_PROG);root->addChild((yyvsp[0]));}
#line 1489 "main.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1495 "main.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);(yyval)->addSibling((yyvsp[0]));}
#line 1501 "main.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1507 "main.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1513 "main.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1519 "main.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1525 "main.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1531 "main.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1537 "main.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1543 "main.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1549 "main.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1555 "main.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_EXPR;
        node->addChild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1566 "main.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_DECL;
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[-1]));
        (yyval)=node;
        TreeNode *p = (yyvsp[-1]);
        while(p){
            p->child->nodeType=NODE_VAR;
            p->child->varType = (yyvsp[-2])->varType;
            p=p->sibling;
        }
    }
#line 1584 "main.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval)=(yyvsp[-2]);
        (yyval)->addSibling((yyvsp[0]));
    }
#line 1593 "main.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval)=(yyvsp[0]);
    }
#line 1601 "main.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_DECL);
        TreeNode *t = IdNode((yyvsp[-2]));
        node->addChild(t);
        node->addChild((yyvsp[0]));
        (yyval)=node;
    }
#line 1613 "main.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_DECL);
        TreeNode *t = IdNode((yyvsp[0]));
        node->addChild(t);
        (yyval) = node;
    }
#line 1624 "main.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_IF;
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[0]));
        (yyval) = node;
    }
#line 1636 "main.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_IF;
        node->addChild((yyvsp[-4]));
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[0]));
        (yyval) = node;
    }
#line 1649 "main.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_WHILE;
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[0]));
        (yyval) = node;
    }
#line 1661 "main.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_FOR;
        node->addChild((yyvsp[-6]));
        node->addChild((yyvsp[-4]));
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[0]));
        (yyval) = node;
    }
#line 1675 "main.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_FOR;
        node->addChild((yyvsp[-5]));
        node->addChild((yyvsp[-4]));
        node->addChild((yyvsp[-2]));
        node->addChild((yyvsp[0]));
        (yyval) = node;
    }
#line 1689 "main.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_PRINTF;
        node->addChild((yyvsp[-2]));
        (yyval)=node;
    }
#line 1700 "main.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_SCANF;
        node->addChild((yyvsp[-2]));
        (yyval)=node;
    }
#line 1711 "main.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 169 "lab5/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1717 "main.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 170 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval)=(yyvsp[-2]);
        (yyval)->addSibling((yyvsp[0]));
    }
#line 1726 "main.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 176 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_MAIN;
        node->addChild((yyvsp[-4]));
        node->addChild((yyvsp[0]));
        (yyval)=node;
    }
#line 1738 "main.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 186 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_ADD);
    }
#line 1746 "main.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 189 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MINUS);
    }
#line 1754 "main.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 192 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[0]), nullptr, OP_UMINUS);
    }
#line 1762 "main.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-1]), nullptr, OP_ADDONE);
    }
#line 1770 "main.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 198 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MUL);
    }
#line 1778 "main.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_DIV);
    }
#line 1786 "main.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 204 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MOD);
    }
#line 1794 "main.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 207 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_EQUAL);
    }
#line 1802 "main.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 210 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_LESS);
    }
#line 1810 "main.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 213 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_GREATER);
    }
#line 1818 "main.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 216 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_LESSEQUAL);
    }
#line 1826 "main.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 219 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_GREATEREQUAL);
    }
#line 1834 "main.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 222 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_NOTEQUAL);
    }
#line 1842 "main.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 225 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_AND);
    }
#line 1850 "main.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 228 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_OR);
    }
#line 1858 "main.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 231 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BOR);
    }
#line 1866 "main.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 234 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BEOR);
    }
#line 1874 "main.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 237 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BAND);
    }
#line 1882 "main.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 240 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_SL);
    }
#line 1890 "main.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 243 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_SR);
    }
#line 1898 "main.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 246 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[0]), nullptr, OP_BNEGATION);
    }
#line 1906 "main.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 249 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[0]), nullptr, OP_NOT);
    }
#line 1914 "main.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 252 "lab5/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1920 "main.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 253 "lab5/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1926 "main.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 254 "lab5/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1932 "main.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 255 "lab5/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1938 "main.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "lab5/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1944 "main.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 257 "lab5/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 1950 "main.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 258 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_ASSIGN);
    }
#line 1958 "main.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 261 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_ADDASSIGN);
    }
#line 1966 "main.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 264 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MINUSASSIGN);
    }
#line 1974 "main.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 267 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MULASSIGN);
    }
#line 1982 "main.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_DIVASSIGN);
    }
#line 1990 "main.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_MODASSIGN);
    }
#line 1998 "main.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 276 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BANDASSIGN);
    }
#line 2006 "main.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BEORASSIGN);
    }
#line 2014 "main.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "lab5/main.y" /* yacc.c:1646  */
    {
        (yyval) = OpNode((yyvsp[-2]), (yyvsp[0]), OP_BORASSIGN);
    }
#line 2022 "main.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 285 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node = OpNode((yyvsp[0]), nullptr, OP_ADDRESS_OF);
        (yyval) = node;
    }
#line 2031 "main.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 291 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_INTEGER;
        (yyval)=node; 
    }
#line 2041 "main.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 296 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_VOID;
        (yyval)=node;         
    }
#line 2051 "main.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 301 "lab5/main.y" /* yacc.c:1646  */
    {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_CHAR;
        (yyval)=node;
    }
#line 2061 "main.tab.c" /* yacc.c:1646  */
    break;


#line 2065 "main.tab.c" /* yacc.c:1646  */
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
#line 308 "lab5/main.y" /* yacc.c:1906  */


TreeNode* IdNode(TreeNode *t){
    if(SymbolTable.find(t->var_name) == SymbolTable.end())
        SymbolTable[t->var_name] = {vector<TreeNode *>(), vector<int>({0})};
    TreeNode *node = new TreeNode(NODE_VAR);
    node->var_name = t->var_name;
    SymbolTable[t->var_name].first.push_back(node);
    SymbolTable[t->var_name].second.back()++;
    return node;
}

TreeNode* OpNode(TreeNode *a, TreeNode *b, OpType ot)
{
    TreeNode *node = new TreeNode(NODE_OP);
    node->opType = ot;
    node->addChild(a);
    node->addChild(b);
    return node;
}
