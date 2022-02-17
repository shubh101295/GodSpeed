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
    IDENTIFIER = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:355  */

	char* nt;
	char* sval;

#line 193 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   1755

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    53,    54,    58,    62,    66,    67,
      71,    72,    73,    77,    78,    82,    83,    84,    88,    92,
      93,    97,    98,    99,   103,   107,   111,   112,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     131,   132,   133,   137,   138,   142,   145,   146,   150,   154,
     158,   159,   160,   161,   162,   165,   169,   173,   174,   178,
     182,   186,   187,   188,   192,   193,   197,   198,   199,   203,
     204,   205,   209,   210,   214,   215,   216,   220,   224,   225,
     228,   229,   233,   234,   235,   239,   240,   244,   245,   246,
     250,   251,   255,   259,   263,   267,   268,   269,   270,   271,
     272,   276,   277,   281,   282,   283,   287,   291,   292,   293,
     297,   301,   302,   306,   307,   311,   312,   316,   317,   321,
     322,   327,   328,   333,   334,   338,   342,   346,   347,   348,
     349,   350,   351,   352,   353,   357,   361,   362,   366,   370,
     371,   372,   373,   374,   375,   379,   380,   381,   382,   386,
     387,   391,   395,   400,   401,   402,   406,   407,   411,   412,
     416,   417,   418,   419,   420,   421,   422,   423,   427,   431,
     432,   437,   441,   445,   446,   447,   448,   449,   450,   454,
     455,   456,   457,   461,   465,   466,   470,   471,   475,   476,
     480,   481,   485,   486,   490,   494,   498,   502,   503,   507,
     508,   512,   513,   518,   522,   526,   527,   531,   532,   533,
     534,   535,   536,   540,   541,   545,   546,   547,   551,   552,
     553,   554,   558,   559,   560,   561,   562,   563,   567,   568,
     569,   570,   571,   572,   573,   577,   578,   579,   580,   581,
     582,   586,   587,   588,   589,   590
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
  "RAW_STRING", "INTERPRETED_STRING", "BYTE_VAL", "IDENTIFIER", "$accept",
  "SourceFile", "PackageClause", "PackageName", "ImportDeclList",
  "ImportDecl", "ImportSpecList", "ImportSpec", "ImportPath",
  "TopLevelDeclList", "TopLevelDecl", "Block", "Condition",
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
  "ExprCaseClause", "ExprSwitchCase", "FallthroughStmt", "IfStmt",
  "ForStmt", "ForClause", "InitStmt", "PostStmt", "RangeClause",
  "Expression", "UnaryExpr", "PrimaryExpr", "StructLiteral",
  "KeyValueList", "Selector", "Index", "Slice", "MakeExpr",
  "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl",
  "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef", "MapType",
  "StructType", "FieldDeclList", "FieldDecl", "PointerType", "ArrayType",
  "Literal", "BasicLit", "String", "Assign_OP", "Add_OP", "Rel_OP",
  "Mul_OP", "Unary_OP", "Binary_OP", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -324

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-324)))

#define YYTABLE_NINF -187

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     1,    56,    64,  -324,  -324,  -324,   146,   -13,   157,
     115,   132,   150,   146,    98,   168,   109,  -324,  -324,  -324,
    -324,  -324,  -324,    59,  -324,    63,  -324,    75,   181,   -38,
    -324,  -324,   -38,  -324,  -324,  -324,   -21,  -324,  -324,    87,
      51,  -324,   121,    85,   100,  -324,  -324,  -324,   158,   168,
    -324,   162,  -324,   201,  -324,    34,  -324,     0,    97,    18,
      63,  -324,   225,   186,  -324,  -324,  -324,    61,   190,   103,
     118,   201,  1089,   460,   144,   171,  -324,  -324,   173,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,    74,   230,  1089,   203,
      84,   240,   201,  -324,  -324,  -324,  -324,  -324,    77,   201,
    -324,   411,  -324,  -324,  -324,  -324,  -324,    97,  -324,   244,
    -324,  -324,   259,  -324,   -39,   201,  -324,  -324,  -324,  -324,
    -324,   213,   214,  -324,  -324,  -324,  -324,   201,  -324,  1089,
    -324,  -324,   220,  -324,   224,  1384,  -324,   197,  -324,  -324,
    -324,  -324,  -324,  1183,   227,   201,  1595,  -324,   226,  1089,
    -324,   281,  -324,  -324,  1089,  -324,   286,  -324,  -324,  -324,
    -324,  -324,   231,   231,  1089,  1136,   511,   705,   231,  -324,
     205,  -324,   343,   287,  -324,  -324,   238,  -324,  -324,  -324,
    -324,  -324,  -324,   164,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  1303,   504,  -324,  -324,  -324,  -324,    20,
     -20,   290,   245,   201,   201,  1658,   560,  -324,  1089,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  1089,
    -324,  -324,  -324,  1089,   754,   801,   170,  -324,  -324,  -324,
    -324,  -324,   197,  1208,  -324,   201,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,   239,   293,  1273,  1089,  -324,
      97,  -324,   178,    97,   295,    97,  1246,   553,   250,   298,
    -324,  -324,   300,  -324,   411,  1089,  -324,  -324,  -324,  1089,
     260,   261,   -38,  -324,   306,  -324,   201,   264,    50,  -324,
    -324,   263,    92,  -324,   265,  -324,  1522,  1547,   266,  -324,
    1702,  -324,   292,   848,  1438,   201,  -324,  -324,  -324,  -324,
    1089,   307,  1702,  -324,   899,  -324,   946,  -324,   310,   609,
     269,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  1089,  -324,   656,   993,  1089,  -324,   275,  -324,
    1466,  -324,  1042,   276,  1572,     7,  1089,  1136,   322,  1702,
    1089,  1089,  -324,  -324,   272,  1336,   278,  1357,  -324,  -324,
    -324,  -324,  1702,  1411,  -324,  -324,  1089,  -324,  1494,  -324,
     324,  -324,  -324,  1702,  -324,  -324,  1136,  1702,  -324,   411,
    -324,   609,  -324,  1089,  1089,  1616,  -324,  1089,     7,  -324,
     411,  -324,  1336,  1680,  -324,  -324,  1637,  -324,  -324,  -324,
    -324,  -324
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     6,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    21,    22,    23,
      41,    42,    40,     0,    45,     0,    93,     0,     0,     0,
     213,   214,     0,    12,    17,    18,     0,    91,    61,     0,
       0,    69,     0,     0,     0,   189,   192,   193,     0,     5,
       9,     0,    20,     0,    82,     0,    85,     0,    44,    78,
       0,    11,     0,     0,    16,    15,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   101,    66,   102,
      98,   100,    95,    97,    96,    71,     0,     0,     0,    74,
       0,     0,     0,   195,     8,    19,    89,    83,     0,     0,
      87,    55,    77,    43,    79,    80,    81,    46,    10,     0,
      14,    62,     0,    65,     0,     0,   203,   207,   208,   211,
     212,     0,     0,   235,   236,   237,   238,   239,   240,     0,
     209,   206,     0,   160,   104,   186,   156,   158,   161,    68,
     103,   205,   210,     0,     0,     0,     0,    90,     0,     0,
      70,     0,    73,    76,     0,   188,     0,   191,   194,    84,
      86,    88,   121,   123,   119,    55,    55,    55,     0,   138,
      91,    37,    55,     0,    28,    29,     0,    30,    50,    51,
      52,    53,    54,     0,    31,    32,    33,    34,    35,   126,
      36,    38,    39,    56,     0,    47,    13,    64,   198,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,   166,
     234,   218,   219,   221,   228,   233,   220,   242,   241,   222,
     223,   224,   225,   226,   227,   230,   229,   231,   232,     0,
     244,   243,   245,     0,     0,     0,     0,   162,   163,   164,
     167,   165,   159,     0,   110,     0,    92,    67,    72,    75,
     190,    49,   122,   124,   120,    91,     0,    56,     0,   145,
       0,   151,     0,     0,     0,     0,    25,     0,     0,     0,
     125,    24,     0,    27,    55,     0,    57,    58,   215,     0,
       0,     0,   202,   197,     0,   199,     0,     0,     0,   105,
     107,   118,     0,   111,     0,   113,   117,     0,     0,   187,
     157,   184,     0,     0,     0,     0,   171,    99,   104,   204,
       0,   139,   153,   147,     0,   146,     0,   148,   215,   127,
       0,    26,    48,    60,    59,   216,   217,   201,   200,   196,
     182,   181,     0,   108,     0,     0,     0,   168,     0,   174,
       0,   172,     0,     0,     0,     0,     0,    55,     0,    25,
       0,     0,   137,   131,     0,   129,     0,     0,   109,   112,
     118,   114,   117,   169,   185,   173,     0,   175,     0,   183,
     140,   142,   141,   154,   152,   149,    55,   155,   136,    55,
     133,   128,   180,     0,     0,     0,   176,     0,     0,   150,
      55,   132,   130,     0,   170,   177,     0,   144,   143,   134,
     179,   178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,  -324,    10,  -324,   323,  -324,   -12,   152,   326,
       2,   -58,    24,   -37,  -169,    29,  -324,  -324,  -324,  -324,
      91,  -161,  -324,  -324,  -324,  -324,  -324,  -324,  -324,    16,
    -324,  -324,   -26,   234,   283,  -324,     4,  -324,   246,    30,
    -324,  -324,  -324,    32,   151,   102,    79,  -124,  -324,  -324,
      23,  -324,    26,  -324,  -324,  -324,  -324,  -324,  -324,  -282,
    -324,  -324,  -323,  -324,  -324,  -324,   -18,  -324,   -71,  -324,
     219,  -324,   -15,  -324,  -324,  -324,  -324,  -324,  -324,   -62,
    -324,  -324,   -28,  -324,  -324,  -324,  -324,  -324,   174,  -324,
    -324,  -324,  -324,    -8,  -324,  -187,  -324,  -185,  -324,  -324
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    75,    13,    14,    62,    33,    34,    15,
      16,   171,   260,   172,   173,   174,    18,    25,    19,   175,
     176,   177,   178,   179,   180,   181,   182,    20,    67,    38,
      21,    86,    41,   103,    58,   104,    59,    55,    56,   183,
      76,    27,   131,   132,   116,   133,   134,   291,    80,   292,
     293,   294,   295,   184,   185,   186,   187,   188,   189,   353,
     354,   190,   191,   192,   263,   264,   375,   265,   135,   136,
     137,   209,   298,   237,   238,   239,   138,   240,   241,   194,
      22,    90,    45,    46,    47,    81,    82,   200,   201,    83,
      84,   140,   141,   142,   279,   230,   231,   232,   143,   233
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,    35,   146,   272,   256,   261,   269,   280,   207,   281,
     139,     5,    26,    69,    87,    91,    63,    51,   198,    32,
      35,    35,   372,   165,    35,    70,   153,    30,    31,    37,
     193,    69,     1,    69,    99,    66,    17,   283,    32,    71,
      39,    42,    17,    70,    17,    70,    23,    37,    37,   102,
     109,    51,    68,    57,    35,    24,     6,    71,   205,    71,
     151,    73,   156,   105,    74,   398,    39,   101,     4,     4,
      42,    77,    32,   380,    77,     7,    77,    23,    17,    73,
     280,    73,   281,   112,    74,    77,     4,   247,     4,    77,
      97,    77,   249,    53,   257,   266,   193,    39,    98,   391,
      69,   193,   254,    77,   267,   322,   331,    85,   259,    50,
     399,    53,    70,    69,   332,    54,    42,   111,    79,    37,
      52,    79,    23,    79,    77,    70,    71,    37,    57,    37,
     150,    77,    79,   159,    69,   296,    79,   297,    79,    71,
     155,    72,    37,    60,   199,    37,    70,    77,    73,   333,
      79,    74,    44,    44,    92,     4,   334,   101,     8,    77,
      71,    73,   300,   114,   304,     9,    10,   299,     4,    94,
      11,    79,   302,    95,    36,    88,    12,    77,    79,   115,
       8,    64,    73,    37,    65,    74,   374,   312,    10,     4,
      78,    40,    11,    89,    79,    93,   262,   110,    12,   311,
      37,   113,   313,   193,    96,   315,    79,   317,   100,    43,
     106,   360,   147,   323,    69,   374,    28,   324,    44,   275,
      29,   272,    30,    31,    79,     4,    70,   149,    74,   305,
     199,    77,   340,   314,   148,    77,    77,    61,   306,   344,
      71,   152,    74,   158,    29,   349,    30,    31,   355,     4,
     161,   157,   323,   252,   253,   196,   234,   154,   235,   270,
     236,   357,    73,   296,   362,   363,   202,   -49,    -7,     4,
     197,   368,   203,   204,   327,   373,   193,    77,    79,   377,
     206,   108,    79,    79,   208,   243,   370,   371,    29,   378,
      30,    31,   248,     4,   246,   385,   244,   250,   273,   251,
     274,   285,    -7,   286,   310,   193,   316,   319,   193,   320,
     392,   321,   393,   297,   325,   326,   396,   328,    77,   193,
     330,   345,   308,   337,    79,  -116,   338,   335,   350,   356,
     397,   364,   369,   376,   379,   381,    48,    77,   388,    49,
     348,   195,   390,   107,   160,   307,   117,   118,   119,   120,
     282,   162,   163,   164,   287,   288,    69,   359,   389,   165,
     166,   361,   242,    10,   167,    79,   121,    11,    70,   394,
     122,   168,   169,    12,   284,     0,     0,     0,   123,   124,
     125,   126,   127,   128,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,     0,     0,
     271,     0,   129,   101,    73,     0,     0,     0,    30,    31,
     130,   170,     0,     0,   117,   118,   119,   120,     0,   162,
     163,   164,     0,     0,    69,     0,     0,   165,   166,     0,
       0,    10,   167,     0,   121,    11,    70,   329,   122,   168,
     169,    12,     0,     0,     0,     0,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,     0,     0,     0,
     129,   101,    73,    69,     0,     0,    30,    31,   130,   170,
       0,     0,     0,   121,     0,    70,     0,   122,     0,     0,
       0,     0,     0,     0,   144,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   145,   129,
       0,    73,     0,     0,    69,    30,    31,   130,     4,   258,
       0,     0,     0,     0,   121,     0,    70,   210,   122,   211,
     212,     0,   213,   214,   215,   216,   123,   124,   125,   126,
     127,   128,     0,     0,   225,   226,   227,   228,   278,     0,
       0,     0,     0,   117,   118,   119,   120,     0,     0,     0,
     129,   101,    73,    69,     0,     0,    30,    31,   130,   255,
       0,     0,     0,   121,     0,    70,   210,   122,   211,   212,
       0,   213,   214,   215,   216,   123,   124,   125,   126,   127,
     128,     0,     0,   225,   226,   227,   228,   318,     0,     0,
       0,     0,   117,   118,   119,   120,     0,   290,     0,   129,
     206,    73,    69,     0,     0,    30,    31,   130,     4,     0,
       0,   351,   121,     0,    70,   352,   122,     0,     0,     0,
       0,     0,     0,     0,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,     0,     0,     0,     0,     0,   129,    69,
      73,     0,     0,     0,    30,    31,   130,     4,     0,   121,
       0,    70,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,     0,   358,     0,   129,   206,    73,    69,     0,
       0,    30,    31,   130,     4,     0,     0,     0,   121,     0,
      70,     0,   122,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,     0,     0,     0,   129,   268,    73,    69,     0,     0,
      30,    31,   130,   255,     0,     0,     0,   121,     0,    70,
       0,   122,     0,     0,     0,     0,     0,     0,     0,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,     0,     0,
     301,     0,     0,   129,    69,    73,     0,     0,     0,    30,
      31,   130,     4,     0,   121,     0,    70,     0,   122,     0,
       0,     0,     0,     0,     0,     0,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,     0,     0,     0,     0,     0,
     129,    69,    73,   303,     0,     0,    30,    31,   130,     4,
       0,   121,     0,    70,     0,   122,     0,     0,     0,     0,
       0,     0,     0,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   118,   119,   120,   339,   129,     0,    73,
       0,     0,    69,    30,    31,   130,     4,   346,     0,     0,
       0,     0,   121,     0,    70,     0,   122,     0,     0,     0,
       0,     0,     0,     0,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,     0,     0,     0,     0,   347,   129,    69,
      73,     0,     0,     0,    30,    31,   130,     4,     0,   121,
       0,    70,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,   118,   119,   120,
       0,     0,     0,     0,     0,   129,    69,    73,     0,     0,
       0,    30,    31,   130,     4,     0,   121,     0,    70,     0,
     122,     0,     0,     0,     0,     0,     0,     0,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,     0,
       0,     0,   129,   206,    73,    69,     0,     0,    30,    31,
     130,     4,     0,     0,     0,   121,     0,    70,     0,   122,
       0,     0,     0,     0,     0,     0,     0,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   118,   119,   120,     0,     0,     0,     0,
     367,   129,    69,    73,     0,     0,     0,    30,    31,   130,
       4,     0,   121,     0,    70,     0,   122,     0,     0,     0,
       0,     0,     0,     0,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,     0,     0,     0,     0,     0,   129,    69,
      73,     0,     0,     0,    30,    31,   130,     4,     0,   121,
       0,    70,     0,   122,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,   118,   119,   120,
       0,     0,     0,     0,     0,   129,    69,    73,     0,     0,
       0,    30,    31,   130,   255,     0,   121,     0,    70,     0,
     122,   117,   118,   119,   120,     0,     0,     0,     0,     0,
       0,    69,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,    73,     0,     0,    71,    30,    31,
     130,     4,     0,     0,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,    73,
       0,     0,     0,    30,    31,   130,     4,   276,   277,   210,
       0,   211,   212,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
    -186,     0,     0,     0,   276,   277,   210,     0,   211,   212,
     229,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,  -186,     0,     0,
       0,     0,     0,   101,   276,   277,   210,   229,   211,   212,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,  -186,   351,     0,
       0,     0,   352,     0,     0,     0,     0,   229,     0,   210,
       0,   211,   212,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     210,     0,   211,   212,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,     0,     0,   382,     0,     0,     0,   210,     0,   211,
     212,   383,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,     0,     0,
       0,     0,     0,     0,   210,     0,   211,   212,   229,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,     0,     0,     0,     0,     0,
       0,   210,     0,   211,   212,   384,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,     0,     0,     0,     0,   341,     0,     0,   210,
     342,   211,   212,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
       0,     0,     0,     0,   365,     0,     0,   210,   366,   211,
     212,     0,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,     0,     0,
       0,     0,   386,     0,     0,   210,   387,   211,   212,     0,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,     0,     0,     0,     0,
     210,     0,   211,   212,  -115,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,     0,     0,     0,     0,   210,     0,   211,   212,   336,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,     0,     0,   210,     0,
     211,   212,   101,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   210,
       0,   211,   212,   245,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     210,     0,   211,   212,   395,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   210,     0,   211,   212,   401,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,     0,   210,   289,   211,   212,     0,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,     0,   210,   400,   211,   212,     0,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228
};

static const yytype_int16 yycheck[] =
{
      58,     9,    73,   172,   165,   166,   167,   194,   132,   194,
      72,     1,     8,    13,    40,    43,    28,    15,    57,     9,
      28,    29,   345,    16,    32,    25,    88,    65,    66,    68,
     101,    13,    15,    13,    34,    56,     7,    57,    28,    39,
      10,    11,    13,    25,    15,    25,    59,    68,    68,   107,
      62,    49,    36,    23,    62,    68,     0,    39,   129,    39,
      86,    61,    90,    59,    64,   388,    36,    60,    68,    68,
      40,    39,    62,   355,    42,    11,    44,    59,    49,    61,
     267,    61,   267,    67,    64,    53,    68,   149,    68,    57,
      56,    59,   154,    34,   165,   166,   167,    67,    64,   381,
      13,   172,   164,    71,   166,   274,    56,    56,   166,    11,
     392,    34,    25,    13,    64,    56,    86,    56,    39,    68,
      11,    42,    59,    44,    92,    25,    39,    68,    98,    68,
      56,    99,    53,    56,    13,   206,    57,   208,    59,    39,
      56,    54,    68,    68,   114,    68,    25,   115,    61,    57,
      71,    64,    68,    68,    54,    68,    64,    60,    12,   127,
      39,    61,   233,    60,   235,    19,    20,   229,    68,    11,
      24,    92,   234,    11,    59,    54,    30,   145,    99,    61,
      12,    29,    61,    68,    32,    64,   347,   258,    20,    68,
      39,    59,    24,    42,   115,    44,   166,    11,    30,   257,
      68,    11,   260,   274,    53,   263,   127,   265,    57,    59,
      59,   335,    68,   275,    13,   376,    59,   279,    68,    55,
      63,   390,    65,    66,   145,    68,    25,    54,    64,    59,
     200,   199,   303,    55,    63,   203,   204,    56,    68,   310,
      39,    11,    64,    92,    63,   316,    65,    66,   319,    68,
      99,    11,   314,   162,   163,    11,    59,    54,    61,   168,
      63,   332,    61,   334,   335,   336,   115,    62,    63,    68,
      11,   342,    59,    59,   282,   346,   347,   245,   199,   350,
      60,    56,   203,   204,    60,    58,   344,   345,    63,   351,
      65,    66,    11,    68,    68,   366,   145,    11,    11,    68,
      62,    11,    63,    58,    11,   376,    11,    57,   379,    11,
     381,    11,   383,   384,    54,    54,   387,    11,   286,   390,
      56,    14,   243,    57,   245,    62,    34,    62,    18,    60,
     388,    56,    56,    11,    62,    57,    13,   305,    14,    13,
     316,   107,   379,    60,    98,   243,     3,     4,     5,     6,
     199,     8,     9,    10,   203,   204,    13,   334,   376,    16,
      17,   335,   143,    20,    21,   286,    23,    24,    25,   384,
      27,    28,    29,    30,   200,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    23,    24,    25,   286,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    58,    59,
      -1,    61,    -1,    -1,    13,    65,    66,    67,    68,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    33,    27,    35,
      36,    -1,    38,    39,    40,    41,    35,    36,    37,    38,
      39,    40,    -1,    -1,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    33,    27,    35,    36,
      -1,    38,    39,    40,    41,    35,    36,    37,    38,    39,
      40,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    57,    -1,    59,
      60,    61,    13,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    57,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      56,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      59,    13,    61,    62,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    58,    59,    -1,    61,
      -1,    -1,    13,    65,    66,    67,    68,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    11,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      58,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    -1,    39,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    31,    32,    33,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      64,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    60,    31,    32,    33,    64,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    64,    -1,    33,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      33,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    33,    -1,    35,
      36,    64,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    64,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    64,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    33,
      62,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    33,    62,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    62,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    62,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    33,    -1,
      35,    36,    60,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    33,
      -1,    35,    36,    58,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      33,    -1,    35,    36,    58,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    58,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    33,    56,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    33,    56,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    70,    71,    68,    72,     0,    11,    12,    19,
      20,    24,    30,    73,    74,    78,    79,    84,    85,    87,
      96,    99,   149,    59,    68,    86,   105,   110,    59,    63,
      65,    66,    72,    76,    77,   162,    59,    68,    98,   108,
      59,   101,   108,    59,    68,   151,   152,   153,    74,    78,
      11,    79,    11,    34,    56,   106,   107,   108,   103,   105,
      68,    56,    75,    76,    77,    77,    56,    97,    98,    13,
      25,    39,    54,    61,    64,    72,   109,   112,   113,   115,
     117,   154,   155,   158,   159,    56,   100,   101,    54,   113,
     150,   151,    54,   113,    11,    11,   113,    56,    64,    34,
     113,    60,    80,   102,   104,   105,   113,   103,    56,    76,
      11,    56,    98,    11,    60,    61,   113,     3,     4,     5,
       6,    23,    27,    35,    36,    37,    38,    39,    40,    59,
      67,   111,   112,   114,   115,   137,   138,   139,   145,   148,
     160,   161,   162,   167,    34,    58,   137,    68,    63,    54,
      56,   101,    11,   148,    54,    56,   151,    11,   113,    56,
     107,   113,     8,     9,    10,    16,    17,    21,    28,    29,
      68,    80,    82,    83,    84,    88,    89,    90,    91,    92,
      93,    94,    95,   108,   122,   123,   124,   125,   126,   127,
     130,   131,   132,   137,   148,   102,    11,    11,    57,   108,
     156,   157,   113,    59,    59,   137,    60,   116,    60,   140,
      33,    35,    36,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    64,
     164,   165,   166,   168,    59,    61,    63,   142,   143,   144,
     146,   147,   139,    58,   113,    58,    68,   148,    11,   148,
      11,    68,    89,    89,   148,    68,    90,   137,    18,    80,
      81,    90,   108,   133,   134,   136,   137,   148,    60,    90,
      89,    57,    83,    11,    62,    55,    31,    32,    54,   163,
     164,   166,   113,    57,   157,    11,    58,   113,   113,    56,
      57,   116,   118,   119,   120,   121,   137,   137,   141,   148,
     137,    56,   148,    62,   137,    59,    68,   114,   115,   113,
      11,    80,   137,    80,    55,    80,    11,    80,    54,    57,
      11,    11,    83,   148,   148,    54,    54,   162,    11,   113,
      56,    56,    64,    57,    64,    62,    62,    57,    34,    58,
     137,    58,    62,   113,   137,    14,    18,    11,    81,   137,
      18,    22,    26,   128,   129,   137,    60,   137,    57,   119,
     116,   121,   137,   137,    56,    58,    62,    58,   137,    56,
      80,    80,   131,   137,    90,   135,    11,   137,   148,    62,
     128,    57,    56,    64,    64,   137,    58,    62,    14,   135,
      82,   128,   137,   137,   141,    58,   137,    80,   131,   128,
      56,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    71,    72,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    76,    77,    78,
      78,    79,    79,    79,    80,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    84,    85,    85,    86,    87,    87,    88,    89,
      90,    90,    90,    90,    90,    91,    92,    93,    93,    94,
      95,    96,    96,    96,    97,    97,    98,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   101,   102,   103,   103,
     104,   104,   105,   105,   105,   106,   106,   107,   107,   107,
     108,   108,   109,   110,   111,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   115,   116,   116,   116,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   130,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   135,   136,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   141,
     141,   142,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   153,   154,   155,   155,   156,
     156,   157,   157,   158,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163,   163,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   168,   168
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
       1,     1,     1,     1,     1,     3,     1,     2,     3,     4,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     1,     3,     5,     4,
       6,     4,     6,     5,     7,     3,     2,     1,     1,     3,
       5,     5,     5,     7,     7,     2,     3,     3,     3,     4,
       5,     1,     1,     2,     4,     4,     1,     3,     1,     2,
       1,     1,     2,     2,     2,     2,     2,     2,     3,     3,
       5,     2,     3,     4,     3,     4,     5,     6,     7,     8,
       6,     4,     4,     4,     2,     4,     1,     3,     4,     2,
       3,     2,     1,     1,     3,     2,     5,     4,     3,     2,
       3,     3,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 58 "parser.y" /* yacc.c:1646  */
    {;}
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "parser.y" /* yacc.c:1646  */
    {;}
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "parser.y" /* yacc.c:1646  */
    {;}
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "parser.y" /* yacc.c:1646  */
    {;}
#line 1896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "parser.y" /* yacc.c:1646  */
    {;}
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "parser.y" /* yacc.c:1646  */
    {;}
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "parser.y" /* yacc.c:1646  */
    {;}
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "parser.y" /* yacc.c:1646  */
    {;}
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 78 "parser.y" /* yacc.c:1646  */
    {;}
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "parser.y" /* yacc.c:1646  */
    {;}
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "parser.y" /* yacc.c:1646  */
    {;}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "parser.y" /* yacc.c:1646  */
    {;}
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1646  */
    {;}
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "parser.y" /* yacc.c:1646  */
    {;}
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "parser.y" /* yacc.c:1646  */
    {;}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "parser.y" /* yacc.c:1646  */
    {;}
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 145 "parser.y" /* yacc.c:1646  */
    {;}
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "parser.y" /* yacc.c:1646  */
    {;}
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "parser.y" /* yacc.c:1646  */
    {;}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "parser.y" /* yacc.c:1646  */
    {;}
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "parser.y" /* yacc.c:1646  */
    {;}
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "parser.y" /* yacc.c:1646  */
    {;}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "parser.y" /* yacc.c:1646  */
    {;}
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 203 "parser.y" /* yacc.c:1646  */
    {;}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 204 "parser.y" /* yacc.c:1646  */
    {;}
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 205 "parser.y" /* yacc.c:1646  */
    {;}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 228 "parser.y" /* yacc.c:1646  */
    {;}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 229 "parser.y" /* yacc.c:1646  */
    {;}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 233 "parser.y" /* yacc.c:1646  */
    {;}
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 234 "parser.y" /* yacc.c:1646  */
    {;}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 235 "parser.y" /* yacc.c:1646  */
    {;}
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "parser.y" /* yacc.c:1646  */
    {;}
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 245 "parser.y" /* yacc.c:1646  */
    {;}
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 246 "parser.y" /* yacc.c:1646  */
    {;}
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 250 "parser.y" /* yacc.c:1646  */
    {;}
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 251 "parser.y" /* yacc.c:1646  */
    {;}
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 255 "parser.y" /* yacc.c:1646  */
    {;}
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 271 "parser.y" /* yacc.c:1646  */
    {;}
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 283 "parser.y" /* yacc.c:1646  */
    {;}
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 291 "parser.y" /* yacc.c:1646  */
    {;}
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 292 "parser.y" /* yacc.c:1646  */
    {;}
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 293 "parser.y" /* yacc.c:1646  */
    {;}
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 297 "parser.y" /* yacc.c:1646  */
    {;}
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 321 "parser.y" /* yacc.c:1646  */
    {;}
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 322 "parser.y" /* yacc.c:1646  */
    {;}
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 327 "parser.y" /* yacc.c:1646  */
    {;}
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 328 "parser.y" /* yacc.c:1646  */
    {;}
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 333 "parser.y" /* yacc.c:1646  */
    {;}
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 334 "parser.y" /* yacc.c:1646  */
    {;}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 338 "parser.y" /* yacc.c:1646  */
    {;}
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 346 "parser.y" /* yacc.c:1646  */
    {;}
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 347 "parser.y" /* yacc.c:1646  */
    {;}
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 348 "parser.y" /* yacc.c:1646  */
    {;}
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 349 "parser.y" /* yacc.c:1646  */
    {;}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 350 "parser.y" /* yacc.c:1646  */
    {;}
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 351 "parser.y" /* yacc.c:1646  */
    {;}
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 352 "parser.y" /* yacc.c:1646  */
    {;}
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 353 "parser.y" /* yacc.c:1646  */
    {;}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 357 "parser.y" /* yacc.c:1646  */
    {;}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 361 "parser.y" /* yacc.c:1646  */
    {;}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 362 "parser.y" /* yacc.c:1646  */
    {;}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 366 "parser.y" /* yacc.c:1646  */
    {;}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 370 "parser.y" /* yacc.c:1646  */
    {;}
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 371 "parser.y" /* yacc.c:1646  */
    {;}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 372 "parser.y" /* yacc.c:1646  */
    {;}
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 373 "parser.y" /* yacc.c:1646  */
    {;}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 374 "parser.y" /* yacc.c:1646  */
    {;}
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 375 "parser.y" /* yacc.c:1646  */
    {;}
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 379 "parser.y" /* yacc.c:1646  */
    {;}
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 380 "parser.y" /* yacc.c:1646  */
    {;}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 381 "parser.y" /* yacc.c:1646  */
    {;}
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 382 "parser.y" /* yacc.c:1646  */
    {;}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 400 "parser.y" /* yacc.c:1646  */
    {;}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 427 "parser.y" /* yacc.c:1646  */
    {;}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 437 "parser.y" /* yacc.c:1646  */
    {;}
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 441 "parser.y" /* yacc.c:1646  */
    {;}
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 445 "parser.y" /* yacc.c:1646  */
    {;}
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 446 "parser.y" /* yacc.c:1646  */
    {;}
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 447 "parser.y" /* yacc.c:1646  */
    {;}
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 448 "parser.y" /* yacc.c:1646  */
    {;}
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 449 "parser.y" /* yacc.c:1646  */
    {;}
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 450 "parser.y" /* yacc.c:1646  */
    {;}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 454 "parser.y" /* yacc.c:1646  */
    {;}
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 455 "parser.y" /* yacc.c:1646  */
    {;}
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 456 "parser.y" /* yacc.c:1646  */
    {;}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 457 "parser.y" /* yacc.c:1646  */
    {;}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 461 "parser.y" /* yacc.c:1646  */
    {;}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 465 "parser.y" /* yacc.c:1646  */
    {;}
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 466 "parser.y" /* yacc.c:1646  */
    {;}
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 475 "parser.y" /* yacc.c:1646  */
    {;}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 476 "parser.y" /* yacc.c:1646  */
    {;}
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 490 "parser.y" /* yacc.c:1646  */
    {;}
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 494 "parser.y" /* yacc.c:1646  */
    {;}
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 498 "parser.y" /* yacc.c:1646  */
    {;}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 502 "parser.y" /* yacc.c:1646  */
    {;}
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 503 "parser.y" /* yacc.c:1646  */
    {;}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 507 "parser.y" /* yacc.c:1646  */
    {;}
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 508 "parser.y" /* yacc.c:1646  */
    {;}
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 518 "parser.y" /* yacc.c:1646  */
    {;}
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 522 "parser.y" /* yacc.c:1646  */
    {;}
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 531 "parser.y" /* yacc.c:1646  */
    {;}
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 532 "parser.y" /* yacc.c:1646  */
    {;}
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 533 "parser.y" /* yacc.c:1646  */
    {;}
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 535 "parser.y" /* yacc.c:1646  */
    {;}
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 536 "parser.y" /* yacc.c:1646  */
    {;}
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 540 "parser.y" /* yacc.c:1646  */
    {;}
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 541 "parser.y" /* yacc.c:1646  */
    {;}
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 545 "parser.y" /* yacc.c:1646  */
    {;}
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 546 "parser.y" /* yacc.c:1646  */
    {;}
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 547 "parser.y" /* yacc.c:1646  */
    {;}
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 551 "parser.y" /* yacc.c:1646  */
    {;}
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 552 "parser.y" /* yacc.c:1646  */
    {;}
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 553 "parser.y" /* yacc.c:1646  */
    {;}
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 554 "parser.y" /* yacc.c:1646  */
    {;}
#line 2556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 558 "parser.y" /* yacc.c:1646  */
    {;}
#line 2562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 559 "parser.y" /* yacc.c:1646  */
    {;}
#line 2568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 560 "parser.y" /* yacc.c:1646  */
    {;}
#line 2574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 561 "parser.y" /* yacc.c:1646  */
    {;}
#line 2580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 562 "parser.y" /* yacc.c:1646  */
    {;}
#line 2586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 563 "parser.y" /* yacc.c:1646  */
    {;}
#line 2592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 567 "parser.y" /* yacc.c:1646  */
    {;}
#line 2598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 568 "parser.y" /* yacc.c:1646  */
    {;}
#line 2604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 569 "parser.y" /* yacc.c:1646  */
    {;}
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 570 "parser.y" /* yacc.c:1646  */
    {;}
#line 2616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 571 "parser.y" /* yacc.c:1646  */
    {;}
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 572 "parser.y" /* yacc.c:1646  */
    {;}
#line 2628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 573 "parser.y" /* yacc.c:1646  */
    {;}
#line 2634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 577 "parser.y" /* yacc.c:1646  */
    {;}
#line 2640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 578 "parser.y" /* yacc.c:1646  */
    {;}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 579 "parser.y" /* yacc.c:1646  */
    {;}
#line 2652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 580 "parser.y" /* yacc.c:1646  */
    {;}
#line 2658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 581 "parser.y" /* yacc.c:1646  */
    {;}
#line 2664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 582 "parser.y" /* yacc.c:1646  */
    {;}
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 586 "parser.y" /* yacc.c:1646  */
    {;}
#line 2676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 587 "parser.y" /* yacc.c:1646  */
    {;}
#line 2682 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2686 "parser.tab.c" /* yacc.c:1646  */
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
#line 592 "parser.y" /* yacc.c:1906  */




	











	


