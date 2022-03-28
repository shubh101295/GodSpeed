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
	SwitchCaseList* scl= NULL;

	// for switch statements
	bool is_inside_case = false;
	// bool is_last_statement = false;
	int fallthrough_expression_count = 0;
	bool has_default_statement = false;

#line 101 "parser.tab.c"

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
#line 33 "src/parser.y"

	#include "node.hpp"

#line 148 "parser.tab.c"

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
#line 37 "src/parser.y"

	Node* nt;
	char* sval;

#line 234 "parser.tab.c"

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
#define YYLAST   1531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

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
       0,    79,    79,   101,   108,   114,   123,   132,   138,   147,
     153,   157,   166,   172,   180,   186,   191,   200,   209,   220,
     230,   237,   245,   255,   265,   275,   299,   318,   326,   334,
     344,   352,   360,   368,   376,   384,   391,   399,   407,   418,
     425,   445,   459,   470,   477,   488,   499,   505,   512,   518,
     525,   533,   539,   547,   557,   565,   575,   670,   743,   749,
     758,   767,   776,   799,   823,   894,   903,   929,   967,   973,
     982,   992,  1002,  1008,  1016,  1025,  1032,  1049,  1087,  1098,
    1108,  1115,  1172,  1178,  1185,  1191,  1197,  1202,  1211,  1218,
    1228,  1236,  1244,  1253,  1271,  1275,  1281,  1289,  1298,  1305,
    1321,  1328,  1338,  1343,  1351,  1358,  1369,  1374,  1384,  1393,
    1404,  1425,  1435,  1453,  1453,  1467,  1467,  1484,  1484,  1503,
    1515,  1526,  1549,  1558,  1567,  1584,  1609,  1627,  1649,  1671,
    1693,  1718,  1746,  1757,  1769,  1781,  1818,  1826,  1873,  1900,
    1925,  1951,  1977,  2002,  2027,  2053,  2078,  2103,  2129,  2154,
    2180,  2205,  2231,  2256,  2281,  2306,  2331,  2356,  2369,  2382,
    2390,  2398,  2406,  2414,  2427,  2437,  2444,  2523,  2565,  2571,
    2611,  2617,  2626,  2634,  2640,  2651,  2663,  2675,  2682,  2686,
    2692,  2699,  2707,  2719,  2733,  2744,  2752,  2763,  2771,  2775,
    2784,  2798,  2808,  2826,  2852,  2861,  2871,  2887,  2898,  2910,
    2916,  2940,  2961,  2983,  3000,  3012,  3053,  3062,  3072,  3079,
    3086,  3093,  3102,  3109,  3119,  3124
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
  "ContinueStmt", "GotoStmt", "SwitchStmt", "ExprSwitchStmt", "$@1", "$@2",
  "$@3", "ExprCaseClauseList", "ExprCaseClause", "FakeTrue",
  "ExprSwitchCase", "FallthroughStmt", "IfStmt", "ForStmt", "forMarker",
  "forMarkerEnd", "Expression", "UnaryExpr", "PrimaryExpr",
  "StructLiteral", "KeyValueList", "Selector", "Index", "Slice",
  "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl",
  "TypeSpec", "TypeDef", "MapType", "StructType", "FieldDeclList",
  "FieldDecl", "PointerType", "BaseType", "ArrayType", "Literal",
  "BasicLit", "String", YY_NULLPTR
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

#define YYPACT_NINF (-342)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-192)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,    47,   138,   143,  -342,  -342,  -342,   120,   127,    41,
     158,   195,    -2,  -342,  -342,    -2,  -342,  -342,  -342,    16,
     128,    85,   174,    57,   177,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,   290,   208,  -342,  -342,    61,  -342,  -342,   154,
     163,  -342,  -342,     4,   169,  -342,  -342,  -342,   225,  -342,
    -342,   232,  -342,  -342,   135,  -342,   111,   147,   147,    67,
     234,   108,   189,   169,   501,   178,  -342,   932,  -342,   190,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
      78,  -342,   209,   139,   209,  -342,   259,  -342,    98,   169,
    -342,  -342,  -342,  -342,  -342,  -342,   215,   218,   221,    15,
      15,    15,    15,    15,   169,   932,  -342,  -342,   220,  -342,
     224,  1329,  -342,   203,  -342,  -342,  -342,  -342,  -342,  1436,
     227,   932,  -342,  -342,  -342,  -342,  -342,  -342,   169,  -342,
    -342,  -342,  -342,  -342,   111,   116,   274,   235,   169,   169,
     305,   203,   203,   203,   220,   224,   203,   203,  -342,  1392,
     548,  -342,   932,  -342,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   169,   646,   693,   142,  -342,  -342,  -342,
    -342,  -342,   932,   227,   451,  -342,   159,  -342,    -2,  -342,
     283,  -342,   169,   241,   185,  -342,  -342,  -342,  -342,   236,
      55,  -342,   238,  -342,  1256,  1281,   247,  -342,   109,   109,
    -342,  -342,  -342,   109,  1457,  1478,   286,   286,   286,   286,
     286,   286,  -342,  -342,  -342,  -342,  -342,  -342,   -19,   740,
    1172,   169,  -342,  1436,   237,  -342,   932,  -342,   243,  -342,
     239,  -342,   112,  -342,   385,   301,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,    -5,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  1086,   157,  -342,   169,  -342,  -342,
    -342,  -342,  -342,   932,  -342,   597,   787,   932,  -342,   261,
    -342,  -342,  1200,  -342,   836,   267,  -342,   227,   979,   979,
     209,   883,  -342,   451,   275,   322,  -342,   932,  -342,  -342,
     932,  -342,  1118,  -342,  -342,  -342,  -342,  1436,  1145,  -342,
    -342,   932,  -342,  1228,  -342,   150,   323,  1017,  -342,   329,
    1040,  -342,   330,   282,  1063,  -342,  -342,  -342,   227,   227,
    -342,   932,   932,  1350,  -342,   932,   932,   333,   209,  -342,
    -342,   288,  -342,  -342,  1414,  -342,  -342,  1371,  1306,    -9,
    -342,  -342,   932,  -342,    63,    63,  -342,  -342,   335,  -342,
    -342,  -342,   332,   340,  1436,    63,   932,  -342,     5,  -342,
     292,    22,    -9,  -342,  -342,  -342,  -342,   979,   979,    88,
     227,  -342,  -342,  -342,   451,  -342,  -342,  -342,   209,   209,
    -342,  -342,   385,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   214,   215,     0,    11,    16,    17,     0,
       0,     0,     0,     2,     0,    20,    21,    22,    40,    39,
       8,    10,     0,     0,    15,    14,     0,     3,    80,     0,
       0,    79,    58,     0,     0,   193,   194,     7,     0,    19,
       9,     0,    13,    72,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    88,    62,
      89,    85,    87,    82,    84,    83,   195,    18,    12,    73,
       0,    77,     4,    66,    43,    59,     0,    61,     0,     0,
     204,   203,   208,   209,   212,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   210,   207,     0,   164,
      91,     0,   157,   163,   165,    90,   206,   211,    78,   191,
      64,     0,    74,    76,     3,    42,    65,     4,     0,    67,
      69,    44,    60,   198,     0,     0,     0,     0,     0,     0,
       0,   160,   161,   162,     0,    91,   158,   159,    97,     0,
       0,    81,     0,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     171,   169,     0,    63,    51,    41,     0,    71,   202,   197,
       0,   199,     0,     0,     0,    86,    91,    92,    94,   105,
       0,    98,     0,   100,   104,     0,     0,   144,   145,   146,
     148,   138,   143,   147,   150,   149,   151,   152,   155,   153,
     154,   156,   140,   139,   141,   142,   205,   188,     0,     0,
       0,     0,   175,   192,   108,   110,   106,     3,     3,     3,
       0,   125,    93,    36,     4,     0,    27,    28,    29,    46,
      47,    48,    49,    50,     0,    30,    31,    32,    33,    34,
     112,    35,    37,    38,    53,     0,    68,     0,   201,   200,
     196,   186,   185,     0,    95,     0,     0,     0,   172,     0,
     189,   178,     0,   176,     0,     0,   109,   107,    51,    51,
       0,    51,   111,    51,     0,     0,    26,     0,    54,    55,
       0,    70,     0,    96,    99,   105,   101,   104,   173,   190,
     177,     0,   179,     0,   187,    93,     0,   191,   136,     0,
     191,   137,     0,     0,   191,    45,    23,    25,    57,    56,
     184,     0,     0,     0,   180,     0,     0,     4,     0,   136,
     132,     0,   113,   117,     0,   174,   181,     0,     0,     0,
     126,   137,    52,   115,     0,     0,   183,   182,     4,     4,
       4,     4,     0,     0,    53,     0,     0,   122,     0,   120,
       0,     0,     0,   127,   129,   128,   135,    51,    51,     0,
     123,   124,     4,   119,    51,     4,     4,     4,     0,     0,
       4,   114,   121,   118,   131,   130,   137,   137,   116,     4,
       4,   133,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -342,  -111,  -104,  -342,   351,  -342,   348,  -342,    23,
     101,  -342,   342,   -73,  -342,   -16,  -241,    13,  -342,  -342,
    -342,  -256,  -342,  -342,    17,  -342,  -342,  -342,  -342,  -342,
       7,   291,   318,  -342,  -342,   358,  -342,   298,   -10,  -342,
    -342,   114,   246,   242,   100,  -144,  -342,  -342,   104,  -342,
     107,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -341,  -238,    19,  -342,  -342,  -333,  -342,  -272,  -339,   -64,
    -342,   260,  -342,    60,  -342,  -342,  -342,  -342,  -342,  -342,
     -65,  -342,  -342,  -342,  -342,  -342,  -342,   252,  -342,  -342,
    -342,  -342,  -342,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    57,   125,     3,    15,     9,    10,    32,    16,
      17,    23,    24,   243,   318,   244,   245,   246,    26,    27,
     247,   248,   249,   362,   250,   251,   252,   253,    28,    59,
      42,   127,    82,   129,   186,    83,    54,    55,   254,    39,
     107,   108,    90,   109,   110,   151,    71,   200,   201,   202,
     203,   255,   256,   257,   258,   259,   260,   354,   365,   355,
     368,   369,   323,   370,   261,   262,   263,   290,   340,   119,
     112,   113,   153,   206,   177,   178,   179,   114,   180,   181,
     265,    29,    45,    46,    72,    73,   135,   136,    74,    91,
      75,   115,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,    18,   120,   295,    18,    18,   199,   237,    18,   126,
      43,   126,   361,   184,   371,   279,   360,    61,    92,    93,
      94,    95,    25,   185,   379,    18,    56,   366,    61,    62,
      43,   367,   316,   319,    33,   322,    25,   280,    96,   387,
      62,   149,    97,    63,   366,   182,   338,    60,   367,    43,
     297,   124,   325,    19,    63,    51,   183,   399,   400,    65,
       8,    20,   382,    13,    14,    64,    86,   352,    65,    19,
      56,    21,    66,    67,   105,    36,    64,    20,   134,   385,
      13,    14,   106,    66,    37,   366,   204,    21,   205,   367,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   228,
     366,   230,   274,    34,   367,     4,    35,    53,   233,   275,
     264,   388,   389,    85,    61,   134,   288,   289,   291,    41,
     383,   199,   305,   383,   122,    41,    62,     1,     6,     8,
     294,   383,   154,    70,    70,   390,    41,   157,   158,   159,
      63,   295,    61,    44,     7,   133,    70,    68,    68,   169,
     170,   171,   172,    70,    62,   282,    41,   -79,    88,    30,
      68,   287,    64,   189,   293,    65,   -79,    68,    63,    66,
     264,   268,    61,    70,    41,    47,    11,    40,    49,    70,
      12,    79,    13,    14,    62,     4,    41,    68,   128,    80,
      64,   231,   145,    68,    70,   -79,    36,    66,    63,   302,
     232,   204,   307,   308,   -79,   266,   144,   321,    68,    52,
     313,   182,    58,   267,   317,   320,   300,   324,    70,   264,
      64,    41,   328,   350,    70,   329,    77,    66,    70,    70,
     196,   272,    68,    78,   337,    87,   118,   333,    68,   273,
      89,    31,    68,    68,   373,   374,   375,   376,    12,   121,
      13,    14,   174,     4,   175,   351,   176,   344,   205,   124,
     132,   347,   348,    70,   138,   358,   359,   139,   391,   140,
     150,   393,   394,   395,   152,   191,   398,    68,   364,    69,
      76,   182,    70,   192,   269,   401,   402,   271,  -103,   386,
     276,   380,    81,  -136,   278,   286,    68,   292,    92,    93,
      94,    95,   296,   264,   264,   396,   397,   309,    61,   154,
     264,   155,   156,   314,   157,   158,   159,   160,   264,   130,
      62,    70,   326,   327,   336,   137,   169,   170,   171,   172,
     339,   341,   342,   377,    63,    68,    50,   349,   353,   372,
     148,   378,     5,    12,   384,    13,    14,    22,     4,   141,
     142,   143,   146,   147,   105,    48,    64,    70,   392,   363,
      13,    14,   106,    66,   187,   131,    84,    38,   123,   304,
     188,    68,   195,   306,   193,   194,   381,   190,    92,    93,
      94,    95,   345,   234,   235,   236,   -51,     0,    61,     0,
       0,   237,   238,     0,     0,    20,   239,     0,    96,     0,
      62,     0,    97,   240,   241,    21,     0,     0,     0,   226,
      99,   100,   101,     0,   102,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,   105,   124,    64,     0,     0,     0,
      13,    14,   106,   242,    92,    93,    94,    95,     0,   234,
     235,   236,     0,     0,    61,     0,     0,   237,   238,     0,
       0,    20,   239,     0,    96,     0,    62,   285,    97,   240,
     241,    21,     0,     0,     0,     0,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
     105,   124,    64,   301,    61,     0,    13,    14,   106,   242,
       0,     0,     0,     0,    96,     0,    62,     0,    97,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,     0,     0,     0,     0,   104,
     105,    61,    64,     0,     0,     0,    13,    14,   106,    66,
       0,    96,     0,    62,     0,    97,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,   198,     0,   105,   150,    64,
      61,     0,     0,    13,    14,   106,    66,     0,     0,     0,
      96,     0,    62,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,   303,     0,   105,   150,    64,    61,
       0,     0,    13,    14,   106,    66,     0,     0,     0,    96,
       0,    62,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,   227,     0,     0,   105,    61,    64,     0,     0,
       0,    13,    14,   106,    66,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,     0,     0,     0,
       0,     0,   105,    61,    64,   229,     0,     0,    13,    14,
     106,    66,     0,    96,     0,    62,     0,    97,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,     0,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,   281,   105,
      61,    64,     0,     0,     0,    13,    14,   106,    66,     0,
      96,     0,    62,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,     0,     0,   105,   150,    64,    61,
       0,     0,    13,    14,   106,    66,     0,     0,     0,    96,
       0,    62,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,     0,   312,   105,    61,    64,     0,     0,
       0,    13,    14,   106,    66,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,     0,
       0,     0,   105,  -122,    64,    61,     0,     0,    13,    14,
     106,   315,     0,     0,     0,    96,     0,    62,     0,    97,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
       0,   105,    61,    64,     0,     0,     0,    13,    14,   106,
      66,     0,    96,     0,    62,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
      64,     0,     0,     0,    13,    14,   106,   315,   298,   299,
     154,   -53,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   298,   299,   154,   -53,   155,   156,   124,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   298,   299,   154,     0,   155,   156,
     -24,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   298,   299,   154,
       0,   155,   156,   343,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -191,   154,     0,   155,   156,  -191,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,   330,     0,     0,     0,   154,     0,
     155,   156,   331,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   332,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,     0,     0,     0,     0,
     283,     0,     0,   154,   284,   155,   156,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,     0,   310,     0,
       0,   154,   311,   155,   156,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,   334,     0,     0,   154,
     335,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,     0,   154,     0,   155,   156,  -102,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,     0,     0,   154,
       0,   155,   156,   277,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,   154,     0,   155,   156,   124,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   154,     0,   155,   156,   173,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   154,     0,   155,   156,   346,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   154,     0,   155,   156,   357,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,     0,   154,   197,   155,
     156,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,   154,
     356,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     154,     0,   155,   156,     0,   157,   158,   159,   160,     0,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   154,     0,   155,   156,     0,   157,   158,   159,   160,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172
};

static const yytype_int16 yycheck[] =
{
      64,     8,    67,   244,    11,    12,   150,    16,    15,    82,
      20,    84,   351,   124,   355,    34,   349,    13,     3,     4,
       5,     6,     9,   127,   365,    32,    36,    22,    13,    25,
      40,    26,   288,   289,    11,   291,    23,    56,    23,   372,
      25,   105,    27,    39,    22,    64,   318,    40,    26,    59,
      55,    60,   293,    12,    39,    32,   121,   396,   397,    64,
      19,    20,    57,    65,    66,    61,    59,   339,    64,    12,
      80,    30,    68,    69,    59,    59,    61,    20,    88,    57,
      65,    66,    67,    68,    68,    22,   150,    30,   152,    26,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   174,
      22,   175,    57,    12,    26,    68,    15,    56,   182,    64,
     184,   377,   378,    56,    13,   135,   237,   238,   239,    68,
     368,   275,   276,   371,    56,    68,    25,    15,     0,    19,
     244,   379,    33,    43,    44,    57,    68,    38,    39,    40,
      39,   392,    13,    68,    11,    57,    56,    43,    44,    50,
      51,    52,    53,    63,    25,   229,    68,    55,    60,    11,
      56,   236,    61,    57,    62,    64,    64,    63,    39,    68,
     244,   188,    13,    83,    68,    11,    59,    59,    11,    89,
      63,    56,    65,    66,    25,    68,    68,    83,    59,    64,
      61,    59,   102,    89,   104,    55,    59,    68,    39,   273,
      68,   275,   276,   277,    64,    56,   102,   290,   104,    11,
     284,    64,    68,    64,   288,   289,    69,   291,   128,   293,
      61,    68,   297,   337,   134,   300,    11,    68,   138,   139,
     140,    56,   128,    11,   317,    11,    68,   311,   134,    64,
      61,    56,   138,   139,   358,   359,   360,   361,    63,    69,
      65,    66,    59,    68,    61,   338,    63,   331,   332,    60,
      11,   335,   336,   173,    59,   348,   349,    59,   382,    58,
      60,   385,   386,   387,    60,    11,   390,   173,   352,    43,
      44,    64,   192,    58,    11,   399,   400,    56,    62,   372,
      62,   366,    56,    60,    57,    68,   192,    68,     3,     4,
       5,     6,    11,   377,   378,   388,   389,    56,    13,    33,
     384,    35,    36,    56,    38,    39,    40,    41,   392,    83,
      25,   231,    57,    11,    11,    89,    50,    51,    52,    53,
      11,    11,    60,    11,    39,   231,    56,    14,    60,    14,
     104,    11,     1,    63,    62,    65,    66,     9,    68,    99,
     100,   101,   102,   103,    59,    23,    61,   267,   384,   352,
      65,    66,    67,    68,   128,    84,    58,    19,    80,   275,
     134,   267,   140,   276,   138,   139,   367,   135,     3,     4,
       5,     6,   332,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,   173,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    -1,    -1,
      65,    66,    67,    68,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,   231,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      59,    60,    61,   267,    13,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    57,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    57,    -1,    59,    60,    61,    13,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    56,    -1,    -1,    59,    13,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    59,    13,    61,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
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
      51,    52,    53,    33,    -1,    35,    36,    58,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    33,    -1,    35,    36,    58,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    33,    -1,    35,    36,    58,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    33,    56,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    33,
      56,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      33,    -1,    35,    36,    -1,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   163,    12,
      20,    30,    77,    81,    82,    87,    88,    89,    98,   151,
      11,    56,    78,    79,    80,    80,    59,    68,   105,   109,
      59,    68,   100,   108,    68,   152,   153,    11,    82,    11,
      56,    79,    11,    56,   106,   107,   108,    72,    68,    99,
     100,    13,    25,    39,    61,    64,    68,    69,   111,   112,
     114,   116,   154,   155,   158,   160,   112,    11,    11,    56,
      64,   112,   102,   105,   102,    56,   100,    11,    60,    61,
     112,   159,     3,     4,     5,     6,    23,    27,    34,    35,
      36,    37,    39,    40,    58,    59,    67,   110,   111,   113,
     114,   139,   140,   141,   147,   161,   162,   163,    68,   139,
     150,    69,    56,   107,    60,    73,    83,   101,    59,   103,
     112,   101,    11,    57,   108,   156,   157,   112,    59,    59,
      58,   141,   141,   141,   111,   114,   141,   141,   112,   139,
      60,   115,    60,   142,    33,    35,    36,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    58,    59,    61,    63,   144,   145,   146,
     148,   149,    64,   150,    72,    73,   104,   112,   112,    57,
     157,    11,    58,   112,   112,   113,   114,    56,    57,   115,
     117,   118,   119,   120,   139,   139,   143,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   112,    56,   150,    62,
     139,    59,    68,   139,     8,     9,    10,    16,    17,    21,
      28,    29,    68,    83,    85,    86,    87,    90,    91,    92,
      94,    95,    96,    97,   108,   121,   122,   123,   124,   125,
     126,   134,   135,   136,   139,   150,    56,    64,   163,    11,
     112,    56,    56,    64,    57,    64,    62,    62,    57,    34,
      56,    58,   139,    58,    62,   112,    68,   150,    72,    72,
     137,    72,    68,    62,    73,    86,    11,    55,    31,    32,
      69,   112,   139,    57,   118,   115,   120,   139,   139,    56,
      58,    62,    58,   139,    56,    68,    91,   139,    84,    91,
     139,    83,    91,   132,   139,    86,    57,    11,   150,   150,
      56,    64,    64,   139,    58,    62,    11,    83,   137,    11,
     138,    11,    60,    60,   139,   143,    58,   139,   139,    14,
      73,    83,   137,    60,   127,   129,    56,    58,    83,    83,
     135,   138,    93,    94,   139,   128,    22,    26,   130,   131,
     133,   130,    14,    73,    73,    73,    73,    11,    11,   130,
     150,   132,    57,   131,    62,    57,    83,   135,    91,    91,
      57,    73,    85,    73,    73,    73,    83,    83,    73,   138,
     138,    73,    73
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
     123,   124,   125,   127,   126,   128,   126,   129,   126,   130,
     130,   131,   132,   133,   133,   134,   135,   135,   135,   135,
     135,   135,   136,   136,   136,   136,   137,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   142,   143,   143,   144,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   147,   147,   148,   149,   149,
     149,   150,   150,   151,   152,   153,   154,   155,   155,   156,
     156,   157,   157,   158,   159,   160,   161,   161,   162,   162,
     162,   162,   162,   162,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
       1,     2,     1,     0,     8,     0,     9,     0,     8,     2,
       1,     3,     0,     2,     2,     1,     5,     7,     7,     7,
       9,     9,     4,    11,    11,     7,     0,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     3,     3,     5,     2,     3,     4,     3,     4,
       5,     6,     7,     8,     6,     4,     4,     4,     2,     3,
       4,     1,     3,     2,     1,     2,     5,     4,     3,     2,
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
#line 79 "src/parser.y"
                                                             {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children((yyvsp[-3].nt));
			 curr->add_non_terminal_children((yyvsp[-1].nt));
			 curr->add_non_terminal_children((yyvsp[0].nt));
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			 (yyval.nt) = curr;
			 dump_dot_file("ast.dot", (yyval.nt));
			 auto val = st->get_symbol_table_data();
			 int x=0;
			 for (auto temp:val)
			 {
			 	cout<<temp.first.first<<" - "<<temp.first.second<<" -  \n";
			 	cout<<temp.second<<"\n";
			 	cout<<temp.second->getDataType()<<"\n";
			 	x+=1;
			 }
		}
#line 1962 "parser.tab.c"
    break;

  case 3:
#line 101 "src/parser.y"
        {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 1971 "parser.tab.c"
    break;

  case 4:
#line 108 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 1979 "parser.tab.c"
    break;

  case 5:
#line 114 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1990 "parser.tab.c"
    break;

  case 6:
#line 123 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2001 "parser.tab.c"
    break;

  case 7:
#line 132 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2012 "parser.tab.c"
    break;

  case 8:
#line 138 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2023 "parser.tab.c"
    break;

  case 9:
#line 147 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2034 "parser.tab.c"
    break;

  case 10:
#line 153 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2043 "parser.tab.c"
    break;

  case 11:
#line 157 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2054 "parser.tab.c"
    break;

  case 12:
#line 166 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2065 "parser.tab.c"
    break;

  case 13:
#line 172 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2075 "parser.tab.c"
    break;

  case 14:
#line 180 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2086 "parser.tab.c"
    break;

  case 15:
#line 186 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2096 "parser.tab.c"
    break;

  case 16:
#line 191 "src/parser.y"
                     {
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2107 "parser.tab.c"
    break;

  case 17:
#line 200 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2118 "parser.tab.c"
    break;

  case 18:
#line 209 "src/parser.y"
                                              {
		cout<<"TopLevelDeclList: TopLevelDeclList TopLevelDecl SCOLON\n";
		(yyval.nt) = new Node("TopLevelDeclList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		if((yyval.nt)->last_current_node_data() == NULL){
			cout<<"NULL"<<endl;
		}
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2134 "parser.tab.c"
    break;

  case 19:
#line 220 "src/parser.y"
                              {
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2146 "parser.tab.c"
    break;

  case 20:
#line 230 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2158 "parser.tab.c"
    break;

  case 21:
#line 237 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2171 "parser.tab.c"
    break;

  case 22:
#line 245 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2183 "parser.tab.c"
    break;

  case 23:
#line 255 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2195 "parser.tab.c"
    break;

  case 24:
#line 265 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2207 "parser.tab.c"
    break;

  case 25:
#line 275 "src/parser.y"
                                       {

		cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		
		// for checking if the fallthrough statement is the last one
		if(fallthrough_expression_count){
			cout<<"INC fallthrough_expression_count\n";
			fallthrough_expression_count+=1;

		} 
		if (fallthrough_expression_count>2)
		{
			cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
			exit(1);
			// fallthrough_expression_count+=1;
		}
	
	}
#line 2236 "parser.tab.c"
    break;

  case 26:
#line 299 "src/parser.y"
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
		cout<<"HERE\n";
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		cout<<"HERE\n";
	
	}
#line 2257 "parser.tab.c"
    break;

  case 27:
#line 318 "src/parser.y"
                    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2270 "parser.tab.c"
    break;

  case 28:
#line 326 "src/parser.y"
                      {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2283 "parser.tab.c"
    break;

  case 29:
#line 334 "src/parser.y"
                     {
		// cout<<"Statement:	SimpleStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		cout<<"Statement:	SimpleStmt "<<((yyvsp[0].nt)->current_node_data==NULL)<<"\n";
		(yyval.nt) = curr;
	}
#line 2298 "parser.tab.c"
    break;

  case 30:
#line 344 "src/parser.y"
                    {
		cout<<"Statement:	ReturnStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2311 "parser.tab.c"
    break;

  case 31:
#line 352 "src/parser.y"
                    {
		cout<<"Statement:	BreakStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2324 "parser.tab.c"
    break;

  case 32:
#line 360 "src/parser.y"
                       {
		cout<<"Statement:	ContinueStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2337 "parser.tab.c"
    break;

  case 33:
#line 368 "src/parser.y"
                   {
		cout<<"Statement:	GotoStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2350 "parser.tab.c"
    break;

  case 34:
#line 376 "src/parser.y"
                     {
		cout<<"Statement:	SwitchStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2363 "parser.tab.c"
    break;

  case 35:
#line 384 "src/parser.y"
                          {
		cout<<"Statement:	FallthroughStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2375 "parser.tab.c"
    break;

  case 36:
#line 391 "src/parser.y"
                {
		cout<<"Statement:	Block\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2388 "parser.tab.c"
    break;

  case 37:
#line 399 "src/parser.y"
                 {
		cout<<"Statement:	IfStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2401 "parser.tab.c"
    break;

  case 38:
#line 407 "src/parser.y"
                  {
		cout<<"Statement:	ForStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2414 "parser.tab.c"
    break;

  case 39:
#line 418 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2426 "parser.tab.c"
    break;

  case 40:
#line 425 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2438 "parser.tab.c"
    break;

  case 41:
#line 445 "src/parser.y"
                                                                    {
		cout<<"FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock \n";
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);
		// cout<<($4->current_type->copyClass())->getDataType()<<"\n";
		// exit(1);
		(yyval.nt)-> current_node_data = new NodeData("Function-" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2457 "parser.tab.c"
    break;

  case 42:
#line 459 "src/parser.y"
                                                          {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function-"+ string((yyvsp[-3].sval)));
	}
#line 2470 "parser.tab.c"
    break;

  case 43:
#line 470 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2482 "parser.tab.c"
    break;

  case 44:
#line 477 "src/parser.y"
                                                          {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2495 "parser.tab.c"
    break;

  case 45:
#line 488 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2507 "parser.tab.c"
    break;

  case 46:
#line 499 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2518 "parser.tab.c"
    break;

  case 47:
#line 505 "src/parser.y"
                         {
		cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2530 "parser.tab.c"
    break;

  case 48:
#line 512 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2541 "parser.tab.c"
    break;

  case 49:
#line 518 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		cout<<"SimpleStmt: Assignment "<<((yyval.nt)->current_node_data==NULL)<<"\n";
	}
#line 2553 "parser.tab.c"
    break;

  case 50:
#line 525 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2564 "parser.tab.c"
    break;

  case 51:
#line 533 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2573 "parser.tab.c"
    break;

  case 52:
#line 539 "src/parser.y"
            {   // For infinite looping
		(yyval.nt) = new Node("EmptyExpr");
		(yyval.nt)->current_node_data = new NodeData("true");
		(yyval.nt)->current_type = new BasicType("bool");
	}
#line 2583 "parser.tab.c"
    break;

  case 53:
#line 547 "src/parser.y"
                   {
		cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2595 "parser.tab.c"
    break;

  case 54:
#line 557 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2608 "parser.tab.c"
    break;

  case 55:
#line 565 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2620 "parser.tab.c"
    break;

  case 56:
#line 575 "src/parser.y"
                                               {
		cout<<"Assignment: ExpressionList ASSGN_OP ExpressionList "<<"\n";

		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		cout<<((yyvsp[-2].nt))<<" "<<((yyvsp[0].nt))<<"\n";
		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;
		// cout<<"A  AAA \n";
		// cout<<left_data->value<<" "<<right_data->value<<endl;
		cout<<"A  AAA \n";
		while(left_data || right_type){
			cout<<"ENTERED!"<<endl;
			if(left_data){
				cout<<"LEFT: "<<left_data->data_name<<endl;
			}
			if(right_type){
				cout<<"RIGHT"<<right_type->getDataType()<<endl;
			}
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}
			string name = left_data->data_name;
			auto temp_left_data = left_data;
			if(left_data->data_name.substr(1) == "unary"){
				temp_left_data = left_data->node_child;
			}
			if(!temp_left_data->value && temp_left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(temp_left_data -> value){
				cout<<"Here 1"<<endl;
				string j = name;
				cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				if(name==j) cout<<"UNCHANGED!\n";
			}	

				cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}
					cout<<"HERE 4\n";
		
			if(!st->get_type(name)){
						cout<<"HERE 16\n";
		
				cout<<"[Undeclared Identifier] "<<name<<" not declared yet!";
				exit(1);
			}
			else{
				cout<<"HERE 8\n";
				cout<<(left_type==NULL)<<" "<<(right_type==NULL)<<"\n";
				cout<<left_type->getDataType()<<"\n";
				cout<<right_type->getDataType()<<"\n";
								
				if(left_type->getDataType() != right_type->getDataType()){
				
					cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
					exit(1);
				}

			}
				cout<<"HERE 4\n";
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
		cout<<string((yyvsp[-1].sval))<<"------\n";
		// printf("%sSHUBH\n",string($2));
		NodeData * temp_node_data = new NodeData(string((yyvsp[-1].sval)));
		
		cout<<"temp_node_data "<<(temp_node_data==NULL) <<"    "<<(temp_node_data!=NULL)<<"\n";
		(yyval.nt)->current_node_data = temp_node_data;

		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2717 "parser.tab.c"
    break;

  case 57:
#line 670 "src/parser.y"
                                               {
		cout<<"ShortVarDecl : IdentifierList INFER_EQ ExpressionList"<<endl;
		(yyval.nt) = new Node("ShortVarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		bool newVar = false;

		while(left_data || right_type){
			if(left_data){
				cout<<"LEFT :"<<left_data->data_name<<endl;
			}
			if(right_type){
				cout<<"Right: "<<right_type->getDataType()<<endl;
			}
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
				cout<<"ADDING IN INFER_EQ mode \n\n\n\n";
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
#line 2792 "parser.tab.c"
    break;

  case 58:
#line 743 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2803 "parser.tab.c"
    break;

  case 59:
#line 749 "src/parser.y"
                                               {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2814 "parser.tab.c"
    break;

  case 60:
#line 758 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");

		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		// might need to add type checks
	}
#line 2828 "parser.tab.c"
    break;

  case 61:
#line 767 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2839 "parser.tab.c"
    break;

  case 62:
#line 776 "src/parser.y"
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
			cout<<curr->data_name<<"    "<< (yyvsp[0].nt)->current_type<<"   "<<(yyvsp[0].nt)->current_type->getDataType()<<"\n";
			DataType * temp = (yyvsp[0].nt)->current_type->copyClass();
			cout<<temp<<" "<<temp->getDataType()<<"  " <<temp->getDataType()<<"\n";
			cout<<"VarSpec:	IdentifierList Type \n ";
			// exit(1);
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			curr = curr->next_data;
		}

		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2867 "parser.tab.c"
    break;

  case 63:
#line 799 "src/parser.y"
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
#line 2896 "parser.tab.c"
    break;

  case 64:
#line 823 "src/parser.y"
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
#line 2952 "parser.tab.c"
    break;

  case 65:
#line 894 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2963 "parser.tab.c"
    break;

  case 66:
#line 903 "src/parser.y"
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
#line 2994 "parser.tab.c"
    break;

  case 67:
#line 929 "src/parser.y"
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
#line 3034 "parser.tab.c"
    break;

  case 68:
#line 967 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3045 "parser.tab.c"
    break;

  case 69:
#line 973 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3056 "parser.tab.c"
    break;

  case 70:
#line 982 "src/parser.y"
                        {
    	cout<<"TypeList: TypeList COMMA Type"<<endl;
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3071 "parser.tab.c"
    break;

  case 71:
#line 992 "src/parser.y"
           {
    	cout<<"TypeList: TypeList COMMA Type"<<endl;
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3083 "parser.tab.c"
    break;

  case 72:
#line 1002 "src/parser.y"
                             {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = new NodeData("Empty Params");
		(yyval.nt)-> current_type = NULL;
	}
#line 3094 "parser.tab.c"
    break;

  case 73:
#line 1008 "src/parser.y"
                                             {
		cout<<"Parameters: LEFTPARAN ParameterList RIGHTPARAN"<<endl;
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3107 "parser.tab.c"
    break;

  case 74:
#line 1016 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3118 "parser.tab.c"
    break;

  case 75:
#line 1025 "src/parser.y"
                      {
		cout<<"ParameterList: ParameterDecl"<<endl;
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3130 "parser.tab.c"
    break;

  case 76:
#line 1032 "src/parser.y"
                                           {
		cout<<"ParameterList: ParameterList COMMA ParameterDecl"<<endl;
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		cout<<"Here"<<endl;
		cout<<(((yyval.nt)->last_current_node_data()))<<" \n";
		cout<<"  "<<(((yyval.nt)->last_current_type()))<<"\n";
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
		cout<<"Here1"<<endl;
	}
#line 3149 "parser.tab.c"
    break;

  case 77:
#line 1049 "src/parser.y"
                            {
		cout<<"ParameterDecl: IdentifierList Type"<<endl;
		(yyval.nt) = new Node("ParameterDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		NodeData *data = (yyvsp[-1].nt) -> current_node_data;
		DataType *type = (yyvsp[0].nt) -> current_type -> copyClass();
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		(yyval.nt)->current_node_data = data;

		while(data){
			cout<<"HERE"<<endl;
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			cout<<"add_in_symbol_table from ParameterDecl\n";
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, (yyvsp[0].nt)->current_type);
			auto val = st->get_symbol_table_data();
			 int x=0;
			 for (auto temp:val)
			 {

			 	cout<<temp.first.first<<" - "<<temp.first.second<<" -  \n";
			 	cout<<temp.second<<"\n";
			 	if(x) cout<<temp.second->getDataType()<<"\n";
			 	x+=1;
			 }
			 cout<<"\n\n\n\n\n\n";
			// exit(1);
			type->next_type = (data->next_data)? type->copyClass(): NULL;
			type = type->next_type;
			data = data->next_data;
		}
	}
#line 3189 "parser.tab.c"
    break;

  case 78:
#line 1087 "src/parser.y"
                                        {
		cout<<"IdentifierList COMMA IDENTIFIER"<<endl;
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        ((yyval.nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyval.nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));

	}
#line 3205 "parser.tab.c"
    break;

  case 79:
#line 1098 "src/parser.y"
                     {
		cout<<"Identifier"<<endl;
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3217 "parser.tab.c"
    break;

  case 80:
#line 1108 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3226 "parser.tab.c"
    break;

  case 81:
#line 1115 "src/parser.y"
                                 {
		cout<<"CompositeLit: LiteralType LiteralValue"<<endl;
        (yyval.nt) = new Node("CompositeLit");
        (yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        int num;
        DataType *iter;
        ArrayType* array;
        SliceType* slice;
        switch ((yyvsp[-1].nt)->current_type->current_data_type) {
            case _ARRAY:
                array = dynamic_cast<ArrayType*>((yyvsp[-1].nt)->current_type);
                num = 0;
                iter = (yyvsp[0].nt)->current_type;
                while (iter != NULL) {
                    if (iter->getDataType() != array->array_index_type->getDataType()) {
                        cout<<"Element of wrong datatype in array declaration" << iter->getDataType();
                        exit(1);
                    }
                    num++;
                    iter = iter->next_type;
                }
                if (num > array->array_size) {
                	cout<<"Number of elements more than size: Expected [ "<<array->array_size<<" ]"<<endl;
                	exit(1);
                }
                (yyval.nt)->current_node_data = new NodeData("ArrayLiteral");
                (yyval.nt)->current_node_data->node_child = new NodeData("Type");
                (yyval.nt)->current_node_data->node_child->next_data = new NodeData("Value");
                (yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
                (yyval.nt)->current_node_data->node_child->next_data->node_child = (yyvsp[0].nt)->current_node_data;
                (yyval.nt)->current_type = (yyvsp[-1].nt)->current_type->copyClass();
                break;
            case _SLICE:
                slice = dynamic_cast<SliceType*>((yyvsp[-1].nt)->current_type);
                iter = (yyvsp[0].nt)->current_type;
                while (iter != NULL) {
                    if (iter->getDataType() != slice->slice_base->getDataType()) {
                        cout<<"Element of wrong datatype in slice declaration" << iter->getDataType();
                        exit(1);
                    }
                    iter = iter->next_type;
                }
                (yyval.nt)->current_node_data = new NodeData("SliceLiteral");
                (yyval.nt)->current_node_data->node_child = new NodeData("Type");
                (yyval.nt)->current_node_data->node_child->next_data = new NodeData("Value");
                (yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
                (yyval.nt)->current_node_data->node_child->next_data->node_child = (yyvsp[0].nt)->current_node_data;
                (yyval.nt)->current_type = (yyvsp[-1].nt)->current_type->copyClass();
            default:
                cerr << "Composite type not yet supported" << endl;
                exit(1);
        }
    }
#line 3285 "parser.tab.c"
    break;

  case 82:
#line 1172 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3296 "parser.tab.c"
    break;

  case 83:
#line 1178 "src/parser.y"
                    {
		cout<<"LiteralType: ArrayType"<<endl;
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3308 "parser.tab.c"
    break;

  case 84:
#line 1185 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3319 "parser.tab.c"
    break;

  case 85:
#line 1191 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3330 "parser.tab.c"
    break;

  case 86:
#line 1197 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3340 "parser.tab.c"
    break;

  case 87:
#line 1202 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3351 "parser.tab.c"
    break;

  case 88:
#line 1211 "src/parser.y"
                    {
		cout<<"Type: LiteralType"<<endl;
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3363 "parser.tab.c"
    break;

  case 89:
#line 1218 "src/parser.y"
                      {
		cout<<"Type:OperandName"<<endl;
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3375 "parser.tab.c"
    break;

  case 90:
#line 1228 "src/parser.y"
                {
		cout<<"Operand: Literal"<<endl;
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		cout<<"Operand Value "<<(yyval.nt)->current_node_data->value<<endl;
	}
#line 3388 "parser.tab.c"
    break;

  case 91:
#line 1236 "src/parser.y"
                      {
		cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		cout<<"Value: "<<(yyval.nt)->current_node_data->value<<endl;
	}
#line 3401 "parser.tab.c"
    break;

  case 92:
#line 1244 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3412 "parser.tab.c"
    break;

  case 93:
#line 1253 "src/parser.y"
                   {
		cout<<"OperandName:	IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		(yyval.nt) = new Node("OperandName");
		// cout<<"OperandName2:	IDENTIFIER - "<<string($1)<<"\n";
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		// cout<<"OperandName3:	IDENTIFIER - "<<string($1)<<"\n";

		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data->value = true;
		// cout<<"OperandName4:	IDENTIFIER - "<<string($1)<<"\n";

		(yyval.nt)->current_type = st->get_type(string((yyvsp[0].sval)))?st->get_type(string((yyvsp[0].sval))):new BasicType("undefined");
		// cout<<"OperandName5:	IDENTIFIER - "<<string($1)<<"\n";

	}
#line 3432 "parser.tab.c"
    break;

  case 94:
#line 1271 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3441 "parser.tab.c"
    break;

  case 95:
#line 1275 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3452 "parser.tab.c"
    break;

  case 96:
#line 1281 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3463 "parser.tab.c"
    break;

  case 97:
#line 1289 "src/parser.y"
                                    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new SliceType((yyvsp[0].nt)->current_type);
        (yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
		;}
#line 3474 "parser.tab.c"
    break;

  case 98:
#line 1298 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3486 "parser.tab.c"
    break;

  case 99:
#line 1305 "src/parser.y"
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
#line 3504 "parser.tab.c"
    break;

  case 100:
#line 1321 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3516 "parser.tab.c"
    break;

  case 101:
#line 1328 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;

	}
#line 3528 "parser.tab.c"
    break;

  case 102:
#line 1338 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3538 "parser.tab.c"
    break;

  case 103:
#line 1343 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3548 "parser.tab.c"
    break;

  case 104:
#line 1351 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3560 "parser.tab.c"
    break;

  case 105:
#line 1358 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3572 "parser.tab.c"
    break;

  case 106:
#line 1369 "src/parser.y"
               {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> current_node_data = new NodeData(string((yyvsp[0].sval)));

	}
#line 3582 "parser.tab.c"
    break;

  case 107:
#line 1374 "src/parser.y"
                                {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;

	}
#line 3594 "parser.tab.c"
    break;

  case 108:
#line 1384 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		if(bl->is_empty()){
			cout<<"[INVALID BREAK] Tried to break, outside from a for loop";
			exit(1);
		}
		(yyval.nt) = curr;
	}
#line 3608 "parser.tab.c"
    break;

  case 109:
#line 1393 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3620 "parser.tab.c"
    break;

  case 110:
#line 1404 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
		if(bl->is_empty()){
			cout<<"[INVALID CONTINUE] Tried to continue when not inside a loop!";
			exit(1);
		}
		
	}
#line 3635 "parser.tab.c"
    break;

  case 111:
#line 1425 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3647 "parser.tab.c"
    break;

  case 112:
#line 1435 "src/parser.y"
                       {
		cout<<"SwitchStmt: ExprSwitchStmt\n";
		(yyval.nt) = new Node("SwitchStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 3659 "parser.tab.c"
    break;

  case 113:
#line 1453 "src/parser.y"
                                              { scl = new SwitchCaseList(); }
#line 3665 "parser.tab.c"
    break;

  case 114:
#line 1453 "src/parser.y"
                                                                                                                       {
	 	(yyval.nt) = new Node("ExprSwitchStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-5].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> current_node_data = new NodeData("SWITCH");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = (yyvsp[-5].nt)->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = (yyvsp[-2].nt)->current_node_data;
	 	scl = NULL;
	 }
#line 3684 "parser.tab.c"
    break;

  case 115:
#line 1467 "src/parser.y"
                                                       { scl = new SwitchCaseList(); }
#line 3690 "parser.tab.c"
    break;

  case 116:
#line 1468 "src/parser.y"
                                                         {
	 	cout<<"SWITCH SimpleStmt SCOLON LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";

	 	(yyval.nt) = new Node("ExprSwitchStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-6].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> current_node_data = new NodeData("SWITCH");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = (yyvsp[-6].nt)->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = (yyvsp[-2].nt)->current_node_data;
	 	scl = NULL;
	}
#line 3711 "parser.tab.c"
    break;

  case 117:
#line 1484 "src/parser.y"
                                                { scl = new SwitchCaseList(); }
#line 3717 "parser.tab.c"
    break;

  case 118:
#line 1484 "src/parser.y"
                                                                                                                         {
		cout<<"SWITCH Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";
		(yyval.nt) = new Node("ExprSwitchStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-5].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> current_node_data = new NodeData("SWITCH");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = (yyvsp[-5].nt)->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = (yyvsp[-2].nt)->current_node_data;
	 	scl = NULL;
	}
#line 3737 "parser.tab.c"
    break;

  case 119:
#line 1503 "src/parser.y"
                                          {
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause \n";
		cout<<(((yyval.nt)->current_node_data->last_next_child())==NULL)<<"\n";
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[0].nt)->current_node_data;
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		
	}
#line 3754 "parser.tab.c"
    break;

  case 120:
#line 1515 "src/parser.y"
                         {
		cout<<"ExprCaseClauseList: ExprCaseClause\n";
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("list");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		// $$->current_type = $1->current_type;
	}
#line 3767 "parser.tab.c"
    break;

  case 121:
#line 1526 "src/parser.y"
                                           {
		cout<<"ExprCaseCause:	ExprSwitchCase COLON StatementList\n";
		(yyval.nt) = new Node("ExprCaseClause");
		(yyval.nt) -> add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		scl->add_case_label(has_default_statement,fallthrough_expression_count==2);
		if(fallthrough_expression_count>2)
		{
			cout<<"[Error in parser.y] ExprCaseClause->ExprSwitchCase COLON StatementList (fallthrough_expression_count>2)==true\n";
			exit(1);
		}
		has_default_statement=false;
		is_inside_case = false;
		fallthrough_expression_count=0;

		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3791 "parser.tab.c"
    break;

  case 122:
#line 1549 "src/parser.y"
        {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children("true");
		 curr->current_node_data = new NodeData("true");
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
	}
#line 3803 "parser.tab.c"
    break;

  case 123:
#line 1558 "src/parser.y"
                            {
		cout<<"ExprSwitchCase:  CASE ExpressionList\n";
		(yyval.nt) = new Node("ExprSwitchCase");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		is_inside_case = true;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;

	}
#line 3817 "parser.tab.c"
    break;

  case 124:
#line 1567 "src/parser.y"
                           {
		/* a fake true as expression list*/
		// Node* child_curr = new Node("BasicLit");
		//  child_curr->add_terminal_children("true");
		//  child_curr->current_node_data = new NodeData("true");
		//  child_curr->current_type = new BasicType("bool");
		//  // $$ = curr;

		(yyval.nt) = new Node("ExprSwitchCase");
		is_inside_case = true;
		has_default_statement = true;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;	
	}
#line 3836 "parser.tab.c"
    break;

  case 125:
#line 1584 "src/parser.y"
                    {
		if (is_inside_case==false){
			cout<<"[FALLTHROUGH] fallthrough can only be used inside switch cases\n";
			exit(1); 
		}
		// if(is_last_statement==false)
		// {
		// 	cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
		// 	exit(1); 
		// }
		cout<<"SET fallthrough_expression_count ==1\n";
		if (fallthrough_expression_count)
		{
			cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
			exit(1);
			// fallthrough_expression_count+=1;
		}
		fallthrough_expression_count= 1;
		(yyval.nt) = new Node("FallthroughStmt");
		(yyval.nt)->current_node_data = new NodeData("FallThorugh");
	}
#line 3862 "parser.tab.c"
    break;

  case 126:
#line 1609 "src/parser.y"
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
#line 3885 "parser.tab.c"
    break;

  case 127:
#line 1627 "src/parser.y"
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
#line 3912 "parser.tab.c"
    break;

  case 128:
#line 1649 "src/parser.y"
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
#line 3939 "parser.tab.c"
    break;

  case 129:
#line 1671 "src/parser.y"
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
#line 3966 "parser.tab.c"
    break;

  case 130:
#line 1693 "src/parser.y"
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
#line 3996 "parser.tab.c"
    break;

  case 131:
#line 1718 "src/parser.y"
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
#line 4026 "parser.tab.c"
    break;

  case 132:
#line 1747 "src/parser.y"
        {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 4041 "parser.tab.c"
    break;

  case 133:
#line 1757 "src/parser.y"
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
#line 4058 "parser.tab.c"
    break;

  case 134:
#line 1769 "src/parser.y"
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
#line 4075 "parser.tab.c"
    break;

  case 135:
#line 1781 "src/parser.y"
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
#line 4093 "parser.tab.c"
    break;

  case 136:
#line 1818 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> add_new_break_label();
	}
#line 4102 "parser.tab.c"
    break;

  case 137:
#line 1826 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> remove_last_break_label();
	;
	}
#line 4112 "parser.tab.c"
    break;

  case 138:
#line 1873 "src/parser.y"
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
#line 4144 "parser.tab.c"
    break;

  case 139:
#line 1900 "src/parser.y"
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
#line 4174 "parser.tab.c"
    break;

  case 140:
#line 1925 "src/parser.y"
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
#line 4205 "parser.tab.c"
    break;

  case 141:
#line 1951 "src/parser.y"
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
#line 4236 "parser.tab.c"
    break;

  case 142:
#line 1977 "src/parser.y"
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
#line 4266 "parser.tab.c"
    break;

  case 143:
#line 2002 "src/parser.y"
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
#line 4296 "parser.tab.c"
    break;

  case 144:
#line 2027 "src/parser.y"
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
#line 4327 "parser.tab.c"
    break;

  case 145:
#line 2053 "src/parser.y"
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
#line 4357 "parser.tab.c"
    break;

  case 146:
#line 2078 "src/parser.y"
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
#line 4387 "parser.tab.c"
    break;

  case 147:
#line 2103 "src/parser.y"
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
#line 4418 "parser.tab.c"
    break;

  case 148:
#line 2129 "src/parser.y"
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
#line 4448 "parser.tab.c"
    break;

  case 149:
#line 2154 "src/parser.y"
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
#line 4479 "parser.tab.c"
    break;

  case 150:
#line 2180 "src/parser.y"
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
#line 4509 "parser.tab.c"
    break;

  case 151:
#line 2205 "src/parser.y"
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
#line 4540 "parser.tab.c"
    break;

  case 152:
#line 2231 "src/parser.y"
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
#line 4570 "parser.tab.c"
    break;

  case 153:
#line 2256 "src/parser.y"
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
#line 4600 "parser.tab.c"
    break;

  case 154:
#line 2281 "src/parser.y"
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
#line 4630 "parser.tab.c"
    break;

  case 155:
#line 2306 "src/parser.y"
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
#line 4660 "parser.tab.c"
    break;

  case 156:
#line 2331 "src/parser.y"
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
#line 4690 "parser.tab.c"
    break;

  case 157:
#line 2356 "src/parser.y"
                    {
		cout<<"Expression: UnaryExpr, Value: ";
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
			// cout<<"Unary value"<<endl;
			  cout<<(yyval.nt)->current_node_data->value<<endl;
			// cout<<"Unary value"<<endl;
		}
#line 4705 "parser.tab.c"
    break;

  case 158:
#line 2369 "src/parser.y"
                        {
		cout<<"UnaryExpr: MUL PrimaryExpr "<<endl;
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("*unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		if((yyvsp[0].nt)->current_type->current_data_type != _POINTER){
			cout<<"Can not dereference a non-pointer! Exiting..."<<endl;
			exit(1);
		}
		(yyval.nt)->current_type = dynamic_cast<PointerType*>((yyvsp[0].nt)->current_type)->type_of_address_pointing_to->copyClass();
	}
#line 4723 "parser.tab.c"
    break;

  case 159:
#line 2382 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("&unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = new PointerType((yyvsp[0].nt)->current_type);
		}
#line 4736 "parser.tab.c"
    break;

  case 160:
#line 2390 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("+unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4749 "parser.tab.c"
    break;

  case 161:
#line 2398 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("-unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4762 "parser.tab.c"
    break;

  case 162:
#line 2406 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("!unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4775 "parser.tab.c"
    break;

  case 163:
#line 2414 "src/parser.y"
                      {
		cout<<"UnaryExpr: PrimaryExpr\n";
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		//cout<<"Primary Value: "<<$$->current_node_data->value<<" "<<$1->current_node_data->value<< endl;

	}
#line 4789 "parser.tab.c"
    break;

  case 164:
#line 2427 "src/parser.y"
                 {
 		cout<<" PrimaryExpr: Operand, Value:";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
		cout<<(yyval.nt)->current_node_data->value<<endl;
		//cout<<"Operand Value:"<<$$->current_node_data->value<<endl;
	}
#line 4804 "parser.tab.c"
    break;

  case 165:
#line 2437 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4816 "parser.tab.c"
    break;

  case 166:
#line 2444 "src/parser.y"
                               {
 		cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		(yyval.nt) = new Node("PrimaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Access");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_node_data->value = true;
		cout<<"Primary Expr Value Selector: "<<(yyval.nt)->current_node_data->value<<endl;
		auto temp_type = (yyvsp[-1].nt)->current_type;
		if(temp_type==NULL) {
			cout<<((yyvsp[-1].nt)->current_node_data->data_name)<<" has not been declared in the current scope\n";
			exit(1);
		}
		cout<<"A\n";
		if((yyvsp[-1].nt)->current_type->current_data_type == _POINTER)
		{
			if((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type == _BASIC)
			{
				temp_type = (dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to;
			}
		}
		cout<<"A\n";

		if (temp_type->current_data_type == _BASIC) {
        	cout<<"D\n";
        	cout<<temp_type->getDataType()<<"\n";
        	for(auto valval:tt->get_type_table_data())
        	{
        		cout<<valval.first<<" -> "<<valval.second<<"\n";
        	}
        	temp_type = (tt->get_type_table_data())[temp_type->getDataType()]->copyClass() ;
    		cout<<"E\n";
    	}
		cout<<"A\n";

    	if (temp_type->current_data_type != _STRUCT &&
	        (temp_type->current_data_type != _POINTER ||
	         ((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type !=_STRUCT))) {
	        cout <<"[Type mismatch] Expected a struct type or pointer to struct type but got "	<< (yyvsp[-1].nt)->current_node_data->data_name <<" which is "<<temp_type->getDataType() << "\n";
	        exit(1);
	    }
		cout<<"A\n";

	    if(temp_type->current_data_type==_STRUCT)
	    {
	    	cout<<"B\n";
	    	auto temp = (dynamic_cast<StructType *>(temp_type))->data_of_struct;
	    	// auto temp2 = *temp;
	   	    	cout<<"B\n";
		 	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    else{
	    	    	cout<<"C\n";
			auto temp = (dynamic_cast<StructType *>((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to))->data_of_struct;
	    	// auto temp = *temp;
	    		    	cout<<"C\n";

	    	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
	    	cout<<"C\n";
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    (yyval.nt)->current_node_data = new NodeData("Access");
	    (yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
        (yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_node_data->value = true;


	}
#line 4900 "parser.tab.c"
    break;

  case 167:
#line 2523 "src/parser.y"
                            {
 		cout<<"PrimaryExpr Index"<<endl;
 		(yyval.nt) = new Node("PrimaryExpr");
 		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
 		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

 		DataType* t = (yyvsp[-1].nt)->current_type;
 		if(t->current_data_type == _POINTER){
 			t = dynamic_cast<PointerType*>(t)->type_of_address_pointing_to;
 		}
 		if(t->current_data_type == _SLICE){
 			SliceType *tp = (SliceType *)t;
 			(yyval.nt)->current_type = tp->slice_base->copyClass();
 			if((yyvsp[0].nt)->current_type->getDataType() != "int"){
 				cout<<"Index can not be integer. Exiting.."<<endl;
 				exit(1);
 			}
 			else if(t->current_data_type == _ARRAY){
 				ArrayType *tp = (ArrayType *)t;
	 			(yyval.nt)->current_type = tp->array_index_type->copyClass();
	 			if((yyvsp[0].nt)->current_type->getDataType() != "int"){
	 				cout<<"Index can not be integer. Exiting.."<<endl;
	 				exit(1);
	 			}	
 			}
 			else if(t->current_data_type == _MAP){
 				MapType *tp = (MapType *)t;
	 			if((yyvsp[0].nt)->current_type->getDataType() != tp->key_datatype->getDataType()){
	 				cout<<"Expected key type : [ "<<tp->key_datatype->getDataType()<<" ]. Found: ["<<(yyvsp[0].nt)->current_type->getDataType() <<endl;
	 				exit(1);
	 			}
 			}
 			else{
 				cout<<"Tried to index something of type: [ "<<t->getDataType()<<" ]."<<endl;
 				exit(1);
 			}

 			(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
 			(yyval.nt)->current_node_data->value = true; 
 		}

 	}
#line 4947 "parser.tab.c"
    break;

  case 168:
#line 2565 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4958 "parser.tab.c"
    break;

  case 169:
#line 2571 "src/parser.y"
                                {
		(yyval.nt) = new Node("PrimaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("FunctionCall");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
		if((yyvsp[-1].nt)->current_type->current_data_type != _FUNCTION){
			cout<<(yyvsp[-1].nt)->current_type->getDataType()<<" is not a function\n";
			exit(1);
		}
		int pos=1;
		auto fxn = dynamic_cast<FunctionType *>((yyvsp[-1].nt)->current_type);
		DataType* argType = (yyvsp[0].nt)->current_type;
		for(auto req_arg_type: fxn->argument_types){
			cout<<req_arg_type->getDataType()<<endl;
			if(argType == NULL){
				cout<<"Insufficient number of arguments for function "<<endl;
				exit(1);
			}
			if(argType->getDataType()!= req_arg_type->getDataType()){
				cout<<"[Type Mismatch] at position: " << pos<<". Expected arg type: "<<req_arg_type->getDataType()<<" . Found Type: "<<argType->getDataType()<<endl;
				exit(1);
			}
			argType = argType -> next_type;
			pos++;
		}
		if(argType){
			cout<<"Extra arguments provided to function"<<endl;
			exit(1);
		}

		DataType* head = new BasicType("");
		DataType* temp = head;
		for(auto x: fxn->return_type){
			head -> next_type = x;
			head = head->next_type; 
		}
		(yyval.nt)->current_type = temp->next_type;
	}
#line 5003 "parser.tab.c"
    break;

  case 170:
#line 2611 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5014 "parser.tab.c"
    break;

  case 171:
#line 2617 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5025 "parser.tab.c"
    break;

  case 172:
#line 2626 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5035 "parser.tab.c"
    break;

  case 173:
#line 2634 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5046 "parser.tab.c"
    break;

  case 174:
#line 2640 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5058 "parser.tab.c"
    break;

  case 175:
#line 2651 "src/parser.y"
                       {
		cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 5072 "parser.tab.c"
    break;

  case 176:
#line 2663 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 5086 "parser.tab.c"
    break;

  case 177:
#line 2675 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5098 "parser.tab.c"
    break;

  case 178:
#line 2682 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 5107 "parser.tab.c"
    break;

  case 179:
#line 2686 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 5118 "parser.tab.c"
    break;

  case 180:
#line 2692 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5130 "parser.tab.c"
    break;

  case 181:
#line 2699 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5143 "parser.tab.c"
    break;

  case 182:
#line 2707 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5157 "parser.tab.c"
    break;

  case 183:
#line 2719 "src/parser.y"
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
#line 5176 "parser.tab.c"
    break;

  case 184:
#line 2733 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 5192 "parser.tab.c"
    break;

  case 185:
#line 2744 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 5205 "parser.tab.c"
    break;

  case 186:
#line 2752 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 5218 "parser.tab.c"
    break;

  case 187:
#line 2763 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5228 "parser.tab.c"
    break;

  case 188:
#line 2771 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 5237 "parser.tab.c"
    break;

  case 189:
#line 2775 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5251 "parser.tab.c"
    break;

  case 190:
#line 2784 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5266 "parser.tab.c"
    break;

  case 191:
#line 2798 "src/parser.y"
                   {
		cout<<"ExpressionList: Expression, Value: ";
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		 cout<<(yyval.nt)->current_node_data->value<<endl;
		(yyval.nt) = curr;
	}
#line 5281 "parser.tab.c"
    break;

  case 192:
#line 2808 "src/parser.y"
                                          {
		(yyval.nt) = new Node("ExpressionList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;

	}
#line 5296 "parser.tab.c"
    break;

  case 193:
#line 2826 "src/parser.y"
                      {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 5308 "parser.tab.c"
    break;

  case 194:
#line 2852 "src/parser.y"
                {
		(yyval.nt) = new Node("TypeSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 5319 "parser.tab.c"
    break;

  case 195:
#line 2861 "src/parser.y"
                        {
		(yyval.nt) =  new Node("TypeDef");
		(yyval.nt)->add_terminal_children((yyvsp[-1].sval));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		tt->add_in_type_table(string((yyvsp[-1].sval)), (yyvsp[0].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("TypeDef");
	}
#line 5331 "parser.tab.c"
    break;

  case 196:
#line 2871 "src/parser.y"
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
#line 5349 "parser.tab.c"
    break;

  case 197:
#line 2887 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5364 "parser.tab.c"
    break;

  case 198:
#line 2898 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 5378 "parser.tab.c"
    break;

  case 199:
#line 2910 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 5389 "parser.tab.c"
    break;

  case 200:
#line 2916 "src/parser.y"
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
            if(mem1.find(key) != mem1.end()) {
                 cout<<"Redeclaration of struct member: "<<endl;;
                 exit(1);
            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		(yyval.nt) = curr;
	}
#line 5415 "parser.tab.c"
    break;

  case 201:
#line 2940 "src/parser.y"
                                   {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[-1].nt)->current_type;
		tp->next_type = NULL;

		
		map< string, DataType*> m;

		for(NodeData* lp = (yyvsp[-2].nt)->current_node_data; lp != NULL; lp = lp->next_data){
			string key = lp->data_name;
			DataType* value = tp->copyClass();
			m[key] = value;
		}

		curr->current_type = new StructType(m);
		(yyval.nt) = curr;
		}
#line 5441 "parser.tab.c"
    break;

  case 202:
#line 2961 "src/parser.y"
                              {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[0].nt)->current_type;
		tp->next_type = NULL;

		map< string, DataType*> m;

		for(NodeData* lp = (yyvsp[-1].nt)->current_node_data; lp != NULL; lp = lp->next_data){
			string key = lp->data_name;
			DataType* value = tp->copyClass();
			m[key] = value;
		}

		curr->current_type = new StructType(m);
		(yyval.nt) = curr;
		}
#line 5465 "parser.tab.c"
    break;

  case 203:
#line 2983 "src/parser.y"
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
#line 5484 "parser.tab.c"
    break;

  case 204:
#line 3000 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 5498 "parser.tab.c"
    break;

  case 205:
#line 3012 "src/parser.y"
                                               {
		cout<<"ArrayType : LEFTSQUARE Expression RIGHTSQUARE Type"<<endl;
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
#line 5540 "parser.tab.c"
    break;

  case 206:
#line 3053 "src/parser.y"
                 {
		cout<<"Literal:BasicLit\n";
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 5554 "parser.tab.c"
    break;

  case 207:
#line 3062 "src/parser.y"
                 {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5566 "parser.tab.c"
    break;

  case 208:
#line 3072 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 5578 "parser.tab.c"
    break;

  case 209:
#line 3079 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 5590 "parser.tab.c"
    break;

  case 210:
#line 3086 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 5602 "parser.tab.c"
    break;

  case 211:
#line 3093 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		cout<<"BasicLit:String ";
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 5616 "parser.tab.c"
    break;

  case 212:
#line 3102 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5628 "parser.tab.c"
    break;

  case 213:
#line 3109 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5640 "parser.tab.c"
    break;

  case 214:
#line 3119 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 (yyval.nt) = curr;}
#line 5650 "parser.tab.c"
    break;

  case 215:
#line 3124 "src/parser.y"
                             {
			cout<<"INTERPRETED_STRING: "<<string((yyvsp[0].sval))<<endl;
			 Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 (yyval.nt) = curr;
		}
#line 5663 "parser.tab.c"
    break;


#line 5667 "parser.tab.c"

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
#line 3134 "src/parser.y"






int main (int argc, char **argv) {

	// tt->add_in_type_table("void", new BasicType("void"));
 //    tt->add_in_type_table("int", new BasicType("int"));
 //    tt->add_in_type_table("bool", new BasicType("bool"));
 //    tt->add_in_type_table("byte", new BasicType("byte"));
 //    tt->add_in_type_table("float", new BasicType("float"));
 //    tt->add_in_type_table("string", new BasicType("string"));
	// tt->add
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
