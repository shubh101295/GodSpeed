/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"


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


#line 94 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 26 "src/parser.y"

	#include "node.hpp"

#line 141 "parser.tab.c"

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
#line 30 "src/parser.y"

	Node* nt;
	char* sval;

#line 227 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   1807

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

#define YYUNDEFTOK  2
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    87,    94,   100,   109,   118,   124,   133,
     139,   143,   153,   159,   167,   173,   178,   187,   196,   204,
     214,   221,   229,   239,   249,   257,   266,   282,   290,   298,
     306,   313,   320,   327,   334,   340,   345,   352,   359,   369,
     376,   383,   394,   406,   417,   424,   434,   445,   451,   458,
     464,   470,   478,   485,   495,   503,   513,   571,   636,   642,
     654,   660,   669,   687,   711,   768,   769,   770,   774,   775,
     779,   780,   781,   785,   794,   820,   858,   864,   873,   882,
     891,   897,   904,   913,   919,   931,   956,   966,   975,   982,
     989,   995,  1001,  1007,  1013,  1018,  1027,  1033,  1042,  1048,
    1055,  1064,  1082,  1086,  1092,  1100,  1104,  1111,  1127,  1134,
    1143,  1148,  1156,  1163,  1173,  1174,  1179,  1185,  1197,  1202,
    1213,  1224,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,
    1239,  1240,  1243,  1247,  1248,  1252,  1256,  1257,  1258,  1259,
    1260,  1261,  1265,  1266,  1267,  1268,  1272,  1273,  1277,  1281,
    1286,  1287,  1288,  1291,  1294,  1297,  1300,  1303,  1306,  1309,
    1312,  1315,  1318,  1321,  1324,  1327,  1330,  1333,  1336,  1339,
    1342,  1345,  1348,  1354,  1357,  1360,  1363,  1366,  1369,  1377,
    1385,  1392,  1401,  1402,  1408,  1415,  1416,  1426,  1434,  1440,
    1451,  1463,  1475,  1482,  1486,  1492,  1499,  1507,  1520,  1530,
    1539,  1547,  1558,  1566,  1570,  1579,  1593,  1602,  1615,  1616,
    1620,  1621,  1625,  1626,  1630,  1634,  1638,  1654,  1665,  1677,
    1683,  1707,  1722,  1727,  1741,  1753,  1765,  1772,  1782,  1789,
    1796,  1803,  1810,  1817,  1827,  1831
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
  "MethodDecl", "LabeledStmt", "SimpleStmt", "EmptyStmt", "ExpressionStmt",
  "IncDecStmt", "Assignment", "ShortVarDecl", "VarDecl", "VarSpecList",
  "VarSpec", "ConstDecl", "ConstSpecList", "ConstSpec", "FunctionBody",
  "Signature", "Result", "TypeList", "Parameters", "ParameterList",
  "ParameterDecl", "IdentifierList", "Receiver", "CompositeLit",
  "LiteralType", "Type", "Operand", "OperandName", "LiteralValue",
  "SliceType", "ElementList", "KeyedElement", "Key", "Element",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "SwitchStmt",
  "ExprSwitchStmt", "ExprCaseClauseList", "ExprCaseClause",
  "ExprSwitchCase", "FallthroughStmt", "IfStmt", "ForStmt", "ForClause",
  "InitStmt", "PostStmt", "RangeClause", "Expression", "UnaryExpr",
  "PrimaryExpr", "StructLiteral", "KeyValueList", "Selector", "Index",
  "Slice", "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "MapType", "StructType", "FieldDeclList", "FieldDecl", "PointerType",
  "BaseType", "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-356)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -55,    38,    45,  -356,  -356,  -356,    64,   267,   235,
     119,   201,    35,  -356,  -356,    35,  -356,  -356,  -356,   121,
     152,   167,   204,   156,   127,   176,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,   237,   205,  -356,  -356,    92,  -356,
    -356,    66,   147,  -356,  -356,     7,    94,  -356,    27,   151,
     136,  -356,  -356,  -356,  -356,   223,  -356,  -356,   240,  -356,
    -356,   110,  -356,   270,   191,   191,   102,   241,   244,   252,
     140,   490,   233,  -356,  1185,  -356,   250,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,   146,   312,  1185,   271,   168,   318,
     140,  -356,  -356,  -356,  -356,   193,  -356,   288,    26,   288,
    -356,   347,  -356,    36,   140,  -356,  -356,  -356,  -356,  -356,
    -356,   300,   306,   309,  1185,  1185,  1185,  1185,  1185,   140,
    1185,  -356,  -356,   308,  -356,   313,  1605,  -356,   282,  -356,
    -356,  -356,  -356,  -356,  1712,   305,  1185,  -356,   361,  -356,
     305,  1185,  -356,   363,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,   140,  -356,  -356,  -356,  -356,  -356,   270,    95,
     364,   328,   140,   140,   178,  -356,  -356,  -356,   308,   313,
    -356,  -356,  -356,  1668,   537,  -356,  1185,  -356,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  1185,  1185,   140,   701,   748,
     209,  -356,  -356,  -356,  -356,  -356,  1185,   305,  -356,   305,
    -356,   440,  -356,   260,  -356,    35,  -356,   365,  -356,   140,
     332,   272,  -356,  -356,  -356,  -356,   327,   253,  -356,   330,
    -356,  1509,  1534,   336,  -356,   481,   481,  -356,  -356,  -356,
     481,  1733,  1754,   311,   311,   311,   311,   311,   311,  -356,
    -356,  -356,  -356,  -356,  -356,    25,   795,  1425,   140,  -356,
    1712,   338,   339,  1185,  1232,   603,   842,   340,  -356,    18,
    -356,   374,   385,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,    72,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  1339,    -9,  -356,   140,  -356,  -356,  -356,  -356,  -356,
    1185,  -356,   652,   891,  1185,  -356,   344,  -356,  -356,  1453,
    -356,   940,   356,  -356,  -356,   305,   154,   404,  1270,  1185,
    -356,   288,  -356,   227,   288,   405,   288,  1293,   225,     0,
     407,  1316,  -356,   440,   362,   409,  -356,  1185,  -356,  -356,
    1185,  -356,  1371,  -356,  -356,  -356,  -356,  1712,  1398,  -356,
    -356,  1185,  -356,  1481,  -356,  1185,   408,  1712,  -356,   991,
    -356,  1038,  -356,  1089,  1185,  -356,  -356,     1,  -356,   359,
    1136,    80,  -356,  -356,  -356,   305,   305,  -356,  1185,  1185,
    1626,  -356,  1185,  1559,    -6,  1185,  1232,   412,  1712,  1185,
     305,  -356,  -356,   440,   107,  1582,  -356,   133,  1690,  -356,
    -356,  1647,   410,  -356,  -356,  1712,  -356,  -356,  1232,  1712,
     374,  -356,   150,   166,  -356,  -356,  -356,    -6,  -356,  -356,
    -356,   184,  -356,  -356,  -356
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   234,   235,     0,    11,    16,    17,     0,
       0,     0,     0,     0,     2,     0,    20,    21,    22,    40,
      41,    39,     8,    10,     0,     0,    15,    14,     0,     3,
      88,     0,     0,    87,    58,     0,     0,    65,     0,     0,
       0,   209,   212,   213,     7,     0,    19,     9,     0,    13,
      80,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,    96,    62,    97,    93,    95,
      90,    92,    91,    67,     0,     0,     0,    70,     0,     0,
       0,   215,    18,    12,    81,     0,    85,     4,    74,    44,
      59,     0,    61,     0,     0,   224,   223,   228,   229,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   227,     0,   179,    99,     0,   172,   178,   180,
      98,   226,   231,    86,   206,    64,     0,    66,     0,    69,
      72,     0,   208,     0,   211,   214,    82,    84,     3,    43,
      73,     4,     0,    75,    77,    45,    60,   218,     0,     0,
       0,     0,     0,     0,     0,   175,   176,   177,     0,    99,
     173,   174,   105,     0,     0,    89,     0,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   186,   184,     0,    63,    68,    71,
     210,    52,    42,     0,    79,   222,   217,     0,   219,     0,
       0,     0,    94,    99,   100,   102,   113,     0,   106,     0,
     108,   112,     0,     0,   159,   160,   161,   163,   153,   158,
     162,   165,   164,   166,   167,   170,   168,   169,   171,   155,
     154,   156,   157,   225,   203,     0,     0,     0,     0,   190,
     207,   116,   118,   114,    52,    52,    52,     0,   135,   101,
      36,     4,     0,    27,    28,    29,    47,    48,    49,    50,
      51,     0,    30,    31,    32,    33,    34,   121,    35,    37,
      38,    53,     0,    76,     0,   221,   220,   216,   201,   200,
       0,   103,     0,     0,     0,   187,     0,   204,   193,     0,
     191,     0,     0,   117,   119,   115,   101,     0,   206,     0,
     142,     0,   148,     0,     0,     0,     0,   206,     0,     0,
       0,   206,   120,    52,     0,     0,    26,     0,    54,    55,
       0,    78,     0,   104,   107,   113,   109,   112,   188,   205,
     192,     0,   194,     0,   202,     0,   136,   150,   144,     0,
     143,     0,   145,     0,     0,   134,   122,     0,   131,     0,
       0,     0,    46,    23,    25,    57,    56,   199,     0,     0,
       0,   195,     0,     0,     0,     0,    52,     0,    24,     0,
     133,   126,   130,    52,     0,     0,   124,     0,     0,   189,
     196,     0,   137,   139,   138,   151,   149,   146,    52,   152,
     132,   123,     0,     0,   128,   198,   197,     0,   147,   127,
     125,     0,   141,   140,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -356,  -356,   277,  -145,  -356,   425,  -356,   419,  -356,    13,
     264,  -356,   406,   -96,    70,    39,  -269,    68,  -356,  -356,
    -356,  -230,  -356,  -356,  -356,  -356,  -356,  -356,  -356,   -21,
    -356,  -356,   -42,   337,   372,  -356,  -356,   428,  -356,   334,
      -5,  -356,  -356,   208,   123,   274,   -20,  -157,  -356,  -356,
     149,  -356,   155,  -356,  -356,  -356,  -356,  -356,  -356,  -327,
    -349,  -356,  -356,  -355,  -356,  -356,  -356,    44,  -356,   -71,
     239,  -356,  -356,    75,  -356,  -356,  -356,  -356,  -356,  -356,
     -67,  -356,  -356,   -35,  -356,  -356,  -356,  -356,  -356,   296,
    -356,  -356,  -356,  -356,  -356,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    64,   149,     3,    15,     9,    10,    34,    16,
      17,    24,    25,   270,   321,   271,   272,   273,    27,    28,
     274,   275,   276,   277,   278,   279,   280,    29,    66,    44,
      30,    84,    47,   151,    97,   153,   213,    98,    61,    62,
     281,    41,   122,   123,   105,   124,   125,   175,    78,   227,
     228,   229,   230,   282,   283,   284,   285,   286,   287,   367,
     368,   369,   288,   289,   290,   324,   325,   407,   326,   134,
     127,   128,   177,   233,   201,   202,   203,   129,   204,   205,
     292,    31,    88,    51,    52,    53,    79,    80,   159,   160,
      81,   106,    82,   130,   131,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   150,   335,   150,    85,    18,   212,   135,    18,    18,
     264,     1,    18,     4,    89,    45,    48,   226,   392,   140,
      68,    67,   364,   364,    35,    77,   365,   365,    77,   404,
      77,    18,    69,    63,   317,   322,   330,    45,     6,    68,
      68,    48,   138,    77,   397,   101,    70,    58,   392,   173,
      77,    69,    69,   143,   148,   206,     7,   366,   391,   306,
     340,    45,   423,   392,   372,    70,    70,   412,    71,   207,
      77,    72,   392,   -87,   209,    73,    74,    26,    77,    48,
     333,   307,   -87,     8,    77,   152,   421,    71,    71,   206,
      63,    72,    26,   157,    73,    73,    86,   169,   158,    77,
      13,    14,   364,   231,    43,   232,   365,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   334,   337,   257,   364,
      32,   255,    77,   365,    65,   260,    72,   396,    77,    19,
     291,   335,    77,    77,   223,   226,   345,    20,    60,    68,
      83,    21,   216,    68,   158,   364,   406,    22,   100,   365,
      43,    69,    43,    43,   411,    69,    94,    54,    76,   320,
      43,    87,   364,    91,    95,    70,   365,    77,   406,    70,
      38,   107,   108,   109,   110,   309,    96,    56,   364,    39,
     414,    68,   365,   318,   327,   331,   315,    71,   328,    77,
     291,    71,   137,    69,    73,    90,   364,   419,    73,   -87,
     365,    42,   295,   145,    43,    43,    59,    70,   -87,    50,
      43,   154,   356,   420,   142,   358,    46,   161,   360,   342,
     362,   231,   347,   348,    92,    43,    50,   120,    77,    71,
     353,   424,   172,    13,    14,   121,    73,    19,   357,   146,
      38,    93,   102,    75,     8,    20,    75,    33,    75,    21,
     323,    43,   291,    49,    12,    22,    13,    14,   258,     4,
     375,    75,    50,   376,    77,   214,    36,   259,    75,    37,
     380,   215,   359,    68,   383,   220,   221,   402,   403,   206,
     388,    72,   375,    57,   363,    69,   376,   390,    75,   395,
      12,   133,    13,    14,   103,     4,    75,   398,   232,    70,
     301,   401,    75,   104,   405,   291,   293,   302,   409,   136,
     253,   422,   291,   139,   294,   168,    11,    75,   299,   144,
      12,    71,    13,    14,    72,     4,   300,   291,    73,   291,
     141,   198,   297,   199,   178,   200,   179,   180,   148,   181,
     182,   183,   184,   165,   166,   167,   170,   171,   156,   162,
      75,   193,   194,   195,   196,   163,    75,   164,   174,   206,
      75,    75,   208,   176,   210,   218,   296,   107,   108,   109,
     110,   312,   261,   262,   263,   -52,   219,    68,   298,  -111,
     264,   265,   303,   305,    20,   266,   336,   111,    21,    69,
     349,   112,   267,   268,    22,    75,   313,   314,   332,   114,
     115,   116,   354,   117,   118,   355,   361,   341,   370,   373,
     374,   393,   384,   408,   417,   211,     5,    75,    23,   147,
      55,   387,   410,   120,   148,    71,   155,    99,   222,    13,
      14,   121,   269,   107,   108,   109,   110,    40,   261,   262,
     263,   344,   418,    68,   399,   217,   264,   265,   346,     0,
      20,   266,     0,   111,    21,    69,    75,   112,   267,   268,
      22,     0,     0,     0,     0,   114,   115,   116,     0,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,     0,     0,   120,
     148,    71,    75,    68,     0,    13,    14,   121,   269,     0,
       0,     0,     0,   111,   178,    69,     0,   112,     0,   181,
     182,   183,     0,     0,   113,   114,   115,   116,     0,   117,
     118,   193,   194,   195,   196,     0,     0,     0,     0,     0,
     107,   108,   109,   110,     0,     0,     0,     0,   119,   120,
      68,    71,     0,     0,     0,    13,    14,   121,    73,     0,
     111,     0,    69,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   114,   115,   116,     0,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,   120,   174,    71,     0,
       0,     0,    13,    14,   121,    73,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,   319,     0,     0,     0,     0,   111,     0,    69,     0,
     112,     0,     0,     0,     0,     0,     0,     0,   114,   115,
     116,     0,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,   120,   148,    71,    68,     0,     0,    13,    14,
     121,   316,     0,     0,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,     0,   343,
       0,   120,   174,    71,    68,     0,     0,    13,    14,   121,
      73,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,     0,     0,   254,     0,     0,
     120,    68,    71,     0,     0,     0,    13,    14,   121,    73,
       0,   111,     0,    69,     0,   112,     0,     0,     0,     0,
       0,     0,     0,   114,   115,   116,     0,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,     0,     0,     0,     0,     0,   120,    68,    71,
     256,     0,     0,    13,    14,   121,    73,     0,   111,     0,
      69,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,     0,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,     0,   308,   120,    68,    71,     0,     0,     0,
      13,    14,   121,    73,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,     0,     0,
       0,   120,   329,    71,    68,     0,     0,    13,    14,   121,
     316,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,     0,     0,     0,
     120,   174,    71,    68,     0,     0,    13,    14,   121,    73,
       0,     0,     0,   111,     0,    69,     0,   112,     0,     0,
       0,     0,     0,     0,     0,   114,   115,   116,     0,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,   352,   120,
       0,    71,     0,     0,    68,    13,    14,   121,    73,   385,
       0,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,     0,     0,     0,     0,   386,
     120,    68,    71,     0,     0,     0,    13,    14,   121,    73,
       0,   111,     0,    69,     0,   112,     0,     0,     0,     0,
       0,     0,     0,   114,   115,   116,     0,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,   109,   110,     0,   120,     0,    71,
       0,     0,    68,    13,    14,   121,    73,   389,     0,     0,
       0,     0,   111,     0,    69,     0,   112,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,     0,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,     0,     0,     0,     0,     0,   120,    68,
      71,     0,     0,     0,    13,    14,   121,    73,     0,   111,
       0,    69,     0,   112,     0,     0,     0,     0,     0,     0,
       0,   114,   115,   116,     0,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,     0,     0,     0,   120,   394,    71,    68,     0,
       0,    13,    14,   121,    73,     0,     0,     0,   111,     0,
      69,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,     0,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,     0,     0,   120,    68,    71,     0,     0,     0,
      13,    14,   121,    73,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,    71,     0,     0,     0,    13,    14,   121,
     316,   338,   339,   178,   -53,   179,   180,     0,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   338,   339,   178,   -53,   179,   180,
     148,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   338,   339,   178,
       0,   179,   180,   -24,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     338,   339,   178,     0,   179,   180,   371,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -206,   178,     0,   179,   180,  -206,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,   377,     0,     0,
       0,   178,     0,   179,   180,   378,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,     0,     0,     0,   178,     0,
     179,   180,   379,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,     0,   310,     0,     0,   178,   311,   179,   180,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
       0,   350,     0,     0,   178,   351,   179,   180,     0,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,     0,     0,   381,
       0,     0,   178,   382,   179,   180,     0,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,   178,     0,   179,
     180,  -110,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,     0,   178,     0,   179,   180,   304,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,   178,     0,   179,   180,   148,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   178,     0,
     179,   180,   413,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   178,
       0,   179,   180,   197,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     178,     0,   179,   180,   400,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   178,     0,   179,   180,   416,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   178,   224,   179,   180,     0,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   178,   415,   179,   180,     0,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   178,     0,   179,   180,
       0,   181,   182,   183,   184,     0,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   178,     0,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
      71,    97,   271,    99,    46,     8,   151,    74,    11,    12,
      16,    15,    15,    68,    49,    20,    21,   174,   367,    86,
      13,    42,    22,    22,    11,    45,    26,    26,    48,   384,
      50,    34,    25,    38,   264,   265,   266,    42,     0,    13,
      13,    46,    84,    63,   371,    66,    39,    34,   397,   120,
      70,    25,    25,    88,    60,    64,    11,    57,    57,    34,
      69,    66,   417,   412,   333,    39,    39,   394,    61,   136,
      90,    64,   421,    55,   141,    68,    69,     9,    98,    84,
      62,    56,    64,    19,   104,    59,   413,    61,    61,    64,
      95,    64,    24,    57,    68,    68,    69,   117,   103,   119,
      65,    66,    22,   174,    68,   176,    26,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   271,    55,   199,    22,
      11,   198,   152,    26,    68,   206,    64,    57,   158,    12,
     211,   410,   162,   163,   164,   302,   303,    20,    56,    13,
      56,    24,    57,    13,   159,    22,   386,    30,    56,    26,
      68,    25,    68,    68,    57,    25,    56,    11,    45,   265,
      68,    48,    22,    50,    64,    39,    26,   197,   408,    39,
      59,     3,     4,     5,     6,   256,    63,    11,    22,    68,
      57,    13,    26,   264,   265,   266,   263,    61,   265,   219,
     271,    61,    56,    25,    68,    69,    22,    57,    68,    55,
      26,    59,   215,    90,    68,    68,    11,    39,    64,    68,
      68,    98,   318,    57,    56,   321,    59,   104,   324,   300,
     326,   302,   303,   304,    11,    68,    68,    59,   258,    61,
     311,    57,   119,    65,    66,    67,    68,    12,   319,    56,
      59,    11,    11,    45,    19,    20,    48,    56,    50,    24,
     265,    68,   333,    59,    63,    30,    65,    66,    59,    68,
     337,    63,    68,   340,   294,   152,    12,    68,    70,    15,
     351,   158,    55,    13,   355,   162,   163,   383,   384,    64,
     361,    64,   359,    56,    69,    25,   363,   364,    90,   370,
      63,    68,    65,    66,    60,    68,    98,   378,   379,    39,
      57,   382,   104,    61,   385,   386,    56,    64,   389,    69,
     197,   417,   393,    11,    64,   117,    59,   119,    56,    11,
      63,    61,    65,    66,    64,    68,    64,   408,    68,   410,
      69,    59,   219,    61,    33,    63,    35,    36,    60,    38,
      39,    40,    41,   114,   115,   116,   117,   118,    11,    59,
     152,    50,    51,    52,    53,    59,   158,    58,    60,    64,
     162,   163,    11,    60,    11,    11,    11,     3,     4,     5,
       6,   258,     8,     9,    10,    11,    58,    13,    56,    62,
      16,    17,    62,    57,    20,    21,    11,    23,    24,    25,
      56,    27,    28,    29,    30,   197,    68,    68,    68,    35,
      36,    37,    56,    39,    40,    11,    11,   294,    11,    57,
      11,    62,    14,    11,    14,   148,     1,   219,     9,    95,
      24,   361,   393,    59,    60,    61,    99,    65,   164,    65,
      66,    67,    68,     3,     4,     5,     6,    19,     8,     9,
      10,   302,   408,    13,   379,   159,    16,    17,   303,    -1,
      20,    21,    -1,    23,    24,    25,   258,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    59,
      60,    61,   294,    13,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    23,    33,    25,    -1,    27,    -1,    38,
      39,    40,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    -1,
      -1,    -1,    65,    66,    67,    68,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    57,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    56,    -1,    -1,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      62,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    58,    59,    13,    61,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    58,    59,
      -1,    61,    -1,    -1,    13,    65,    66,    67,    68,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    59,    -1,    61,
      -1,    -1,    13,    65,    66,    67,    68,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    31,    32,    33,    11,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    31,    32,    33,    11,    35,    36,
      60,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    31,    32,    33,
      -1,    35,    36,    60,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      31,    32,    33,    -1,    35,    36,    60,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    33,    -1,    35,    36,    69,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    33,    -1,    35,    36,    64,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    64,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    33,    62,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    33,    62,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    62,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    62,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    33,    -1,    35,    36,    60,
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
      48,    49,    50,    51,    52,    53,    33,    -1,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    33,    -1,    35,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   165,    12,
      20,    24,    30,    77,    81,    82,    87,    88,    89,    97,
     100,   151,    11,    56,    78,    79,    80,    80,    59,    68,
     107,   111,    59,    68,    99,   110,    59,   102,   110,    59,
      68,   153,   154,   155,    11,    82,    11,    56,    79,    11,
      56,   108,   109,   110,    72,    68,    98,    99,    13,    25,
      39,    61,    64,    68,    69,   113,   114,   116,   118,   156,
     157,   160,   162,    56,   101,   102,    69,   114,   152,   153,
      69,   114,    11,    11,    56,    64,   114,   104,   107,   104,
      56,    99,    11,    60,    61,   114,   161,     3,     4,     5,
       6,    23,    27,    34,    35,    36,    37,    39,    40,    58,
      59,    67,   112,   113,   115,   116,   139,   140,   141,   147,
     163,   164,   165,    68,   139,   150,    69,    56,   102,    11,
     150,    69,    56,   153,    11,   114,    56,   109,    60,    73,
      83,   103,    59,   105,   114,   103,    11,    57,   110,   158,
     159,   114,    59,    59,    58,   140,   140,   140,   113,   116,
     140,   140,   114,   139,    60,   117,    60,   142,    33,    35,
      36,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    58,    59,    61,
      63,   144,   145,   146,   148,   149,    64,   150,    11,   150,
      11,    72,    73,   106,   114,   114,    57,   159,    11,    58,
     114,   114,   115,   116,    56,    57,   117,   119,   120,   121,
     122,   139,   139,   143,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   114,    56,   150,    62,   139,    59,    68,
     139,     8,     9,    10,    16,    17,    21,    28,    29,    68,
      83,    85,    86,    87,    90,    91,    92,    93,    94,    95,
      96,   110,   123,   124,   125,   126,   127,   128,   132,   133,
     134,   139,   150,    56,    64,   165,    11,   114,    56,    56,
      64,    57,    64,    62,    62,    57,    34,    56,    58,   139,
      58,    62,   114,    68,    68,   150,    68,    91,   139,    18,
      83,    84,    91,   110,   135,   136,   138,   139,   150,    60,
      91,   139,    68,    62,    73,    86,    11,    55,    31,    32,
      69,   114,   139,    57,   120,   117,   122,   139,   139,    56,
      58,    62,    58,   139,    56,    11,    83,   139,    83,    55,
      83,    11,    83,    69,    22,    26,    57,   129,   130,   131,
      11,    60,    86,    57,    11,   150,   150,    56,    64,    64,
     139,    58,    62,   139,    14,    18,    11,    84,   139,    18,
     150,    57,   130,    62,    60,   139,    57,   129,   139,   143,
      58,   139,    83,    83,   133,   139,    91,   137,    11,   139,
      85,    57,   129,    60,    57,    56,    58,    14,   137,    57,
      57,   129,    83,   133,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    88,    88,    89,    89,    90,    91,    91,    91,
      91,    91,    92,    93,    94,    94,    95,    96,    97,    97,
      98,    98,    99,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   102,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   107,   108,   108,   109,   110,   110,   111,   112,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
     115,   116,   117,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   135,   135,   136,   137,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   143,   143,
     144,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   148,   149,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   155,   156,   157,   157,   158,
     158,   159,   159,   160,   161,   162,   163,   163,   164,   164,
     164,   164,   164,   164,   165,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     0,     2,     1,     3,     2,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     3,     2,
       1,     1,     1,     5,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     5,     4,     5,     3,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     3,     3,     2,     4,
       3,     2,     2,     4,     3,     2,     4,     3,     3,     2,
       2,     4,     3,     1,     1,     2,     3,     1,     3,     1,
       2,     3,     4,     1,     3,     2,     3,     1,     1,     2,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     4,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     1,     3,     5,     4,     6,     4,     6,     5,     7,
       2,     1,     3,     2,     1,     1,     3,     5,     5,     5,
       7,     7,     2,     3,     3,     3,     4,     5,     1,     1,
       2,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     3,     3,     5,
       2,     3,     4,     3,     4,     5,     6,     7,     8,     6,
       4,     4,     4,     2,     3,     4,     1,     3,     4,     2,
       3,     2,     1,     1,     3,     2,     5,     4,     3,     2,
       3,     3,     2,     2,     1,     4,     1,     1,     1,     1,
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

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 75 "src/parser.y"
                                                             {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children((yyvsp[-3].nt));
			 curr->add_non_terminal_children((yyvsp[-1].nt));
			 curr->add_non_terminal_children((yyvsp[0].nt));
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			 (yyval.nt) = curr;
			}
#line 2011 "parser.tab.c"
    break;

  case 3:
#line 87 "src/parser.y"
        {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 2020 "parser.tab.c"
    break;

  case 4:
#line 94 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 2028 "parser.tab.c"
    break;

  case 5:
#line 100 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2039 "parser.tab.c"
    break;

  case 6:
#line 109 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2050 "parser.tab.c"
    break;

  case 7:
#line 118 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2061 "parser.tab.c"
    break;

  case 8:
#line 124 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2072 "parser.tab.c"
    break;

  case 9:
#line 133 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2083 "parser.tab.c"
    break;

  case 10:
#line 139 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2092 "parser.tab.c"
    break;

  case 11:
#line 143 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2103 "parser.tab.c"
    break;

  case 12:
#line 153 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2114 "parser.tab.c"
    break;

  case 13:
#line 159 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2124 "parser.tab.c"
    break;

  case 14:
#line 167 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2135 "parser.tab.c"
    break;

  case 15:
#line 173 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2145 "parser.tab.c"
    break;

  case 16:
#line 178 "src/parser.y"
                     {
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2156 "parser.tab.c"
    break;

  case 17:
#line 187 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2167 "parser.tab.c"
    break;

  case 18:
#line 196 "src/parser.y"
                                              { 
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		(curr->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2180 "parser.tab.c"
    break;

  case 19:
#line 204 "src/parser.y"
                              { 
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2192 "parser.tab.c"
    break;

  case 20:
#line 214 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2204 "parser.tab.c"
    break;

  case 21:
#line 221 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2217 "parser.tab.c"
    break;

  case 22:
#line 229 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2229 "parser.tab.c"
    break;

  case 23:
#line 239 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt)); 
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2241 "parser.tab.c"
    break;

  case 24:
#line 249 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2251 "parser.tab.c"
    break;

  case 25:
#line 257 "src/parser.y"
                                       {
		cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2265 "parser.tab.c"
    break;

  case 26:
#line 266 "src/parser.y"
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
#line 2283 "parser.tab.c"
    break;

  case 27:
#line 282 "src/parser.y"
                    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2296 "parser.tab.c"
    break;

  case 28:
#line 290 "src/parser.y"
                      {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2309 "parser.tab.c"
    break;

  case 29:
#line 298 "src/parser.y"
                     {
		Node* curr = new Node("Statement");
		cout<<"Statement:	SimpleStmt\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2322 "parser.tab.c"
    break;

  case 30:
#line 306 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2334 "parser.tab.c"
    break;

  case 31:
#line 313 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2346 "parser.tab.c"
    break;

  case 32:
#line 320 "src/parser.y"
                       {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2358 "parser.tab.c"
    break;

  case 33:
#line 327 "src/parser.y"
                   {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2370 "parser.tab.c"
    break;

  case 34:
#line 334 "src/parser.y"
                     {
		// Might change - tpbe done by shubh
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2381 "parser.tab.c"
    break;

  case 35:
#line 340 "src/parser.y"
                          {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2391 "parser.tab.c"
    break;

  case 36:
#line 345 "src/parser.y"
                {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2403 "parser.tab.c"
    break;

  case 37:
#line 352 "src/parser.y"
                 {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2415 "parser.tab.c"
    break;

  case 38:
#line 359 "src/parser.y"
                  {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2427 "parser.tab.c"
    break;

  case 39:
#line 369 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2439 "parser.tab.c"
    break;

  case 40:
#line 376 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2451 "parser.tab.c"
    break;

  case 41:
#line 383 "src/parser.y"
                     {
		// might change
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2464 "parser.tab.c"
    break;

  case 42:
#line 394 "src/parser.y"
                                                                    {
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);
	
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)-> current_node_data = new NodeData("Function" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data; 

	}
#line 2481 "parser.tab.c"
    break;

  case 43:
#line 406 "src/parser.y"
                                                          {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function"+ string((yyvsp[-3].sval)));
	}
#line 2494 "parser.tab.c"
    break;

  case 44:
#line 417 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2506 "parser.tab.c"
    break;

  case 45:
#line 424 "src/parser.y"
                                                          {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)=curr;
	}
#line 2518 "parser.tab.c"
    break;

  case 46:
#line 434 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2530 "parser.tab.c"
    break;

  case 47:
#line 445 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2541 "parser.tab.c"
    break;

  case 48:
#line 451 "src/parser.y"
                         {
		cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2553 "parser.tab.c"
    break;

  case 49:
#line 458 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2564 "parser.tab.c"
    break;

  case 50:
#line 464 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2575 "parser.tab.c"
    break;

  case 51:
#line 470 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2586 "parser.tab.c"
    break;

  case 52:
#line 478 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2595 "parser.tab.c"
    break;

  case 53:
#line 485 "src/parser.y"
                   {
		cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2607 "parser.tab.c"
    break;

  case 54:
#line 495 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2620 "parser.tab.c"
    break;

  case 55:
#line 503 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2632 "parser.tab.c"
    break;

  case 56:
#line 513 "src/parser.y"
                                               {
		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
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
#line 2692 "parser.tab.c"
    break;

  case 57:
#line 571 "src/parser.y"
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
#line 2759 "parser.tab.c"
    break;

  case 58:
#line 636 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2770 "parser.tab.c"
    break;

  case 59:
#line 642 "src/parser.y"
                                               {
		// Might change
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2782 "parser.tab.c"
    break;

  case 60:
#line 654 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2793 "parser.tab.c"
    break;

  case 61:
#line 660 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2804 "parser.tab.c"
    break;

  case 62:
#line 669 "src/parser.y"
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
#line 2827 "parser.tab.c"
    break;

  case 63:
#line 687 "src/parser.y"
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
#line 2856 "parser.tab.c"
    break;

  case 64:
#line 711 "src/parser.y"
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
				//cout<<":= must have equal number of operands in LHS and RHS"<<endl;
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";

				exit(1);
			}

			string name = left_data->data_name;
			if(left_data->node_child){
				//cout<<"Non identifier to the left of :=";
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(right_type && right_type->getDataType() == "undefined"){
				//cout<<"Identifier in RHS not yet declared"<<endl;
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
#line 2915 "parser.tab.c"
    break;

  case 65:
#line 768 "src/parser.y"
                        {;}
#line 2921 "parser.tab.c"
    break;

  case 66:
#line 769 "src/parser.y"
                                                   {;}
#line 2927 "parser.tab.c"
    break;

  case 67:
#line 770 "src/parser.y"
                                     {;}
#line 2933 "parser.tab.c"
    break;

  case 73:
#line 785 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2944 "parser.tab.c"
    break;

  case 74:
#line 794 "src/parser.y"
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
#line 2975 "parser.tab.c"
    break;

  case 75:
#line 820 "src/parser.y"
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
#line 3015 "parser.tab.c"
    break;

  case 76:
#line 858 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3026 "parser.tab.c"
    break;

  case 77:
#line 864 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3037 "parser.tab.c"
    break;

  case 78:
#line 873 "src/parser.y"
                        {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3051 "parser.tab.c"
    break;

  case 79:
#line 882 "src/parser.y"
           {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3062 "parser.tab.c"
    break;

  case 80:
#line 891 "src/parser.y"
                             {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = NULL;
		(yyval.nt)-> current_type = NULL;
	}
#line 3073 "parser.tab.c"
    break;

  case 81:
#line 897 "src/parser.y"
                                             {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3085 "parser.tab.c"
    break;

  case 82:
#line 904 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3096 "parser.tab.c"
    break;

  case 83:
#line 913 "src/parser.y"
                      {
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3107 "parser.tab.c"
    break;

  case 84:
#line 919 "src/parser.y"
                                           {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
	}
#line 3121 "parser.tab.c"
    break;

  case 85:
#line 931 "src/parser.y"
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
#line 3146 "parser.tab.c"
    break;

  case 86:
#line 956 "src/parser.y"
                                        {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
        
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3161 "parser.tab.c"
    break;

  case 87:
#line 966 "src/parser.y"
                     {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3172 "parser.tab.c"
    break;

  case 88:
#line 975 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3181 "parser.tab.c"
    break;

  case 89:
#line 982 "src/parser.y"
                                 {
        (yyval.nt) = new Node("CompositeLit");
        
    }
#line 3190 "parser.tab.c"
    break;

  case 90:
#line 989 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3201 "parser.tab.c"
    break;

  case 91:
#line 995 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3212 "parser.tab.c"
    break;

  case 92:
#line 1001 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3223 "parser.tab.c"
    break;

  case 93:
#line 1007 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3234 "parser.tab.c"
    break;

  case 94:
#line 1013 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3244 "parser.tab.c"
    break;

  case 95:
#line 1018 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3255 "parser.tab.c"
    break;

  case 96:
#line 1027 "src/parser.y"
                    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3266 "parser.tab.c"
    break;

  case 97:
#line 1033 "src/parser.y"
                      {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3277 "parser.tab.c"
    break;

  case 98:
#line 1042 "src/parser.y"
                {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3288 "parser.tab.c"
    break;

  case 99:
#line 1048 "src/parser.y"
                      {
		cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3300 "parser.tab.c"
    break;

  case 100:
#line 1055 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3311 "parser.tab.c"
    break;

  case 101:
#line 1064 "src/parser.y"
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
#line 3331 "parser.tab.c"
    break;

  case 102:
#line 1082 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3340 "parser.tab.c"
    break;

  case 103:
#line 1086 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3351 "parser.tab.c"
    break;

  case 104:
#line 1092 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3362 "parser.tab.c"
    break;

  case 105:
#line 1100 "src/parser.y"
                                    {;}
#line 3368 "parser.tab.c"
    break;

  case 106:
#line 1104 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3380 "parser.tab.c"
    break;

  case 107:
#line 1111 "src/parser.y"
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
#line 3398 "parser.tab.c"
    break;

  case 108:
#line 1127 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3410 "parser.tab.c"
    break;

  case 109:
#line 1134 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3421 "parser.tab.c"
    break;

  case 110:
#line 1143 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3431 "parser.tab.c"
    break;

  case 111:
#line 1148 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3441 "parser.tab.c"
    break;

  case 112:
#line 1156 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3453 "parser.tab.c"
    break;

  case 113:
#line 1163 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3465 "parser.tab.c"
    break;

  case 114:
#line 1173 "src/parser.y"
               {;}
#line 3471 "parser.tab.c"
    break;

  case 115:
#line 1174 "src/parser.y"
                                {;}
#line 3477 "parser.tab.c"
    break;

  case 116:
#line 1179 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		// break labels
		(yyval.nt) = curr;
	}
#line 3488 "parser.tab.c"
    break;

  case 117:
#line 1185 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3500 "parser.tab.c"
    break;

  case 118:
#line 1197 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3510 "parser.tab.c"
    break;

  case 119:
#line 1202 "src/parser.y"
                              {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// check this reason
		// curr->current_node_data->node_child = $2->current_node_data;
		(yyval.nt) = curr;
	}
#line 3523 "parser.tab.c"
    break;

  case 120:
#line 1213 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// still remaining
		// curr->current_node_data->node_child = $2->current_node_data;
		(yyval.nt) = curr;
	}
#line 3536 "parser.tab.c"
    break;

  case 122:
#line 1228 "src/parser.y"
                                    {;}
#line 3542 "parser.tab.c"
    break;

  case 123:
#line 1229 "src/parser.y"
                                                        {;}
#line 3548 "parser.tab.c"
    break;

  case 124:
#line 1230 "src/parser.y"
                                                 { ;}
#line 3554 "parser.tab.c"
    break;

  case 125:
#line 1231 "src/parser.y"
                                                                   {;}
#line 3560 "parser.tab.c"
    break;

  case 126:
#line 1232 "src/parser.y"
                                                        {;}
#line 3566 "parser.tab.c"
    break;

  case 127:
#line 1233 "src/parser.y"
                                                                          {;}
#line 3572 "parser.tab.c"
    break;

  case 128:
#line 1234 "src/parser.y"
                                                                    {;}
#line 3578 "parser.tab.c"
    break;

  case 129:
#line 1235 "src/parser.y"
                                                                                      {;}
#line 3584 "parser.tab.c"
    break;

  case 130:
#line 1239 "src/parser.y"
                                          {;}
#line 3590 "parser.tab.c"
    break;

  case 131:
#line 1240 "src/parser.y"
                         {;}
#line 3596 "parser.tab.c"
    break;

  case 132:
#line 1243 "src/parser.y"
                                           {;}
#line 3602 "parser.tab.c"
    break;

  case 133:
#line 1247 "src/parser.y"
                            {;}
#line 3608 "parser.tab.c"
    break;

  case 134:
#line 1248 "src/parser.y"
                  {;}
#line 3614 "parser.tab.c"
    break;

  case 135:
#line 1252 "src/parser.y"
                    {;}
#line 3620 "parser.tab.c"
    break;

  case 136:
#line 1256 "src/parser.y"
                            {;}
#line 3626 "parser.tab.c"
    break;

  case 137:
#line 1257 "src/parser.y"
                                               {;}
#line 3632 "parser.tab.c"
    break;

  case 138:
#line 1258 "src/parser.y"
                                         {;}
#line 3638 "parser.tab.c"
    break;

  case 139:
#line 1259 "src/parser.y"
                                        {;}
#line 3644 "parser.tab.c"
    break;

  case 140:
#line 1260 "src/parser.y"
                                                           {;}
#line 3650 "parser.tab.c"
    break;

  case 141:
#line 1261 "src/parser.y"
                                                          {;}
#line 3656 "parser.tab.c"
    break;

  case 142:
#line 1265 "src/parser.y"
                  {;}
#line 3662 "parser.tab.c"
    break;

  case 143:
#line 1266 "src/parser.y"
                              {;}
#line 3668 "parser.tab.c"
    break;

  case 144:
#line 1267 "src/parser.y"
                              {;}
#line 3674 "parser.tab.c"
    break;

  case 145:
#line 1268 "src/parser.y"
                                {;}
#line 3680 "parser.tab.c"
    break;

  case 150:
#line 1286 "src/parser.y"
                         {;}
#line 3686 "parser.tab.c"
    break;

  case 153:
#line 1291 "src/parser.y"
                                  {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3694 "parser.tab.c"
    break;

  case 154:
#line 1294 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3702 "parser.tab.c"
    break;

  case 155:
#line 1297 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3710 "parser.tab.c"
    break;

  case 156:
#line 1300 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3718 "parser.tab.c"
    break;

  case 157:
#line 1303 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3726 "parser.tab.c"
    break;

  case 158:
#line 1306 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3734 "parser.tab.c"
    break;

  case 159:
#line 1309 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3742 "parser.tab.c"
    break;

  case 160:
#line 1312 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3750 "parser.tab.c"
    break;

  case 161:
#line 1315 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3758 "parser.tab.c"
    break;

  case 162:
#line 1318 "src/parser.y"
                                   {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3766 "parser.tab.c"
    break;

  case 163:
#line 1321 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3774 "parser.tab.c"
    break;

  case 164:
#line 1324 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3782 "parser.tab.c"
    break;

  case 165:
#line 1327 "src/parser.y"
                                      {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3790 "parser.tab.c"
    break;

  case 166:
#line 1330 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3798 "parser.tab.c"
    break;

  case 167:
#line 1333 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3806 "parser.tab.c"
    break;

  case 168:
#line 1336 "src/parser.y"
                                      {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3814 "parser.tab.c"
    break;

  case 169:
#line 1339 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3822 "parser.tab.c"
    break;

  case 170:
#line 1342 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3830 "parser.tab.c"
    break;

  case 171:
#line 1345 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3838 "parser.tab.c"
    break;

  case 172:
#line 1348 "src/parser.y"
                    {
		cout<<"Unary Expr begins from expression" <<endl;
		}
#line 3846 "parser.tab.c"
    break;

  case 173:
#line 1354 "src/parser.y"
                      { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3854 "parser.tab.c"
    break;

  case 174:
#line 1357 "src/parser.y"
                        { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3862 "parser.tab.c"
    break;

  case 175:
#line 1360 "src/parser.y"
                        { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3870 "parser.tab.c"
    break;

  case 176:
#line 1363 "src/parser.y"
                        { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3878 "parser.tab.c"
    break;

  case 177:
#line 1366 "src/parser.y"
                        { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3886 "parser.tab.c"
    break;

  case 178:
#line 1369 "src/parser.y"
                      {
		cout<<"Primary begins from unary\n";
		}
#line 3894 "parser.tab.c"
    break;

  case 179:
#line 1377 "src/parser.y"
                 {
 		cout<<" PrimaryExpr: Operand \n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3907 "parser.tab.c"
    break;

  case 180:
#line 1385 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3919 "parser.tab.c"
    break;

  case 181:
#line 1392 "src/parser.y"
                               {
 		cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		// still remaining
		// curr->current_type = isValidMemberon($1->current_type)
		(yyval.nt) = curr;
	}
#line 3933 "parser.tab.c"
    break;

  case 182:
#line 1401 "src/parser.y"
                            {cout<<"PrimaryExpr:Index\n";}
#line 3939 "parser.tab.c"
    break;

  case 183:
#line 1402 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3950 "parser.tab.c"
    break;

  case 184:
#line 1408 "src/parser.y"
                                {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 3962 "parser.tab.c"
    break;

  case 185:
#line 1415 "src/parser.y"
                                    {cout<<"PrimaryExpr:StructLiteral\n";}
#line 3968 "parser.tab.c"
    break;

  case 186:
#line 1416 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 3980 "parser.tab.c"
    break;

  case 187:
#line 1426 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 3990 "parser.tab.c"
    break;

  case 188:
#line 1434 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4001 "parser.tab.c"
    break;

  case 189:
#line 1440 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4013 "parser.tab.c"
    break;

  case 190:
#line 1451 "src/parser.y"
                       {
		cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 4027 "parser.tab.c"
    break;

  case 191:
#line 1463 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4041 "parser.tab.c"
    break;

  case 192:
#line 1475 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4053 "parser.tab.c"
    break;

  case 193:
#line 1482 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 4062 "parser.tab.c"
    break;

  case 194:
#line 1486 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 4073 "parser.tab.c"
    break;

  case 195:
#line 1492 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4085 "parser.tab.c"
    break;

  case 196:
#line 1499 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4098 "parser.tab.c"
    break;

  case 197:
#line 1507 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4112 "parser.tab.c"
    break;

  case 198:
#line 1520 "src/parser.y"
                                                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-5].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4127 "parser.tab.c"
    break;

  case 199:
#line 1530 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4141 "parser.tab.c"
    break;

  case 200:
#line 1539 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4154 "parser.tab.c"
    break;

  case 201:
#line 1547 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 4167 "parser.tab.c"
    break;

  case 202:
#line 1558 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4177 "parser.tab.c"
    break;

  case 203:
#line 1566 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 4186 "parser.tab.c"
    break;

  case 204:
#line 1570 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4200 "parser.tab.c"
    break;

  case 205:
#line 1579 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4215 "parser.tab.c"
    break;

  case 206:
#line 1593 "src/parser.y"
                   {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4229 "parser.tab.c"
    break;

  case 207:
#line 1602 "src/parser.y"
                                          {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4244 "parser.tab.c"
    break;

  case 208:
#line 1615 "src/parser.y"
                                               {;}
#line 4250 "parser.tab.c"
    break;

  case 209:
#line 1616 "src/parser.y"
                        {;}
#line 4256 "parser.tab.c"
    break;

  case 214:
#line 1630 "src/parser.y"
                                 {;}
#line 4262 "parser.tab.c"
    break;

  case 215:
#line 1634 "src/parser.y"
                        {;}
#line 4268 "parser.tab.c"
    break;

  case 216:
#line 1638 "src/parser.y"
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
#line 4286 "parser.tab.c"
    break;

  case 217:
#line 1654 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4301 "parser.tab.c"
    break;

  case 218:
#line 1665 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 4315 "parser.tab.c"
    break;

  case 219:
#line 1677 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4326 "parser.tab.c"
    break;

  case 220:
#line 1683 "src/parser.y"
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
#line 4351 "parser.tab.c"
    break;

  case 221:
#line 1707 "src/parser.y"
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
#line 4371 "parser.tab.c"
    break;

  case 223:
#line 1727 "src/parser.y"
                     {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;


		(yyval.nt) = curr;
	}
#line 4387 "parser.tab.c"
    break;

  case 224:
#line 1741 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4401 "parser.tab.c"
    break;

  case 225:
#line 1753 "src/parser.y"
                                               {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children((yyvsp[-2].nt));
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 if((yyvsp[-2].nt)->current_type->getDataType() == "int"){
//			 curr->current_type = new ArrayType
		 }
		 (yyval.nt) = curr;
		 }
#line 4415 "parser.tab.c"
    break;

  case 226:
#line 1765 "src/parser.y"
                 {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 4427 "parser.tab.c"
    break;

  case 227:
#line 1772 "src/parser.y"
                     {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 4439 "parser.tab.c"
    break;

  case 228:
#line 1782 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 4451 "parser.tab.c"
    break;

  case 229:
#line 1789 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 4463 "parser.tab.c"
    break;

  case 230:
#line 1796 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 4475 "parser.tab.c"
    break;

  case 231:
#line 1803 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		 }
#line 4487 "parser.tab.c"
    break;

  case 232:
#line 1810 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 4499 "parser.tab.c"
    break;

  case 233:
#line 1817 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 4511 "parser.tab.c"
    break;

  case 234:
#line 1827 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 4520 "parser.tab.c"
    break;

  case 235:
#line 1831 "src/parser.y"
                             { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 4529 "parser.tab.c"
    break;


#line 4533 "parser.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1837 "src/parser.y"




	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";
		
}
