/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 19 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include "log.h"
#include "parse_tree.h"
#include "symbol.h"
#include "line.h"

#define YYSTYPE node *

extern char yytext[];
extern int column, line;
extern symbol_table *sym;
extern node *parse_tree_head;

extern int yylex (void);

void yyerror(s)
char *s;
{
	lerr(line, "[plpcc] syntax error\n"); 
}


#line 90 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315,
    ASM = 316,
    IFX = 317
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    68,    69,    73,    74,    75,
      76,    77,    78,    79,    80,    84,    85,    89,    90,    91,
      92,    93,    94,    98,    99,   100,   101,   102,   103,   107,
     108,   112,   113,   114,   115,   119,   120,   121,   125,   126,
     127,   131,   132,   133,   134,   135,   139,   140,   141,   145,
     146,   150,   151,   155,   156,   160,   161,   165,   166,   170,
     171,   175,   176,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   194,   195,   199,   203,   204,   208,
     209,   210,   211,   212,   213,   217,   218,   222,   223,   227,
     228,   229,   230,   231,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   250,   251,   252,   256,
     257,   261,   262,   266,   270,   271,   272,   273,   277,   278,
     282,   283,   284,   288,   289,   290,   294,   295,   299,   300,
     304,   305,   309,   310,   314,   315,   316,   317,   318,   319,
     320,   324,   325,   326,   327,   331,   332,   337,   338,   342,
     343,   347,   348,   349,   353,   354,   358,   359,   363,   364,
     365,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     381,   382,   383,   387,   388,   392,   393,   394,   395,   396,
     397,   401,   402,   403,   407,   408,   409,   410,   414,   415,
     419,   420,   424,   425,   429,   430,   431,   435,   436,   437,
     438,   442,   443,   444,   445,   446,   450,   451,   455,   456,
     460,   461,   462,   463
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ASM", "IFX", "'('", "')'", "'['", "']'",
  "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1021,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,     4,    22,   -21,  -215,    13,  1299,  1299,  -215,     5,
    -215,  1299,  1175,   146,    58,   931,  -215,  -215,   -61,    61,
     -31,  -215,  -215,   -21,  -215,     3,  -215,  1117,  -215,  -215,
      14,  1150,  -215,   280,  -215,    13,  -215,  1175,  1066,   712,
     146,  -215,  -215,    61,    19,   -38,  -215,  -215,  -215,  -215,
      22,  -215,   568,  -215,  1175,  1150,  1150,   417,  -215,    11,
    1150,    51,  -215,  -215,   835,   856,   856,   880,    59,    63,
      83,    97,   534,   123,   111,   107,   118,   606,   147,   691,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,   127,
     351,   880,  -215,    74,     7,   222,    34,    54,   126,   145,
     137,   224,   -11,  -215,  -215,    23,  -215,  -215,  -215,   352,
     424,  -215,  -215,  -215,  -215,   155,  -215,  -215,  -215,  -215,
      12,   189,   187,  -215,    88,  -215,  -215,  -215,  -215,   191,
     -27,   880,    61,  -215,  -215,   568,  -215,  -215,  -215,  1097,
    -215,  -215,  -215,   880,    32,  -215,   176,  -215,   534,   691,
    -215,   880,  -215,  -215,   182,   534,   880,   880,   880,   212,
     640,   185,  -215,  -215,  -215,    45,   265,    90,    77,   207,
     274,  -215,  -215,   736,   880,   275,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,   880,  -215,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,  -215,
    -215,   462,  -215,  -215,   976,   763,  -215,    57,  -215,   162,
    -215,  1278,  -215,   277,  -215,  -215,  -215,  -215,  -215,   -24,
    -215,  -215,    11,  -215,   880,  -215,   217,   534,  -215,   129,
     132,   139,   219,   640,  -215,  -215,   223,  -215,  1198,   165,
    -215,   880,  -215,  -215,   144,  -215,    87,  -215,  -215,  -215,
    -215,  -215,    74,    74,     7,     7,   222,   222,   222,   222,
      34,    34,    54,   126,   145,   137,   224,   -39,  -215,  -215,
    -215,   226,   227,  -215,   228,   162,  1241,   784,  -215,  -215,
    -215,   496,  -215,  -215,  -215,  -215,  -215,   534,   534,   534,
     880,   808,  -215,  -215,  -215,   880,  -215,   880,  -215,  -215,
    -215,  -215,   229,  -215,   230,  -215,  -215,   240,  -215,  -215,
     152,   534,   158,  -215,  -215,  -215,  -215,   534,   211,  -215,
     534,  -215,  -215,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   134,   105,    89,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,   130,   131,    94,   109,
     110,     0,     0,   141,   209,     0,    79,    81,   103,     0,
     104,    83,     0,   133,     0,     0,   206,   208,   125,     0,
       0,   145,   143,   142,    77,     0,    85,    87,    80,    82,
     108,     0,    84,     0,   188,     0,   213,     0,     0,     0,
     132,     1,   207,     0,   128,     0,   126,   135,   146,   144,
       0,    78,     0,   211,     0,     0,   115,     0,   111,     0,
     117,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,   192,   184,     7,    17,
      29,     0,    31,    35,    38,    41,    46,    49,    51,    53,
      55,    57,    59,    61,    74,     0,   190,   175,   176,     0,
       0,   177,   178,   179,   180,    87,   189,   212,   154,   140,
     153,     0,   147,   149,     0,     2,   137,    29,    76,     0,
       0,     0,     0,   123,    86,     0,   170,    88,   210,     0,
     114,   107,   112,     0,     0,   118,   120,   116,     0,     0,
      21,     0,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,   202,   203,   204,     0,     0,     0,   156,     0,
       0,    13,    14,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    63,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     186,     0,   185,   191,     0,     0,   151,   158,   152,   159,
     138,     0,   139,     0,   136,   124,   129,   127,   173,     0,
     106,   121,     0,   113,     0,   181,     0,     0,   183,     0,
       0,     0,     0,     0,   201,   205,     0,     5,     0,   158,
     157,     0,    12,     9,     0,    15,     0,    11,    62,    32,
      33,    34,    36,    37,    39,    40,    44,    45,    42,    43,
      47,    48,    50,    52,    54,    56,    58,     0,    75,   187,
     166,     0,     0,   162,     0,   160,     0,     0,   148,   150,
     155,     0,   171,   119,   122,    22,   182,     0,     0,     0,
       0,     0,     6,    30,    10,     0,     8,     0,   167,   161,
     163,   168,     0,   164,     0,   172,   174,   194,   196,   197,
       0,     0,     0,    16,    60,   169,   165,     0,     0,   199,
       0,   195,   198,   200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,   -48,  -215,   -92,    35,    21,    44,
      30,    76,    78,    75,    79,   102,  -215,   -55,   -69,  -215,
     -46,   -53,    10,     0,  -215,   232,  -215,   138,  -215,  -215,
     225,   -64,   -26,  -215,    53,  -215,   269,   151,    29,   -13,
     -32,    -3,  -215,   -57,  -215,   101,  -215,   175,  -123,  -214,
    -127,  -215,   -74,  -215,   172,    98,   216,  -175,  -215,  -215,
    -215,  -215,   311,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   274,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   207,
     125,   149,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   164,   165,    30,    65,    66,    31,    32,
      33,    34,    43,   301,   142,   143,   144,   189,   302,   239,
     157,   249,   126,   127,   128,    57,   130,   131,   132,   133,
     134,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   141,    60,   156,   148,   263,   226,    38,    50,    40,
      24,   147,    47,   162,     1,     1,     1,   238,   179,   208,
      42,    16,    17,   305,    63,     1,    48,    49,   248,   228,
     152,    52,   148,    67,   174,    25,   170,   172,   173,   147,
      69,   152,   135,   327,   311,    24,   216,   217,   153,    23,
     160,   185,    41,   187,   167,   305,   233,   135,   140,   245,
       1,     1,   312,   147,    64,   270,   166,   136,   220,   221,
     227,    70,    68,   188,    22,   234,    22,   235,   212,   213,
      80,    23,    23,    23,   136,    22,   156,    71,   321,    39,
      51,   228,    23,   163,   255,   162,   148,    44,   246,    75,
     252,   258,   151,   147,    80,    80,    80,   229,   148,    80,
     251,   218,   219,   228,   181,   147,   253,   279,   280,   281,
     234,    22,   235,   187,   275,   187,   176,   236,    80,   265,
     259,   260,   261,   168,   190,   191,   192,   237,   278,   136,
     268,   175,   235,   188,   209,    74,   177,    23,   276,   210,
     211,   129,   242,   326,   267,   228,   243,   233,   228,   298,
     178,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   323,
     148,   297,   304,   316,   336,   269,   180,   147,    80,    76,
     193,   182,   194,   317,   195,   222,   318,   228,    80,   148,
     228,   314,   183,   319,    56,    60,   147,   228,   324,    58,
     186,    59,   325,    76,    76,    76,   348,   224,    76,    73,
     228,    40,   350,   147,   223,   306,   228,   307,   268,   137,
     235,   237,   214,   215,   140,   284,   285,    76,    72,   166,
     225,   140,   156,   337,   338,   339,   158,   282,   283,   332,
     290,   291,   148,   240,   334,   241,   343,   244,   254,   147,
     286,   287,   288,   289,   257,   269,   262,   349,   140,   264,
     266,   271,   344,   351,   340,   342,   353,   272,   277,   147,
     310,   315,   320,    81,    82,    83,    84,   322,    85,    86,
     328,   329,   347,   345,   330,   352,   346,    76,   292,   294,
     159,   293,   154,   247,   295,   313,   140,    76,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   296,    87,
      88,    89,   150,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   309,    99,   256,   231,    62,     0,     0,   100,
     101,   102,   103,   104,   105,    81,    82,    83,    84,     0,
      85,    86,     0,     0,   106,    53,   107,     0,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    81,    82,    83,
      84,     0,    85,    86,   206,     0,   106,    53,   230,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    81,    82,    83,    84,     0,
      85,    86,     0,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      82,    83,    84,   161,    85,    86,     0,     0,   106,    53,
     232,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    81,    82,    83,
      84,     0,    85,    86,     0,     0,   106,    53,   299,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   145,    82,    83,    84,     0,    85,    86,     0,     0,
       0,   155,   335,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      82,    83,    84,     0,    85,    86,     0,     0,   106,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   145,    82,    83,    84,     0,    85,    86,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,     0,     0,   145,    82,    83,    84,     0,    85,
      86,    98,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    82,    83,    84,     2,
      85,    86,     0,     0,   106,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   145,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,    98,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    82,    83,    84,
       0,    85,    86,    98,     0,    99,     0,     0,   146,     0,
       0,   100,   101,   102,   103,   104,   105,   145,    82,    83,
      84,     0,    85,    86,     0,     0,     0,    98,     0,    99,
     273,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   145,    82,    83,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,    98,     0,    99,     0,     0,   303,
       0,     0,   100,   101,   102,   103,   104,   105,   145,    82,
      83,    84,     0,    85,    86,    98,     0,    99,     0,     0,
     333,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      82,    83,    84,     0,    85,    86,     0,     0,     0,    98,
       0,    99,   341,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   145,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    98,     0,   169,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,    98,     0,   171,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    61,     0,     0,     1,     0,     0,     0,     0,     0,
       0,    98,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     300,   235,     0,     0,     0,     0,    23,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     139,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   250,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
      72,     0,    53,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   268,   300,   235,     0,     0,     0,     0,    23,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   308,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    58,    34,    72,    59,   180,    17,     3,     3,    22,
       0,    59,    25,    77,     3,     3,     3,   140,    92,   111,
      23,    42,    43,   237,    85,     3,    26,    27,   155,    68,
      68,    31,    87,    64,    87,    35,    84,    85,    86,    87,
      43,    68,    55,    82,    68,    35,    12,    13,    86,    70,
      76,    97,    23,    99,    80,   269,   130,    70,    58,    86,
       3,     3,    86,   111,     3,   188,    79,    57,    14,    15,
      81,    68,    43,    99,    63,    63,    63,    65,    71,    72,
      51,    70,    70,    70,    74,    63,   155,    84,   263,    85,
      85,    68,    70,    82,   168,   159,   151,    84,   151,    85,
      68,   175,    83,   151,    75,    76,    77,    84,   163,    80,
     163,    77,    78,    68,     3,   163,    84,   209,   210,   211,
      63,    63,    65,   169,   193,   171,    63,   140,    99,    84,
     176,   177,   178,    82,     7,     8,     9,   140,   207,   129,
      63,    82,    65,   169,    70,    47,    63,    70,   194,    75,
      76,    53,    64,    66,    64,    68,    68,   231,    68,   228,
      63,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   271,
     235,   227,   235,   257,   311,   188,    63,   235,   159,    51,
      63,    84,    65,    64,    67,    69,    64,    68,   169,   254,
      68,   254,    84,    64,    32,   237,   254,    68,    64,    63,
      63,    65,    68,    75,    76,    77,    64,    80,    80,    47,
      68,   234,    64,   271,    79,    63,    68,    65,    63,    57,
      65,   234,    10,    11,   234,   214,   215,    99,    83,   252,
      16,   241,   311,   317,   318,   319,    74,   212,   213,   306,
     220,   221,   307,    64,   307,    68,   325,    66,    82,   307,
     216,   217,   218,   219,    82,   268,    54,   341,   268,    84,
       5,    64,   327,   347,   320,   321,   350,     3,     3,   327,
       3,    64,    63,     3,     4,     5,     6,    64,     8,     9,
      64,    64,    52,    64,    66,    84,    66,   159,   222,   224,
      75,   223,    70,   152,   225,   252,   306,   169,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   226,    49,
      50,    51,    63,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   241,    63,   169,   129,    35,    -1,    -1,    69,
      70,    71,    72,    73,    74,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    84,    85,    86,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     3,     4,     5,
       6,    -1,     8,     9,    83,    -1,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     3,     4,     5,     6,    -1,
       8,     9,    -1,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     3,
       4,     5,     6,    86,     8,     9,    -1,    -1,    84,    85,
      86,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    85,    86,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     3,     4,     5,     6,    28,
       8,     9,    -1,    -1,    84,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     3,     4,     5,     6,
      -1,     8,     9,    61,    -1,    63,    -1,    -1,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    61,    -1,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    66,
      -1,    -1,    69,    70,    71,    72,    73,    74,     3,     4,
       5,     6,    -1,     8,     9,    61,    -1,    63,    -1,    -1,
      66,    -1,    -1,    69,    70,    71,    72,    73,    74,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    61,
      -1,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      64,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    86,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      83,    -1,    85,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    63,    70,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,     3,    85,
     126,   125,   128,   129,    84,   111,   112,   126,   110,   110,
       3,    85,   110,    85,   109,   110,   141,   142,    63,    65,
     127,     0,   149,    85,     3,   123,   124,    64,   125,   128,
      68,    84,    83,   141,   142,    85,   114,   117,   118,   119,
     125,     3,     4,     5,     6,     8,     9,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      69,    70,    71,    72,    73,    74,    84,    86,    88,    89,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   107,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   126,   109,   141,     3,    64,
     110,   130,   131,   132,   133,     3,    66,    91,   104,   108,
     123,    83,    68,    86,   112,    85,   105,   137,   141,   117,
     119,    86,   118,    82,   120,   121,   126,   119,    82,    63,
      91,    63,    91,    91,   108,    82,    63,    63,    63,   139,
      63,     3,    84,    84,    84,   107,    63,   107,   119,   134,
       7,     8,     9,    63,    65,    67,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    83,   106,    93,    70,
      75,    76,    71,    72,    10,    11,    12,    13,    77,    78,
      14,    15,    69,    79,    80,    16,    17,    81,    68,    84,
      86,   143,    86,   139,    63,    65,   126,   128,   135,   136,
      64,    68,    64,    68,    66,    86,   108,   124,   137,   138,
      86,   108,    68,    84,    82,   139,   134,    82,   139,   107,
     107,   107,    54,   144,    84,    84,     5,    64,    63,   128,
     135,    64,     3,    64,    90,   105,   107,     3,   105,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    99,   100,   101,   102,   107,   105,    86,
      64,   130,   135,    66,   108,   136,    63,    65,    48,   132,
       3,    68,    86,   121,   108,    64,   139,    64,    64,    64,
      63,   144,    64,    93,    64,    68,    66,    82,    64,    64,
      66,    64,   130,    66,   108,    86,   137,   139,   139,   139,
     107,    64,   107,   105,   104,    64,    66,    52,    64,   139,
      64,   139,    84,   139
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     4,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     3,     2
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
#line 65 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IDENTIFIER: %s\n", (yyvsp[0])->id); /* the lexer already made this object a constant */ }
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] CONSTANT: %s\n", (yyvsp[0])->id); /* the lexer already made this object a constant */ }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRING_LITERAL: %s\n", (yyvsp[0])->id); /* the lexer already made this object a string */ }
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXPRESSION\n"); (yyval) = (yyvsp[-1]); }
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INLINE ASSEMBLY\n"); (yyval) = op("asm", 1, (yyvsp[-1])); }
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 74 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_BRACKET_EXPRESSION\n"); (yyval) = op("postfix_expr", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_PAREN_EXPRESSION\n"); (yyval) = op("postfix_expr", 2, (yyvsp[-2]), id("paren")); }
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 76 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_ARG_EXPRESSION_LIST\n"); (yyval) = op("postfix_expr", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 77 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_._IDENTIFIER\n"); (yyval) = op("postfix_expr", 3, (yyvsp[-2]), id("dot"), (yyvsp[0])); }
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_PTR_OP_IDENTIFIER\n"); (yyval) = op("postfix_expr", 3, (yyvsp[-2]), id("ptr"), (yyvsp[0])); }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_INC_OP_EXPRESSION\n"); (yyval) = op("postfix_expr", 2, (yyvsp[-1]), id("inc")); }
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 80 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POSTFIX_DEC_OP_EXPRESSION\n"); (yyval) = op("postfix_expr", 2, (yyvsp[-1]), id("dec")); }
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ASSIGNMENT_EXPRESSION\n"); (yyval) = op("argument_expr_list", 1, (yyvsp[0])); }
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ARG_EXPRESSION_LIST_,_ASSIGNMENT_EXPRESSION\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INC_OP_UNARY_EXPRESSION\n"); (yyval) = op("unary_expr", 2, id("inc"), (yyvsp[0])); }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 91 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DEC_OP_UNARY_EXPRESSION\n"); (yyval) = op("unary_expr", 2, id("dec"), (yyvsp[0])); }
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] UNARY_OP_CAST_EXPRESSION\n"); (yyval) = op("unary_expr", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 93 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SIZEOF_UNARY_EXP\n"); (yyval) = op("sizeof", 1, (yyvsp[-1])); }
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SIZEOF_TYPE_NAME\n"); (yyval) = op("sizeof", 1, (yyvsp[-1])); }
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] &\n"); (yyval) = id("&"); }
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] *\n"); (yyval) = id("*"); }
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 100 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] +\n"); (yyval) = id("+"); }
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 101 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] -\n"); (yyval) = id("-"); }
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ~\n"); (yyval) = id("~"); }
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 103 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] !\n"); (yyval) = id("!"); }
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 108 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_NAME_CAST_EXPRESSION\n"); (yyval) = op("cast_expr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 113 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] MULTIPLICATIVE_EXPRESSION_*_CAST_EXPRESSION\n"); (yyval) = op("multiply", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 114 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] MULTIPLICATIVE_EXPRESSION_/_CAST_EXPRESSION\n"); (yyval) = op("divide", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 115 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] MULTIPLICATIVE_EXPRESSION_MOD_CAST_EXPRESSION\n"); (yyval) = op("mod", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 120 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ADDITIVE_EXPRESSION_+_MULTIPLICATIVE_EXPRESSION\n"); (yyval) = op("add", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ADDITIVE_EXPRESSION_-_MULTIPLICATIVE_EXPRESSION\n"); (yyval) = op("sub", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 126 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SHIFT_LEFT_ADDITIVE\n"); (yyval) = op("shift_left", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SHIFT_RIGHT_ADDITIVE\n"); (yyval) = op("shift_right", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RELATIONAL_<_SHIFT\n"); (yyval) = op("less_than", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RELATIONAL_>_SIHFT\n"); (yyval) = op("greater_than", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RELATIONAL_LE_SHIFT\n"); (yyval) = op("less_equal_than", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 135 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RELATIONAL_GE_SHIFT\n"); (yyval) = op("greater_equal_than", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 140 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EQUALITY_EQ_RELATIONAL\n"); (yyval) = op("equality", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EQUALITY_NE_RELATIONAL\n"); (yyval) = op("equality_not", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] AND_EXPRESSION_&_EQUALITY\n"); (yyval) = op("bitwise_and", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] XOR_^_AND_EXPRESSION\n"); (yyval) = op("bitwise_xor", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] OR_|_XOR\n"); (yyval) = op("bitwise_or", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 161 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] LOGICAL_AND_&&_OR\n"); (yyval) = op("logical_and", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] LOGICAL_OR_||_LOGICAL_AND\n"); (yyval) = op("logical_or", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] LOGICAL_OR_?\n"); (yyval) = op("conditional", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] UNARY_ASSIGNMENT\n"); (yyval) = op("assignment", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 180 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] =\n"); (yyval) = op("assign", 0);}
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 181 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] *=\n"); (yyval) = op("assign_mul", 0); }
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 182 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] /=\n"); (yyval) = op("assign_div", 0); }
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 183 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] MOD=\n"); (yyval) = op("assign_mod", 0); }
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 184 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] +=\n"); (yyval) = op("assign_add", 0); }
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 185 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] -=\n"); (yyval) = op("assign_sub", 0); }
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 186 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] <<=\n"); (yyval) = op("assign_sll", 0); }
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 187 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] >>=\n"); (yyval) = op("assign_srl", 0); }
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 188 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] &=\n"); (yyval) = op("assign_and", 0); }
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 189 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ^=\n"); (yyval) = op("assign_xor", 0); }
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 190 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] |=\n"); (yyval) = op("assign_or", 0); }
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ASSIGNMENT_EXPRESSION\n"); (yyval) = op("expression", 1, (yyvsp[0])); }
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 195 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXPRESSION_,_ASSIGNMENT_EXPRESSION\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 203 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPECIFIERS_;\n"); (yyval) = op("declaration", 1, (yyvsp[-1])); (yyval) = install_symbol(sym, (yyval)); }
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 204 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPECIFIERS_INIT_DECLARATOR_LIST_;\n"); (yyval) = op("declaration", 2, (yyvsp[-2]), (yyvsp[-1])); (yyval) = install_symbol(sym, (yyval)); }
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 208 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STORAGE_CLASS_SPECIFIER\n"); (yyval) = op("declaration_specifier", 1, (yyvsp[0])); }
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 209 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STORAGE_CLASS_SPECIFIER_DECLARATION_SPECIFIERS\n"); (yyval) = add_child((yyvsp[0]), (yyvsp[-1])); }
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 210 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPECIFIER_TYPE_SPECIFIER\n"); (yyval) = op("declaration_specifier", 1, (yyvsp[0])); }
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 211 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_SPECIFIER_DECLARATION_SPECIFIERS\n"); (yyval) = add_child((yyvsp[0]), (yyvsp[-1])); }
#line 2147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 212 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER\n"); (yyval) = op("declaration_specifier", 1, (yyvsp[0])); }
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 213 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER_DECLARATION_SPECIFIERS\n"); (yyval) = add_child((yyvsp[0]), (yyvsp[-1])); }
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 217 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INIT_DECLARATOR\n"); (yyval) = op("init_declarator_list", 1, (yyvsp[0])); }
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 218 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INIT_DECLARATOR_LIST_,_INIT_DECLARATOR\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 222 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR\n"); (yyval) = op("init_declarator", 1, (yyvsp[0])); }
#line 2177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR_=_INITIALIZER\n"); (yyval) = op("init_declarator", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 227 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPEDEF\n"); (yyval) = type("typedef"); }
#line 2189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 228 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXTERN\n"); (yyval) = type("extern"); }
#line 2195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 229 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STATIC\n"); (yyval) = type("static"); }
#line 2201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 230 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] AUTO\n"); (yyval) = type("auto"); }
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 231 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] REGISTER\n"); (yyval) = type("register"); }
#line 2213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 235 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] VOID\n"); (yyval) = type("void"); }
#line 2219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 236 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] CHAR\n"); (yyval) = type("char"); }
#line 2225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 237 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SHORT\n"); (yyval) = type("short"); }
#line 2231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 238 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INT\n"); (yyval) = type("int"); }
#line 2237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 239 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] LONG\n"); (yyval) = type("long"); }
#line 2243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 240 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] FLOAT\n"); (yyval) = type("float"); }
#line 2249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 241 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DOUBLE\n"); (yyval) = type("double"); }
#line 2255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 242 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SIGNED\n"); (yyval) = type("signed"); }
#line 2261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 243 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] UNSIGNED\n"); (yyval) = type("unsigned"); }
#line 2267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 244 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_UNION\n"); /* do nothing */ }
#line 2273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 245 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM\n"); (yyval) = type("enum"); }
#line 2279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 246 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_NAME\n"); (yyval) = type((yyvsp[0])->id); }
#line 2285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 250 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_IDENTIFIER_{}\n"); (yyval) = op("struct_union", 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 251 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_{}\n"); (yyval) = op("struct_union", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 2297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 252 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_IDENTIFIER\n"); (yyval) = op("struct_union", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 256 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT\n"); (yyval) = type("struct"); }
#line 2309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 257 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] UNION\n"); (yyval) = type("union"); }
#line 2315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 261 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_DECLARATION\n"); (yyval) = op("struct_declaration_list", 1, (yyvsp[0])); }
#line 2321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 262 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_DECLARATION_LIST\n"); (yyval) = add_child((yyvsp[-1]), (yyvsp[0])); }
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 266 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SPECIFIER_QUALIFIER_LIST_STRUCT_DECLARATOR_LIST\n"); (yyval) = op("struct_declaration", 2, (yyvsp[-2]), (yyvsp[-1])); }
#line 2333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 270 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_SPECIFIER_SPEC_QUALIFIER_LIST\n"); (yyval) = add_child((yyvsp[0]), (yyvsp[-1])); }
#line 2339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 271 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SPECIFIER_QUALIFIER_LIST_TYPE_SPECIFIER\n"); (yyval) = op("specifier_qualifier_list", 1, (yyvsp[0])); }
#line 2345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 272 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER_SPEC_QUALIFIER_LIST\n"); (yyval) = add_child((yyvsp[0]), (yyvsp[-1])); }
#line 2351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 273 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER\n"); (yyval) = op("specifier_qualifier_list", 1, (yyvsp[0])); }
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 277 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_DECLARATOR\n"); (yyval) = op("struct_declarator_list", 1, (yyvsp[0])); }
#line 2363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 278 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STRUCT_DECLARATOR_LIST_,_STRUCT_DECLARATOR\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[-1])); }
#line 2369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 282 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR\n"); (yyval) = op("struct_declarator", 1, (yyvsp[0])); }
#line 2375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 283 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] :_CONSTANT\n"); (yyval) = op("struct_declarator", 1, (yyvsp[0])); }
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 284 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR_:_CONSTANT\n"); (yyval) = op("struct_declarator", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 288 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM_{}\n"); (yyval) = op("enum_specifier", 1, (yyvsp[-1])); }
#line 2393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 289 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM_IDENTIFIER_{}\n"); (yyval) = op("enum_specifier", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 2399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 290 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM_IDENTIFIER\n"); (yyval) = op("enum_specifier", 1, (yyvsp[0])); }
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 294 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM\n"); (yyval) = op("enum_list", 1, (yyvsp[0])); }
#line 2411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 295 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUM_LIST_,_ENUM\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[-1])); }
#line 2417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 299 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUMERATOR_IDENTIFIER: %s\n", (yyvsp[0])->id); (yyval) = op("enumerator", 1, (yyvsp[0])); }
#line 2423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 300 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ENUMERATOR_IDENTIFIER_=_CONSTANT\n"); (yyval) = op("enumerator", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 304 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] CONST\n"); (yyval) = type("const"); }
#line 2435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 305 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] VOLATILE\n"); (yyval) = type("volatile"); }
#line 2441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 309 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_DIRECT_DECLARATOR\n"); (yyval) = op("declarator", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 310 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR\n"); (yyval) = op("declarator", 1, (yyvsp[0])); }
#line 2453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 314 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_IDENTIFIER: %s\n", (yyvsp[0])->id); (yyval) = op("direct_declarator", 1, (yyvsp[0])); }
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 315 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] (_DECLARATOR_)\n"); (yyval) = op("direct_declarator", 1, (yyvsp[-1])); }
#line 2465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 316 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_[_CONSTANT_]\n"); (yyval) = add_child((yyvsp[-3]), (yyvsp[-1])); }
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 317 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_[]\n"); }
#line 2477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 318 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_(_PARAM_TYPE_LIST_)\n"); (yyval) = add_child((yyvsp[-3]), (yyvsp[-1])); }
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 319 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_(_IDENTIFIER_LIST_)\n"); (yyval) = add_child((yyvsp[-3]), (yyvsp[-1])); }
#line 2489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 320 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_DECLARATOR_()\n"); }
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 324 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_*\n"); (yyval) = op("pointer", 0); }
#line 2501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 325 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_*_TYPE_QUALIFIER_LIST\n"); (yyval) = op("pointer", 1, (yyvsp[0])); }
#line 2507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 326 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_*_POINTER\n"); (yyval) = op("pointer", 1, (yyvsp[0])); }
#line 2513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 327 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_*_TYPE_QUALIFIER_LIST_POINTER\n"); (yyval) = op("pointer", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 331 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER\n"); (yyval) = op("type_qualifier_list", 1, (yyvsp[0])); }
#line 2525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 332 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TYPE_QUALIFIER_LIST_TYPE_QUALIFIER\n"); (yyval) = add_child((yyvsp[-1]), (yyvsp[0])); }
#line 2531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 337 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] PARAMETER_LIST\n"); (yyval) = op("parameter_type_list", 1, (yyvsp[0])); }
#line 2537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 338 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] PARAMETER_LIST_,_ELLIPSIS\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 342 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] PARAMETER_DECLARATION\n"); (yyval) = op("parameter_list", 1, (yyvsp[0])); }
#line 2549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 343 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] PARAMETER_LIST_,_PARAMETER_DECLARATION\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 347 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPEC_DECLARATOR\n"); (yyval) = op("parameter_declaration", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 348 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPEC_ABSTRACT_DECLARATOR\n"); (yyval) = op("parameter_declaration", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 349 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPEC\n"); (yyval) = op("parameter_declaration", 1, (yyvsp[0])); }
#line 2573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 353 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IDENTIFIER_LIST_IDENTIFIER: %s\n", (yyvsp[0])->id); (yyval) = op("identifier_list", 1, (yyvsp[0])); }
#line 2579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 354 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IDENTIFIER_LIST_,_IDENTIFIER\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 358 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SPECIFIER_QUALIFIER_LIST\n"); (yyval) = op("type_name", 1, (yyvsp[0])); }
#line 2591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 359 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SPECIFIER_QUALIFIER_LIST_ABSTRACT_DECLARATOR\n"); (yyval) = op("type_name", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 363 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER\n"); (yyval) = op("abstract_declarator", 1, (yyvsp[0])); }
#line 2603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 364 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_ABSTRACT_DECLARATOR\n"); (yyval) = op("abstract_declarator", 1, (yyvsp[0])); }
#line 2609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 365 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] POINTER_DIRECT_ABSTRACT_DECLARATOR\n"); (yyval) = op("abstract_declarator", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 2615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 369 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] (_ABSTRACT_DECLARATOR_)\n"); (yyval) = op("direct_abstract_declarator", 1, (yyvsp[-1])); }
#line 2621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 370 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] []\n"); (yyval) = op("direct_abstract_declarator", 0); }
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 371 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] [_CONSTANT_]\n"); (yyval) = op("direct_abstract_declarator", 1, (yyvsp[-1])); }
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 372 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_ABSTRACT_DECLARATOR_[]\n"); /* do nothing */}
#line 2639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 373 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_ABSTRACT_DECLARATOR_[_CONSTANT_]\n"); (yyval) = add_child((yyvsp[-3]), (yyvsp[-1])); }
#line 2645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 374 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ()\n"); (yyval) = op("direct_abstract_declarator", 0); }
#line 2651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 375 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] (_PARAM_TYPE_LIST_)\n"); (yyval) = op("direct_abstract_declarator", 1, (yyvsp[-1])); }
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 376 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_ABSTRACT_DECLARATOR_()\n"); /* do nothing */}
#line 2663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 377 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DIRECT_ABSTRACT_DECLARATOR_(_PARAM_TYPE_LIST_)\n"); (yyval) = add_child((yyvsp[-3]), (yyvsp[-1])); }
#line 2669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 381 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ASSIGNMENT_EXPRESSION\n"); (yyval) = op("initializer", 1, (yyvsp[0])); }
#line 2675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 382 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {_INIT_LIST_}\n"); (yyval) = op("initializer", 1, (yyvsp[-1])); }
#line 2681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 383 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {_INIT_LIST_,_}\n"); (yyval) = op("initializer", 1, (yyvsp[-2])); }
#line 2687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 387 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INITIALIZER\n"); (yyval) = op("initializer_list", 1, (yyvsp[0])); }
#line 2693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 388 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] INITIALIZER_LIST_,_INITIALIZER\n"); (yyval) = add_child((yyvsp[-2]), (yyvsp[0])); }
#line 2699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 392 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] LABELED_STATEMENT\n"); }
#line 2705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 393 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] COMPOUND_STATEMENT\n"); }
#line 2711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 394 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXPRESSION_STATEMENT\n"); }
#line 2717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 395 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SELECTION_STATEMENT\n"); }
#line 2723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 396 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ITERATION_STATEMENT\n"); }
#line 2729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 397 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] JUMP_STATEMENT\n"); }
#line 2735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 401 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IDENTIFIER_:_STATEMENT\n"); (yyval) = op("labeled_statement", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 402 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] CASE_CONSTANT_:_STATEMENT\n"); (yyval) = op("labeled_statement", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 403 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DEFAULT_:_STATEMENT\n"); (yyval) = op("labeled_statement", 1, (yyvsp[0])); }
#line 2753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 407 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {}\n"); (yyval) = op("compound_statement", 0); }
#line 2759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 408 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {_STATEMENT_LIST_}\n"); (yyval) = op("compound_statement", 1, (yyvsp[-1])); }
#line 2765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 409 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {_DECLARATION_LIST_}\n"); (yyval) = op("compound_statement", 1, (yyvsp[-1])); }
#line 2771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 410 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] {_DECLARATION_LIST_STATEMENT_LIST_}\n"); (yyval) = op("compound_statement", 2, (yyvsp[-2]), (yyvsp[-1])); }
#line 2777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 414 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION\n"); (yyval) = op("declaration_list", 1, (yyvsp[0])); }
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 415 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_LIST_DECLARATION\n"); (yyval) = add_child((yyvsp[-1]), (yyvsp[0])); }
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 419 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STATEMENT\n"); (yyval) = op("statement_list", 1, (yyvsp[0])); }
#line 2795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 420 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] STATEMENT_LIST_STATEMENT\n"); (yyval) = add_child((yyvsp[-1]), (yyvsp[0])); }
#line 2801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 424 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] ;\n"); (yyval) = op("expression_statement", 0); }
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 425 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXPRESSION_;\n"); (yyval) = op("expression_statement", 1, (yyvsp[-1])); }
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 429 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IF_(_EXPRESSION_)_STATEMENT\n"); (yyval) = op("selection_statement", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 430 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] IF_(_EXPRESSION_)_STATEMENT_ELSE_STATEMENT\n"); (yyval) = op("selection_statement", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 2825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 431 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] SWITCH_(_EXPRESSION_)_STATEMENT\n"); (yyval) = op("selection_statement", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 435 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] WHILE_(_EXPRESSION_)_STATEMENT\n"); (yyval) = op("iteration_statement", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 2837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 436 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DO_STATEMENT_WHILE_(_EXPRESSION_)_;\n"); (yyval) = op("iteration_statement", 2, (yyvsp[-5]), (yyvsp[-2])); }
#line 2843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 437 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] FOR_(_EXPRESSION_STATEMENT_EXPRESSION_STATEMENT_)_STATEMENT\n"); (yyval) = op("iteration_statement", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 2849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 438 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] FOR_(_EXPRESSION_STATEMENT_EXPRESSION_STATEMENT_EXPRESSION_)_STATEMENT\n"); (yyval) = op("iteration_statement", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 2855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 442 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] GOTO_IDENTIFIER\n"); (yyval) = op("jump_statement", 2, id("goto"), (yyvsp[-1])); }
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 443 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] CONTINUE\n"); (yyval) = op("jump_statement", 1, id("continue")); }
#line 2867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 444 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] BREAK\n"); (yyval) = op("jump_statement", 1, id("break")); }
#line 2873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 445 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RETURN\n"); (yyval) = op("jump_statement", 1, id("return")); }
#line 2879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 446 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] RETURN_EXPRESSION\n"); (yyval) = op("jump_statement", 2, id("return"), (yyvsp[-1])); }
#line 2885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 450 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] EXTERNAL_DECLARATION\n"); (yyval) = op("translation_unit", 1, (yyvsp[0])); parse_tree_head = (yyval); }
#line 2891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 451 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] TRANSLATION_UNIT_EXTERNAL_DECLARATION\n"); (yyval) = add_child((yyvsp[-1]), (yyvsp[0])); parse_tree_head = (yyval); }
#line 2897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 455 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] FUNCTION_DEFINITION\n"); }
#line 2903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 456 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION\n"); }
#line 2909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 460 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPECIFIERS_DECLARATOR_DECLARATION_LIST_COMPOUND_STATEMENT\n"); (yyval) = op("function_definition", 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); (yyval) = install_function(sym, (yyval)); }
#line 2915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 461 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATION_SPECIFIERS_DECLARATOR_COMPOUND_STATEMENT\n"); (yyval) = op("function_definition", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); (yyval) = install_function(sym, (yyval)); }
#line 2921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 462 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR_DECLARATION_LIST_COMPOUND_STATEMENT\n"); (yyval) = op("function_definition", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); (yyval) = install_function(sym, (yyval)); }
#line 2927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 463 "parser.y" /* yacc.c:1646  */
    { vlog("[parser] DECLARATOR_COMPOUND_STATEMENT\n"); (yyval) = op("function_definition", 2, (yyvsp[-1]), (yyvsp[0])); (yyval) = install_function(sym, (yyval)); }
#line 2933 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2937 "parser.tab.c" /* yacc.c:1646  */
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
#line 466 "parser.y" /* yacc.c:1906  */


