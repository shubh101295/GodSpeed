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
#line 1 "src/parser.y" /* yacc.c:339  */


	#include<bits/stdc++.h>
	#include "node.hpp"
	#include "tables.hpp"
	#include "datatypes.hpp"
	#include "dot_generator.hpp"
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern int yyparse();
	extern FILE* yyin;
	void yyerror(const char* s) {
		fprintf(stderr,"%s\n",s);
		exit(1);
	};
	Node* teempppp = new Node("werty");

	SymbolTable* st = new SymbolTable();
	TypesTable* tt = new TypesTable();
	BreakLabels* bl = new BreakLabels();


#line 91 "parser.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 27 "src/parser.y" /* yacc.c:355  */

	#include "node.hpp"

#line 125 "parser.tab.c" /* yacc.c:355  */

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
    ASSGN_OP = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "src/parser.y" /* yacc.c:355  */

	Node* nt;
	char* sval;

#line 212 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  412

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
       0,    72,    72,    85,    92,    98,   107,   116,   122,   131,
     137,   141,   150,   156,   164,   170,   175,   184,   193,   201,
     211,   218,   226,   236,   246,   256,   265,   281,   289,   297,
     305,   312,   319,   326,   333,   340,   347,   354,   361,   371,
     378,   398,   410,   421,   428,   439,   450,   456,   463,   469,
     475,   483,   489,   497,   507,   515,   525,   583,   648,   654,
     663,   672,   681,   699,   723,   794,   803,   829,   867,   873,
     882,   891,   900,   906,   913,   922,   928,   940,   963,   973,
     982,   989,   996,  1002,  1008,  1014,  1020,  1025,  1034,  1040,
    1049,  1055,  1062,  1071,  1089,  1093,  1099,  1107,  1116,  1123,
    1139,  1146,  1156,  1161,  1169,  1176,  1187,  1192,  1203,  1209,
    1220,  1225,  1236,  1247,  1251,  1252,  1253,  1254,  1255,  1256,
    1257,  1258,  1262,  1267,  1273,  1281,  1285,  1291,  1297,  1315,
    1337,  1359,  1381,  1406,  1434,  1445,  1457,  1469,  1482,  1506,
    1514,  1522,  1561,  1588,  1613,  1639,  1665,  1690,  1715,  1741,
    1766,  1791,  1817,  1842,  1868,  1893,  1919,  1944,  1969,  1994,
    2019,  2044,  2053,  2066,  2074,  2082,  2090,  2098,  2109,  2117,
    2124,  2133,  2134,  2140,  2147,  2148,  2158,  2166,  2172,  2183,
    2195,  2207,  2214,  2218,  2224,  2231,  2239,  2251,  2265,  2276,
    2284,  2295,  2303,  2307,  2316,  2330,  2339,  2359,  2385,  2398,
    2407,  2423,  2434,  2446,  2452,  2476,  2491,  2495,  2512,  2524,
    2564,  2571,  2581,  2588,  2595,  2602,  2609,  2616,  2626,  2630
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
  "RAW_STRING", "INTERPRETED_STRING", "BYTE_VAL", "IDENTIFIER", "ASSGN_OP",
  "$accept", "SourceFile", "OpenBlock", "CloseBlock", "PackageClause",
  "PackageName", "ImportDeclList", "ImportDecl", "ImportSpecList",
  "ImportSpec", "ImportPath", "TopLevelDeclList", "TopLevelDecl", "Block",
  "Condition", "StatementList", "Statement", "Declaration", "FunctionDecl",
  "MethodDecl", "LabeledStmt", "SimpleStmt", "EmptyStmt", "EmptyExpr",
  "ExpressionStmt", "IncDecStmt", "Assignment", "ShortVarDecl", "VarDecl",
  "VarSpecList", "VarSpec", "FunctionBody", "Signature", "Result",
  "TypeList", "Parameters", "ParameterList", "ParameterDecl",
  "IdentifierList", "Receiver", "CompositeLit", "LiteralType", "Type",
  "Operand", "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase",
  "FallthroughStmt", "IfStmt", "ForStmt", "forMarker", "forMarkerEnd",
  "Empty", "Expression", "UnaryExpr", "PrimaryExpr", "StructLiteral",
  "KeyValueList", "Selector", "Index", "Slice", "MakeExpr",
  "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl", "TypeSpec",
  "TypeDef", "MapType", "StructType", "FieldDeclList", "FieldDecl",
  "PointerType", "BaseType", "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
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

#define YYPACT_NINF -342

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-342)))

#define YYTABLE_NINF -196

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     4,    89,   106,  -342,  -342,  -342,   135,   271,    39,
     161,   391,   193,  -342,  -342,   193,  -342,  -342,  -342,   132,
     168,   124,   163,   210,   224,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,   395,   233,  -342,  -342,    19,  -342,  -342,   129,
     147,  -342,  -342,     9,   137,  -342,  -342,  -342,   235,  -342,
    -342,   259,  -342,  -342,   143,  -342,    96,   212,   212,    84,
     267,   229,   218,   137,   462,   223,  -342,   942,  -342,   226,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
     115,  -342,   232,   100,   232,  -342,   285,  -342,   -31,   137,
    -342,  -342,  -342,  -342,  -342,  -342,   238,   242,   244,    15,
      15,    15,    15,    15,   137,   942,  -342,  -342,   256,  -342,
     260,  1362,  -342,   308,  -342,  -342,  -342,  -342,  -342,  1469,
     257,   942,  -342,  -342,  -342,  -342,  -342,  -342,   137,  -342,
    -342,  -342,  -342,  -342,    96,   -25,   311,   265,   137,   137,
     128,   308,   308,   308,   256,   260,   308,   308,  -342,  1425,
     509,  -342,   942,  -342,   942,   942,   942,   942,   942,   942,
     942,   942,   942,   942,   942,   942,   942,   942,   942,   942,
     942,   942,   942,   137,   607,   654,   170,  -342,  -342,  -342,
    -342,  -342,   942,   257,   413,  -342,   205,  -342,   193,  -342,
     320,  -342,   137,   279,   209,  -342,  -342,  -342,  -342,   278,
     121,  -342,   282,  -342,  1266,  1291,   284,  -342,   350,   350,
    -342,  -342,  -342,   350,  1490,  1511,   274,   274,   274,   274,
     274,   274,  -342,  -342,  -342,  -342,  -342,  -342,    -1,   701,
    1182,   137,  -342,  1469,   277,   289,   942,  -342,   286,   748,
     291,  -342,   126,  -342,   345,   349,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,    94,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  1096,    82,  -342,   137,  -342,  -342,
    -342,  -342,  -342,   942,  -342,   558,   797,   942,  -342,   307,
    -342,  -342,  1210,  -342,   846,   322,  -342,  -342,   257,   989,
     989,   232,    88,   186,   353,  1027,  -342,   413,   319,   368,
    -342,   942,  -342,  -342,   942,  -342,  1128,  -342,  -342,  -342,
    -342,  1469,  1155,  -342,  -342,   942,  -342,  1238,  -342,   375,
    1050,  -342,   376,   381,  1073,  -342,   942,  -342,  -342,    90,
    -342,   331,   893,   116,  -342,  -342,  -342,   257,   257,  -342,
     942,   942,  1383,  -342,   942,   942,   380,   232,  -342,  -342,
    -342,   257,  -342,  -342,   413,   122,  1316,  -342,   144,  1447,
    -342,  -342,  1404,  1339,     0,  -342,  -342,   942,   942,   345,
    -342,   180,   195,  -342,  -342,  -342,   383,  -342,  -342,  -342,
     384,   387,  1469,  1469,  -342,  -342,   206,     0,  -342,  -342,
    -342,  -342,   989,   989,  -342,  -342,  -342,  -342,   232,   232,
     232,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   218,   219,     0,    11,    16,    17,     0,
       0,     0,     0,     2,     0,    20,    21,    22,    40,    39,
       8,    10,     0,     0,    15,    14,     0,     3,    80,     0,
       0,    79,    58,     0,     0,   197,   198,     7,     0,    19,
       9,     0,    13,    72,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    88,    62,
      89,    85,    87,    82,    84,    83,   199,    18,    12,    73,
       0,    77,     4,    66,    43,    59,     0,    61,     0,     0,
     208,   207,   212,   213,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   214,   211,     0,   168,
      91,     0,   161,   167,   169,    90,   210,   215,    78,   195,
      64,     0,    74,    76,     3,    42,    65,     4,     0,    67,
      69,    44,    60,   202,     0,     0,     0,     0,     0,     0,
       0,   164,   165,   166,     0,    91,   162,   163,    97,     0,
       0,    81,     0,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   171,   172,
     175,   173,     0,    63,    51,    41,     0,    71,   206,   201,
       0,   203,     0,     0,     0,    86,    91,    92,    94,   105,
       0,    98,     0,   100,   104,     0,     0,   148,   149,   150,
     152,   142,   147,   151,   154,   153,   155,   156,   159,   157,
     158,   160,   144,   143,   145,   146,   209,   192,     0,     0,
       0,     0,   179,   196,   108,   110,   106,     3,     3,    51,
       0,   127,    93,    36,     4,     0,    27,    28,    29,    46,
      47,    48,    49,    50,     0,    30,    31,    32,    33,    34,
     113,    35,    37,    38,    53,     0,    68,     0,   205,   204,
     200,   190,   189,     0,    95,     0,     0,     0,   176,     0,
     193,   182,     0,   180,     0,     0,   109,   111,   107,    51,
      51,     0,     0,    93,     0,   195,   112,    51,     0,     0,
      26,     0,    54,    55,     0,    70,     0,    96,    99,   105,
     101,   104,   177,   194,   181,     0,   183,     0,   191,     0,
     195,   139,     0,   141,   195,   140,     0,   126,   114,     0,
     123,     0,     0,     0,    45,    23,    25,    57,    56,   188,
       0,     0,     0,   184,     0,     0,     4,     0,   139,   139,
     134,   125,   118,   122,    51,     0,     0,   116,     0,     0,
     178,   185,     0,     0,     0,   128,   140,    52,     0,   124,
     115,     0,     0,   120,   187,   186,     4,     4,     4,     4,
       0,     0,    53,   141,   119,   117,     0,     0,   129,   131,
     130,   137,    51,    51,    51,   121,     4,     4,     0,     0,
       0,   133,   132,   140,   140,   140,     4,     4,     4,   135,
     136,   138
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -342,  -110,  -122,  -342,   398,  -342,   399,  -342,    13,
     219,  -342,   386,   -81,  -342,    53,  -232,    38,  -342,  -342,
    -342,  -237,  -275,  -342,    47,  -342,  -342,  -342,  -342,  -342,
     -15,   336,   357,  -342,  -342,   405,  -342,   348,    -9,  -342,
    -342,    80,   204,   292,   160,  -146,  -342,  -342,   150,  -342,
     155,  -342,  -342,  -342,  -342,  -342,  -342,  -316,  -322,  -342,
    -342,  -341,  -342,  -264,  -337,    54,   -64,  -342,   392,  -342,
      98,  -342,  -342,  -342,  -342,  -342,  -342,   -59,  -342,  -342,
    -342,  -342,  -342,  -342,   309,  -342,  -342,  -342,  -342,  -342,
      -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    57,   125,     3,    15,     9,    10,    32,    16,
      17,    23,    24,   243,   321,   244,   245,   246,    26,    27,
     247,   248,   249,   380,   250,   251,   252,   253,    28,    59,
      42,   127,    82,   129,   186,    83,    54,    55,   254,    39,
     107,   108,    90,   109,   110,   151,    71,   200,   201,   202,
     203,   255,   256,   257,   258,   259,   260,   329,   330,   331,
     261,   262,   263,   291,   350,   349,   119,   112,   113,   153,
     206,   177,   178,   179,   114,   180,   181,   265,    29,    45,
      46,    72,    73,   135,   136,    74,    91,    75,   115,   116,
     117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   126,   294,   126,   199,   185,    18,   353,   120,    18,
      18,    43,   299,    18,   184,   323,   237,   358,    92,    93,
      94,    95,    61,   378,    33,    60,   133,    56,    61,   379,
      18,    43,   189,   279,    62,     1,   353,    41,    96,   371,
      62,   149,    97,    41,    86,    51,   397,    25,    63,   353,
      43,    19,   319,   322,    63,   280,   386,   347,     8,    20,
     124,    25,   183,   182,   353,   334,   406,   407,   408,    21,
      64,    56,     4,    65,   105,    53,    64,    66,    67,   134,
      13,    14,   106,    66,   367,   368,   204,    41,   205,     6,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    61,
     326,   230,   326,    61,   327,   228,   327,     7,   233,   400,
     264,    62,   298,    68,    68,    62,   134,   289,   290,   199,
     309,    92,    93,    94,    95,    63,    68,   299,   326,    63,
      85,    61,   327,    68,   326,   328,   182,   352,   327,   301,
      61,   304,    41,    62,     8,   398,   399,    64,    65,   128,
      65,    64,    62,    68,    66,   282,   326,    63,    66,    68,
     327,   122,    30,   357,    47,   295,    63,   288,   274,   370,
     264,   -79,   144,    41,    68,   275,   268,   105,   297,    64,
     -79,    36,    44,    13,    14,   106,    66,    58,    64,    79,
      37,   373,   326,    70,    70,    66,   327,    80,    68,   306,
     325,   204,   311,   312,    68,    41,    70,   326,    68,    68,
     317,   327,    19,    70,   365,   320,   324,    40,   326,   231,
      20,    34,   327,   264,    35,    49,    41,   384,   232,   346,
      21,   -79,   337,    70,    52,   338,    77,    69,    76,    70,
     -79,   342,   385,    68,   388,   389,   390,   391,    13,    14,
      81,   266,   145,   395,    70,   272,   366,   351,   356,   267,
      78,    36,    68,   273,   401,   402,   359,   205,    87,    89,
     362,   363,   376,   377,   409,   410,   411,   130,    70,    88,
     264,   118,   124,   137,    70,   121,   132,   138,    70,    70,
     196,   139,   140,   382,   383,   264,   396,   154,   148,   155,
     156,    68,   157,   158,   159,   160,   150,   403,   404,   405,
     152,   182,   191,   192,   169,   170,   171,   172,   264,   264,
      11,   269,   187,    70,    12,   271,    13,    14,   188,     4,
    -103,   278,   193,   194,   276,   286,  -139,    68,    92,    93,
      94,    95,    70,   234,   235,   236,   -51,   287,    61,   296,
     300,   237,   238,   313,   332,    20,   239,   174,    96,   175,
      62,   176,    97,   240,   241,    21,   335,   226,   318,   336,
      99,   100,   101,   154,   102,   103,   345,   348,   157,   158,
     159,    70,   -46,   354,   364,   392,   270,   387,   393,     5,
     169,   170,   171,   172,   105,   124,    64,   369,    22,    48,
      13,    14,   106,   242,   381,    84,    92,    93,    94,    95,
     131,   234,   235,   236,    38,   308,    61,    70,   123,   237,
     238,   310,   195,    20,   239,   285,    96,   394,    62,   360,
      97,   240,   241,    21,   190,     0,     0,    31,    99,   100,
     101,    50,   102,   103,    12,     0,    13,    14,    12,     4,
      13,    14,     0,     4,     0,    92,    93,    94,    95,     0,
       0,   305,   105,   124,    64,    61,     0,     0,    13,    14,
     106,   242,     0,     0,     0,    96,     0,    62,     0,    97,
       0,   141,   142,   143,   146,   147,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
     104,   105,    61,    64,     0,     0,     0,    13,    14,   106,
      66,     0,    96,     0,    62,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,     0,   198,     0,   105,   150,
      64,    61,     0,     0,    13,    14,   106,    66,     0,     0,
       0,    96,     0,    62,     0,    97,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,   307,     0,   105,   150,    64,
      61,     0,     0,    13,    14,   106,    66,     0,     0,     0,
      96,     0,    62,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,     0,     0,   227,     0,     0,   105,    61,    64,     0,
       0,     0,    13,    14,   106,    66,     0,    96,     0,    62,
       0,    97,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,     0,   105,    61,    64,   229,     0,     0,    13,
      14,   106,    66,     0,    96,     0,    62,     0,    97,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,     0,     0,     0,     0,   281,
     105,    61,    64,     0,     0,     0,    13,    14,   106,    66,
       0,    96,     0,    62,     0,    97,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,   105,   292,    64,
      61,     0,     0,    13,    14,   106,   293,     0,     0,     0,
      96,     0,    62,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,     0,     0,   105,   150,    64,    61,
       0,     0,    13,    14,   106,    66,     0,     0,     0,    96,
       0,    62,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,   316,   105,    61,    64,     0,     0,
       0,    13,    14,   106,    66,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,     0,
       0,     0,   105,   355,    64,    61,     0,     0,    13,    14,
     106,    66,     0,     0,     0,    96,     0,    62,     0,    97,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
       0,   105,    61,    64,     0,     0,     0,    13,    14,   106,
      66,     0,    96,     0,    62,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
      64,     0,     0,     0,    13,    14,   106,   293,   302,   303,
     154,   -53,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   302,   303,   154,   -53,   155,   156,   333,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   302,   303,   154,     0,   155,   156,
     124,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   302,   303,   154,
       0,   155,   156,   -24,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -195,   154,     0,   155,   156,  -195,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,   339,     0,     0,     0,   154,     0,
     155,   156,   340,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   341,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,     0,
     283,     0,     0,   154,   284,   155,   156,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,     0,   314,     0,
       0,   154,   315,   155,   156,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,   343,     0,     0,   154,
     344,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,     0,   154,     0,   155,   156,  -102,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,     0,     0,   154,
       0,   155,   156,   277,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,   154,     0,   155,   156,   372,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,   154,     0,   155,   156,   124,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   154,     0,   155,   156,
     173,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   154,     0,   155,
     156,   361,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   154,     0,
     155,   156,   375,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
     154,   197,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,     0,   154,   374,   155,   156,     0,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   154,     0,   155,   156,     0,   157,   158,
     159,   160,     0,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   154,     0,   155,   156,     0,   157,
     158,   159,   160,     0,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172
};

static const yytype_int16 yycheck[] =
{
      64,    82,   239,    84,   150,   127,     8,   329,    67,    11,
      12,    20,   244,    15,   124,   290,    16,   333,     3,     4,
       5,     6,    13,   364,    11,    40,    57,    36,    13,   366,
      32,    40,    57,    34,    25,    15,   358,    68,    23,   355,
      25,   105,    27,    68,    59,    32,   387,     9,    39,   371,
      59,    12,   289,   290,    39,    56,   372,   321,    19,    20,
      60,    23,   121,    64,   386,   297,   403,   404,   405,    30,
      61,    80,    68,    64,    59,    56,    61,    68,    69,    88,
      65,    66,    67,    68,   348,   349,   150,    68,   152,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,    13,
      22,   175,    22,    13,    26,   174,    26,    11,   182,   394,
     184,    25,   244,    43,    44,    25,   135,   237,   238,   275,
     276,     3,     4,     5,     6,    39,    56,   369,    22,    39,
      56,    13,    26,    63,    22,    57,    64,    57,    26,    55,
      13,    69,    68,    25,    19,   392,   393,    61,    64,    59,
      64,    61,    25,    83,    68,   229,    22,    39,    68,    89,
      26,    56,    11,    57,    11,   239,    39,   236,    57,    57,
     244,    55,   102,    68,   104,    64,   188,    59,    62,    61,
      64,    59,    68,    65,    66,    67,    68,    68,    61,    56,
      68,    57,    22,    43,    44,    68,    26,    64,   128,   273,
     291,   275,   276,   277,   134,    68,    56,    22,   138,   139,
     284,    26,    12,    63,   346,   289,   290,    59,    22,    59,
      20,    12,    26,   297,    15,    11,    68,    57,    68,   320,
      30,    55,   301,    83,    11,   304,    11,    43,    44,    89,
      64,   315,    57,   173,   376,   377,   378,   379,    65,    66,
      56,    56,   102,    57,   104,    56,   347,   326,   332,    64,
      11,    59,   192,    64,   396,   397,   340,   341,    11,    61,
     344,   345,   363,   364,   406,   407,   408,    83,   128,    60,
     354,    68,    60,    89,   134,    69,    11,    59,   138,   139,
     140,    59,    58,   367,   368,   369,   387,    33,   104,    35,
      36,   231,    38,    39,    40,    41,    60,   398,   399,   400,
      60,    64,    11,    58,    50,    51,    52,    53,   392,   393,
      59,    11,   128,   173,    63,    56,    65,    66,   134,    68,
      62,    57,   138,   139,    62,    68,    60,   267,     3,     4,
       5,     6,   192,     8,     9,    10,    11,    68,    13,    68,
      11,    16,    17,    56,    11,    20,    21,    59,    23,    61,
      25,    63,    27,    28,    29,    30,    57,   173,    56,    11,
      35,    36,    37,    33,    39,    40,    11,    11,    38,    39,
      40,   231,    11,    62,    14,    11,   192,    14,    11,     1,
      50,    51,    52,    53,    59,    60,    61,   354,     9,    23,
      65,    66,    67,    68,   367,    58,     3,     4,     5,     6,
      84,     8,     9,    10,    19,   275,    13,   267,    80,    16,
      17,   276,   140,    20,    21,   231,    23,   383,    25,   341,
      27,    28,    29,    30,   135,    -1,    -1,    56,    35,    36,
      37,    56,    39,    40,    63,    -1,    65,    66,    63,    68,
      65,    66,    -1,    68,    -1,     3,     4,     5,     6,    -1,
      -1,   267,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    99,   100,   101,   102,   103,    34,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      58,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    57,    -1,    59,    60,
      61,    13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    57,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    56,    -1,    -1,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    59,    13,    61,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    59,    60,    61,    13,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    58,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    31,    32,
      33,    11,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    31,    32,    33,    11,    35,    36,    60,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    31,    32,    33,    -1,    35,    36,
      60,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    31,    32,    33,
      -1,    35,    36,    60,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    33,    -1,    35,    36,    69,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    -1,    -1,    33,    -1,
      35,    36,    64,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    64,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    33,    62,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    33,    62,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    33,
      62,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    62,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    62,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    33,    -1,    35,    36,    60,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    33,    -1,    35,    36,    60,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    33,    -1,    35,    36,
      58,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    33,    -1,    35,
      36,    58,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    33,    -1,
      35,    36,    58,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      33,    56,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    33,    56,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    33,    -1,    35,    36,    -1,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    33,    -1,    35,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   160,    12,
      20,    30,    77,    81,    82,    87,    88,    89,    98,   148,
      11,    56,    78,    79,    80,    80,    59,    68,   105,   109,
      59,    68,   100,   108,    68,   149,   150,    11,    82,    11,
      56,    79,    11,    56,   106,   107,   108,    72,    68,    99,
     100,    13,    25,    39,    61,    64,    68,    69,   111,   112,
     114,   116,   151,   152,   155,   157,   112,    11,    11,    56,
      64,   112,   102,   105,   102,    56,   100,    11,    60,    61,
     112,   156,     3,     4,     5,     6,    23,    27,    34,    35,
      36,    37,    39,    40,    58,    59,    67,   110,   111,   113,
     114,   136,   137,   138,   144,   158,   159,   160,    68,   136,
     147,    69,    56,   107,    60,    73,    83,   101,    59,   103,
     112,   101,    11,    57,   108,   153,   154,   112,    59,    59,
      58,   138,   138,   138,   111,   114,   138,   138,   112,   136,
      60,   115,    60,   139,    33,    35,    36,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    58,    59,    61,    63,   141,   142,   143,
     145,   146,    64,   147,    72,    73,   104,   112,   112,    57,
     154,    11,    58,   112,   112,   113,   114,    56,    57,   115,
     117,   118,   119,   120,   136,   136,   140,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   112,    56,   147,    62,
     136,    59,    68,   136,     8,     9,    10,    16,    17,    21,
      28,    29,    68,    83,    85,    86,    87,    90,    91,    92,
      94,    95,    96,    97,   108,   121,   122,   123,   124,   125,
     126,   130,   131,   132,   136,   147,    56,    64,   160,    11,
     112,    56,    56,    64,    57,    64,    62,    62,    57,    34,
      56,    58,   136,    58,    62,   112,    68,    68,   147,    72,
      72,   133,    60,    68,    91,   136,    68,    62,    73,    86,
      11,    55,    31,    32,    69,   112,   136,    57,   118,   115,
     120,   136,   136,    56,    58,    62,    58,   136,    56,    91,
     136,    84,    91,    92,   136,    83,    22,    26,    57,   127,
     128,   129,    11,    60,    86,    57,    11,   147,   147,    56,
      64,    64,   136,    58,    62,    11,    83,   133,    11,   135,
     134,   147,    57,   128,    62,    60,   136,    57,   127,   136,
     140,    58,   136,   136,    14,    73,    83,   133,   133,    85,
      57,   127,    60,    57,    56,    58,    83,    83,   131,   134,
      93,    94,   136,   136,    57,    57,   127,    14,    73,    73,
      73,    73,    11,    11,   135,    57,    83,   131,    91,    91,
      92,    73,    73,    83,    83,    83,   134,   134,   134,    73,
      73,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    91,    91,    91,    91,
      91,    92,    93,    94,    95,    95,    96,    97,    98,    98,
      99,    99,   100,   100,   100,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   106,   106,   107,   108,   108,
     109,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   113,   114,   115,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   129,   129,   130,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   133,
     134,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   140,   140,   141,
     142,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   145,   146,   146,   146,   147,   147,   148,   149,   150,
     151,   152,   152,   153,   153,   154,   154,   155,   156,   157,
     158,   158,   159,   159,   159,   159,   159,   159,   160,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     0,     2,     1,     3,     2,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     3,     2,
       1,     1,     1,     5,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     5,     4,     5,     3,     1,     1,     1,     1,
       1,     0,     0,     1,     2,     2,     3,     3,     2,     4,
       3,     2,     2,     4,     3,     1,     1,     2,     3,     1,
       3,     1,     2,     3,     4,     1,     3,     2,     3,     1,
       1,     2,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     4,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     2,     1,     3,     5,     4,     6,     4,     6,
       5,     7,     2,     1,     3,     2,     1,     1,     5,     7,
       7,     7,     9,     9,     4,    11,    11,     7,    11,     0,
       0,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     3,     3,     5,     2,
       3,     4,     3,     4,     5,     6,     7,     8,     6,     4,
       4,     4,     2,     3,     4,     1,     3,     2,     1,     2,
       5,     4,     3,     2,     3,     3,     2,     2,     1,     4,
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
        case 2:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children((yyvsp[-3].nt));
			 curr->add_non_terminal_children((yyvsp[-1].nt));
			 curr->add_non_terminal_children((yyvsp[0].nt));
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			 (yyval.nt) = curr;
			 dump_dot_file("ast.dot", (yyval.nt));
			}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "src/parser.y" /* yacc.c:1646  */
    {
		st->exit_latest_scope();
	}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 98 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PackageClause");
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 107 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 131 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 137 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 141 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 150 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 184 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 193 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		(curr->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 218 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TopLevelDecl");
		cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 226 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 236 "src/parser.y" /* yacc.c:1646  */
    {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 246 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 265 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = new NodeData("list");
		cout<<"HERE\n";
		if((yyvsp[-1].nt)->current_node_data==NULL){
			cout<<"NO AST found here! Exiting........";
			exit(1);
		}
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 281 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 289 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 297 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		cout<<"Statement:	SimpleStmt\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 305 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 312 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 319 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 326 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 333 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 340 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 347 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 354 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 361 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 371 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 378 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 398 "src/parser.y" /* yacc.c:1646  */
    {

		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);
		(yyval.nt)-> current_node_data = new NodeData("Function-" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 410 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function-"+ string((yyvsp[-3].sval)));
	}
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 421 "src/parser.y" /* yacc.c:1646  */
    {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 428 "src/parser.y" /* yacc.c:1646  */
    {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 450 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 456 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 463 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 469 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 475 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 483 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 489 "src/parser.y" /* yacc.c:1646  */
    {   // For infinite looping
		(yyval.nt) = new Node("EmptyExpr");
		(yyval.nt)->current_node_data = new NodeData("true");
		(yyval.nt)->current_type = new BasicType("bool");
	}
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 497 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 507 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 515 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 525 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[-2].nt)->current_node_data;

		while(left_data || right_type){
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}
			string name = left_data->data_name;
			if(!left_data->value && left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(left_data -> value){
				name = (left_data->node_child)? left_data->node_child->data_name:left_data->data_name;
			}

			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->get_type(name)){
				cout<<"[Undeclared Identifier]"<<name<<" not declared yet!";
				exit(1);
			}
			else{
				if(left_type->getDataType() != right_type->getDataType()){
					cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
					exit(1);
				}
			}
			left_data = left_data->next_data;
			left_type = left_type->next_type;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
		}

		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight->node_child = (yyvsp[0].nt)->current_node_data;
		parLeft->next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 583 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ShortVarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		bool newVar = false;

		while(left_data || right_type){
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}

			string name = left_data->data_name;
			if(!left_data->value && left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(left_data -> value){
				name = (left_data->node_child)? left_data->node_child->data_name:left_data->data_name;
			}

			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(st->scope_level(name)==0){
				if(st->get_type(name) -> getDataType() != right_type->getDataType()){
					cout<<"[Type Mismatch]"<<name<<" has different types on LHS and RHS";
					exit(1);
				}
			}
			else{
				newVar = true;
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}

			left_data = left_data -> next_data;
			right_type = right_type->next_type;
			right_data = right_data? right_data->next_data:right_data;
		}
		if(!newVar){
			cout<<"No new variables found to left of :="<<endl;
			exit(1);
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight->node_child = (yyvsp[0].nt)->current_node_data;
		parLeft->next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = parLeft;

	}
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 648 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 654 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 663 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarSpecList");

		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		// might need to add type checks
	}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 672 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 681 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData *curr = (yyvsp[-1].nt)->current_node_data;
		while(curr){
			if(st->scope_level(curr->data_name)==0){
				cout<<"("<<curr->data_name<<") is already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},(yyvsp[0].nt)->current_type);
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			curr = curr->next_data;
		}

		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 699 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData *curr = (yyvsp[-3].nt)->current_node_data;
		while(curr){
			if(!st->scope_level(curr->data_name)){
				cout<<curr->data_name<<" already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},(yyvsp[-2].nt)->current_type);
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
			curr = curr->next_data;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-3].nt)->current_node_data;
		parRight -> node_child = (yyvsp[0].nt)->current_node_data;
		parLeft -> next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData("=");
		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 723 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		bool newVar = false;
		while(left_data || right_type || right_data){
			if(!left_data || !right_type || !right_data){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";

				exit(1);
			}

			string name = left_data->data_name;
			if(left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->scope_level(name)){
				cout<<"Redeclaration of variable: "<<name<<endl;
				exit(1);
			}
			else{
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}

			left_data = left_data -> next_data;
			right_type = right_type -> next_type;
			right_data = right_data? right_data->next_data : right_data;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight -> node_child = (yyvsp[0].nt)->current_node_data;
		parLeft -> next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(":=");
		(yyval.nt)->current_node_data->node_child = parLeft;

	}
#line 2765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 794 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 803 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Signature: Parameters\n";
		(yyval.nt) = new Node("Signature");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_node_data = new NodeData("params");
		(yyval.nt) -> current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) -> current_node_data -> next_data = new NodeData("return");
		(yyval.nt) -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = (yyvsp[0].nt) -> current_type;
		NodeData* dcurr = (yyvsp[0].nt) -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}
		(yyval.nt) -> current_type = new FunctionType(arguments,return_types);

	}
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 829 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Signature");
		cout<<"Signature: Parameters Result\n";
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_node_data = new NodeData("params");
		(yyval.nt) -> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) -> current_node_data -> next_data = new NodeData("return");
		(yyval.nt) -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = (yyvsp[-1].nt) -> current_type;
		NodeData* dcurr = (yyvsp[-1].nt) -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}

		curr = (yyvsp[0].nt)->current_type;
		while(curr){
			DataType *temp = curr->copyClass();
			temp->next_type = NULL;
			return_types.push_back(temp);
			curr=curr->next_type;
		}

		(yyval.nt) -> current_type = new FunctionType(arguments,return_types);
	}
#line 2847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 867 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 2858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 873 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 2869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 882 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 2883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 891 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 2894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 900 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = NULL;
		(yyval.nt)-> current_type = NULL;
	}
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 906 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 913 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 2928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 922 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 2939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 928 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
	}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 940 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ParameterDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		NodeData *data = (yyvsp[-1].nt) -> current_node_data;
		DataType *type = (yyvsp[0].nt) -> current_type -> copyClass();
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		(yyval.nt)->current_node_data = data;

		while(data){
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, (yyvsp[0].nt)->current_type);
			type->next_type = (data->next_data)? type->copyClass(): NULL;
			type = type->next_type;
			data = data->next_data;
		}
	}
#line 2978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 963 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        ((yyvsp[-2].nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));

	}
#line 2993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 973 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 982 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 989 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.nt) = new Node("CompositeLit");

    }
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 996 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1002 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1008 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1014 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1020 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1025 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1034 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1040 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1049 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1055 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1062 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1071 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"OperandName:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		(yyval.nt) = new Node("OperandName");
		cout<<"OperandName2:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		cout<<"OperandName3:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";

		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data->value = true;
		cout<<"OperandName4:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";

		(yyval.nt)->current_type = st->get_type(string((yyvsp[0].sval)))?st->get_type(string((yyvsp[0].sval))):new BasicType("undefined");
		cout<<"OperandName5:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";

	}
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1089 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1093 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1099 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1107 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new SliceType((yyvsp[0].nt)->current_type);
        (yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
		;}
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1116 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1123 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1139 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1146 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;

	}
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1156 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1161 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1169 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1176 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1187 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> current_node_data = new NodeData(string((yyvsp[0].sval)));

	}
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1192 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;

	}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1203 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		// break labels
		(yyval.nt) = curr;
	}
#line 3336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1209 "src/parser.y" /* yacc.c:1646  */
    {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1220 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1225 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// check this reason
		curr->current_node_data->node_child =  new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1236 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// still remaining
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3384 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1251 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3390 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1252 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3396 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1253 "src/parser.y" /* yacc.c:1646  */
    { ;}
#line 3402 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1254 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3408 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1255 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3414 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1256 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3420 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1257 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1258 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1262 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1267 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1273 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ExprCaseClause");
		(yyval.nt) -> add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1281 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ExprSwitchCase");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1285 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ExprSwitchCase");
	}
#line 3478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1291 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("FallthroughStmt");
	}
#line 3486 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1297 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data =new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("Condition");
		it = it->node_child;
		it->node_child = (yyvsp[-2].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-2].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-2].nt)->current_type->getDataType()<<endl;
			exit(1);
		}
	}
#line 3509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1315 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data =new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it = it->node_child;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = (yyvsp[-2].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-2].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-2].nt)->current_type->getDataType()<<endl;
			exit(1);
		}
	}
#line 3536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1337 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data = new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-3].nt)->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-4].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-4].nt)->current_type->getDataType()<<endl;
			exit(1);
		}

	}
#line 3563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1359 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data = new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-3].nt)->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-4].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-4].nt)->current_type->getDataType()<<endl;
			exit(1);
		}

	}
#line 3590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1381 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-6].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data = new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it=it->node_child;
		it->node_child = (yyvsp[-6].nt)->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-3].nt)->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-4].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-4].nt)->current_type->getDataType()<<endl;
			exit(1);
		}
	}
#line 3620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1406 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("IfStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-6].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) -> current_node_data = new NodeData("If");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it=it->node_child;
		it->node_child = (yyvsp[-6].nt)->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = (yyvsp[-3].nt)->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = (yyvsp[-1].nt)->current_node_data;

		if((yyvsp[-4].nt)->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<(yyvsp[-4].nt)->current_type->getDataType()<<endl;
			exit(1);
		}
	}
#line 3650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1435 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 3665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1445 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-8].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-5].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = (yyvsp[-2].nt)->current_node_data;

	}
#line 3682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1457 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-8].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-5].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));

		(yyval.nt) -> current_node_data = new NodeData("For");
		NodeData* it= (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = (yyvsp[-2].nt)->current_node_data;
	}
#line 3699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1469 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-4].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> current_node_data = new NodeData("For");
		NodeData* it= (yyval.nt)->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = (yyvsp[-4].nt)->current_node_data;
		it->next_data= new NodeData("ForBody");
		it = it->next_data;
		it->node_child= (yyvsp[-2].nt)->current_node_data;
	}
#line 3717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1482 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-8].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-5].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));

		(yyval.nt) -> current_node_data = new NodeData("For");
		NodeData* it= (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = (yyvsp[-2].nt)->current_node_data;
	}
#line 3734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1506 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("");
		bl -> add_new_break_label();
	}
#line 3743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1514 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("");
		bl -> remove_last_break_label();
	;
	}
#line 3753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1522 "src/parser.y" /* yacc.c:1646  */
    {

	}
#line 3761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1561 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;

		}
#line 3793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1588 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1613 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1639 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1665 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1690 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_bitwise");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1715 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_bitwise");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 3976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1741 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 4006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1766 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 4036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1791 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_bitwise");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;

		}
#line 4067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1817 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		}
#line 4097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1842 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");

		}
#line 4128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1868 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1893 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1919 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1944 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1969 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1994 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2019 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));


			(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)) + "binary_op");
			(yyval.nt)->current_node_data -> node_child = (yyvsp[-2].nt)->current_node_data;
			(yyval.nt)->current_node_data->last_next_child()->next_data = (yyvsp[0].nt)->current_node_data;

			if(!(yyvsp[-2].nt)->current_type || !(yyvsp[0].nt)->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if((yyvsp[-2].nt)->current_type->getDataType() != (yyvsp[0].nt)->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<(yyvsp[-2].nt)->current_type->getDataType() <<" and "<<(yyvsp[0].nt)->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string((yyvsp[-1].sval));
			(yyval.nt)->current_type = new BasicType("bool");
		}
#line 4339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2044 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		}
#line 4350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2053 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("*unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		if((yyvsp[0].nt)->current_type->current_data_type != _POINTER){
			cout<<"Can not dereference a non-pointer! Exiting..."<<endl;
			exit(1);
		}
		(yyval.nt)->current_type = static_cast<PointerType*>((yyvsp[0].nt)->current_type)->type_of_address_pointing_to->copyClass();
	}
#line 4368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2066 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("&unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = new PointerType((yyvsp[0].nt)->current_type);
		}
#line 4381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2074 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("+unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2082 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("-unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2090 "src/parser.y" /* yacc.c:1646  */
    {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("!unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4420 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2098 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 4431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2109 "src/parser.y" /* yacc.c:1646  */
    {
 		cout<<" PrimaryExpr: Operand \n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4444 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2117 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4456 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2124 "src/parser.y" /* yacc.c:1646  */
    {
 		cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		// still remaining
		// curr->current_type = isValidMemberon($1->current_type)
		(yyval.nt) = curr;
	}
#line 4470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2133 "src/parser.y" /* yacc.c:1646  */
    {cout<<"PrimaryExpr:Index\n";}
#line 4476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2134 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2140 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2147 "src/parser.y" /* yacc.c:1646  */
    {cout<<"PrimaryExpr:StructLiteral\n";}
#line 4505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2148 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2158 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2166 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2172 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2183 "src/parser.y" /* yacc.c:1646  */
    {
		cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 4564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2195 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2207 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 2214 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 4599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2218 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 4610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2224 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2231 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2239 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 2251 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-5].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-3].nt)->current_node_data;
		curr->current_node_data->node_child->next_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 2265 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 4684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 2276 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 2284 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 4710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 2295 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 2303 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 4729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 2307 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 2316 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 2330 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 2339 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 2359 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 4801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 2385 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) = new Node("TypeSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 4810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 2398 "src/parser.y" /* yacc.c:1646  */
    {
		(yyval.nt) =  new Node("TypeDef");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		tt->add_in_type_table(string((yyvsp[-1].sval)), (yyvsp[0].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("TypeDef");
	}
#line 4821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 2407 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MapType");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType *key, *value;
		key = (yyvsp[-2].nt)->current_type;
		value = (yyvsp[0].nt)->current_type;

		curr->current_type = new MapType(key,value);
		(yyval.nt) = curr;
	}
#line 4839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2423 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2434 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 4868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2446 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2452 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;

		map< string, DataType*> mem1 = ((StructType*)(yyvsp[-2].nt)->current_type)->data_of_struct;
		map< string, DataType*> mem2 = ((StructType*)(yyvsp[-1].nt)->current_type)->data_of_struct;

		for(auto& it: mem2) {
            string key = it.first;
			DataType* value = it.second->copyClass();
//            if(mem1.find(key) == mem1.end()) {
// Remaining                ("Redeclaration of struct member: ", key, @2);
//            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		(yyval.nt) = curr;
	}
#line 4904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2476 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[-1].nt)->current_type;
//		tp->next = NULL;

		NodeData* lp = (yyvsp[-2].nt)->current_node_data;



		(yyval.nt) = curr;
		}
#line 4924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 2495 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		if((yyvsp[0].nt)->current_type->getDataType() == "undefined")
		{
			(yyvsp[0].nt)->current_type = new BasicType((yyvsp[0].nt)->current_node_data->data_name);
		}
		curr-> current_type = new PointerType((yyvsp[0].nt)->current_type->copyClass());
		(yyval.nt) = curr;
	}
#line 4943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 2512 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2524 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children((yyvsp[-2].nt));
		 curr->add_non_terminal_children((yyvsp[0].nt));

		 bool is_basic = false;
		 int val_stored = 0;
		 if((yyvsp[-2].nt)->current_type->getDataType() == "int")
		 {
			 Node* iter = (yyvsp[-2].nt);
			 while(iter != NULL && iter->current_node_children.size() == 1)
			 {
				 if(iter->node_name == "BasicLit")
				 {
					 is_basic = true;
					 val_stored = stoi(iter->current_node_data->data_name);
					 break;
				 }
				 iter = iter->current_node_children[0].non_terminal_node;
			 }
			 if(is_basic)
			 {
				 DataType* tp = (yyvsp[0].nt)->current_type->copyClass();
				 curr->current_type = new ArrayType(tp, val_stored);
			 }
			 else
			 {
				 cout<<"the array indices are not literals\n";
			 }
		 }
		 else
		 {
			 cout<<"The array indices is not an integer";
		 }
		 (yyval.nt) = curr;
		 }
#line 4998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 2564 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2571 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2581 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 5034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2588 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 5046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2595 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 5058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 2602 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		 }
#line 5070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 2609 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2616 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2626 "src/parser.y" /* yacc.c:1646  */
    { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 5103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 2630 "src/parser.y" /* yacc.c:1646  */
    { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 5112 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 5116 "parser.tab.c" /* yacc.c:1646  */
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
#line 2636 "src/parser.y" /* yacc.c:1906  */






int main (int argc, char **argv) {

	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
