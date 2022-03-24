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
#line 26 "src/parser.y" /* yacc.c:355  */

	#include "node.hpp"

#line 124 "parser.tab.c" /* yacc.c:355  */

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
#line 30 "src/parser.y" /* yacc.c:355  */

	Node* nt;
	char* sval;

#line 211 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

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
       0,    71,    71,    73,    74,    75,    85,    89,    93,    94,
      98,    99,   100,   104,   105,   109,   110,   111,   115,   119,
     120,   124,   125,   126,   130,   134,   138,   139,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     158,   159,   160,   164,   165,   169,   173,   174,   178,   182,
     186,   187,   188,   189,   190,   193,   197,   201,   202,   206,
     210,   214,   215,   216,   220,   221,   225,   226,   227,   231,
     232,   233,   237,   238,   242,   243,   244,   248,   252,   253,
     256,   257,   261,   262,   263,   267,   268,   272,   273,   274,
     278,   279,   283,   287,   291,   292,   293,   294,   295,   296,
     300,   301,   305,   306,   307,   311,   315,   316,   317,   321,
     325,   332,   347,   354,   363,   368,   376,   383,   393,   394,
     399,   405,   417,   422,   432,   442,   446,   447,   448,   449,
     450,   451,   452,   453,   457,   458,   461,   465,   466,   470,
     474,   475,   476,   477,   478,   479,   483,   484,   485,   486,
     490,   491,   495,   505,   516,   517,   518,   521,   524,   527,
     530,   533,   536,   539,   542,   545,   548,   551,   554,   557,
     560,   563,   566,   569,   572,   575,   578,   584,   587,   590,
     593,   596,   599,   607,   614,   621,   628,   629,   635,   642,
     643,   652,   660,   666,   677,   688,   700,   706,   710,   716,
     723,   731,   743,   755,   765,   773,   784,   792,   796,   805,
     817,   826,   842,   843,   847,   848,   852,   853,   857,   861,
     865,   881,   892,   904,   910,   933,   952,   974,   993,  1005,
    1017,  1024,  1034,  1041,  1048,  1055,  1062,  1069,  1079,  1083
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
  "$accept", "SourceFile", "PackageClause", "PackageName",
  "ImportDeclList", "ImportDecl", "ImportSpecList", "ImportSpec",
  "ImportPath", "TopLevelDeclList", "TopLevelDecl", "Block", "Condition",
  "StatementList", "Statement", "Declaration", "FunctionDecl",
  "FunctionName", "MethodDecl", "LabeledStmt", "Label", "SimpleStmt",
  "EmptyStmt", "ExpressionStmt", "IncDecStmt", "Assignment",
  "ShortVarDecl", "VarDecl", "VarSpecList", "VarSpec", "ConstDecl",
  "ConstSpecList", "ConstSpec", "FunctionBody", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "IdentifierList",
  "Receiver", "CompositeLit", "LiteralType", "Type", "Operand",
  "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase",
  "FallthroughStmt", "IfStmt", "ForStmt", "ForClause", "InitStmt",
  "PostStmt", "RangeClause", "Expression", "UnaryExpr", "PrimaryExpr",
  "StructLiteral", "KeyValueList", "Selector", "Index", "Slice",
  "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl",
  "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef", "MapType",
  "StructType", "FieldDeclList", "FieldDecl", "PointerType", "BaseType",
  "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
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

#define YYPACT_NINF -358

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-358)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -55,    50,    73,  -358,  -358,  -358,   324,    71,   410,
     113,   145,   168,   324,    75,   104,    88,  -358,  -358,  -358,
    -358,  -358,  -358,   194,  -358,    79,  -358,    49,   340,     3,
    -358,  -358,     3,  -358,  -358,  -358,   -48,  -358,  -358,    26,
     -23,  -358,    39,   112,    57,  -358,  -358,  -358,   175,   104,
    -358,   190,  -358,   272,  -358,    58,  -358,   181,   157,   208,
      79,  -358,   402,   219,  -358,  -358,  -358,     7,   230,   213,
     158,   272,   535,   206,  -358,  1217,  -358,   222,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,    20,   266,  1217,   240,    59,
     278,   272,  -358,  -358,  -358,  -358,  -358,   198,   272,  -358,
     486,  -358,  -358,  -358,  -358,  -358,   157,  -358,   288,  -358,
    -358,   299,  -358,    63,   272,  -358,  -358,  -358,  -358,  -358,
    -358,   265,   268,   287,  1217,  1217,  1217,  1217,  1217,   272,
    1217,  -358,  -358,   277,  -358,   289,  1662,  -358,   262,  -358,
    -358,  -358,  -358,  -358,  1769,   286,  1217,  -358,   342,  -358,
     286,  1217,  -358,   344,  -358,  -358,  -358,  -358,  -358,   283,
     283,  1217,  1264,   586,   733,   283,  -358,    80,  -358,   354,
     350,  -358,  -358,   303,  -358,  -358,  -358,  -358,  -358,  -358,
     191,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    1396,   171,  -358,  -358,  -358,  -358,   239,    72,   355,   311,
     272,   272,  1289,  -358,  -358,  -358,   277,   289,  -358,  -358,
    -358,  1725,   635,  -358,  1217,  -358,  1217,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,  1217,
    1217,  1217,  1217,  1217,  1217,   272,   782,   829,   192,  -358,
    -358,  -358,  -358,  -358,  1217,   286,  -358,   286,  -358,  -358,
    -358,  -358,   286,   216,   365,  1327,  1217,  -358,   157,  -358,
     220,   157,   377,   157,  1350,   244,     4,   381,  1373,  -358,
    -358,   384,  -358,   486,  1217,  -358,  -358,  1217,     3,  -358,
     390,  -358,   272,   346,   134,  -358,  -358,  -358,  -358,   348,
     282,  -358,   356,  -358,  1566,  1591,   352,  -358,   347,   347,
    -358,  -358,  -358,   347,  1790,  1811,   279,   279,   279,   279,
     279,   279,  -358,  -358,  -358,  -358,  -358,  -358,    45,   876,
    1482,   272,  -358,  1769,  1217,   398,  1769,  -358,   927,  -358,
     974,  -358,  1025,  1217,  -358,  -358,   110,  -358,   370,  1072,
     111,  -358,  -358,   286,   286,  -358,  -358,  -358,  -358,  -358,
    1217,  -358,   684,  1121,  1217,  -358,   360,  -358,  -358,  1510,
    -358,  1170,   361,  1616,     0,  1217,  1264,   393,  1769,  1217,
     286,  -358,  -358,   486,   152,  1639,  -358,   165,  1428,  -358,
    -358,  -358,  -358,  1769,  1455,  -358,  -358,  1217,  -358,  1538,
    -358,   413,  -358,  -358,  1769,  -358,  -358,  1264,  1769,   420,
    -358,   166,   167,  -358,  -358,  1217,  1217,  1683,  -358,  1217,
       0,  -358,  -358,  -358,   186,  1747,  -358,  -358,  1704,  -358,
    -358,  -358,  -358,  -358
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     6,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    21,    22,    23,
      41,    42,    40,     0,    45,     0,    92,     0,     0,     0,
     238,   239,     0,    12,    17,    18,     0,    91,    61,     0,
       0,    69,     0,     0,     0,   213,   216,   217,     0,     5,
       9,     0,    20,     0,    82,     0,    85,     0,    44,    78,
       0,    11,     0,     0,    16,    15,    63,     0,     0,     0,
       0,     0,     0,     0,   105,     0,   100,    66,   101,    97,
      99,    94,    96,    95,    71,     0,     0,     0,    74,     0,
       0,     0,   219,     8,    19,    89,    83,     0,     0,    87,
      55,    77,    43,    79,    80,    81,    46,    10,     0,    14,
      62,     0,    65,     0,     0,   228,   227,   232,   233,   236,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   231,     0,   183,   103,     0,   176,   182,   184,
     102,   230,   235,    90,   210,    68,     0,    70,     0,    73,
      76,     0,   212,     0,   215,   218,    84,    86,    88,   120,
     122,   118,    55,    55,    55,     0,   139,   105,    37,    55,
       0,    28,    29,     0,    30,    50,    51,    52,    53,    54,
       0,    31,    32,    33,    34,    35,   125,    36,    38,    39,
      56,     0,    47,    13,    64,   222,     0,     0,     0,     0,
       0,     0,     0,   179,   180,   181,     0,   103,   177,   178,
     109,     0,     0,    93,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     186,   187,   190,   188,     0,    67,    72,    75,   214,    49,
     121,   123,   119,   105,     0,   210,     0,   146,     0,   152,
       0,     0,     0,     0,   210,     0,     0,     0,   210,   124,
      24,     0,    27,    55,     0,    57,    58,     0,   226,   221,
       0,   223,     0,     0,     0,    98,   103,   104,   106,   117,
       0,   110,     0,   112,   116,     0,     0,   163,   164,   165,
     167,   157,   162,   166,   169,   168,   170,   171,   174,   172,
     173,   175,   159,   158,   160,   161,   229,   207,     0,     0,
       0,     0,   194,   211,     0,   140,   154,   148,     0,   147,
       0,   149,     0,     0,   138,   126,     0,   135,     0,     0,
       0,    26,    48,    60,    59,   225,   224,   220,   205,   204,
       0,   107,     0,     0,     0,   191,     0,   208,   197,     0,
     195,     0,     0,     0,     0,     0,    55,     0,    25,     0,
     137,   130,   134,    55,     0,     0,   128,     0,     0,   108,
     111,   117,   113,   116,   192,   209,   196,     0,   198,     0,
     206,   141,   143,   142,   155,   153,   150,    55,   156,   136,
     127,     0,     0,   132,   203,     0,     0,     0,   199,     0,
       0,   151,   131,   129,     0,     0,   193,   200,     0,   145,
     144,   133,   202,   201
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,  -358,   433,  -358,   422,  -358,   -13,   229,   425,
       6,   -58,   109,    69,  -160,    70,  -358,  -358,  -358,  -358,
     182,  -159,  -358,  -358,  -358,  -358,  -358,  -358,  -358,    -5,
    -358,  -358,   -29,   345,   386,  -358,    -2,  -358,   364,   159,
    -358,  -358,   -17,   172,   250,   -25,  -188,  -358,  -358,   101,
    -358,   118,  -358,  -358,  -358,  -358,  -358,  -358,  -330,  -334,
    -358,  -358,  -357,  -358,  -358,  -358,    65,  -358,   -71,   403,
    -358,  -358,    60,  -358,  -358,  -358,  -358,  -358,  -358,   -40,
    -358,  -358,   -31,  -358,  -358,  -358,  -358,  -358,   267,  -358,
    -358,  -358,  -358,  -358,     9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    32,    13,    14,    62,    33,    34,    15,
      16,   168,   258,   169,   170,   171,    18,    25,    19,   172,
     173,   174,   175,   176,   177,   178,   179,    20,    67,    38,
      21,    85,    41,   102,    58,   103,    59,    55,    56,   180,
      27,   132,   133,   115,   134,   135,   213,    79,   290,   291,
     292,   293,   181,   182,   183,   184,   185,   186,   336,   337,
     338,   187,   188,   189,   261,   262,   396,   263,   144,   137,
     138,   215,   296,   239,   240,   241,   139,   242,   243,   191,
      22,    89,    45,    46,    47,    80,    81,   197,   198,    82,
     116,    83,   140,   141,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,   136,   372,   254,   259,   267,    26,   393,    66,   271,
     377,    86,    90,     4,    78,    63,   162,    78,    35,    78,
      37,    51,    76,     1,   289,    76,   333,    76,    78,   190,
     334,    68,    78,    84,    78,   145,    76,    35,    35,    69,
      76,    35,    76,   372,   401,    37,    78,   150,   101,   108,
       6,    70,    69,   420,    76,    51,   148,   104,   153,   211,
     100,   335,   111,   110,    70,    71,    78,   372,    30,    31,
      69,    35,   414,    78,    76,    37,   147,    17,    71,   356,
     372,    76,    70,    17,     7,    17,    50,    72,    37,    78,
      73,   255,   264,   268,    74,    75,    71,    76,   190,    52,
      72,   357,   207,    73,    78,   257,   245,    74,    87,   244,
     206,   247,    76,   342,    96,   152,     8,    60,    72,    17,
     195,   252,    97,   265,    10,    74,    91,    44,    11,   279,
      23,    37,   333,   333,    12,   -91,   334,   334,    23,    24,
      37,   294,   -49,   295,   -91,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   289,   381,   320,   371,   376,    39,
      42,    78,    36,   323,   333,    78,    78,   286,   334,    76,
      44,    37,    57,    76,    76,   326,    93,   333,   333,   333,
     349,   334,   334,   334,    69,    39,   318,   325,   350,    42,
     327,    94,   190,   329,    40,   331,    70,   395,   333,   400,
      78,    77,   334,    37,    88,    98,    92,   100,    76,   114,
      71,    69,   403,   412,   413,    95,    39,    43,    53,    99,
     109,   105,    53,    70,   343,   244,    44,   344,   395,   271,
     277,   112,    72,   421,    42,    73,   274,    71,   359,    74,
      54,   321,    69,   363,   156,    73,    57,    78,    64,   368,
     322,    65,    37,   155,    70,    76,    37,    23,   375,    72,
     158,   -91,   196,   113,   143,   328,    74,   149,    71,   378,
     -91,   294,   383,   384,    73,    69,   199,   345,   343,   154,
     389,   146,   344,   370,   394,   190,    78,    70,   398,   193,
      72,   210,   190,    73,    76,   391,   392,    74,   244,   151,
     194,    71,   216,   332,   217,   218,   407,   219,   220,   221,
     222,   236,   260,   237,   200,   238,   190,   201,   190,   231,
     232,   233,   234,    72,   415,   295,     8,   212,   418,   351,
      74,   250,   251,     9,    10,   202,   352,   269,    11,   214,
     244,   249,   419,   246,    12,   248,   196,   117,   118,   119,
     120,   272,   159,   160,   161,   273,   281,    69,   278,   282,
     162,   163,   283,   284,    10,   164,   324,   121,    11,    70,
     216,   122,   165,   166,    12,   219,   220,   221,   330,   124,
     125,   126,   339,   127,   128,   341,    61,   231,   232,   233,
     234,   346,   348,    29,   397,    30,    31,   316,     4,   355,
    -115,   270,   364,   130,   100,    72,   385,   390,   353,    30,
      31,   131,   167,   117,   118,   119,   120,   410,   159,   160,
     161,   -55,   373,    69,     5,    48,   162,   163,    49,   367,
      10,   164,   399,   121,    11,    70,   106,   122,   165,   166,
      12,   192,   285,   380,   347,   124,   125,   126,   107,   127,
     128,   157,   411,     0,   280,    29,   416,    30,    31,    28,
       4,   382,     0,    29,     0,    30,    31,     0,     4,   130,
     100,    72,     0,     0,     0,    30,    31,   131,   167,   117,
     118,   119,   120,   362,   159,   160,   161,     0,     0,    69,
       0,     0,   162,   163,     0,     0,    10,   164,     0,   121,
      11,    70,     0,   122,   165,   166,    12,     0,     0,     0,
       0,   124,   125,   126,     0,   127,   128,   203,   204,   205,
     208,   209,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,     0,     0,     0,   130,   100,    72,    69,     0,
       0,    30,    31,   131,   167,     0,     0,     0,   121,     0,
      70,     0,   122,     0,     0,     0,     0,     0,     0,   123,
     124,   125,   126,     0,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   129,   130,     0,    72,     0,     0,    69,
      30,    31,   131,    74,   256,     0,     0,     0,     0,   121,
       0,    70,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,     0,   127,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,     0,     0,     0,   130,   100,    72,    69,     0,
       0,    30,    31,   131,   253,     0,     0,     0,   121,     0,
      70,     0,   122,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,     0,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,     0,   288,     0,   130,   212,    72,    69,     0,     0,
      30,    31,   131,    74,     0,     0,     0,   121,     0,    70,
       0,   122,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,     0,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,   118,   119,   120,
       0,   379,     0,   130,   212,    72,    69,     0,     0,    30,
      31,   131,    74,     0,     0,     0,   121,     0,    70,     0,
     122,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,     0,   127,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,     0,
       0,     0,   130,   266,    72,    69,     0,     0,    30,    31,
     131,   253,     0,     0,     0,   121,     0,    70,     0,   122,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   126,
       0,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   118,   119,   120,     0,     0,   317,     0,
       0,   130,    69,    72,     0,     0,     0,    30,    31,   131,
      74,     0,   121,     0,    70,     0,   122,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,     0,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,     0,     0,     0,     0,     0,   130,    69,
      72,   319,     0,     0,    30,    31,   131,    74,     0,   121,
       0,    70,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,     0,   127,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   358,   130,     0,    72,     0,     0,
      69,    30,    31,   131,    74,   365,     0,     0,     0,     0,
     121,     0,    70,     0,   122,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,     0,   127,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,     0,     0,     0,     0,   366,   130,    69,    72,     0,
       0,     0,    30,    31,   131,    74,     0,   121,     0,    70,
       0,   122,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,     0,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,     0,   130,     0,    72,     0,     0,    69,    30,
      31,   131,    74,   369,     0,     0,     0,     0,   121,     0,
      70,     0,   122,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,     0,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,     0,
       0,     0,     0,     0,   130,    69,    72,     0,     0,     0,
      30,    31,   131,    74,     0,   121,     0,    70,     0,   122,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   126,
       0,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,     0,     0,
       0,   130,   374,    72,    69,     0,     0,    30,    31,   131,
      74,     0,     0,     0,   121,     0,    70,     0,   122,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,     0,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,     0,     0,     0,
     130,   212,    72,    69,     0,     0,    30,    31,   131,    74,
       0,     0,     0,   121,     0,    70,     0,   122,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,     0,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   118,   119,   120,     0,     0,     0,     0,   388,   130,
      69,    72,     0,     0,     0,    30,    31,   131,    74,     0,
     121,     0,    70,     0,   122,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,     0,   127,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,     0,     0,     0,     0,     0,   130,    69,    72,     0,
       0,     0,    30,    31,   131,    74,     0,   121,     0,    70,
       0,   122,   117,   118,   119,   120,     0,     0,     0,   124,
     125,   126,    69,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,    72,     0,     0,    71,    30,
      31,   131,   253,     0,     0,     0,     0,     0,   -56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
      72,     0,     0,     0,    30,    31,   131,    74,   275,   276,
     216,   -56,   217,   218,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   275,   276,   216,   -56,   217,   218,   100,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   275,   276,   216,     0,   217,   218,
     -25,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   275,   276,   216,
       0,   217,   218,   340,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -210,   216,     0,   217,   218,  -210,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,     0,   404,     0,     0,     0,   216,     0,
     217,   218,   405,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     0,
       0,     0,     0,     0,     0,   216,     0,   217,   218,   406,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,     0,     0,     0,     0,
     360,     0,     0,   216,   361,   217,   218,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,     0,     0,     0,     0,   386,     0,
       0,   216,   387,   217,   218,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,     0,     0,     0,   408,     0,     0,   216,
     409,   217,   218,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,     0,     0,     0,   216,     0,   217,   218,  -114,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,     0,     0,     0,   216,
       0,   217,   218,   354,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,     0,   216,     0,   217,   218,   100,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     0,     0,   216,     0,   217,   218,   402,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   216,     0,   217,   218,
     235,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   216,     0,   217,
     218,   417,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   216,     0,
     217,   218,   423,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     0,
     216,   287,   217,   218,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,     0,   216,   422,   217,   218,     0,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   216,     0,   217,   218,     0,   219,   220,
     221,   222,     0,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   216,     0,   217,   218,     0,   219,
     220,   221,   222,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234
};

static const yytype_int16 yycheck[] =
{
      58,    72,   336,   162,   163,   164,     8,   364,    56,   169,
     340,    40,    43,    68,    39,    28,    16,    42,     9,    44,
      68,    15,    39,    15,   212,    42,    22,    44,    53,   100,
      26,    36,    57,    56,    59,    75,    53,    28,    29,    13,
      57,    32,    59,   377,   374,    68,    71,    87,   106,    62,
       0,    25,    13,   410,    71,    49,    85,    59,    89,   130,
      60,    57,    67,    56,    25,    39,    91,   401,    65,    66,
      13,    62,   402,    98,    91,    68,    56,     7,    39,    34,
     414,    98,    25,    13,    11,    15,    11,    61,    68,   114,
      64,   162,   163,   164,    68,    69,    39,   114,   169,    11,
      61,    56,   127,    64,   129,   163,   146,    68,    69,    64,
     127,   151,   129,   273,    56,    56,    12,    68,    61,    49,
      57,   161,    64,   163,    20,    68,    69,    68,    24,    57,
      59,    68,    22,    22,    30,    55,    26,    26,    59,    68,
      68,   212,    62,   214,    64,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   352,   353,   237,    57,    57,    10,
      11,   196,    59,   244,    22,   200,   201,   202,    26,   196,
      68,    68,    23,   200,   201,   256,    11,    22,    22,    22,
      56,    26,    26,    26,    13,    36,   236,   255,    64,    40,
     258,    11,   273,   261,    59,   263,    25,   366,    22,    57,
     235,    39,    26,    68,    42,    34,    44,    60,   235,    61,
      39,    13,    57,    57,    57,    53,    67,    59,    34,    57,
      11,    59,    34,    25,   274,    64,    68,   277,   397,   399,
      69,    11,    61,    57,    85,    64,    55,    39,   319,    68,
      56,    59,    13,   324,    56,    64,    97,   282,    29,   330,
      68,    32,    68,    91,    25,   282,    68,    59,   339,    61,
      98,    55,   113,    60,    68,    55,    68,    11,    39,   350,
      64,   352,   353,   354,    64,    13,   114,   278,   328,    11,
     361,    69,   332,   333,   365,   366,   321,    25,   369,    11,
      61,   129,   373,    64,   321,   363,   364,    68,    64,    69,
      11,    39,    33,    69,    35,    36,   387,    38,    39,    40,
      41,    59,   163,    61,    59,    63,   397,    59,   399,    50,
      51,    52,    53,    61,   405,   406,    12,    60,   409,    57,
      68,   159,   160,    19,    20,    58,    64,   165,    24,    60,
      64,    68,   410,    11,    30,    11,   197,     3,     4,     5,
       6,    11,     8,     9,    10,    62,    11,    13,   196,    58,
      16,    17,   200,   201,    20,    21,    11,    23,    24,    25,
      33,    27,    28,    29,    30,    38,    39,    40,    11,    35,
      36,    37,    11,    39,    40,    11,    56,    50,    51,    52,
      53,    11,    56,    63,    11,    65,    66,   235,    68,    57,
      62,    57,    14,    59,    60,    61,    56,    56,    62,    65,
      66,    67,    68,     3,     4,     5,     6,    14,     8,     9,
      10,    11,    62,    13,     1,    13,    16,    17,    13,   330,
      20,    21,   373,    23,    24,    25,    60,    27,    28,    29,
      30,   106,   202,   352,   282,    35,    36,    37,    56,    39,
      40,    97,   397,    -1,   197,    63,   406,    65,    66,    59,
      68,   353,    -1,    63,    -1,    65,    66,    -1,    68,    59,
      60,    61,    -1,    -1,    -1,    65,    66,    67,    68,     3,
       4,     5,     6,   321,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    58,    59,    -1,    61,    -1,    -1,    13,
      65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,    -1,
      -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    62,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    58,    59,    -1,    61,    -1,    -1,
      13,    65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    11,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    59,    -1,    61,    -1,    -1,    13,    65,
      66,    67,    68,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,     3,     4,     5,     6,    -1,    -1,    -1,    35,
      36,    37,    13,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    39,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    11,    -1,
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
       0,    15,    71,    72,    68,    73,     0,    11,    12,    19,
      20,    24,    30,    74,    75,    79,    80,    85,    86,    88,
      97,   100,   150,    59,    68,    87,   106,   110,    59,    63,
      65,    66,    73,    77,    78,   164,    59,    68,    99,   109,
      59,   102,   109,    59,    68,   152,   153,   154,    75,    79,
      11,    80,    11,    34,    56,   107,   108,   109,   104,   106,
      68,    56,    76,    77,    78,    78,    56,    98,    99,    13,
      25,    39,    61,    64,    68,    69,   112,   113,   115,   117,
     155,   156,   159,   161,    56,   101,   102,    69,   113,   151,
     152,    69,   113,    11,    11,   113,    56,    64,    34,   113,
      60,    81,   103,   105,   106,   113,   104,    56,    77,    11,
      56,    99,    11,    60,    61,   113,   160,     3,     4,     5,
       6,    23,    27,    34,    35,    36,    37,    39,    40,    58,
      59,    67,   111,   112,   114,   115,   138,   139,   140,   146,
     162,   163,   164,    68,   138,   149,    69,    56,   102,    11,
     149,    69,    56,   152,    11,   113,    56,   108,   113,     8,
       9,    10,    16,    17,    21,    28,    29,    68,    81,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    95,    96,
     109,   122,   123,   124,   125,   126,   127,   131,   132,   133,
     138,   149,   103,    11,    11,    57,   109,   157,   158,   113,
      59,    59,    58,   139,   139,   139,   112,   115,   139,   139,
     113,   138,    60,   116,    60,   141,    33,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    58,    59,    61,    63,   143,
     144,   145,   147,   148,    64,   149,    11,   149,    11,    68,
      90,    90,   149,    68,    91,   138,    18,    81,    82,    91,
     109,   134,   135,   137,   138,   149,    60,    91,   138,    90,
      57,    84,    11,    62,    55,    31,    32,    69,   113,    57,
     158,    11,    58,   113,   113,   114,   115,    56,    57,   116,
     118,   119,   120,   121,   138,   138,   142,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   113,    56,   149,    62,
     138,    59,    68,   138,    11,    81,   138,    81,    55,    81,
      11,    81,    69,    22,    26,    57,   128,   129,   130,    11,
      60,    11,    84,   149,   149,   164,    11,   113,    56,    56,
      64,    57,    64,    62,    62,    57,    34,    56,    58,   138,
      58,    62,   113,   138,    14,    18,    11,    82,   138,    18,
     149,    57,   129,    62,    60,   138,    57,   128,   138,    57,
     119,   116,   121,   138,   138,    56,    58,    62,    58,   138,
      56,    81,    81,   132,   138,    91,   136,    11,   138,    83,
      57,   128,    60,    57,    56,    64,    64,   138,    58,    62,
      14,   136,    57,    57,   128,   138,   142,    58,   138,    81,
     132,    57,    56,    58
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
     109,   109,   110,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   114,   115,   116,   116,   116,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   129,   130,   130,   131,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   133,
     134,   134,   135,   136,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   142,   142,   143,   144,   145,   145,   145,   145,
     145,   145,   146,   146,   146,   146,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     155,   156,   156,   157,   157,   158,   158,   159,   160,   161,
     162,   162,   163,   163,   163,   163,   163,   163,   164,   164
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
       3,     1,     1,     2,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     4,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     1,     3,     5,     4,     6,
       4,     6,     5,     7,     2,     1,     3,     2,     1,     1,
       3,     5,     5,     5,     7,     7,     2,     3,     3,     3,
       4,     5,     1,     1,     2,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     3,     3,     5,     2,     3,     4,     3,     4,     5,
       6,     7,     8,     6,     4,     4,     4,     2,     3,     4,
       1,     3,     4,     2,     3,     2,     1,     1,     3,     2,
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
#line 71 "src/parser.y" /* yacc.c:1646  */
    {
		;}
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 73 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 75 "src/parser.y" /* yacc.c:1646  */
    {
			Node* current_node = new Node("SourceFile");
			current_node->add_non_terminal_children((yyvsp[-3].nt));
			current_node->add_non_terminal_children((yyvsp[-1].nt));
			current_node->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt) = current_node;
			;}
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 100 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 104 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 110 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 111 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "src/parser.y" /* yacc.c:1646  */
    { ;}
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "src/parser.y" /* yacc.c:1646  */
    { ;}
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 134 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {cout<<"BB\n";}
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 139 "src/parser.y" /* yacc.c:1646  */
    {cout<<"AA\n";}
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "src/parser.y" /* yacc.c:1646  */
    {cout<<"LabeledStmt:  \n";}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "src/parser.y" /* yacc.c:1646  */
    {cout<<"SimpleStmt:  \n";}
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 164 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 173 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 174 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 187 "src/parser.y" /* yacc.c:1646  */
    {cout<<"ExpressionStmt: \n";}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "src/parser.y" /* yacc.c:1646  */
    {cout<<"ExpressionStmt: Expression \n";}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 214 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 215 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 216 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 231 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 252 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 256 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 257 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 261 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 262 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 263 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 272 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 273 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 274 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 278 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 279 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 295 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 305 "src/parser.y" /* yacc.c:1646  */
    {cout<<"Operand:Literal\n";}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 306 "src/parser.y" /* yacc.c:1646  */
    {cout<<"Operand:OperandName\n";}
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 307 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 311 "src/parser.y" /* yacc.c:1646  */
    { cout<<"OperandName:IDENTIFIER "<<(yyvsp[0].sval)<<"\n";}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 315 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 316 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 317 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 321 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 325 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 332 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		last_node(curr->current_node_data)->next = (yyvsp[0].nt)->current_node_data;
		last_node(curr->current_type)->next = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 347 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 354 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 363 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 368 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 383 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 393 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 394 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 399 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		// break labels
		(yyval.nt) = curr;
	}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 405 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("BreakStmt");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 417 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 422 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ContinueStmt");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("GotoStmt");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 448 "src/parser.y" /* yacc.c:1646  */
    { ;}
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 449 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 450 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 451 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 452 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 453 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 457 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 458 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 461 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 465 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 466 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 470 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 474 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 475 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 476 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 477 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 478 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 479 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 483 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 484 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 485 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 486 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 495 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("InitStmt");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		// $$ = curr;
	}
#line 2596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 505 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PostStmt");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		// $$ = curr;
	}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 516 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 2614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 521 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 524 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 527 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 530 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 533 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 536 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 539 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 542 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 545 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 548 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 551 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 554 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 557 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 560 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 563 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 566 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 569 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 572 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 575 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 2766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 578 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Unary Expr begins from expression" <<endl;
		}
#line 2774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 584 "src/parser.y" /* yacc.c:1646  */
    { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 587 "src/parser.y" /* yacc.c:1646  */
    { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 2790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 590 "src/parser.y" /* yacc.c:1646  */
    { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 2798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 593 "src/parser.y" /* yacc.c:1646  */
    { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 2806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 596 "src/parser.y" /* yacc.c:1646  */
    { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 2814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 599 "src/parser.y" /* yacc.c:1646  */
    {
		//cout<<"Primary begins from unary\n";
		}
#line 2822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 607 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 614 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 621 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = isValidMemberon((yyvsp[-1].nt)->current_type)
		(yyval.nt) = curr;
	}
#line 2858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 628 "src/parser.y" /* yacc.c:1646  */
    {cout<<"PrimaryExpr:Index\n";}
#line 2864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 629 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 635 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt))
		(yyval.nt) = curr;
		// remaining
	}
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 642 "src/parser.y" /* yacc.c:1646  */
    {cout<<"PrimaryExpr:StructLiteral\n";}
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 643 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt))
		(yyval.nt) = curr;
	}
#line 2904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 652 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 660 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 666 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 677 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 2950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 688 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 2964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 700 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt))
		(yyval.nt) = curr;
	}
#line 2975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 706 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 2984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 710 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 716 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 723 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 3020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 731 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 743 "src/parser.y" /* yacc.c:1646  */
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
#line 3051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 755 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		curr->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 3066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 765 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 773 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 3092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 784 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 3102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 792 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 3111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 796 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 805 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;}
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 817 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 826 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		last_node(curr->current_node_data)->next_data = (yyvsp[0].nt)->current_node_data;
		last_node(curr->current_type)->next_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 842 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 843 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 857 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 861 "src/parser.y" /* yacc.c:1646  */
    {;}
#line 3195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 865 "src/parser.y" /* yacc.c:1646  */
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
#line 3213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 881 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 892 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 3242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 904 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 910 "src/parser.y" /* yacc.c:1646  */
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
// Remaining                ERROR_N("Redeclaration of struct member: ", key, @2);
//            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		(yyval.nt) = curr;
	}
#line 3278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 933 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[-1].nt)->current_type;
		tp->next_type = NULL;

		NodeData* lp = (yyvsp[-2].nt)->current_node_data;
		map< string, DataType*> m;

		while(lp != NULL) {
            m[lp->data_name] = tp->copyClass();
            lp = lp->next_data;
        }
		curr->current_type = new StructType(m);
		(yyval.nt) = curr;
		}
#line 3302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 952 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[0].nt)->current_type;
		tp->next_type = NULL;

		NodeData* lp = (yyvsp[-1].nt)->current_node_data;
		map< string, DataType*> m;

		while(lp != NULL) {
            m[lp->data_name] = tp->copyClass();
            lp = lp->next_data;
        }
		curr->current_type = new StructType(m);
		(yyval.nt) = curr;
		}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 974 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		if((yyvsp[0].nt)->current_type->getDataType() == "NO TYPE"){
			(yyvsp[0].nt)->current_type = new BasicType((yyvsp[0].nt)->current_node_data->data_name);
		}

		curr->current_type = new PointerType((yyvsp[0].nt)->current_type->copyClass());

		(yyval.nt) = curr;
	}
#line 3346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 993 "src/parser.y" /* yacc.c:1646  */
    {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 3360 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1005 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children((yyvsp[-2].nt));
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 if((yyvsp[-2].nt)->current_type->getDataType() == "int"){
//			 curr->current_type = new ArrayType
		 }
		 (yyval.nt) = curr;
		 }
#line 3374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1017 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 3386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1024 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 3398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1034 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 3410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1041 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 3422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1048 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 3434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1055 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		 }
#line 3446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1062 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 3458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1069 "src/parser.y" /* yacc.c:1646  */
    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 3470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1079 "src/parser.y" /* yacc.c:1646  */
    { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 3479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1083 "src/parser.y" /* yacc.c:1646  */
    { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3492 "parser.tab.c" /* yacc.c:1646  */
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
#line 1089 "src/parser.y" /* yacc.c:1906  */




	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";
		
}
