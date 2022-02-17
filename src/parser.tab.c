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
#define YYLAST   1213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

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
       0,    51,    51,    55,    56,    57,    61,    62,    63,    64,
      68,    69,    70,    71,    72,    73,    77,    78,    79,    80,
      81,    82,    83,    87,    88,    89,    90,    91,    92,    97,
     101,   104,   105,   106,   110,   111,   114,   115,   116,   120,
     121,   122,   126,   130,   131,   135,   136,   137,   141,   145,
     149,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   168,   169,   170,   174,   175,   179,   180,
     184,   188,   192,   193,   194,   195,   196,   199,   203,   207,
     208,   212,   216,   220,   221,   225,   226,   229,   230,   231,
     235,   236,   240,   241,   244,   245,   246,   250,   254,   255,
     258,   259,   263,   264,   265,   269,   270,   274,   275,   276,
     280,   281,   285,   286,   290,   294,   298,   302,   303,   304,
     305,   306,   307,   311,   312,   316,   317,   318,   322,   323,
     326,   327,   328,   332,   336,   337,   341,   342,   346,   347,
     351,   352,   356,   357,   362,   363,   368,   369,   373,   377,
     381,   382,   383,   384,   385,   386,   396,   397,   398,   399,
     403,   404,   405,   406,   407,   408,   409,   410,   414,   418,
     423,   424,   425,   429,   430,   434,   435,   439,   440,   444,
     445,   449,   450,   454,   455,   459,   460,   461,   462,   463,
     464,   465,   466,   470,   473,   474,   475,   480,   484,   488,
     489,   490,   491,   492,   493,   497,   498,   499,   500,   504,
     508,   509,   513,   514,   518,   519,   523,   524,   528,   529,
     533,   537,   541,   545,   546,   550,   551,   555,   556,   561,
     565,   569,   570,   574,   575,   576,   577,   578,   579,   583,
     584
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
  "SourceFile", "Assign_OP", "Add_OP", "Rel_OP", "Mul_OP", "Unary_OP",
  "PackageClause", "PackageName", "ImportDeclList", "ImportDecl",
  "ImportSpecList", "ImportSpec", "ImportPath", "TopLevelDeclList",
  "TopLevelDecl", "Block", "Condition", "StatementList", "Statement",
  "Declaration", "FunctionDecl", "MethodDecl", "LabeledStmt", "Label",
  "SimpleStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt", "Assignment",
  "ShortVarDecl", "VarDecl", "VarSpecList", "VarSpec", "ConstDecl",
  "ConstSpecList", "ConstSpec", "FunctionBody", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "TypeList",
  "IdentifierList", "QualifiedIdent", "Receiver", "CompositeLit",
  "LiteralType", "Type", "Operand", "OperandName", "LiteralValue",
  "SliceType", "ElementList", "KeyedElement", "Key", "Element",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "FallthroughStmt",
  "IfStmt", "ForStmt", "ForClause", "InitStmt", "PostStmt", "RangeClause",
  "Expression", "Expression1", "Expression2", "Expression3", "Expression4",
  "UnaryExpr", "PrimaryExpr", "StructLiteral", "KeyValueList", "Selector",
  "Index", "Slice", "MakeExpr", "TypeAssertion", "Arguments",
  "ExpressionList", "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl",
  "TypeDef", "MapType", "StructType", "FieldDeclList", "FieldDecl",
  "PointerType", "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
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

#define YYPACT_NINF -331

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-331)))

#define YYTABLE_NINF -140

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -21,    51,    92,  -331,  -331,  -331,    89,   319,   295,
     150,   406,   228,  -331,  -331,   228,  -331,  -331,  -331,   179,
     181,   191,   202,   154,   100,   169,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   311,   215,  -331,  -331,   -10,   183,  -331,
     188,   192,  -331,  -331,    88,   192,  -331,   123,   199,   115,
    -331,  -331,  -331,  -331,   234,  -331,  -331,   266,  -331,   256,
    -331,   166,  -331,   214,   240,   204,   183,   125,   294,   263,
     273,   256,  1026,   499,   260,   269,  -331,  -331,   290,  -331,
    -331,  -331,  -331,  -331,  -331,   139,   334,  1026,   293,   145,
     337,   256,  -331,  -331,  -331,  -331,  -331,    32,   256,  -331,
     399,  -331,  -331,   256,  -331,  -331,   240,  -331,   340,  -331,
     -23,   256,  -331,  -331,  -331,  -331,  -331,   296,   300,  -331,
    -331,  -331,  -331,   256,  -331,  1026,  -331,  1120,  -331,   292,
    -331,   304,   312,   322,   400,   345,   258,  -331,   460,  -331,
     302,  -331,  -331,  -331,   317,   256,    93,  -331,   320,  1026,
    -331,   380,  -331,   302,  1026,  -331,   384,  -331,  -331,  -331,
    -331,  -331,   321,   321,  1026,  1073,   450,   321,  -331,   378,
    -331,   333,   385,  -331,  -331,   335,  -331,  -331,  -331,  -331,
    -331,  -331,   237,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
      17,   443,   210,  -331,  -331,  -331,  -331,   219,   153,   395,
     352,   256,   256,     1,   460,   546,  -331,  1026,  -331,  1026,
    1026,  -331,  -331,  -331,  -331,  -331,  -331,  1026,  -331,  -331,
    -331,  -331,  1026,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    1120,   644,   691,   253,  -331,  -331,  -331,  -331,  -331,  1026,
    1145,  -331,   256,  -331,   302,  -331,   302,  -331,  -331,  -331,
    -331,   302,   170,   402,   136,   738,  1026,  -331,   240,  -331,
     267,   240,   403,   240,   177,   637,  -331,  -331,   407,  -331,
     399,  1026,  -331,  -331,  -331,  1026,   357,   363,  -331,   256,
     228,  -331,   409,  -331,   256,   365,   271,  -331,  -331,   368,
      41,  -331,   369,  -331,    69,    91,   375,   322,   400,   345,
     258,   460,  -331,    55,   785,    64,   256,  -331,   312,  -331,
    -331,  -331,  1026,   411,  1073,   432,   312,   312,  -331,   836,
    -331,   883,  -331,   433,  -331,  -331,   302,   302,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  1026,  -331,   595,   930,
    1026,  -331,   394,  -331,    81,  -331,   979,   396,   143,     2,
    -331,  -331,  1073,  1026,  1073,   446,  1026,    -1,  -331,  -331,
    -331,  -331,   312,    30,  -331,  -331,  1026,  -331,   156,  -331,
     448,  -331,  -331,  -331,   312,  -331,  1073,   312,  -331,  1026,
    1026,   108,  -331,  1026,     2,  -331,   116,  -331,  -331,   158,
    -331,  -331,  -331,  -331
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    30,    29,     1,    31,     0,     0,
       0,    36,     0,   239,   240,     0,    35,    41,    42,     0,
       0,     0,     0,     0,     2,     0,    45,    46,    47,    64,
      65,    63,    33,     0,     0,    40,    39,     0,     0,   115,
       0,     0,   113,    83,     0,     0,    90,     0,     0,     0,
     215,   218,   219,    32,     0,    44,    34,     0,    38,     0,
     102,     0,   105,     0,    67,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   123,    87,   124,
     120,   122,   117,   119,   118,     0,     0,     0,    94,     0,
       0,     0,   221,    43,    37,   109,   103,     0,     0,   107,
      77,    97,    66,     0,    99,   101,    68,    84,     0,    86,
       0,     0,   229,   233,   234,   237,   238,     0,     0,    23,
      24,    25,    26,    27,    28,     0,   235,     0,   232,     0,
     185,   126,   213,   174,   176,   178,   180,   182,   183,   186,
      89,   125,   231,   236,     0,     0,     0,   112,     0,     0,
      91,     0,    93,    96,     0,   214,     0,   217,   220,   104,
     106,   108,   144,   146,   142,    77,     0,     0,   149,   128,
      60,    77,     0,    52,    53,     0,    54,    72,    73,    74,
      75,    76,     0,    55,    56,    57,    58,    59,    61,    62,
     213,     0,     0,   111,    69,    85,   224,     0,     0,     0,
       0,     0,     0,     0,   184,     0,   116,   194,   191,     0,
       0,    10,    11,    12,    13,    14,    15,     0,     6,     7,
       9,     8,     0,    22,    16,    21,    18,    17,    19,    20,
       0,     0,     0,     0,   187,   188,   189,   192,   190,     0,
       0,   133,     0,   114,    88,    92,    95,   216,    71,   145,
     147,   143,   128,     0,   213,     0,     0,   156,     0,   168,
       0,     0,     0,     0,   213,     0,   148,    48,     0,    51,
      77,     0,    79,    80,     3,     0,     0,     0,   100,     0,
     228,   223,     0,   225,     0,     0,     0,   127,   130,   141,
       0,   134,     0,   136,   140,     0,     0,   173,   175,   177,
     179,   181,   210,     0,     0,     0,     0,   197,   212,   121,
     126,   230,     0,   150,    77,     0,    49,   170,   158,     0,
     157,     0,   159,     3,    50,    70,    82,    81,     4,     5,
     110,   227,   226,   222,   208,   207,     0,   131,     0,     0,
       0,   193,     0,   200,     0,   198,     0,     0,     0,     0,
     169,   163,    77,     0,    77,     0,     0,     0,   132,   135,
     141,   137,   140,   195,   211,   199,     0,   201,     0,   209,
     151,   153,   152,   166,   171,   165,    77,   172,   206,     0,
     194,     0,   202,     0,     0,   167,     0,   196,   203,     0,
     155,   154,   205,   204
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,  -331,  -179,  -331,  -178,  -331,  -331,   469,  -331,
     471,  -331,    84,   126,  -331,   467,   -64,  -239,  -331,  -161,
     162,  -331,  -331,  -331,    61,   -97,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   -11,  -331,  -331,    -5,   386,   434,  -331,
     479,  -331,   404,  -331,    -6,  -331,  -331,  -331,   -27,    34,
     259,   -38,  -127,  -331,  -331,   168,  -331,   174,  -331,  -331,
    -331,  -331,  -331,  -330,  -331,  -331,  -331,  -262,  -331,   -50,
     299,   310,   297,   303,  -331,  -120,  -331,   147,  -331,  -331,
    -331,  -331,  -331,  -331,   -20,  -331,  -331,   -19,  -331,  -331,
    -331,  -331,  -331,   330,  -331,  -331,  -331,  -331,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   275,   222,   217,   230,   127,     3,    15,     9,
      10,    33,    16,    17,    24,    25,   170,   258,   171,   172,
     173,    27,    28,   174,   175,   350,   177,   178,   179,   180,
     181,    29,    67,    43,    30,    85,    46,   102,    64,   104,
      65,    61,    62,   192,   182,    76,    40,   128,   129,   112,
     130,   131,   289,    80,   290,   291,   292,   293,   183,   184,
     185,   186,   187,   188,   189,   261,   262,   351,   263,   132,
     133,   134,   135,   136,   137,   138,   208,   296,   234,   235,
     236,   139,   237,   238,   191,    31,    89,    50,    51,    52,
      81,    82,   198,   199,    83,    84,   141,   142,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,    18,   206,   176,    18,    18,    79,   204,    18,    79,
     268,    79,   276,   277,    44,    47,   315,    77,   165,   372,
      77,    79,    77,   146,    59,    79,    18,    79,   -78,    90,
      68,    63,    77,    79,   196,    44,    77,     1,    77,    47,
      86,   209,   101,   209,    77,    42,    60,     4,   272,   273,
     190,     6,   140,    79,   391,   378,   108,   287,    42,   209,
      79,    44,   100,   379,    77,    79,    59,   153,   253,   259,
     156,    77,   209,    79,   176,   203,    77,   -78,    78,    47,
     151,    88,   355,    92,    77,    79,   276,   277,   159,   342,
     373,    63,   375,    95,   380,    34,    77,    99,   337,   105,
      42,    69,   257,     7,   197,   338,   209,    79,     8,   325,
     301,   209,    19,    70,   385,   254,   264,    57,    77,   239,
      20,   190,   345,   209,    21,   158,   346,    71,    69,   244,
      22,  -138,   161,   209,   246,   209,    69,   193,    35,   365,
      70,    36,    72,   366,   251,   200,   265,   -78,    70,    73,
     209,   242,    74,   340,    71,   294,    75,   295,   209,    79,
     260,    32,    71,    79,    79,    53,   388,   272,   273,    91,
      77,    26,   392,   176,    77,    77,    73,    87,   209,   241,
      55,   107,   305,    75,    73,   209,    26,    74,   -78,   308,
     313,    75,   197,    42,   318,   150,   100,   320,   209,   322,
     209,   155,   310,   100,    79,   316,   317,    42,   272,   273,
     281,   303,   360,    49,   382,    77,   393,    69,   383,   209,
     190,    42,    96,   249,   250,  -113,    58,    69,   266,    70,
      97,   280,    69,   148,  -113,   285,   286,   -49,    37,    70,
      41,    79,    37,    71,    70,    93,    79,    38,    98,    42,
      45,   326,    77,    71,   344,   327,    66,    77,    71,    42,
      42,    48,   348,   103,   190,    73,   278,    49,    79,    69,
      49,   316,    75,   331,   279,    73,   311,    94,    74,    77,
      73,    70,    75,    74,   370,   371,   357,    75,   294,   362,
     363,   223,   271,    13,    14,    71,   368,   224,   225,   326,
     100,    74,   190,   374,   190,   109,   377,    19,   226,   227,
     228,   229,   306,   330,     8,    20,   381,    73,   333,    21,
     390,   307,   319,   110,    75,    22,   190,   335,   147,   386,
     295,    74,   148,   389,   111,   336,   113,   114,   115,   116,
     347,   162,   163,   164,   149,   152,    69,   154,   157,   165,
     166,   195,   205,    20,   209,   201,   117,    21,    70,   202,
     118,   167,   168,    22,   207,   210,   239,    56,   119,   120,
     121,   122,   123,   124,    12,   240,    13,    14,    11,     4,
     218,   219,    12,   220,    13,    14,   221,     4,   243,   248,
     267,   245,   125,   100,    73,   247,   269,   270,    13,    14,
     126,   169,   113,   114,   115,   116,   283,   162,   163,   164,
     284,   328,    69,   312,   321,   165,   166,   329,   324,    20,
     332,   334,   117,    21,    70,   349,   118,   167,   168,    22,
    -139,   339,   341,  -113,   119,   120,   121,   122,   123,   124,
     -71,   148,  -113,   352,   211,   212,   213,   214,   215,   216,
     364,   356,   369,   113,   114,   115,   116,   376,   125,   100,
      73,   255,   384,    69,    13,    14,   126,   169,   256,    12,
       5,    13,    14,   117,     4,    70,   223,   118,   218,   219,
      23,   220,   224,   225,   221,   119,   120,   121,   122,   123,
     124,    54,   194,   226,   227,   228,   229,   274,    39,   309,
     106,   160,   113,   114,   115,   116,   359,   239,   297,   125,
     100,    73,    69,   361,   299,    13,    14,   126,   252,   231,
     298,   232,   117,   233,    70,   300,   118,   387,   282,     0,
       0,     0,     0,   144,   119,   120,   121,   122,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,     0,     0,     0,     0,   145,   125,    69,
      73,     0,     0,     0,    13,    14,   126,    75,     0,   117,
       0,    70,     0,   118,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,     0,   288,     0,   125,   205,    73,    69,     0,
       0,    13,    14,   126,    75,     0,     0,     0,   117,     0,
      70,     0,   118,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,   115,
     116,     0,   358,     0,   125,   205,    73,    69,     0,     0,
      13,    14,   126,    75,     0,     0,     0,   117,     0,    70,
     223,   118,   218,   219,     0,   220,   224,   225,   221,   119,
     120,   121,   122,   123,   124,     0,     0,   226,   227,   228,
     229,   323,     0,     0,   113,   114,   115,   116,     0,     0,
     302,   239,     0,   125,    69,    73,     0,     0,     0,    13,
      14,   126,    75,     0,   117,     0,    70,     0,   118,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
     123,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,   115,   116,     0,     0,     0,     0,   314,
     125,    69,    73,   304,     0,     0,    13,    14,   126,    75,
       0,   117,     0,    70,     0,   118,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,     0,     0,     0,     0,     0,   125,    69,    73,
       0,     0,     0,    13,    14,   126,    75,     0,   117,     0,
      70,     0,   118,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   343,   125,     0,    73,     0,     0,    69,
      13,    14,   126,    75,   353,     0,     0,     0,     0,   117,
       0,    70,     0,   118,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,   115,   116,
       0,     0,     0,     0,   354,   125,    69,    73,     0,     0,
       0,    13,    14,   126,    75,     0,   117,     0,    70,     0,
     118,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,   123,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   116,     0,     0,     0,
       0,     0,   125,    69,    73,     0,     0,     0,    13,    14,
     126,    75,     0,   117,     0,    70,     0,   118,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,   115,   116,     0,     0,     0,   125,
     205,    73,    69,     0,     0,    13,    14,   126,    75,     0,
       0,     0,   117,     0,    70,     0,   118,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,     0,     0,     0,     0,   367,   125,    69,
      73,     0,     0,     0,    13,    14,   126,    75,     0,   117,
       0,    70,     0,   118,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,   115,   116,
       0,     0,     0,     0,     0,   125,    69,    73,     0,     0,
       0,    13,    14,   126,    75,     0,   117,     0,    70,     0,
     118,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,   123,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   116,     0,     0,     0,
       0,     0,   125,    69,    73,     0,     0,     0,    13,    14,
     126,   252,     0,   117,     0,    70,     0,   118,   113,   114,
     115,   116,     0,     0,     0,     0,     0,     0,    69,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,    73,     0,     0,    71,    13,    14,   126,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,    73,     0,     0,     0,
      13,    14,   126,    75
};

static const yytype_int16 yycheck[] =
{
      64,     8,   129,   100,    11,    12,    44,   127,    15,    47,
     171,    49,   191,   191,    20,    21,   255,    44,    16,   349,
      47,    59,    49,    73,    34,    63,    33,    65,    11,    48,
      41,    37,    59,    71,    57,    41,    63,    15,    65,    45,
      45,    42,   106,    42,    71,    68,    56,    68,    31,    32,
     100,     0,    72,    91,   384,    56,    67,    56,    68,    42,
      98,    67,    60,    64,    91,   103,    34,    87,   165,   166,
      89,    98,    42,   111,   171,   125,   103,    60,    44,    85,
      85,    47,   321,    49,   111,   123,   265,   265,    56,    34,
     352,    97,   354,    59,    64,    11,   123,    63,    57,    65,
      68,    13,   166,    11,   110,    64,    42,   145,    19,   270,
     230,    42,    12,    25,   376,   165,   166,    33,   145,    64,
      20,   171,    58,    42,    24,    91,    62,    39,    13,   149,
      30,    62,    98,    42,   154,    42,    13,   103,    12,    58,
      25,    15,    54,    62,   164,   111,   166,    11,    25,    61,
      42,    58,    64,    62,    39,   205,    68,   207,    42,   197,
     166,    11,    39,   201,   202,    11,    58,    31,    32,    54,
     197,     9,    56,   270,   201,   202,    61,    54,    42,   145,
      11,    56,   232,    68,    61,    42,    24,    64,    11,   239,
     254,    68,   198,    68,   258,    56,    60,   261,    42,   263,
      42,    56,   240,    60,   242,   255,   256,    68,    31,    32,
      57,   231,   339,    68,    58,   242,    58,    13,    62,    42,
     270,    68,    56,   162,   163,    55,    11,    13,   167,    25,
      64,   197,    13,    63,    64,   201,   202,    60,    59,    25,
      59,   279,    59,    39,    25,    11,   284,    68,    34,    68,
      59,   271,   279,    39,   304,   275,    68,   284,    39,    68,
      68,    59,   312,    59,   314,    61,    56,    68,   306,    13,
      68,   321,    68,   280,    64,    61,   242,    11,    64,   306,
      61,    25,    68,    64,   348,   349,   336,    68,   338,   339,
     340,    33,    55,    65,    66,    39,   346,    39,    40,   319,
      60,    64,   352,   353,   354,    11,   356,    12,    50,    51,
      52,    53,    59,   279,    19,    20,   366,    61,   284,    24,
     384,    68,    55,    60,    68,    30,   376,    56,    68,   379,
     380,    64,    63,   383,    61,    64,     3,     4,     5,     6,
     306,     8,     9,    10,    54,    11,    13,    54,    11,    16,
      17,    11,    60,    20,    42,    59,    23,    24,    25,    59,
      27,    28,    29,    30,    60,    43,    64,    56,    35,    36,
      37,    38,    39,    40,    63,    58,    65,    66,    59,    68,
      35,    36,    63,    38,    65,    66,    41,    68,    68,    68,
      57,    11,    59,    60,    61,    11,    11,    62,    65,    66,
      67,    68,     3,     4,     5,     6,    11,     8,     9,    10,
      58,    54,    13,    11,    11,    16,    17,    54,    11,    20,
      11,    56,    23,    24,    25,    14,    27,    28,    29,    30,
      62,    62,    57,    55,    35,    36,    37,    38,    39,    40,
      62,    63,    64,    11,    44,    45,    46,    47,    48,    49,
      56,    18,    56,     3,     4,     5,     6,    11,    59,    60,
      61,    11,    14,    13,    65,    66,    67,    68,    18,    63,
       1,    65,    66,    23,    68,    25,    33,    27,    35,    36,
       9,    38,    39,    40,    41,    35,    36,    37,    38,    39,
      40,    24,   106,    50,    51,    52,    53,    54,    19,   240,
      66,    97,     3,     4,     5,     6,   338,    64,   209,    59,
      60,    61,    13,   339,   217,    65,    66,    67,    68,    59,
     210,    61,    23,    63,    25,   222,    27,   380,   198,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    57,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      33,    27,    35,    36,    -1,    38,    39,    40,    41,    35,
      36,    37,    38,    39,    40,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      56,    64,    -1,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,
      59,    13,    61,    62,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    39,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    -1,
      65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    70,    76,    68,    77,     0,    11,    19,    78,
      79,    59,    63,    65,    66,    77,    81,    82,   167,    12,
      20,    24,    30,    79,    83,    84,    89,    90,    91,   100,
     103,   154,    11,    80,    81,    82,    82,    59,    68,   109,
     115,    59,    68,   102,   113,    59,   105,   113,    59,    68,
     156,   157,   158,    11,    84,    11,    56,    81,    11,    34,
      56,   110,   111,   113,   107,   109,    68,   101,   102,    13,
      25,    39,    54,    61,    64,    68,   114,   117,   118,   120,
     122,   159,   160,   163,   164,   104,   105,    54,   118,   155,
     156,    54,   118,    11,    11,   118,    56,    64,    34,   118,
      60,    85,   106,    59,   108,   118,   107,    56,   102,    11,
      60,    61,   118,     3,     4,     5,     6,    23,    27,    35,
      36,    37,    38,    39,    40,    59,    67,    75,   116,   117,
     119,   120,   138,   139,   140,   141,   142,   143,   144,   150,
     153,   165,   166,   167,    34,    58,   138,    68,    63,    54,
      56,   105,    11,   153,    54,    56,   156,    11,   118,    56,
     111,   118,     8,     9,    10,    16,    17,    28,    29,    68,
      85,    87,    88,    89,    92,    93,    94,    95,    96,    97,
      98,    99,   113,   127,   128,   129,   130,   131,   132,   133,
     138,   153,   112,   118,   106,    11,    57,   113,   161,   162,
     118,    59,    59,   138,   144,    60,   121,    60,   145,    42,
      43,    44,    45,    46,    47,    48,    49,    73,    35,    36,
      38,    41,    72,    33,    39,    40,    50,    51,    52,    53,
      74,    59,    61,    63,   147,   148,   149,   151,   152,    64,
      58,   118,    58,    68,   153,    11,   153,    11,    68,    93,
      93,   153,    68,    94,   138,    11,    18,    85,    86,    94,
     113,   134,   135,   137,   138,   153,    93,    57,    88,    11,
      62,    55,    31,    32,    54,    71,    72,    74,    56,    64,
     118,    57,   162,    11,    58,   118,   118,    56,    57,   121,
     123,   124,   125,   126,   138,   138,   146,   139,   140,   141,
     142,   144,    56,   153,    62,   138,    59,    68,   138,   119,
     120,   118,    11,    85,    11,    86,   138,   138,    85,    55,
      85,    11,    85,    54,    11,    88,   153,   153,    54,    54,
     118,   167,    11,   118,    56,    56,    64,    57,    64,    62,
      62,    57,    34,    58,   138,    58,    62,   118,   138,    14,
      94,   136,    11,    18,    11,    86,    18,   138,    57,   124,
     121,   126,   138,   138,    56,    58,    62,    58,   138,    56,
      85,    85,   132,   136,   138,   136,    11,   138,    56,    64,
      64,   138,    58,    62,    14,   136,   138,   146,    58,   138,
      85,   132,    56,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    71,    72,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    75,    76,
      77,    78,    78,    78,    79,    79,    80,    80,    80,    81,
      81,    81,    82,    83,    83,    84,    84,    84,    85,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    90,    90,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    95,    96,    97,
      97,    98,    99,   100,   100,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   111,
     112,   112,   113,   113,   114,   115,   116,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   131,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   136,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   146,   146,   146,   147,   148,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   158,   159,   160,   160,   161,   161,   162,   162,   163,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   167,
     167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     0,     3,     2,     4,     2,     0,     3,     2,     2,
       2,     1,     1,     3,     2,     1,     1,     1,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     5,
       3,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     3,     3,     2,     4,     3,     2,     2,     4,     3,
       2,     4,     3,     2,     2,     4,     3,     1,     1,     2,
       3,     1,     2,     3,     4,     1,     3,     2,     3,     2,
       3,     1,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     3,     4,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     2,     1,
       3,     5,     5,     5,     7,     7,     2,     3,     3,     3,
       2,     3,     3,     3,     4,     4,     4,     5,     1,     1,
       2,     4,     4,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     2,     3,     0,     3,     5,     2,     3,     4,
       3,     4,     5,     6,     7,     8,     6,     4,     4,     4,
       2,     4,     3,     1,     4,     2,     3,     2,     1,     1,
       3,     2,     5,     4,     3,     2,     3,     3,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
        case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    {;}
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parser.y" /* yacc.c:1646  */
    {;}
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "parser.y" /* yacc.c:1646  */
    {;}
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 71 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 72 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 73 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 78 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 79 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "parser.y" /* yacc.c:1646  */
    {cout << "ISEQ\n";}
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "parser.y" /* yacc.c:1646  */
    {;}
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "parser.y" /* yacc.c:1646  */
    {;}
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 89 "parser.y" /* yacc.c:1646  */
    {;}
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 90 "parser.y" /* yacc.c:1646  */
    {;}
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 91 "parser.y" /* yacc.c:1646  */
    {;}
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 92 "parser.y" /* yacc.c:1646  */
    {;}
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1919 "parser.tab.c" /* yacc.c:1646  */
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
#line 586 "parser.y" /* yacc.c:1906  */




	











	


