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
#define YYLAST   1334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  253
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

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
     428,   429,   433,   434,   438,   439,   443,   444,   448,   449,
     453,   454,   458,   459,   460,   461,   462,   463,   464,   465,
     469,   473,   474,   479,   483,   487,   488,   489,   490,   491,
     492,   496,   497,   498,   499,   503,   507,   508,   512,   513,
     517,   518,   522,   523,   527,   528,   532,   536,   540,   544,
     545,   549,   550,   554,   555,   560,   564,   568,   572,   573,
     577,   578,   579,   580,   581,   582,   586,   587,   591,   592,
     593,   597,   598,   599,   600,   604,   605,   606,   607,   608,
     609,   613,   614,   615,   616,   617,   618,   619,   623,   624,
     625,   626,   627,   628
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
  "PostStmt", "RangeClause", "Expression", "ExpressionOR", "ExpressionAND",
  "ExpressionREL", "ExpressionADD", "ExpressionMUL", "UnaryExpr",
  "PrimaryExpr", "StructLiteral", "KeyValueList", "Selector", "Index",
  "Slice", "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "MapType", "StructType", "FieldDeclList", "FieldDecl", "PointerType",
  "BaseType", "ArrayType", "Literal", "BasicLit", "String", "Assign_OP",
  "Add_OP", "Rel_OP", "Mul_OP", "Unary_OP", YY_NULLPTR
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

#define YYPACT_NINF -325

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-325)))

#define YYTABLE_NINF -118

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,    14,   112,    61,  -325,  -325,  -325,   297,   -16,   325,
     113,   180,   182,   297,   119,   266,   122,  -325,  -325,  -325,
    -325,  -325,  -325,    37,  -325,    55,  -325,    86,   379,   235,
    -325,  -325,   235,  -325,  -325,  -325,   -21,  -325,  -325,    56,
       5,  -325,    98,   129,   125,  -325,  -325,  -325,   169,   266,
    -325,   240,  -325,   285,  -325,   148,  -325,   176,   196,   206,
      55,  -325,   445,   248,  -325,  -325,  -325,    21,   273,   213,
     246,   285,  1147,   516,   244,   256,   259,  -325,  -325,   275,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,    97,   319,  1147,
     279,   126,   326,   285,  -325,  -325,  -325,  -325,  -325,    92,
     285,  -325,   467,  -325,  -325,  -325,  -325,  -325,   196,  -325,
     331,  -325,  -325,   336,  -325,   117,   285,  -325,  -325,  -325,
    -325,  -325,  -325,   290,   295,  -325,  -325,  -325,  -325,    45,
    -325,  1147,  -325,  -325,   309,  -325,   317,   293,   340,   342,
     500,   413,   328,  -325,   453,  -325,  -325,  -325,  -325,  -325,
    1241,   339,   285,   350,  -325,   315,  1147,  -325,   378,  -325,
    -325,  1147,  -325,   387,  -325,  -325,  -325,  -325,  -325,   345,
     345,  1147,  1194,   567,   714,   345,  -325,   199,  -325,   335,
     405,  -325,  -325,   358,  -325,  -325,  -325,  -325,  -325,  -325,
     242,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
     124,   560,  -325,  -325,  -325,  -325,   207,   179,   412,   369,
     285,   285,   377,   616,  -325,  1147,  -325,  1147,  1147,  1147,
    -325,  -325,  -325,  -325,  -325,  -325,  1147,  -325,  -325,  -325,
    -325,  1147,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  1241,
     763,   810,   243,  -325,  -325,  -325,  -325,  -325,   453,  1266,
    -325,   285,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,    94,   423,   136,  1147,  -325,   196,  -325,   250,   196,
     432,   196,   355,   609,    72,   435,   421,  -325,  -325,   439,
    -325,   467,  1147,  -325,  -325,  -325,  1147,   402,   410,   235,
    -325,   444,  -325,   285,   403,   262,  -325,  -325,   416,   150,
    -325,   417,  -325,   420,   424,   408,  -325,   342,   500,   413,
     328,   453,  -325,   440,   857,   -39,   285,  -325,  -325,  -325,
    -325,  1147,   475,  -325,  -325,   908,  -325,   955,  -325,   480,
    1147,  -325,  -325,    77,  -325,   431,  1002,   149,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  1147,
    -325,   665,  1051,  1147,  -325,   443,  -325,   171,  -325,  1100,
     459,   196,    58,  1147,  1194,   489,  -325,  1147,  -325,  -325,
    -325,   467,   165,   449,  -325,   195,   272,  -325,  -325,  -325,
    -325,  -325,   454,  -325,  -325,  1147,  -325,   208,  -325,   503,
    -325,  -325,  -325,  -325,  -325,  1194,  -325,   401,  -325,   201,
     212,  -325,  -325,  1147,  1147,   465,  -325,  1147,    58,  -325,
    -325,  -325,   231,   468,  -325,  -325,   472,  -325,  -325,  -325,
    -325,  -325
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     6,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    21,    22,    23,
      41,    42,    40,     0,    45,     0,    93,     0,     0,     0,
     226,   227,     0,    12,    17,    18,     0,    91,    61,     0,
       0,    69,     0,     0,     0,   201,   204,   205,     0,     5,
       9,     0,    20,     0,    82,     0,    85,     0,    44,    78,
       0,    11,     0,     0,    16,    15,    63,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,   107,   101,    66,
     102,    98,   100,    95,    97,    96,    71,     0,     0,     0,
      74,     0,     0,     0,   207,     8,    19,    89,    83,     0,
       0,    87,    55,    77,    43,    79,    80,    81,    46,    10,
       0,    14,    62,     0,    65,     0,     0,   216,   215,   220,
     221,   224,   225,     0,     0,   248,   249,   250,   251,   252,
     253,     0,   222,   219,     0,   172,   104,   198,   159,   161,
     163,   165,   167,   169,   170,   173,    68,   103,   218,   223,
       0,     0,     0,     0,    90,     0,     0,    70,     0,    73,
      76,     0,   200,     0,   203,   206,    84,    86,    88,   122,
     124,   120,    55,    55,    55,     0,   141,   106,    37,    55,
       0,    28,    29,     0,    30,    50,    51,    52,    53,    54,
       0,    31,    32,    33,    34,    35,   127,    36,    38,    39,
     198,     0,    47,    13,    64,   210,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,   178,     0,     0,     0,
     235,   236,   237,   238,   239,   240,     0,   231,   232,   234,
     233,     0,   247,   241,   246,   243,   242,   244,   245,     0,
       0,     0,     0,   174,   175,   176,   179,   177,   171,     0,
     111,     0,    92,    67,    72,    75,   202,    49,   123,   125,
     121,   106,     0,   198,     0,   148,     0,   154,     0,     0,
       0,     0,   198,     0,     0,     0,   198,   126,    24,     0,
      27,    55,     0,    57,    58,   228,     0,     0,     0,   214,
     209,     0,   211,     0,     0,     0,   105,   108,   119,     0,
     112,     0,   114,   118,     0,     0,   199,   160,   162,   164,
     166,   168,   196,     0,     0,     0,     0,   183,    99,   104,
     217,     0,   142,   156,   150,     0,   149,     0,   151,   228,
       0,   140,   128,     0,   137,     0,     0,     0,    26,    48,
      60,    59,   229,   230,   213,   212,   208,   194,   193,     0,
     109,     0,     0,     0,   180,     0,   186,     0,   184,     0,
       0,     0,     0,     0,    55,     0,    25,     0,   139,   132,
     136,    55,     0,     0,   130,     0,     0,   110,   113,   119,
     115,   118,   181,   197,   185,     0,   187,     0,   195,   143,
     145,   144,   157,   155,   152,    55,   158,   138,   129,     0,
       0,   134,   192,     0,     0,     0,   188,     0,     0,   153,
     133,   131,     0,     0,   182,   189,     0,   147,   146,   135,
     191,   190
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,    28,  -325,   512,  -325,     4,    99,   518,
      31,   -58,   209,   166,  -172,    26,  -325,  -325,  -325,  -325,
     288,  -169,  -325,  -325,  -325,  -325,  -325,  -325,  -325,   103,
    -325,  -325,   -22,   430,   482,  -325,     9,  -325,   441,    17,
    -325,  -325,  -325,    -8,    83,   308,   -33,  -124,  -325,  -325,
     210,  -325,   211,  -325,  -325,  -325,  -325,  -325,  -325,  -324,
    -321,  -325,  -325,  -320,  -325,  -325,  -325,   163,  -325,   -72,
    -325,   341,   343,   334,   333,  -325,  -142,  -325,   161,  -325,
    -325,  -325,  -325,  -325,  -325,   -10,  -325,  -325,   -27,  -325,
    -325,  -325,  -325,  -325,   359,  -325,  -325,  -325,  -325,  -325,
      -7,  -325,  -187,  -325,  -186,  -325
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    76,    13,    14,    62,    33,    34,    15,
      16,   178,   266,   179,   180,   181,    18,    25,    19,   182,
     183,   184,   185,   186,   187,   188,   189,    20,    67,    38,
      21,    87,    41,   104,    58,   105,    59,    55,    56,   190,
      77,    27,   133,   134,   117,   135,   136,   298,    81,   299,
     300,   301,   302,   191,   192,   193,   194,   195,   196,   333,
     334,   335,   197,   198,   199,   269,   270,   394,   271,   137,
     138,   139,   140,   141,   142,   143,   144,   216,   305,   243,
     244,   245,   145,   246,   247,   201,    22,    91,    45,    46,
      47,    82,    83,   207,   208,    84,   118,    85,   147,   148,
     149,   286,   231,   226,   239,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   153,    35,   262,   267,   275,    80,   279,   248,    80,
     214,    80,   370,   375,   287,   288,    92,    26,    88,   358,
      80,    35,    35,   359,    80,    35,    80,    39,    42,     5,
     200,    78,    63,    17,    78,    66,    78,    32,    80,    17,
      57,    17,   391,    23,     1,    78,    51,    37,   399,    78,
     103,    78,    24,    39,   370,    35,    32,    42,    69,   212,
      80,    86,   146,    78,   163,   158,   110,    80,   106,    69,
      70,    53,     7,    37,   172,    17,   412,   112,   370,   160,
      51,    70,     4,    80,    39,    78,   287,   288,   418,    37,
      32,   370,    78,    54,   330,    71,    80,   311,   331,   330,
     263,   272,   276,   331,    42,    37,    73,   200,    78,   339,
      72,    69,     6,    75,    23,   265,    57,    73,   102,    80,
      74,    78,    79,    70,    75,    90,    53,    94,    64,   332,
      50,    65,   206,    52,   369,   -56,    97,    71,    69,    68,
     101,   303,   107,   304,    78,   306,   253,   -56,   166,   -91,
      70,   255,    89,   157,    60,   283,   284,    -7,   -91,    73,
      37,   260,    74,   273,    71,    37,    75,   283,   284,   315,
     113,   330,    36,    80,   205,   331,   165,    80,    80,    93,
      95,    37,   162,   168,   -56,    37,    73,   330,   217,    69,
     268,   331,   323,    75,    44,   393,   102,    44,    78,   209,
     217,    70,    78,    78,    98,   322,   374,   350,   324,   200,
     100,   326,    99,   328,   351,    71,   319,   330,    80,    69,
      69,   331,   398,   330,   206,   279,   393,   331,   379,   384,
     313,    70,    70,   385,   330,   250,   290,    73,   331,    40,
      74,    43,   357,    78,    75,    71,    71,    37,    37,   361,
      44,    96,   401,   330,   -91,   366,   102,   331,   410,   111,
      80,   -49,    -7,   -91,   373,    23,   406,    73,    73,   411,
     407,    74,   340,   115,    75,    75,   341,   376,     8,   303,
     381,   382,   344,    80,   114,    78,    10,   387,   419,   289,
      11,   392,   200,   294,   295,   396,    12,   282,    69,   200,
      30,    31,   316,   389,   390,   325,    74,   116,    78,     8,
      70,   317,   154,   405,    74,   340,     9,    10,   348,    -7,
     368,    11,   155,   200,    71,   200,   349,    12,   402,   156,
     159,   413,   304,   161,   320,   416,   403,   164,   119,   120,
     121,   122,   203,   169,   170,   171,    73,   204,    69,   210,
     417,   172,   173,    75,   211,    10,   174,   217,   123,    11,
      70,   232,   124,   175,   176,    12,   -56,   233,   234,   213,
     125,   126,   127,   128,   129,   130,   346,   215,   235,   236,
     237,   238,   218,   252,    28,   219,   283,   284,    29,   254,
      30,    31,   278,     4,   131,   102,    73,   249,   256,   360,
      30,    31,   132,   177,   119,   120,   121,   122,   251,   169,
     170,   171,   -55,   257,    69,   -25,   280,   172,   173,   217,
     281,    10,   174,   292,   123,    11,    70,   293,   124,   175,
     176,    12,   -56,   296,   321,    61,   125,   126,   127,   128,
     129,   130,    29,   327,    30,    31,   336,     4,   227,   228,
     338,   229,   283,   284,   230,   345,   342,   258,   259,   347,
     131,   102,    73,   277,   343,   354,    30,    31,   132,   177,
     119,   120,   121,   122,   355,   169,   170,   171,  -117,   352,
      69,   337,  -116,   172,   173,   217,   353,    10,   174,   362,
     123,    11,    70,   371,   124,   175,   176,    12,   367,   383,
     395,   109,   125,   126,   127,   128,   129,   130,    29,   400,
      30,    31,   240,     4,   241,   388,   242,   408,   404,   119,
     120,   121,   122,   415,   420,    48,   131,   102,    73,    69,
     421,    49,    30,    31,   132,   177,   365,   397,   202,   123,
     167,    70,   108,   124,   220,   221,   222,   223,   224,   225,
     151,   125,   126,   127,   128,   129,   130,   318,   409,   307,
     309,   378,   308,   380,   310,   414,   291,     0,     0,     0,
     119,   120,   121,   122,   152,   131,     0,    73,     0,     0,
      69,    30,    31,   132,    75,   264,     0,     0,     0,     0,
     123,     0,    70,   232,   124,   227,   228,     0,   229,   233,
     234,   230,   125,   126,   127,   128,   129,   130,     0,     0,
     235,   236,   237,   238,   285,     0,     0,     0,     0,   119,
     120,   121,   122,     0,     0,     0,   131,   102,    73,    69,
       0,     0,    30,    31,   132,   261,     0,     0,     0,   123,
       0,    70,   232,   124,   227,   228,     0,   229,   233,   234,
     230,   125,   126,   127,   128,   129,   130,     0,     0,   235,
     236,   237,   238,   329,     0,     0,     0,     0,   119,   120,
     121,   122,     0,   297,     0,   131,   213,    73,    69,     0,
       0,    30,    31,   132,    75,     0,     0,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,   377,     0,   131,   213,    73,    69,     0,     0,
      30,    31,   132,    75,     0,     0,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
       0,     0,     0,   131,   274,    73,    69,     0,     0,    30,
      31,   132,   261,     0,     0,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,     0,     0,   312,
       0,     0,   131,    69,    73,     0,     0,     0,    30,    31,
     132,    75,     0,   123,     0,    70,     0,   124,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,   131,
      69,    73,   314,     0,     0,    30,    31,   132,    75,     0,
     123,     0,    70,     0,   124,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   356,   131,     0,    73,     0,
       0,    69,    30,    31,   132,    75,   363,     0,     0,     0,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,     0,   364,   131,    69,    73,
       0,     0,     0,    30,    31,   132,    75,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
       0,     0,     0,     0,   131,    69,    73,     0,     0,     0,
      30,    31,   132,    75,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,   131,   372,    73,    69,     0,     0,    30,    31,   132,
      75,     0,     0,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,     0,     0,     0,
     131,   213,    73,    69,     0,     0,    30,    31,   132,    75,
       0,     0,     0,   123,     0,    70,     0,   124,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,     0,     0,     0,     0,   386,   131,
      69,    73,     0,     0,     0,    30,    31,   132,    75,     0,
     123,     0,    70,     0,   124,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,     0,     0,   131,    69,    73,     0,
       0,     0,    30,    31,   132,    75,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,     0,     0,   131,    69,    73,     0,     0,     0,    30,
      31,   132,   261,     0,   123,     0,    70,     0,   124,   119,
     120,   121,   122,     0,     0,     0,     0,     0,     0,    69,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
     131,     0,    73,     0,     0,    71,    30,    31,   132,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   131,     0,    73,     0,     0,
       0,    30,    31,   132,    75
};

static const yytype_int16 yycheck[] =
{
      58,    73,     9,   172,   173,   174,    39,   179,   150,    42,
     134,    44,   333,   337,   201,   201,    43,     8,    40,    58,
      53,    28,    29,    62,    57,    32,    59,    10,    11,     1,
     102,    39,    28,     7,    42,    56,    44,     9,    71,    13,
      23,    15,   362,    59,    15,    53,    15,    68,   372,    57,
     108,    59,    68,    36,   375,    62,    28,    40,    13,   131,
      93,    56,    72,    71,    91,    87,    62,   100,    59,    13,
      25,    34,    11,    68,    16,    49,   400,    56,   399,    89,
      49,    25,    68,   116,    67,    93,   273,   273,   408,    68,
      62,   412,   100,    56,    22,    39,   129,   239,    26,    22,
     172,   173,   174,    26,    87,    68,    61,   179,   116,   281,
      54,    13,     0,    68,    59,   173,    99,    61,    60,   152,
      64,   129,    39,    25,    68,    42,    34,    44,    29,    57,
      11,    32,   115,    11,    57,    11,    53,    39,    13,    36,
      57,   213,    59,   215,   152,   217,   156,    11,    56,    55,
      25,   161,    54,    56,    68,    31,    32,    63,    64,    61,
      68,   171,    64,   173,    39,    68,    68,    31,    32,   241,
      67,    22,    59,   206,    57,    26,    93,   210,   211,    54,
      11,    68,    56,   100,    60,    68,    61,    22,    64,    13,
     173,    26,   264,    68,    68,   364,    60,    68,   206,   116,
      64,    25,   210,   211,    56,   263,    57,    57,   266,   281,
      34,   269,    64,   271,    64,    39,   249,    22,   251,    13,
      13,    26,    57,    22,   207,   397,   395,    26,   352,    58,
     240,    25,    25,    62,    22,   152,    57,    61,    26,    59,
      64,    59,   314,   251,    68,    39,    39,    68,    68,   321,
      68,    11,    57,    22,    55,   327,    60,    26,    57,    11,
     293,    62,    63,    64,   336,    59,    58,    61,    61,    57,
      62,    64,   282,    60,    68,    68,   286,   349,    12,   351,
     352,   353,   289,   316,    11,   293,    20,   359,    57,   206,
      24,   363,   364,   210,   211,   367,    30,    55,    13,   371,
      65,    66,    59,   361,   362,    55,    64,    61,   316,    12,
      25,    68,    68,   385,    64,   325,    19,    20,    56,    63,
     330,    24,    63,   395,    39,   397,    64,    30,    56,    54,
      11,   403,   404,    54,   251,   407,    64,    11,     3,     4,
       5,     6,    11,     8,     9,    10,    61,    11,    13,    59,
     408,    16,    17,    68,    59,    20,    21,    64,    23,    24,
      25,    33,    27,    28,    29,    30,    11,    39,    40,    60,
      35,    36,    37,    38,    39,    40,   293,    60,    50,    51,
      52,    53,    42,    68,    59,    43,    31,    32,    63,    11,
      65,    66,    57,    68,    59,    60,    61,    58,    11,   316,
      65,    66,    67,    68,     3,     4,     5,     6,    58,     8,
       9,    10,    11,    68,    13,    60,    11,    16,    17,    64,
      62,    20,    21,    11,    23,    24,    25,    58,    27,    28,
      29,    30,    11,    56,    11,    56,    35,    36,    37,    38,
      39,    40,    63,    11,    65,    66,    11,    68,    35,    36,
      11,    38,    31,    32,    41,    11,    54,   169,   170,    56,
      59,    60,    61,   175,    54,    57,    65,    66,    67,    68,
       3,     4,     5,     6,    34,     8,     9,    10,    62,    62,
      13,    60,    62,    16,    17,    64,    62,    20,    21,    14,
      23,    24,    25,    62,    27,    28,    29,    30,    18,    56,
      11,    56,    35,    36,    37,    38,    39,    40,    63,    60,
      65,    66,    59,    68,    61,    56,    63,    14,    64,     3,
       4,     5,     6,    58,    56,    13,    59,    60,    61,    13,
      58,    13,    65,    66,    67,    68,   327,   371,   108,    23,
      99,    25,    60,    27,    44,    45,    46,    47,    48,    49,
      34,    35,    36,    37,    38,    39,    40,   249,   395,   218,
     226,   351,   219,   352,   231,   404,   207,    -1,    -1,    -1,
       3,     4,     5,     6,    58,    59,    -1,    61,    -1,    -1,
      13,    65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    33,    27,    35,    36,    -1,    38,    39,
      40,    41,    35,    36,    37,    38,    39,    40,    -1,    -1,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    59,    60,    61,    13,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,
      -1,    25,    33,    27,    35,    36,    -1,    38,    39,    40,
      41,    35,    36,    37,    38,    39,    40,    -1,    -1,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    57,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,
      -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,
      13,    61,    62,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    58,    59,    -1,    61,    -1,
      -1,    13,    65,    66,    67,    68,    18,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    11,    59,    13,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    39,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    72,    68,    73,     0,    11,    12,    19,
      20,    24,    30,    74,    75,    79,    80,    85,    86,    88,
      97,   100,   156,    59,    68,    87,   106,   111,    59,    63,
      65,    66,    73,    77,    78,   170,    59,    68,    99,   109,
      59,   102,   109,    59,    68,   158,   159,   160,    75,    79,
      11,    80,    11,    34,    56,   107,   108,   109,   104,   106,
      68,    56,    76,    77,    78,    78,    56,    98,    99,    13,
      25,    39,    54,    61,    64,    68,    73,   110,   113,   114,
     116,   118,   161,   162,   165,   167,    56,   101,   102,    54,
     114,   157,   158,    54,   114,    11,    11,   114,    56,    64,
      34,   114,    60,    81,   103,   105,   106,   114,   104,    56,
      77,    11,    56,    99,    11,    60,    61,   114,   166,     3,
       4,     5,     6,    23,    27,    35,    36,    37,    38,    39,
      40,    59,    67,   112,   113,   115,   116,   139,   140,   141,
     142,   143,   144,   145,   146,   152,   155,   168,   169,   170,
     175,    34,    58,   139,    68,    63,    54,    56,   102,    11,
     155,    54,    56,   158,    11,   114,    56,   108,   114,     8,
       9,    10,    16,    17,    21,    28,    29,    68,    81,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    95,    96,
     109,   123,   124,   125,   126,   127,   128,   132,   133,   134,
     139,   155,   103,    11,    11,    57,   109,   163,   164,   114,
      59,    59,   139,    60,   117,    60,   147,    64,    42,    43,
      44,    45,    46,    47,    48,    49,   173,    35,    36,    38,
      41,   172,    33,    39,    40,    50,    51,    52,    53,   174,
      59,    61,    63,   149,   150,   151,   153,   154,   146,    58,
     114,    58,    68,   155,    11,   155,    11,    68,    90,    90,
     155,    68,    91,   139,    18,    81,    82,    91,   109,   135,
     136,   138,   139,   155,    60,    91,   139,    90,    57,    84,
      11,    62,    55,    31,    32,    54,   171,   172,   174,   114,
      57,   164,    11,    58,   114,   114,    56,    57,   117,   119,
     120,   121,   122,   139,   139,   148,   139,   141,   142,   143,
     144,   146,    56,   155,    62,   139,    59,    68,   115,   116,
     114,    11,    81,   139,    81,    55,    81,    11,    81,    54,
      22,    26,    57,   129,   130,   131,    11,    60,    11,    84,
     155,   155,    54,    54,   170,    11,   114,    56,    56,    64,
      57,    64,    62,    62,    57,    34,    58,   139,    58,    62,
     114,   139,    14,    18,    11,    82,   139,    18,   155,    57,
     130,    62,    60,   139,    57,   129,   139,    57,   120,   117,
     122,   139,   139,    56,    58,    62,    58,   139,    56,    81,
      81,   133,   139,    91,   137,    11,   139,    83,    57,   129,
      60,    57,    56,    64,    64,   139,    58,    62,    14,   137,
      57,    57,   129,   139,   148,    58,   139,    81,   133,    57,
      56,    58
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
     140,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   148,   148,   149,   150,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   161,   162,
     162,   163,   163,   164,   164,   165,   166,   167,   168,   168,
     169,   169,   169,   169,   169,   169,   170,   170,   171,   171,
     171,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   175,   175,
     175,   175,   175,   175
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
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       3,     3,     5,     2,     3,     4,     3,     4,     5,     6,
       7,     8,     6,     4,     4,     4,     2,     4,     1,     3,
       4,     2,     3,     2,     1,     1,     3,     2,     5,     4,
       3,     2,     3,     3,     2,     2,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "parser.y" /* yacc.c:1646  */
    {;}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "parser.y" /* yacc.c:1646  */
    {;}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 80 "parser.y" /* yacc.c:1646  */
    {;}
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 84 "parser.y" /* yacc.c:1646  */
    {;}
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 85 "parser.y" /* yacc.c:1646  */
    {;}
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 86 "parser.y" /* yacc.c:1646  */
    {;}
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 90 "parser.y" /* yacc.c:1646  */
    {;}
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "parser.y" /* yacc.c:1646  */
    {;}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "parser.y" /* yacc.c:1646  */
    {;}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "parser.y" /* yacc.c:1646  */
    {;}
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "parser.y" /* yacc.c:1646  */
    {;}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 116 "parser.y" /* yacc.c:1646  */
    {;}
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "parser.y" /* yacc.c:1646  */
    {;}
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "parser.y" /* yacc.c:1646  */
    {;}
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 155 "parser.y" /* yacc.c:1646  */
    {;}
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "parser.y" /* yacc.c:1646  */
    {;}
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "parser.y" /* yacc.c:1646  */
    {;}
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "parser.y" /* yacc.c:1646  */
    {;}
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "parser.y" /* yacc.c:1646  */
    {;}
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "parser.y" /* yacc.c:1646  */
    {;}
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "parser.y" /* yacc.c:1646  */
    {;}
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "parser.y" /* yacc.c:1646  */
    {;}
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "parser.y" /* yacc.c:1646  */
    {;}
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "parser.y" /* yacc.c:1646  */
    {;}
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "parser.y" /* yacc.c:1646  */
    {;}
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 241 "parser.y" /* yacc.c:1646  */
    {;}
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "parser.y" /* yacc.c:1646  */
    {;}
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 246 "parser.y" /* yacc.c:1646  */
    {;}
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "parser.y" /* yacc.c:1646  */
    {;}
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "parser.y" /* yacc.c:1646  */
    {;}
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "parser.y" /* yacc.c:1646  */
    {;}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 258 "parser.y" /* yacc.c:1646  */
    {;}
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "parser.y" /* yacc.c:1646  */
    {;}
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 263 "parser.y" /* yacc.c:1646  */
    {;}
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 264 "parser.y" /* yacc.c:1646  */
    {;}
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 268 "parser.y" /* yacc.c:1646  */
    {;}
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 284 "parser.y" /* yacc.c:1646  */
    {;}
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 296 "parser.y" /* yacc.c:1646  */
    {;}
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 300 "parser.y" /* yacc.c:1646  */
    {;}
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 305 "parser.y" /* yacc.c:1646  */
    {;}
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 306 "parser.y" /* yacc.c:1646  */
    {;}
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 307 "parser.y" /* yacc.c:1646  */
    {;}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "parser.y" /* yacc.c:1646  */
    {;}
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 335 "parser.y" /* yacc.c:1646  */
    {;}
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 336 "parser.y" /* yacc.c:1646  */
    {;}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "parser.y" /* yacc.c:1646  */
    {;}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "parser.y" /* yacc.c:1646  */
    {;}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 347 "parser.y" /* yacc.c:1646  */
    {;}
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "parser.y" /* yacc.c:1646  */
    {;}
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "parser.y" /* yacc.c:1646  */
    {;}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 360 "parser.y" /* yacc.c:1646  */
    {;}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 361 "parser.y" /* yacc.c:1646  */
    {;}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 362 "parser.y" /* yacc.c:1646  */
    {;}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 363 "parser.y" /* yacc.c:1646  */
    {;}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 364 "parser.y" /* yacc.c:1646  */
    {;}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 365 "parser.y" /* yacc.c:1646  */
    {;}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 366 "parser.y" /* yacc.c:1646  */
    {;}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 367 "parser.y" /* yacc.c:1646  */
    {;}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 371 "parser.y" /* yacc.c:1646  */
    {;}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 372 "parser.y" /* yacc.c:1646  */
    {;}
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 375 "parser.y" /* yacc.c:1646  */
    {;}
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 379 "parser.y" /* yacc.c:1646  */
    {;}
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 380 "parser.y" /* yacc.c:1646  */
    {;}
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 384 "parser.y" /* yacc.c:1646  */
    {;}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 388 "parser.y" /* yacc.c:1646  */
    {;}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 389 "parser.y" /* yacc.c:1646  */
    {;}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 390 "parser.y" /* yacc.c:1646  */
    {;}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 391 "parser.y" /* yacc.c:1646  */
    {;}
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 392 "parser.y" /* yacc.c:1646  */
    {;}
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 393 "parser.y" /* yacc.c:1646  */
    {;}
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 397 "parser.y" /* yacc.c:1646  */
    {;}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "parser.y" /* yacc.c:1646  */
    {;}
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "parser.y" /* yacc.c:1646  */
    {;}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 400 "parser.y" /* yacc.c:1646  */
    {;}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "parser.y" /* yacc.c:1646  */
    {;}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 428 "parser.y" /* yacc.c:1646  */
    {;}
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 433 "parser.y" /* yacc.c:1646  */
    {;}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 469 "parser.y" /* yacc.c:1646  */
    {;}
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 479 "parser.y" /* yacc.c:1646  */
    {;}
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 483 "parser.y" /* yacc.c:1646  */
    {;}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 487 "parser.y" /* yacc.c:1646  */
    {;}
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 488 "parser.y" /* yacc.c:1646  */
    {;}
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 489 "parser.y" /* yacc.c:1646  */
    {;}
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 490 "parser.y" /* yacc.c:1646  */
    {;}
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 491 "parser.y" /* yacc.c:1646  */
    {;}
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 492 "parser.y" /* yacc.c:1646  */
    {;}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 496 "parser.y" /* yacc.c:1646  */
    {;}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 497 "parser.y" /* yacc.c:1646  */
    {;}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 498 "parser.y" /* yacc.c:1646  */
    {;}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 499 "parser.y" /* yacc.c:1646  */
    {;}
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 503 "parser.y" /* yacc.c:1646  */
    {;}
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 507 "parser.y" /* yacc.c:1646  */
    {;}
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 508 "parser.y" /* yacc.c:1646  */
    {;}
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 517 "parser.y" /* yacc.c:1646  */
    {;}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 518 "parser.y" /* yacc.c:1646  */
    {;}
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 532 "parser.y" /* yacc.c:1646  */
    {;}
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 536 "parser.y" /* yacc.c:1646  */
    {;}
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 540 "parser.y" /* yacc.c:1646  */
    {;}
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 544 "parser.y" /* yacc.c:1646  */
    {;}
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 545 "parser.y" /* yacc.c:1646  */
    {;}
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 549 "parser.y" /* yacc.c:1646  */
    {;}
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 550 "parser.y" /* yacc.c:1646  */
    {;}
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 560 "parser.y" /* yacc.c:1646  */
    {;}
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 568 "parser.y" /* yacc.c:1646  */
    {;}
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 577 "parser.y" /* yacc.c:1646  */
    {;}
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 578 "parser.y" /* yacc.c:1646  */
    {;}
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 579 "parser.y" /* yacc.c:1646  */
    {;}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 581 "parser.y" /* yacc.c:1646  */
    {;}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 582 "parser.y" /* yacc.c:1646  */
    {;}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 586 "parser.y" /* yacc.c:1646  */
    {;}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 587 "parser.y" /* yacc.c:1646  */
    {;}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 591 "parser.y" /* yacc.c:1646  */
    {;}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 592 "parser.y" /* yacc.c:1646  */
    {;}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 593 "parser.y" /* yacc.c:1646  */
    {;}
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 597 "parser.y" /* yacc.c:1646  */
    {;}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 598 "parser.y" /* yacc.c:1646  */
    {;}
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 599 "parser.y" /* yacc.c:1646  */
    {;}
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 600 "parser.y" /* yacc.c:1646  */
    {;}
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 604 "parser.y" /* yacc.c:1646  */
    {;}
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 605 "parser.y" /* yacc.c:1646  */
    {;}
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 606 "parser.y" /* yacc.c:1646  */
    {;}
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 607 "parser.y" /* yacc.c:1646  */
    {;}
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 608 "parser.y" /* yacc.c:1646  */
    {;}
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 609 "parser.y" /* yacc.c:1646  */
    {;}
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 613 "parser.y" /* yacc.c:1646  */
    {;}
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 614 "parser.y" /* yacc.c:1646  */
    {;}
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 615 "parser.y" /* yacc.c:1646  */
    {;}
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 616 "parser.y" /* yacc.c:1646  */
    {;}
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 617 "parser.y" /* yacc.c:1646  */
    {;}
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 618 "parser.y" /* yacc.c:1646  */
    {;}
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 619 "parser.y" /* yacc.c:1646  */
    {;}
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 623 "parser.y" /* yacc.c:1646  */
    {;}
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 624 "parser.y" /* yacc.c:1646  */
    {;}
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 625 "parser.y" /* yacc.c:1646  */
    {;}
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 626 "parser.y" /* yacc.c:1646  */
    {;}
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 627 "parser.y" /* yacc.c:1646  */
    {;}
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 628 "parser.y" /* yacc.c:1646  */
    {;}
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2633 "parser.tab.c" /* yacc.c:1646  */
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
#line 638 "parser.y" /* yacc.c:1906  */




	











	


