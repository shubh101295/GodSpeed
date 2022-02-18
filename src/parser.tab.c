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
#line 1 "parser.y" /* yacc.c:339  */

	#include<bits/stdc++.h>
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern "C" int yyparse();
	extern "C" FILE* yyin;
	void yyerror(const char* s);

	#define YYDEBUG 1

#line 79 "parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    INTEGER_VAL = 258,
    FLOAT_VAL = 259,
    TRUE = 260,
    FALSE = 261,
    NULLPOINTER = 262,
    BREAK = 263,
    CONTINUE = 264,
    RETURN = 265,
    SCOLON = 266,
    FUNC = 267,
    STRUCT = 268,
    ELSE = 269,
    PACKAGE = 270,
    IF = 271,
    FOR = 272,
    RANGE = 273,
    IMPORT = 274,
    VAR = 275,
    SWITCH = 276,
    CASE = 277,
    NEW = 278,
    CONST = 279,
    MAP = 280,
    DEFAULT = 281,
    MAKE = 282,
    GOTO = 283,
    FALLTHROUGH = 284,
    TYPE = 285,
    PLUSPLUS = 286,
    MINUSMINUS = 287,
    ANDNOT = 288,
    ELIPSIS = 289,
    ADD = 290,
    SUB = 291,
    NOT = 292,
    XOR = 293,
    MUL = 294,
    AND = 295,
    OR = 296,
    LOGOR = 297,
    LOGAND = 298,
    ISEQ = 299,
    NEQ = 300,
    LESSEQ = 301,
    GRTEQ = 302,
    GRT = 303,
    LESS = 304,
    MOD = 305,
    QUOT = 306,
    SHL = 307,
    SHR = 308,
    EQ = 309,
    INFER_EQ = 310,
    RIGHTPARAN = 311,
    RIGHTBRACE = 312,
    RIGHTSQUARE = 313,
    LEFTPARAN = 314,
    LEFTBRACE = 315,
    LEFTSQUARE = 316,
    COLON = 317,
    DOT = 318,
    COMMA = 319,
    RAW_STRING = 320,
    INTERPRETED_STRING = 321,
    BYTE_VAL = 322,
    IDENTIFIER = 323,
    ASSIGN = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:355  */

	char* nt;
	char* sval;

#line 194 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    71,    75,    79,    80,
      84,    85,    86,    90,    91,    95,    96,    97,   101,   105,
     106,   110,   111,   112,   116,   120,   124,   125,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     144,   145,   146,   150,   151,   155,   158,   159,   163,   167,
     171,   172,   173,   174,   175,   178,   182,   186,   187,   191,
     195,   199,   200,   201,   205,   206,   210,   211,   212,   216,
     217,   218,   222,   223,   227,   228,   229,   233,   237,   238,
     241,   242,   246,   247,   248,   252,   253,   257,   258,   259,
     263,   264,   268,   272,   276,   280,   281,   282,   283,   284,
     285,   289,   290,   294,   295,   296,   300,   301,   305,   306,
     307,   311,   315,   316,   320,   321,   325,   326,   330,   331,
     335,   336,   341,   342,   347,   348,   352,   356,   360,   361,
     362,   363,   364,   365,   366,   367,   371,   372,   375,   379,
     380,   384,   388,   389,   390,   391,   392,   393,   397,   398,
     399,   400,   404,   405,   409,   413,   418,   419,   420,   424,
     425,   429,   430,   434,   435,   436,   437,   438,   439,   440,
     441,   445,   449,   450,   455,   459,   463,   464,   465,   466,
     467,   468,   472,   473,   474,   475,   479,   483,   484,   488,
     489,   493,   494,   498,   499,   503,   504,   508,   512,   516,
     520,   521,   525,   526,   530,   531,   536,   540,   544,   548,
     549,   553,   554,   555,   556,   557,   558,   562,   563,   567,
     568,   569,   573,   574,   575,   576,   580,   581,   582,   583,
     584,   585,   589,   590,   591,   592,   593,   594,   595,   599,
     600,   601,   602,   603,   604,   608,   609,   610,   611,   612
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_VAL", "FLOAT_VAL", "TRUE",
  "FALSE", "NULLPOINTER", "BREAK", "CONTINUE", "RETURN", "SCOLON", "FUNC",
  "STRUCT", "ELSE", "PACKAGE", "IF", "FOR", "RANGE", "IMPORT", "VAR",
  "SWITCH", "CASE", "NEW", "CONST", "MAP", "DEFAULT", "MAKE", "GOTO",
  "FALLTHROUGH", "TYPE", "PLUSPLUS", "MINUSMINUS", "ANDNOT", "ELIPSIS",
  "ADD", "SUB", "NOT", "XOR", "MUL", "AND", "OR", "LOGOR", "LOGAND",
  "ISEQ", "NEQ", "LESSEQ", "GRTEQ", "GRT", "LESS", "MOD", "QUOT", "SHL",
  "SHR", "EQ", "INFER_EQ", "RIGHTPARAN", "RIGHTBRACE", "RIGHTSQUARE",
  "LEFTPARAN", "LEFTBRACE", "LEFTSQUARE", "COLON", "DOT", "COMMA",
  "RAW_STRING", "INTERPRETED_STRING", "BYTE_VAL", "IDENTIFIER", "ASSIGN",
  "$accept", "SourceFile", "PackageClause", "PackageName",
  "ImportDeclList", "ImportDecl", "ImportSpecList", "ImportSpec",
  "ImportPath", "TopLevelDeclList", "TopLevelDecl", "Block", "Condition",
  "StatementList", "Statement", "Declaration", "FunctionDecl",
  "FunctionName", "MethodDecl", "LabeledStmt", "Label", "SimpleStmt",
  "EmptyStmt", "ExpressionStmt", "IncDecStmt", "Assignment",
  "ShortVarDecl", "VarDecl", "VarSpecList", "VarSpec", "ConstDecl",
  "ConstSpecList", "ConstSpec", "FunctionBody", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "IdentifierList",
  "QualifiedIdent", "Receiver", "CompositeLit", "LiteralType", "Type",
  "Operand", "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase",
  "FallthroughStmt", "IfStmt", "ForStmt", "ForClause", "InitStmt",
  "PostStmt", "RangeClause", "Expression", "UnaryExpr", "PrimaryExpr",
  "StructLiteral", "KeyValueList", "Selector", "Index", "Slice",
  "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl",
  "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef", "MapType",
  "StructType", "FieldDeclList", "FieldDecl", "PointerType", "BaseType",
  "ArrayType", "Literal", "BasicLit", "String", "Assign_OP", "Add_OP",
  "Rel_OP", "Mul_OP", "Unary_OP", "Binary_OP", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -323

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-323)))

#define YYTABLE_NINF -190

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -44,    49,    53,  -323,  -323,  -323,   278,   113,   271,
     184,   191,   207,   278,    80,   237,    82,  -323,  -323,  -323,
    -323,  -323,  -323,   212,  -323,    86,  -323,    78,   244,    63,
    -323,  -323,    63,  -323,  -323,  -323,   -33,  -323,  -323,   100,
     -24,  -323,   190,    79,    40,  -323,  -323,  -323,   165,   237,
    -323,   171,  -323,   128,  -323,    -8,  -323,   174,   140,   110,
      86,  -323,   263,   200,  -323,  -323,  -323,   -22,   201,   176,
     178,   128,  1155,   524,   172,   185,   197,  -323,  -323,   210,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,   127,   265,  1155,
     227,   129,   275,   128,  -323,  -323,  -323,  -323,  -323,   221,
     128,  -323,   475,  -323,  -323,  -323,  -323,  -323,   140,  -323,
     277,  -323,  -323,   290,  -323,   -17,   128,  -323,  -323,  -323,
    -323,  -323,  -323,   247,   255,  -323,  -323,  -323,  -323,    50,
    -323,  1155,  -323,  -323,   280,  -323,   283,  1453,  -323,   330,
    -323,  -323,  -323,  -323,  -323,  1249,   260,   128,  1687,  -323,
     257,  1155,  -323,   322,  -323,  -323,  1155,  -323,   327,  -323,
    -323,  -323,  -323,  -323,   276,   276,  1155,  1202,   575,   722,
     276,  -323,   230,  -323,   343,   339,  -323,  -323,   292,  -323,
    -323,  -323,  -323,  -323,  -323,   256,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  1399,   568,  -323,  -323,  -323,
    -323,   109,    20,   344,   299,   128,   128,  1750,   624,  -323,
    1155,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  1155,  -323,  -323,  -323,  1155,   771,   818,   273,  -323,
    -323,  -323,  -323,  -323,   330,  1274,  -323,   128,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,   258,   347,  1339,
    1155,  -323,   140,  -323,   310,   140,   350,   140,  1312,   617,
      21,   351,  1369,  -323,  -323,   358,  -323,   475,  1155,  -323,
    -323,  -323,  1155,   321,   323,    63,  -323,   365,  -323,   128,
     332,    88,  -323,  -323,   324,   153,  -323,   333,  -323,  1591,
    1616,   335,  1794,  -323,  -323,   360,   865,  1507,   128,  -323,
    -323,  -323,  -323,  1155,   382,  1794,  -323,   916,  -323,   963,
    -323,   379,  1155,  -323,  -323,    35,  -323,   336,  1010,    93,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  1155,  -323,   673,  1059,  1155,  -323,   345,  -323,  1535,
    -323,  1108,   349,  1641,    23,  1155,  1202,   388,  1794,  1155,
    -323,  -323,  -323,   475,   136,  1664,  -323,   168,  1426,  -323,
    -323,  -323,  -323,  1794,  1480,  -323,  -323,  1155,  -323,  1563,
    -323,   393,  -323,  -323,  1794,  -323,  -323,  1202,  1794,   409,
    -323,   180,   196,  -323,  -323,  1155,  1155,  1708,  -323,  1155,
      23,  -323,  -323,  -323,   205,  1772,  -323,  -323,  1729,  -323,
    -323,  -323,  -323,  -323
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     6,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    21,    22,    23,
      41,    42,    40,     0,    45,     0,    93,     0,     0,     0,
     217,   218,     0,    12,    17,    18,     0,    91,    61,     0,
       0,    69,     0,     0,     0,   192,   195,   196,     0,     5,
       9,     0,    20,     0,    82,     0,    85,     0,    44,    78,
       0,    11,     0,     0,    16,    15,    63,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,   107,   101,    66,
     102,    98,   100,    95,    97,    96,    71,     0,     0,     0,
      74,     0,     0,     0,   198,     8,    19,    89,    83,     0,
       0,    87,    55,    77,    43,    79,    80,    81,    46,    10,
       0,    14,    62,     0,    65,     0,     0,   207,   206,   211,
     212,   215,   216,     0,     0,   239,   240,   241,   242,   243,
     244,     0,   213,   210,     0,   163,   104,   189,   159,   161,
     164,    68,   103,   209,   214,     0,     0,     0,     0,    90,
       0,     0,    70,     0,    73,    76,     0,   191,     0,   194,
     197,    84,    86,    88,   122,   124,   120,    55,    55,    55,
       0,   141,   106,    37,    55,     0,    28,    29,     0,    30,
      50,    51,    52,    53,    54,     0,    31,    32,    33,    34,
      35,   127,    36,    38,    39,    56,     0,    47,    13,    64,
     201,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,   169,   238,   222,   223,   225,   232,   237,   224,   246,
     245,   226,   227,   228,   229,   230,   231,   234,   233,   235,
     236,     0,   248,   247,   249,     0,     0,     0,     0,   165,
     166,   167,   170,   168,   162,     0,   111,     0,    92,    67,
      72,    75,   193,    49,   123,   125,   121,   106,     0,    56,
       0,   148,     0,   154,     0,     0,     0,     0,    25,     0,
       0,     0,    56,   126,    24,     0,    27,    55,     0,    57,
      58,   219,     0,     0,     0,   205,   200,     0,   202,     0,
       0,     0,   105,   108,   119,     0,   112,     0,   114,   118,
       0,     0,   190,   160,   187,     0,     0,     0,     0,   174,
      99,   104,   208,     0,   142,   156,   150,     0,   149,     0,
     151,   219,     0,   140,   128,     0,   137,     0,     0,     0,
      26,    48,    60,    59,   220,   221,   204,   203,   199,   185,
     184,     0,   109,     0,     0,     0,   171,     0,   177,     0,
     175,     0,     0,     0,     0,     0,    55,     0,    25,     0,
     139,   132,   136,    55,     0,     0,   130,     0,     0,   110,
     113,   119,   115,   118,   172,   188,   176,     0,   178,     0,
     186,   143,   145,   144,   157,   155,   152,    55,   158,   138,
     129,     0,     0,   134,   183,     0,     0,     0,   179,     0,
       0,   153,   133,   131,     0,     0,   173,   180,     0,   147,
     146,   135,   182,   181
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -323,  -323,  -323,    10,  -323,   403,  -323,    45,    77,   408,
     111,   -58,   104,    61,  -165,   117,  -323,  -323,  -323,  -323,
     220,  -164,  -323,  -323,  -323,  -323,  -323,  -323,  -323,    64,
    -323,  -323,   -25,   319,   368,  -323,     9,  -323,   341,    18,
    -323,  -323,  -323,    27,    98,   186,   -26,  -128,  -323,  -323,
      92,  -323,    97,  -323,  -323,  -323,  -323,  -323,  -323,  -322,
    -315,  -323,  -323,  -318,  -323,  -323,  -323,    55,  -323,   -72,
    -323,   298,  -323,    54,  -323,  -323,  -323,  -323,  -323,  -323,
     -52,  -323,  -323,   -31,  -323,  -323,  -323,  -323,  -323,   249,
    -323,  -323,  -323,  -323,  -323,    -7,  -323,  -188,  -323,  -182,
    -323,  -323
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    76,    13,    14,    62,    33,    34,    15,
      16,   173,   262,   174,   175,   176,    18,    25,    19,   177,
     178,   179,   180,   181,   182,   183,   184,    20,    67,    38,
      21,    87,    41,   104,    58,   105,    59,    55,    56,   185,
      77,    27,   133,   134,   117,   135,   136,   294,    81,   295,
     296,   297,   298,   186,   187,   188,   189,   190,   191,   325,
     326,   327,   192,   193,   194,   265,   266,   386,   267,   137,
     138,   139,   211,   301,   239,   240,   241,   140,   242,   243,
     196,    22,    91,    45,    46,    47,    82,    83,   202,   203,
      84,   118,    85,   142,   143,   144,   282,   232,   233,   234,
     145,   235
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   148,    35,   258,   263,   271,   209,   367,   283,   275,
     362,     5,    92,    80,   284,    88,    80,    26,    80,    32,
     141,    35,    35,    66,     4,    35,     1,    80,    39,    42,
     195,    80,    86,    80,   112,    37,   383,   155,    32,   167,
     200,    57,   391,   322,    37,    80,    37,   323,    98,     6,
     103,    37,   362,    69,    39,    35,    99,   322,    42,   207,
     158,   323,   153,    69,     7,    70,    78,    80,   106,    78,
     404,    78,    32,    63,    80,    70,   362,   286,   324,    71,
      78,   283,   410,   102,    78,    39,    78,   284,    37,   362,
      80,    50,   361,    52,    93,   259,   268,   272,    78,   249,
      68,    73,   195,    80,   251,    42,    64,   110,    75,    65,
     261,    73,   331,    69,   256,   322,   269,    57,    75,   323,
      78,    80,    69,    69,    17,    70,    51,    78,    30,    31,
      17,   113,    17,   201,    70,    70,   299,    79,   300,    71,
      90,    69,    94,    78,   340,    23,    60,    44,    71,    71,
     366,    97,   341,    70,    72,   101,    78,   107,   322,   302,
      51,    73,   323,   303,    74,   307,    17,    71,    75,    23,
      73,    73,    23,    74,    78,    80,    95,    75,    75,    80,
      80,    24,    96,   152,   305,   157,   264,    69,   315,    73,
     322,   160,   385,   390,   323,    37,    75,    44,   163,    70,
     102,   314,   322,    69,   316,   195,   323,   318,   100,   320,
     342,   111,   114,    71,   204,    70,   371,   343,   322,   311,
     201,    80,   323,   385,   275,   393,   332,   322,    78,    71,
     333,   323,    78,    78,   349,    73,   115,   402,    74,   116,
     149,   353,    75,    36,    89,   246,    53,   358,    -7,     8,
      40,    73,    37,   403,    74,    53,   365,    10,    75,    37,
     150,    11,   411,    80,   151,   332,    43,    12,    54,   368,
     360,   299,   373,   374,    78,    44,   154,   161,   336,   379,
      37,   156,    80,   384,   195,   -91,   159,   388,   198,    37,
       8,   195,   -49,    -7,   -91,   381,   382,     9,    10,   285,
      61,   199,    11,   290,   291,   397,   205,    29,    12,    30,
      31,   278,     4,   -91,   206,   195,    78,   195,   245,   109,
      74,    -7,   -91,   405,   300,   248,    29,   408,    30,    31,
      28,     4,   308,   250,    29,    78,    30,    31,   252,     4,
     208,   309,   409,   210,   253,   312,   119,   120,   121,   122,
     276,   164,   165,   166,   277,   288,    69,   289,   313,   167,
     168,   319,   328,    10,   169,   317,   123,    11,    70,   330,
     124,   170,   171,    12,    74,   334,   337,   335,   125,   126,
     127,   128,   129,   130,   254,   255,  -117,   338,   339,   236,
     273,   237,   346,   238,   347,   344,   354,   359,   363,   387,
     274,   375,   131,   102,    73,   380,   352,   400,    30,    31,
     132,   172,   119,   120,   121,   122,    48,   164,   165,   166,
     -55,    49,    69,   357,   389,   167,   168,   197,   108,    10,
     169,   310,   123,    11,    70,   370,   124,   170,   171,    12,
     162,   372,   401,   244,   125,   126,   127,   128,   129,   130,
     406,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   102,
      73,     0,     0,     0,    30,    31,   132,   172,   119,   120,
     121,   122,     0,   164,   165,   166,     0,     0,    69,     0,
       0,   167,   168,     0,     0,    10,   169,     0,   123,    11,
      70,     0,   124,   170,   171,    12,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,   131,   102,    73,    69,     0,     0,
      30,    31,   132,   172,     0,     0,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,   146,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,   147,   131,     0,    73,     0,     0,    69,    30,
      31,   132,    75,   260,     0,     0,     0,     0,   123,     0,
      70,   212,   124,   213,   214,     0,   215,   216,   217,   218,
     125,   126,   127,   128,   129,   130,     0,     0,   227,   228,
     229,   230,   281,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,   131,   102,    73,    69,     0,     0,
      30,    31,   132,   257,     0,     0,     0,   123,     0,    70,
     212,   124,   213,   214,     0,   215,   216,   217,   218,   125,
     126,   127,   128,   129,   130,     0,     0,   227,   228,   229,
     230,   321,     0,     0,     0,     0,   119,   120,   121,   122,
       0,   293,     0,   131,   208,    73,    69,     0,     0,    30,
      31,   132,    75,     0,     0,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
     369,     0,   131,   208,    73,    69,     0,     0,    30,    31,
     132,    75,     0,     0,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,   131,   270,    73,    69,     0,     0,    30,    31,   132,
     257,     0,     0,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,     0,   304,     0,     0,
     131,    69,    73,     0,     0,     0,    30,    31,   132,    75,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,     0,     0,   131,    69,    73,
     306,     0,     0,    30,    31,   132,    75,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,   348,   131,     0,    73,     0,     0,    69,
      30,    31,   132,    75,   355,     0,     0,     0,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
       0,     0,     0,     0,   356,   131,    69,    73,     0,     0,
       0,    30,    31,   132,    75,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,     0,     0,     0,
       0,     0,   131,    69,    73,     0,     0,     0,    30,    31,
     132,    75,     0,   123,     0,    70,     0,   124,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,     0,     0,   131,
     364,    73,    69,     0,     0,    30,    31,   132,    75,     0,
       0,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,     0,     0,   131,   208,
      73,    69,     0,     0,    30,    31,   132,    75,     0,     0,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,     0,   378,   131,    69,    73,
       0,     0,     0,    30,    31,   132,    75,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
       0,     0,     0,     0,   131,    69,    73,     0,     0,     0,
      30,    31,   132,    75,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,     0,     0,     0,
       0,   131,    69,    73,     0,     0,     0,    30,    31,   132,
     257,     0,   123,     0,    70,     0,   124,   119,   120,   121,
     122,     0,     0,     0,     0,     0,     0,    69,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
      73,     0,     0,    71,    30,    31,   132,    75,     0,     0,
       0,     0,     0,   -56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,    73,     0,     0,     0,    30,
      31,   132,    75,   279,   280,   212,     0,   213,   214,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,  -189,     0,     0,     0,
     279,   280,   212,     0,   213,   214,   231,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,  -189,     0,     0,     0,     0,     0,   102,
     279,   280,   212,   231,   213,   214,     0,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,  -189,     0,     0,     0,     0,     0,   329,
     279,   280,   212,   231,   213,   214,     0,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,  -189,     0,     0,     0,     0,     0,   212,
       0,   213,   214,   231,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,     0,   394,     0,     0,     0,   212,     0,   213,   214,
     395,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,     0,     0,     0,
       0,     0,     0,   212,     0,   213,   214,   231,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,     0,     0,     0,     0,     0,
     212,     0,   213,   214,   396,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     0,     0,     0,     0,   350,     0,     0,   212,   351,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,   376,     0,     0,   212,   377,   213,   214,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,     0,     0,     0,
       0,   398,     0,     0,   212,   399,   213,   214,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,   212,
       0,   213,   214,  -116,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,   212,     0,   213,   214,   345,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,     0,   212,     0,   213,
     214,   102,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,     0,
     212,     0,   213,   214,   392,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   212,     0,   213,   214,   247,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   212,     0,   213,   214,   407,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   212,     0,   213,   214,   413,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,   212,   292,   213,   214,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     0,   212,   412,   213,
     214,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230
};

static const yytype_int16 yycheck[] =
{
      58,    73,     9,   167,   168,   169,   134,   329,   196,   174,
     325,     1,    43,    39,   196,    40,    42,     8,    44,     9,
      72,    28,    29,    56,    68,    32,    15,    53,    10,    11,
     102,    57,    56,    59,    56,    68,   354,    89,    28,    16,
      57,    23,   364,    22,    68,    71,    68,    26,    56,     0,
     108,    68,   367,    13,    36,    62,    64,    22,    40,   131,
      91,    26,    87,    13,    11,    25,    39,    93,    59,    42,
     392,    44,    62,    28,   100,    25,   391,    57,    57,    39,
      53,   269,   400,    60,    57,    67,    59,   269,    68,   404,
     116,    11,    57,    11,    54,   167,   168,   169,    71,   151,
      36,    61,   174,   129,   156,    87,    29,    62,    68,    32,
     168,    61,   277,    13,   166,    22,   168,    99,    68,    26,
      93,   147,    13,    13,     7,    25,    15,   100,    65,    66,
      13,    67,    15,   115,    25,    25,   208,    39,   210,    39,
      42,    13,    44,   116,    56,    59,    68,    68,    39,    39,
      57,    53,    64,    25,    54,    57,   129,    59,    22,   231,
      49,    61,    26,   235,    64,   237,    49,    39,    68,    59,
      61,    61,    59,    64,   147,   201,    11,    68,    68,   205,
     206,    68,    11,    56,   236,    56,   168,    13,   260,    61,
      22,    93,   356,    57,    26,    68,    68,    68,   100,    25,
      60,   259,    22,    13,   262,   277,    26,   265,    34,   267,
      57,    11,    11,    39,   116,    25,   344,    64,    22,   245,
     202,   247,    26,   387,   389,    57,   278,    22,   201,    39,
     282,    26,   205,   206,   306,    61,    60,    57,    64,    61,
      68,   313,    68,    59,    54,   147,    34,   319,    63,    12,
      59,    61,    68,    57,    64,    34,   328,    20,    68,    68,
      63,    24,    57,   289,    54,   317,    59,    30,    56,   341,
     322,   343,   344,   345,   247,    68,    11,    56,   285,   351,
      68,    54,   308,   355,   356,    55,    11,   359,    11,    68,
      12,   363,    62,    63,    64,   353,   354,    19,    20,   201,
      56,    11,    24,   205,   206,   377,    59,    63,    30,    65,
      66,    55,    68,    55,    59,   387,   289,   389,    58,    56,
      64,    63,    64,   395,   396,    68,    63,   399,    65,    66,
      59,    68,    59,    11,    63,   308,    65,    66,    11,    68,
      60,    68,   400,    60,    68,   247,     3,     4,     5,     6,
      11,     8,     9,    10,    62,    11,    13,    58,    11,    16,
      17,    11,    11,    20,    21,    55,    23,    24,    25,    11,
      27,    28,    29,    30,    64,    54,    11,    54,    35,    36,
      37,    38,    39,    40,   164,   165,    62,   289,    56,    59,
     170,    61,    57,    63,    34,    62,    14,    18,    62,    11,
      57,    56,    59,    60,    61,    56,   308,    14,    65,    66,
      67,    68,     3,     4,     5,     6,    13,     8,     9,    10,
      11,    13,    13,   319,   363,    16,    17,   108,    60,    20,
      21,   245,    23,    24,    25,   343,    27,    28,    29,    30,
      99,   344,   387,   145,    35,    36,    37,    38,    39,    40,
     396,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    58,    59,    -1,    61,    -1,    -1,    13,    65,
      66,    67,    68,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    33,    27,    35,    36,    -1,    38,    39,    40,    41,
      35,    36,    37,    38,    39,    40,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      33,    27,    35,    36,    -1,    38,    39,    40,    41,    35,
      36,    37,    38,    39,    40,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      57,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    56,    -1,    -1,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      62,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    58,    59,    -1,    61,    -1,    -1,    13,
      65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    11,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    59,
      60,    61,    13,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    59,    60,
      61,    13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    58,    59,    13,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    -1,    39,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    31,    32,    33,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    64,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      31,    32,    33,    64,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      31,    32,    33,    64,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    64,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    33,    -1,    35,    36,
      64,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    64,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    64,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    33,    62,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    33,    62,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    62,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    62,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    33,    -1,    35,
      36,    60,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      33,    -1,    35,    36,    60,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    58,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    33,    -1,    35,    36,    58,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    33,    -1,    35,    36,    58,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    33,    56,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    33,    56,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    72,    68,    73,     0,    11,    12,    19,
      20,    24,    30,    74,    75,    79,    80,    85,    86,    88,
      97,   100,   151,    59,    68,    87,   106,   111,    59,    63,
      65,    66,    73,    77,    78,   165,    59,    68,    99,   109,
      59,   102,   109,    59,    68,   153,   154,   155,    75,    79,
      11,    80,    11,    34,    56,   107,   108,   109,   104,   106,
      68,    56,    76,    77,    78,    78,    56,    98,    99,    13,
      25,    39,    54,    61,    64,    68,    73,   110,   113,   114,
     116,   118,   156,   157,   160,   162,    56,   101,   102,    54,
     114,   152,   153,    54,   114,    11,    11,   114,    56,    64,
      34,   114,    60,    81,   103,   105,   106,   114,   104,    56,
      77,    11,    56,    99,    11,    60,    61,   114,   161,     3,
       4,     5,     6,    23,    27,    35,    36,    37,    38,    39,
      40,    59,    67,   112,   113,   115,   116,   139,   140,   141,
     147,   150,   163,   164,   165,   170,    34,    58,   139,    68,
      63,    54,    56,   102,    11,   150,    54,    56,   153,    11,
     114,    56,   108,   114,     8,     9,    10,    16,    17,    21,
      28,    29,    68,    81,    83,    84,    85,    89,    90,    91,
      92,    93,    94,    95,    96,   109,   123,   124,   125,   126,
     127,   128,   132,   133,   134,   139,   150,   103,    11,    11,
      57,   109,   158,   159,   114,    59,    59,   139,    60,   117,
      60,   142,    33,    35,    36,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    64,   167,   168,   169,   171,    59,    61,    63,   144,
     145,   146,   148,   149,   141,    58,   114,    58,    68,   150,
      11,   150,    11,    68,    90,    90,   150,    68,    91,   139,
      18,    81,    82,    91,   109,   135,   136,   138,   139,   150,
      60,    91,   139,    90,    57,    84,    11,    62,    55,    31,
      32,    54,   166,   167,   169,   114,    57,   159,    11,    58,
     114,   114,    56,    57,   117,   119,   120,   121,   122,   139,
     139,   143,   139,   139,    56,   150,    62,   139,    59,    68,
     115,   116,   114,    11,    81,   139,    81,    55,    81,    11,
      81,    54,    22,    26,    57,   129,   130,   131,    11,    60,
      11,    84,   150,   150,    54,    54,   165,    11,   114,    56,
      56,    64,    57,    64,    62,    62,    57,    34,    58,   139,
      58,    62,   114,   139,    14,    18,    11,    82,   139,    18,
     150,    57,   130,    62,    60,   139,    57,   129,   139,    57,
     120,   117,   122,   139,   139,    56,    58,    62,    58,   139,
      56,    81,    81,   133,   139,    91,   137,    11,   139,    83,
      57,   129,    60,    57,    56,    64,    64,   139,    58,    62,
      14,   137,    57,    57,   129,   139,   143,    58,   139,    81,
     133,    57,    56,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    72,    73,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    77,    78,    79,
      79,    80,    80,    80,    81,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    88,    88,    89,    90,
      91,    91,    91,    91,    91,    92,    93,    94,    94,    95,
      96,    97,    97,    97,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   111,   112,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   127,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   131,
     131,   132,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   137,   138,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   143,   143,   144,   145,   146,   146,   146,   146,
     146,   146,   147,   147,   147,   147,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   155,   156,
     157,   157,   158,   158,   159,   159,   160,   161,   162,   163,
     163,   164,   164,   164,   164,   164,   164,   165,   165,   166,
     166,   166,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   170,   170,   170,   171,   171,   171,   171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     4,     2,     1,     3,     2,
       4,     3,     2,     3,     2,     2,     2,     1,     1,     3,
       2,     1,     1,     1,     3,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     4,     5,     3,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     3,
       3,     2,     4,     3,     3,     2,     2,     4,     3,     2,
       4,     3,     3,     2,     2,     4,     3,     1,     1,     2,
       1,     1,     2,     3,     4,     1,     3,     2,     3,     2,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     2,     1,     3,     5,
       4,     6,     4,     6,     5,     7,     2,     1,     3,     2,
       1,     1,     3,     5,     5,     5,     7,     7,     2,     3,
       3,     3,     4,     5,     1,     1,     2,     4,     4,     1,
       3,     1,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     3,     3,     5,     2,     3,     4,     3,     4,     5,
       6,     7,     8,     6,     4,     4,     4,     2,     4,     1,
       3,     4,     2,     3,     2,     1,     1,     3,     2,     5,
       4,     3,     2,     3,     3,     2,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
        case 6:
#line 71 "parser.y" /* yacc.c:1646  */
    {;}
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "parser.y" /* yacc.c:1646  */
    {;}
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "parser.y" /* yacc.c:1646  */
    {;}
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 80 "parser.y" /* yacc.c:1646  */
    {;}
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 84 "parser.y" /* yacc.c:1646  */
    {;}
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 85 "parser.y" /* yacc.c:1646  */
    {;}
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 86 "parser.y" /* yacc.c:1646  */
    {;}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 90 "parser.y" /* yacc.c:1646  */
    {;}
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "parser.y" /* yacc.c:1646  */
    {;}
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "parser.y" /* yacc.c:1646  */
    {;}
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "parser.y" /* yacc.c:1646  */
    {;}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "parser.y" /* yacc.c:1646  */
    {;}
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 116 "parser.y" /* yacc.c:1646  */
    {;}
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "parser.y" /* yacc.c:1646  */
    {;}
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "parser.y" /* yacc.c:1646  */
    {;}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 155 "parser.y" /* yacc.c:1646  */
    {;}
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "parser.y" /* yacc.c:1646  */
    {;}
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "parser.y" /* yacc.c:1646  */
    {;}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "parser.y" /* yacc.c:1646  */
    {;}
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "parser.y" /* yacc.c:1646  */
    {;}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "parser.y" /* yacc.c:1646  */
    {;}
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "parser.y" /* yacc.c:1646  */
    {;}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "parser.y" /* yacc.c:1646  */
    {;}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "parser.y" /* yacc.c:1646  */
    {;}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "parser.y" /* yacc.c:1646  */
    {;}
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "parser.y" /* yacc.c:1646  */
    {;}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 241 "parser.y" /* yacc.c:1646  */
    {;}
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "parser.y" /* yacc.c:1646  */
    {;}
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 246 "parser.y" /* yacc.c:1646  */
    {;}
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "parser.y" /* yacc.c:1646  */
    {;}
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "parser.y" /* yacc.c:1646  */
    {;}
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "parser.y" /* yacc.c:1646  */
    {;}
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 258 "parser.y" /* yacc.c:1646  */
    {;}
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "parser.y" /* yacc.c:1646  */
    {;}
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 263 "parser.y" /* yacc.c:1646  */
    {;}
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 264 "parser.y" /* yacc.c:1646  */
    {;}
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 268 "parser.y" /* yacc.c:1646  */
    {;}
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 284 "parser.y" /* yacc.c:1646  */
    {;}
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 296 "parser.y" /* yacc.c:1646  */
    {;}
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 300 "parser.y" /* yacc.c:1646  */
    {;}
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 305 "parser.y" /* yacc.c:1646  */
    {;}
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 306 "parser.y" /* yacc.c:1646  */
    {;}
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 307 "parser.y" /* yacc.c:1646  */
    {;}
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "parser.y" /* yacc.c:1646  */
    {;}
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 335 "parser.y" /* yacc.c:1646  */
    {;}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "parser.y" /* yacc.c:1646  */
    {;}
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "parser.y" /* yacc.c:1646  */
    {;}
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "parser.y" /* yacc.c:1646  */
    {;}
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 347 "parser.y" /* yacc.c:1646  */
    {;}
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "parser.y" /* yacc.c:1646  */
    {;}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "parser.y" /* yacc.c:1646  */
    {;}
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 360 "parser.y" /* yacc.c:1646  */
    {;}
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 361 "parser.y" /* yacc.c:1646  */
    {;}
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 362 "parser.y" /* yacc.c:1646  */
    {;}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 363 "parser.y" /* yacc.c:1646  */
    {;}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 364 "parser.y" /* yacc.c:1646  */
    {;}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 365 "parser.y" /* yacc.c:1646  */
    {;}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 366 "parser.y" /* yacc.c:1646  */
    {;}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 367 "parser.y" /* yacc.c:1646  */
    {;}
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 371 "parser.y" /* yacc.c:1646  */
    {;}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 372 "parser.y" /* yacc.c:1646  */
    {;}
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 375 "parser.y" /* yacc.c:1646  */
    {;}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 379 "parser.y" /* yacc.c:1646  */
    {;}
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 380 "parser.y" /* yacc.c:1646  */
    {;}
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "parser.y" /* yacc.c:1646  */
    {;}
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 388 "parser.y" /* yacc.c:1646  */
    {;}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 389 "parser.y" /* yacc.c:1646  */
    {;}
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 390 "parser.y" /* yacc.c:1646  */
    {;}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 391 "parser.y" /* yacc.c:1646  */
    {;}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 392 "parser.y" /* yacc.c:1646  */
    {;}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 393 "parser.y" /* yacc.c:1646  */
    {;}
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 397 "parser.y" /* yacc.c:1646  */
    {;}
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "parser.y" /* yacc.c:1646  */
    {;}
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "parser.y" /* yacc.c:1646  */
    {;}
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 400 "parser.y" /* yacc.c:1646  */
    {;}
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "parser.y" /* yacc.c:1646  */
    {;}
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 445 "parser.y" /* yacc.c:1646  */
    {;}
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 455 "parser.y" /* yacc.c:1646  */
    {;}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 459 "parser.y" /* yacc.c:1646  */
    {;}
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 463 "parser.y" /* yacc.c:1646  */
    {;}
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 464 "parser.y" /* yacc.c:1646  */
    {;}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 465 "parser.y" /* yacc.c:1646  */
    {;}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 466 "parser.y" /* yacc.c:1646  */
    {;}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 467 "parser.y" /* yacc.c:1646  */
    {;}
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 468 "parser.y" /* yacc.c:1646  */
    {;}
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 472 "parser.y" /* yacc.c:1646  */
    {;}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 473 "parser.y" /* yacc.c:1646  */
    {;}
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 474 "parser.y" /* yacc.c:1646  */
    {;}
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 475 "parser.y" /* yacc.c:1646  */
    {;}
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 479 "parser.y" /* yacc.c:1646  */
    {;}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 483 "parser.y" /* yacc.c:1646  */
    {;}
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 484 "parser.y" /* yacc.c:1646  */
    {;}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 493 "parser.y" /* yacc.c:1646  */
    {;}
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 494 "parser.y" /* yacc.c:1646  */
    {;}
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 508 "parser.y" /* yacc.c:1646  */
    {;}
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 512 "parser.y" /* yacc.c:1646  */
    {;}
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 516 "parser.y" /* yacc.c:1646  */
    {;}
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 520 "parser.y" /* yacc.c:1646  */
    {;}
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 521 "parser.y" /* yacc.c:1646  */
    {;}
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 525 "parser.y" /* yacc.c:1646  */
    {;}
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 526 "parser.y" /* yacc.c:1646  */
    {;}
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 536 "parser.y" /* yacc.c:1646  */
    {;}
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 544 "parser.y" /* yacc.c:1646  */
    {;}
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 553 "parser.y" /* yacc.c:1646  */
    {;}
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 554 "parser.y" /* yacc.c:1646  */
    {;}
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 555 "parser.y" /* yacc.c:1646  */
    {;}
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 557 "parser.y" /* yacc.c:1646  */
    {;}
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 558 "parser.y" /* yacc.c:1646  */
    {;}
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 562 "parser.y" /* yacc.c:1646  */
    {;}
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 563 "parser.y" /* yacc.c:1646  */
    {;}
#line 2556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 567 "parser.y" /* yacc.c:1646  */
    {;}
#line 2562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 568 "parser.y" /* yacc.c:1646  */
    {;}
#line 2568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 569 "parser.y" /* yacc.c:1646  */
    {;}
#line 2574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 573 "parser.y" /* yacc.c:1646  */
    {;}
#line 2580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 574 "parser.y" /* yacc.c:1646  */
    {;}
#line 2586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 575 "parser.y" /* yacc.c:1646  */
    {;}
#line 2592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 576 "parser.y" /* yacc.c:1646  */
    {;}
#line 2598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 580 "parser.y" /* yacc.c:1646  */
    {;}
#line 2604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 581 "parser.y" /* yacc.c:1646  */
    {;}
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 582 "parser.y" /* yacc.c:1646  */
    {;}
#line 2616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 583 "parser.y" /* yacc.c:1646  */
    {;}
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 584 "parser.y" /* yacc.c:1646  */
    {;}
#line 2628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 585 "parser.y" /* yacc.c:1646  */
    {;}
#line 2634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 589 "parser.y" /* yacc.c:1646  */
    {;}
#line 2640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 590 "parser.y" /* yacc.c:1646  */
    {;}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 591 "parser.y" /* yacc.c:1646  */
    {;}
#line 2652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 592 "parser.y" /* yacc.c:1646  */
    {;}
#line 2658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 593 "parser.y" /* yacc.c:1646  */
    {;}
#line 2664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 594 "parser.y" /* yacc.c:1646  */
    {;}
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 595 "parser.y" /* yacc.c:1646  */
    {;}
#line 2676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 599 "parser.y" /* yacc.c:1646  */
    {;}
#line 2682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 600 "parser.y" /* yacc.c:1646  */
    {;}
#line 2688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 601 "parser.y" /* yacc.c:1646  */
    {;}
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 602 "parser.y" /* yacc.c:1646  */
    {;}
#line 2700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 603 "parser.y" /* yacc.c:1646  */
    {;}
#line 2706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 604 "parser.y" /* yacc.c:1646  */
    {;}
#line 2712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 608 "parser.y" /* yacc.c:1646  */
    {;}
#line 2718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 609 "parser.y" /* yacc.c:1646  */
    {;}
#line 2724 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2728 "parser.tab.c" /* yacc.c:1646  */
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
#line 614 "parser.y" /* yacc.c:1906  */




	











	


