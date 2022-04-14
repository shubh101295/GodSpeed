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
	#include "tac.hpp"
	#include "place.hpp"
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
	Labels *l = new Labels();
	SwitchCaseList* scl= NULL;

	// for switch statements
	bool is_inside_case = false;
	// bool is_last_statement = false;
	int fallthrough_expression_count = 0;
	bool has_default_statement = false;

#line 104 "parser.tab.c"

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
#line 36 "src/parser.y"

	#include "node.hpp"
	// #include "dot_generator.hpp"

#line 152 "parser.tab.c"

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
#line 41 "src/parser.y"

	Node* nt;
	char* sval;

#line 238 "parser.tab.c"

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
#define YYLAST   1488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

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
       0,    83,    83,   112,   119,   125,   134,   143,   149,   158,
     164,   168,   177,   183,   191,   197,   202,   211,   220,   234,
     246,   255,   265,   275,   288,   300,   326,   346,   356,   366,
     378,   388,   398,   408,   418,   428,   437,   447,   457,   470,
     479,   503,   502,   530,   530,   545,   564,   575,   583,   592,
     600,   609,   620,   626,   636,   650,   661,   675,   779,   859,
     867,   878,   889,   899,   925,   951,  1024,  1035,  1066,  1110,
    1116,  1125,  1135,  1145,  1151,  1159,  1168,  1175,  1192,  1230,
    1241,  1251,  1258,  1317,  1325,  1334,  1342,  1350,  1355,  1366,
    1373,  1383,  1391,  1399,  1408,  1426,  1430,  1438,  1448,  1457,
    1466,  1485,  1494,  1504,  1509,  1517,  1526,  1540,  1546,  1556,
    1567,  1581,  1603,  1614,  1632,  1632,  1646,  1646,  1663,  1663,
    1682,  1694,  1705,  1728,  1737,  1746,  1763,  1789,  1813,  1842,
    1879,  1916,  1957,  2001,  2021,  2052,  2084,  2140,  2148,  2195,
    2241,  2280,  2320,  2360,  2399,  2438,  2478,  2517,  2556,  2596,
    2635,  2680,  2724,  2766,  2807,  2848,  2889,  2930,  2971,  2986,
    3004,  3017,  3034,  3051,  3068,  3083,  3096,  3106,  3189,  3234,
    3240,  3298,  3304,  3313,  3321,  3327,  3338,  3351,  3365,  3372,
    3376,  3382,  3389,  3397,  3410,  3429,  3446,  3460,  3476,  3484,
    3488,  3511,  3540,  3553,  3575,  3603,  3614,  3624,  3640,  3653,
    3665,  3671,  3695,  3716,  3738,  3757,  3769,  3810,  3821,  3833,
    3841,  3849,  3857,  3867,  3875,  3886,  3892
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
  "$@1", "$@2", "MethodDecl", "LabeledStmt", "SimpleStmt", "EmptyStmt",
  "EmptyExpr", "ExpressionStmt", "IncDecStmt", "Assignment",
  "ShortVarDecl", "VarDecl", "VarSpecList", "VarSpec", "FunctionBody",
  "Signature", "Result", "TypeList", "Parameters", "ParameterList",
  "ParameterDecl", "IdentifierList", "Receiver", "CompositeLit",
  "LiteralType", "Type", "Operand", "OperandName", "LiteralValue",
  "SliceType", "ElementList", "KeyedElement", "Key", "Element",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "SwitchStmt",
  "ExprSwitchStmt", "$@3", "$@4", "$@5", "ExprCaseClauseList",
  "ExprCaseClause", "FakeTrue", "ExprSwitchCase", "FallthroughStmt",
  "IfStmt", "ForStmt", "forMarker", "forMarkerEnd", "Expression",
  "UnaryExpr", "PrimaryExpr", "StructLiteral", "KeyValueList", "Selector",
  "Index", "Slice", "MakeExpr", "TypeAssertion", "Arguments",
  "ExpressionList", "TypeDecl", "TypeSpec", "TypeDef", "MapType",
  "StructType", "FieldDeclList", "FieldDecl", "PointerType", "BaseType",
  "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
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

#define YYPACT_NINF (-337)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-193)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   -40,    83,   128,  -337,  -337,  -337,   117,   132,   123,
     144,   277,    50,  -337,  -337,    50,  -337,  -337,  -337,    -8,
     107,    94,   188,   157,   200,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,   288,   216,  -337,  -337,    13,  -337,  -337,    99,
     100,  -337,  -337,   115,   125,  -337,  -337,  -337,   226,  -337,
    -337,   228,  -337,  -337,    24,  -337,   124,   119,   119,    62,
     231,   134,   158,   125,     9,   190,  -337,   889,  -337,   182,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
      76,  -337,   205,   195,  -337,  -337,   256,  -337,    16,   125,
    -337,  -337,  -337,  -337,  -337,  -337,   211,   212,   217,   300,
     300,   300,   300,   300,   125,   889,  -337,  -337,   218,  -337,
     220,  1286,  -337,   198,  -337,  -337,  -337,  -337,  -337,  1393,
     221,   889,  -337,  -337,  -337,  -337,  -337,  -337,   125,  -337,
    -337,  -337,  -337,   124,    88,   270,   224,   125,   125,   377,
     198,   198,   198,   218,   220,   198,   198,  -337,  1349,   505,
    -337,   889,  -337,   889,   889,   889,   889,   889,   889,   889,
     889,   889,   889,   889,   889,   889,   889,   889,   889,   889,
     889,   889,   125,   603,   650,   156,  -337,  -337,  -337,  -337,
    -337,   889,   221,   456,  -337,  -337,   118,  -337,    50,  -337,
     275,  -337,   125,   234,   153,  -337,  -337,  -337,  -337,   225,
     -34,  -337,   229,  -337,  1213,  1238,   235,  -337,   108,   108,
    -337,  -337,  -337,   108,  1414,  1435,   498,   498,   498,   498,
     498,   498,  -337,  -337,  -337,  -337,  -337,  -337,     1,   697,
    1129,   125,  -337,  1393,   227,  -337,   889,  -337,   236,  -337,
     233,  -337,   191,  -337,   390,   283,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,   167,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  1043,    45,  -337,  -337,   125,  -337,
    -337,  -337,  -337,  -337,   889,  -337,   554,   744,   889,  -337,
     263,  -337,  -337,  1157,  -337,   793,   264,  -337,   221,   936,
     936,   205,   840,  -337,   456,   255,   311,  -337,   889,  -337,
    -337,   889,  -337,  1075,  -337,  -337,  -337,  -337,  1393,  1102,
    -337,  -337,   889,  -337,  1185,  -337,   183,   313,   974,  -337,
     317,   997,  -337,   319,   271,  1020,  -337,  -337,  -337,   221,
     221,  -337,   889,   889,  1307,  -337,   889,   889,   320,   205,
    -337,  -337,   281,  -337,  -337,  1371,  -337,  -337,  1328,  1263,
      -6,  -337,  -337,   889,  -337,    60,    60,  -337,  -337,   321,
    -337,  -337,  -337,   326,   335,  1393,    60,   889,  -337,    -5,
    -337,   293,    -2,    -6,  -337,  -337,  -337,  -337,   936,   936,
       7,   221,  -337,  -337,  -337,   456,  -337,  -337,  -337,   205,
     205,  -337,  -337,   390,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   215,   216,     0,    11,    16,    17,     0,
       0,     0,     0,     2,     0,    20,    21,    22,    40,    39,
       8,    10,     0,     0,    15,    14,     0,     3,    81,     0,
       0,    80,    59,     0,     0,   194,   195,     7,     0,    19,
       9,     0,    13,    73,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,    89,    63,
      90,    86,    88,    83,    85,    84,   196,    18,    12,    74,
       0,    78,    43,    67,    45,    60,     0,    62,     0,     0,
     205,   204,   209,   210,   213,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   208,     0,   165,
      92,     0,   158,   164,   166,    91,   207,   212,    79,   192,
      65,     0,    75,    77,     3,    66,     4,    41,     0,    68,
      70,    61,   199,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,     0,    92,   159,   160,    98,     0,     0,
      82,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   168,   169,   172,
     170,     0,    64,    52,    44,     4,     0,    72,   203,   198,
       0,   200,     0,     0,     0,    87,    92,    93,    95,   106,
       0,    99,     0,   101,   105,     0,     0,   145,   146,   147,
     149,   139,   144,   148,   151,   150,   152,   153,   156,   154,
     155,   157,   141,   140,   142,   143,   206,   189,     0,     0,
       0,     0,   176,   193,   109,   111,   107,     3,     3,     3,
       0,   126,    94,    36,     4,     0,    27,    28,    29,    47,
      48,    49,    50,    51,     0,    30,    31,    32,    33,    34,
     113,    35,    37,    38,    54,     0,    42,    69,     0,   202,
     201,   197,   187,   186,     0,    96,     0,     0,     0,   173,
       0,   190,   179,     0,   177,     0,     0,   110,   108,    52,
      52,     0,    52,   112,    52,     0,     0,    26,     0,    55,
      56,     0,    71,     0,    97,   100,   106,   102,   105,   174,
     191,   178,     0,   180,     0,   188,    94,     0,   192,   137,
       0,   192,   138,     0,     0,   192,    46,    23,    25,    58,
      57,   185,     0,     0,     0,   181,     0,     0,     4,     0,
     137,   133,     0,   114,   118,     0,   175,   182,     0,     0,
       0,   127,   138,    53,   116,     0,     0,   184,   183,     4,
       4,     4,     4,     0,     0,    54,     0,     0,   123,     0,
     121,     0,     0,     0,   128,   130,   129,   136,    52,    52,
       0,   124,   125,     4,   120,    52,     4,     4,     4,     0,
       0,     4,   115,   122,   119,   132,   131,   138,   138,   117,
       4,     4,   134,   135
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -337,  -337,  -117,   -12,  -337,   356,  -337,   349,  -337,    15,
      51,  -337,   337,   -73,  -337,   -23,  -241,    49,  -337,  -337,
    -337,  -337,  -337,  -252,  -337,  -337,    10,  -337,  -337,  -337,
    -337,  -337,    19,  -337,   306,  -337,  -337,   350,  -337,   290,
      -9,  -337,  -337,   160,   146,   239,    68,  -143,  -337,  -337,
      96,  -337,   109,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -243,  -128,     5,  -337,  -337,  -331,  -337,  -301,
    -336,   -64,  -337,   208,  -337,    52,  -337,  -337,  -337,  -337,
    -337,  -337,   -65,  -337,  -337,  -337,  -337,  -337,  -337,   250,
    -337,  -337,  -337,  -337,  -337,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    57,   184,     3,    15,     9,    10,    32,    16,
      17,    23,    24,   243,   319,   244,   245,   246,    26,   185,
     126,    27,   247,   248,   249,   363,   250,   251,   252,   253,
      28,    59,    42,   127,    82,   129,   186,    83,    54,    55,
     254,    39,   107,   108,    90,   109,   110,   150,    71,   200,
     201,   202,   203,   255,   256,   257,   258,   259,   260,   355,
     366,   356,   369,   370,   324,   371,   261,   262,   263,   291,
     341,   119,   112,   113,   152,   206,   176,   177,   178,   114,
     179,   180,   265,    29,    45,    46,    72,    73,   134,   135,
      74,    91,    75,   115,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,    18,   120,   296,    18,    18,   199,   183,    18,   125,
     237,    43,    92,    93,    94,    95,   362,   367,   339,   361,
     367,   368,    61,   275,   368,    18,    33,    56,     4,   367,
     276,    43,    96,   368,    62,   280,    97,   317,   320,   353,
     323,   148,   388,    98,    99,   100,   101,    51,   102,   103,
      43,    36,   383,   326,   124,   386,   182,   281,    25,    60,
      37,   400,   401,    34,   391,   181,    35,   104,   105,    53,
      64,    56,    25,   132,    13,    14,   106,    66,    86,   133,
      79,    41,   367,     6,    41,   204,   368,   205,    80,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   228,   181,
     230,    70,    70,   372,   301,    13,    14,   233,    85,   264,
     289,   290,   292,   380,    70,   133,   389,   390,    61,     1,
      41,    70,   122,   199,   306,    19,     8,    61,    61,     7,
      62,   153,     8,    20,    41,   189,   156,   157,   158,    62,
      62,    70,   296,    21,    63,    30,    41,    70,   168,   169,
     170,   171,    44,    63,    63,   283,    40,    58,    41,    19,
     144,   288,    70,   266,   267,    41,    64,    20,    36,    65,
     264,   269,   268,    66,    67,    64,    64,    21,    65,    69,
      76,    11,    66,    66,    88,    12,    70,    13,    14,    47,
       4,    70,    81,    68,    68,    70,    70,   196,    61,   273,
     303,    49,   204,   308,   309,   231,    68,   274,   322,    89,
      62,   314,   298,    68,   232,   318,   321,    52,   325,   130,
     264,    65,   295,   329,    63,   136,   330,    77,   -80,    78,
      70,   384,    87,    68,   384,   338,   -80,   -80,   334,    68,
     147,   121,   384,   294,   128,   -80,    64,   173,   118,   174,
      70,   175,   143,    66,    68,   124,   352,   131,   345,   205,
     137,   138,   348,   349,   187,   139,   359,   360,   149,   188,
     151,   191,   192,   193,   194,   181,   270,  -104,    68,   365,
     272,   277,   279,    68,   297,   287,  -137,    68,    68,    70,
     387,   293,   381,    92,    93,    94,    95,   140,   141,   142,
     145,   146,   327,    61,   264,   264,   397,   398,   226,   310,
     315,   264,   328,    96,   337,    62,   351,    97,   340,   264,
     342,   343,    68,    31,   350,   373,    70,   378,   271,    63,
      12,   354,    13,    14,    50,     4,   379,   374,   375,   376,
     377,    12,    68,    13,    14,   385,     4,     5,    22,   105,
      48,    64,   393,   364,    84,    13,    14,   106,    66,    38,
     123,   392,   305,   382,   394,   395,   396,   286,   195,   399,
      92,    93,    94,    95,   190,   346,   307,     0,   402,   403,
      61,    68,     0,    92,    93,    94,    95,     0,   234,   235,
     236,   -52,    62,    61,     0,     0,   237,   238,     0,     0,
      20,   239,     0,    96,   302,    62,    63,    97,   240,   241,
      21,     0,     0,     0,     0,    99,   100,   101,    68,   102,
     103,     0,     0,     0,     0,     0,   105,     0,    64,     0,
       0,     0,    13,    14,   106,    66,     0,     0,     0,   105,
     124,    64,     0,     0,     0,    13,    14,   106,   242,    92,
      93,    94,    95,     0,   234,   235,   236,     0,     0,    61,
       0,     0,   237,   238,     0,     0,    20,   239,     0,    96,
       0,    62,     0,    97,   240,   241,    21,     0,     0,     0,
       0,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,     0,   105,   124,    64,    61,     0,
       0,    13,    14,   106,   242,     0,     0,     0,    96,     0,
      62,   153,    97,   154,   155,     0,   156,   157,   158,   159,
      99,   100,   101,     0,   102,   103,     0,     0,   168,   169,
     170,   171,     0,     0,     0,     0,     0,    92,    93,    94,
      95,     0,   198,     0,   105,   149,    64,    61,     0,     0,
      13,    14,   106,    66,     0,     0,     0,    96,     0,    62,
       0,    97,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,   304,     0,   105,   149,    64,    61,     0,     0,    13,
      14,   106,    66,     0,     0,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,     0,     0,   227,
       0,     0,   105,    61,    64,     0,     0,     0,    13,    14,
     106,    66,     0,    96,     0,    62,     0,    97,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,     0,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,     0,     0,     0,     0,     0,   105,
      61,    64,   229,     0,     0,    13,    14,   106,    66,     0,
      96,     0,    62,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,     0,     0,     0,     0,   282,   105,    61,    64,     0,
       0,     0,    13,    14,   106,    66,     0,    96,     0,    62,
       0,    97,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,     0,   105,   149,    64,    61,     0,     0,    13,
      14,   106,    66,     0,     0,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,     0,     0,     0,
       0,   313,   105,    61,    64,     0,     0,     0,    13,    14,
     106,    66,     0,    96,     0,    62,     0,    97,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,     0,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,   105,
    -123,    64,    61,     0,     0,    13,    14,   106,   316,     0,
       0,     0,    96,     0,    62,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,     0,     0,     0,     0,   105,    61,
      64,     0,     0,     0,    13,    14,   106,    66,     0,    96,
       0,    62,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,   -54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,    64,     0,     0,
       0,    13,    14,   106,   316,   299,   300,   153,   -54,   154,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   299,   300,
     153,   -54,   154,   155,   124,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   299,   300,   153,     0,   154,   155,   -24,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   299,   300,   153,     0,   154,   155,
     344,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -192,   153,     0,
     154,   155,  -192,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,     0,
       0,   331,     0,     0,     0,   153,     0,   154,   155,   332,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,     0,     0,     0,     0,
       0,     0,   153,     0,   154,   155,   333,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,     0,     0,     0,     0,   284,     0,     0,
     153,   285,   154,   155,     0,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,     0,     0,     0,     0,   311,     0,     0,   153,   312,
     154,   155,     0,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,     0,
       0,     0,     0,   335,     0,     0,   153,   336,   154,   155,
       0,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,     0,     0,     0,
       0,   153,     0,   154,   155,  -103,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,   153,     0,   154,   155,
     278,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,     0,     0,   153,
       0,   154,   155,   124,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     153,     0,   154,   155,   172,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   153,     0,   154,   155,   347,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   153,     0,   154,   155,   358,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   153,   197,   154,   155,     0,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,     0,   153,   357,   154,   155,
       0,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   153,     0,   154,
     155,     0,   156,   157,   158,   159,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   153,     0,
     154,   155,     0,   156,   157,   158,   159,     0,     0,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171
};

static const yytype_int16 yycheck[] =
{
      64,     8,    67,   244,    11,    12,   149,   124,    15,    82,
      16,    20,     3,     4,     5,     6,   352,    22,   319,   350,
      22,    26,    13,    57,    26,    32,    11,    36,    68,    22,
      64,    40,    23,    26,    25,    34,    27,   289,   290,   340,
     292,   105,   373,    34,    35,    36,    37,    32,    39,    40,
      59,    59,    57,   294,    60,    57,   121,    56,     9,    40,
      68,   397,   398,    12,    57,    64,    15,    58,    59,    56,
      61,    80,    23,    57,    65,    66,    67,    68,    59,    88,
      56,    68,    22,     0,    68,   149,    26,   151,    64,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   173,    64,
     174,    43,    44,   356,    69,    65,    66,   181,    56,   183,
     237,   238,   239,   366,    56,   134,   378,   379,    13,    15,
      68,    63,    56,   276,   277,    12,    19,    13,    13,    11,
      25,    33,    19,    20,    68,    57,    38,    39,    40,    25,
      25,    83,   393,    30,    39,    11,    68,    89,    50,    51,
      52,    53,    68,    39,    39,   229,    59,    68,    68,    12,
     102,   236,   104,   185,    56,    68,    61,    20,    59,    64,
     244,   188,    64,    68,    69,    61,    61,    30,    64,    43,
      44,    59,    68,    68,    60,    63,   128,    65,    66,    11,
      68,   133,    56,    43,    44,   137,   138,   139,    13,    56,
     274,    11,   276,   277,   278,    59,    56,    64,   291,    61,
      25,   285,    55,    63,    68,   289,   290,    11,   292,    83,
     294,    64,   244,   298,    39,    89,   301,    11,    55,    11,
     172,   369,    11,    83,   372,   318,    55,    64,   312,    89,
     104,    69,   380,    62,    59,    64,    61,    59,    68,    61,
     192,    63,   102,    68,   104,    60,   339,    11,   332,   333,
      59,    59,   336,   337,   128,    58,   349,   350,    60,   133,
      60,    11,    58,   137,   138,    64,    11,    62,   128,   353,
      56,    62,    57,   133,    11,    68,    60,   137,   138,   231,
     373,    68,   367,     3,     4,     5,     6,    99,   100,   101,
     102,   103,    57,    13,   378,   379,   389,   390,   172,    56,
      56,   385,    11,    23,    11,    25,   338,    27,    11,   393,
      11,    60,   172,    56,    14,    14,   268,    11,   192,    39,
      63,    60,    65,    66,    56,    68,    11,   359,   360,   361,
     362,    63,   192,    65,    66,    62,    68,     1,     9,    59,
      23,    61,   385,   353,    58,    65,    66,    67,    68,    19,
      80,   383,   276,   368,   386,   387,   388,   231,   139,   391,
       3,     4,     5,     6,   134,   333,   277,    -1,   400,   401,
      13,   231,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    25,    13,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,    -1,    23,   268,    25,    39,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,   268,    39,
      40,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    59,
      60,    61,    -1,    -1,    -1,    65,    66,    67,    68,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    33,    27,    35,    36,    -1,    38,    39,    40,    41,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,
      -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,
      13,    61,    62,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    58,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    58,    59,    13,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    59,
      60,    61,    13,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    31,    32,    33,    11,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    31,    32,
      33,    11,    35,    36,    60,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    31,    32,    33,    -1,    35,    36,    60,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    31,    32,    33,    -1,    35,    36,
      60,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    33,    -1,
      35,    36,    69,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    33,    -1,    35,    36,    64,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    64,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      33,    62,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    33,    62,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    62,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      62,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    33,
      -1,    35,    36,    60,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      33,    -1,    35,    36,    58,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    58,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    33,    -1,    35,    36,    58,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    33,    56,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    33,    56,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    33,    -1,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    33,    -1,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   165,    12,
      20,    30,    77,    81,    82,    87,    88,    91,   100,   153,
      11,    56,    78,    79,    80,    80,    59,    68,   107,   111,
      59,    68,   102,   110,    68,   154,   155,    11,    82,    11,
      56,    79,    11,    56,   108,   109,   110,    72,    68,   101,
     102,    13,    25,    39,    61,    64,    68,    69,   113,   114,
     116,   118,   156,   157,   160,   162,   114,    11,    11,    56,
      64,   114,   104,   107,   104,    56,   102,    11,    60,    61,
     114,   161,     3,     4,     5,     6,    23,    27,    34,    35,
      36,    37,    39,    40,    58,    59,    67,   112,   113,   115,
     116,   141,   142,   143,   149,   163,   164,   165,    68,   141,
     152,    69,    56,   109,    60,    83,    90,   103,    59,   105,
     114,    11,    57,   110,   158,   159,   114,    59,    59,    58,
     143,   143,   143,   113,   116,   143,   143,   114,   141,    60,
     117,    60,   144,    33,    35,    36,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    58,    59,    61,    63,   146,   147,   148,   150,
     151,    64,   152,    72,    73,    89,   106,   114,   114,    57,
     159,    11,    58,   114,   114,   115,   116,    56,    57,   117,
     119,   120,   121,   122,   141,   141,   145,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   114,    56,   152,    62,
     141,    59,    68,   141,     8,     9,    10,    16,    17,    21,
      28,    29,    68,    83,    85,    86,    87,    92,    93,    94,
      96,    97,    98,    99,   110,   123,   124,   125,   126,   127,
     128,   136,   137,   138,   141,   152,    73,    56,    64,   165,
      11,   114,    56,    56,    64,    57,    64,    62,    62,    57,
      34,    56,    58,   141,    58,    62,   114,    68,   152,    72,
      72,   139,    72,    68,    62,    73,    86,    11,    55,    31,
      32,    69,   114,   141,    57,   120,   117,   122,   141,   141,
      56,    58,    62,    58,   141,    56,    68,    93,   141,    84,
      93,   141,    83,    93,   134,   141,    86,    57,    11,   152,
     152,    56,    64,    64,   141,    58,    62,    11,    83,   139,
      11,   140,    11,    60,    60,   141,   145,    58,   141,   141,
      14,    73,    83,   139,    60,   129,   131,    56,    58,    83,
      83,   137,   140,    95,    96,   141,   130,    22,    26,   132,
     133,   135,   132,    14,    73,    73,    73,    73,    11,    11,
     132,   152,   134,    57,   133,    62,    57,    83,   137,    93,
      93,    57,    73,    85,    73,    73,    73,    83,    83,    73,
     140,   140,    73,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    89,    88,    90,    88,    91,    92,    93,    93,    93,
      93,    93,    94,    95,    96,    97,    97,    98,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   108,   108,   109,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   115,   115,   116,   117,   117,   117,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   126,   127,   129,   128,   130,   128,   131,   128,
     132,   132,   133,   134,   135,   135,   136,   137,   137,   137,
     137,   137,   137,   138,   138,   138,   138,   139,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   144,   145,   145,   146,   147,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   149,   150,   151,
     151,   151,   152,   152,   153,   154,   155,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   162,   163,   163,   164,
     164,   164,   164,   164,   164,   165,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     0,     2,     1,     3,     2,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     3,     2,
       1,     1,     1,     5,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     0,     6,     4,     3,     1,     1,     1,
       1,     1,     0,     0,     1,     2,     2,     3,     3,     2,
       4,     3,     2,     2,     4,     3,     1,     1,     2,     3,
       1,     3,     1,     2,     3,     4,     1,     3,     2,     3,
       1,     1,     2,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     4,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     1,     0,     8,     0,     9,     0,     8,
       2,     1,     3,     0,     2,     2,     1,     5,     7,     7,
       7,     9,     9,     4,    11,    11,     7,     0,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     3,     3,     5,     2,     3,     4,     3,
       4,     5,     6,     7,     8,     6,     4,     4,     4,     2,
       3,     4,     1,     3,     2,     1,     2,     5,     4,     3,
       2,     3,     3,     2,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 83 "src/parser.y"
                                                             {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children((yyvsp[-3].nt));
			 curr->add_non_terminal_children((yyvsp[-1].nt));
			 curr->add_non_terminal_children((yyvsp[0].nt));
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			 cout<<"SourceFile:	PackageClause SCOLON ImportDeclList TopLevelDeclList\n";
			 curr->add_code_in_map((yyvsp[0].nt)->current_code);

			 (yyval.nt) = curr;

			 dump_dot_file("ast.dot", (yyval.nt));
			 (yyval.nt)->print_code_in_file("bin/output.tac");
			 // auto val = st->get_symbol_table_data();
			 // int x=0;
			 // string yoyyo = "ghasgtvdegd";
			 // // cout<<string
			 // for (auto temp:val)
			 // {
			 // 	cout<<temp.first.first<<" - "<<temp.first.second<<" -  \n";
			 // 	cout<<temp.second<<"\n";
			 // 	cout<<temp.second->getDataType()<<"\n";
			 // 	x+=1;
			 // }
		}
#line 1963 "parser.tab.c"
    break;

  case 3:
#line 112 "src/parser.y"
        {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 1972 "parser.tab.c"
    break;

  case 4:
#line 119 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 1980 "parser.tab.c"
    break;

  case 5:
#line 125 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		 cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1991 "parser.tab.c"
    break;

  case 6:
#line 134 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		 cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2002 "parser.tab.c"
    break;

  case 7:
#line 143 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2013 "parser.tab.c"
    break;

  case 8:
#line 149 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		 cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2024 "parser.tab.c"
    break;

  case 9:
#line 158 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		 cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2035 "parser.tab.c"
    break;

  case 10:
#line 164 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2044 "parser.tab.c"
    break;

  case 11:
#line 168 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		 cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2055 "parser.tab.c"
    break;

  case 12:
#line 177 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2066 "parser.tab.c"
    break;

  case 13:
#line 183 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2076 "parser.tab.c"
    break;

  case 14:
#line 191 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2087 "parser.tab.c"
    break;

  case 15:
#line 197 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2097 "parser.tab.c"
    break;

  case 16:
#line 202 "src/parser.y"
                     {
		 cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2108 "parser.tab.c"
    break;

  case 17:
#line 211 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		 cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2119 "parser.tab.c"
    break;

  case 18:
#line 220 "src/parser.y"
                                              {
		 cout<<"TopLevelDeclList: TopLevelDeclList TopLevelDecl SCOLON\n";
		(yyval.nt) = new Node("TopLevelDeclList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		// if($$->last_current_node_data() == NULL){
		// 	cout<<"NULL"<<endl;
		// }
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		cout<<"YO\n";
	}
#line 2138 "parser.tab.c"
    break;

  case 19:
#line 234 "src/parser.y"
                              {
		Node* curr = new Node("TopLevelDeclList");
		 cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		cout<<"YO2\n";
	}
#line 2152 "parser.tab.c"
    break;

  case 20:
#line 246 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2166 "parser.tab.c"
    break;

  case 21:
#line 255 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		 cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2181 "parser.tab.c"
    break;

  case 22:
#line 265 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2193 "parser.tab.c"
    break;

  case 23:
#line 275 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_place = (yyvsp[-2].nt)->current_place;
		curr->current_code = (yyvsp[-2].nt)->current_code;
		(yyval.nt) = curr;
    }
#line 2207 "parser.tab.c"
    break;

  case 24:
#line 288 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2221 "parser.tab.c"
    break;

  case 25:
#line 300 "src/parser.y"
                                       {

		 cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);

		// for checking if the fallthrough statement is the last one
		if(fallthrough_expression_count){
			// cout<<"INC fallthrough_expression_count\n";
			fallthrough_expression_count+=1;

		}
		if (fallthrough_expression_count>2)
		{
			cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
			exit(1);
			// fallthrough_expression_count+=1;
		}

	}
#line 2252 "parser.tab.c"
    break;

  case 26:
#line 326 "src/parser.y"
                           {
		cout<<"Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = new NodeData("list");
		// cout<<"HERE\n";
		if((yyvsp[-1].nt)->current_node_data==NULL){
			cout<<"NO AST found here! Exiting ";
			exit(1);
		}
		// cout<<"HERE\n";
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		// cout<<"HERE\n";

	}
#line 2274 "parser.tab.c"
    break;

  case 27:
#line 346 "src/parser.y"
                    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2289 "parser.tab.c"
    break;

  case 28:
#line 356 "src/parser.y"
                      {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2304 "parser.tab.c"
    break;

  case 29:
#line 366 "src/parser.y"
                     {
		// cout<<"Statement:	SimpleStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		// cout<<"Statement:	SimpleStmt "<<($1->current_node_data==NULL)<<"\n";
		(yyval.nt) = curr;
	}
#line 2321 "parser.tab.c"
    break;

  case 30:
#line 378 "src/parser.y"
                    {
		// cout<<"Statement:	ReturnStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2336 "parser.tab.c"
    break;

  case 31:
#line 388 "src/parser.y"
                    {
		// cout<<"Statement:	BreakStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2351 "parser.tab.c"
    break;

  case 32:
#line 398 "src/parser.y"
                       {
		// cout<<"Statement:	ContinueStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2366 "parser.tab.c"
    break;

  case 33:
#line 408 "src/parser.y"
                   {
		// cout<<"Statement:	GotoStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2381 "parser.tab.c"
    break;

  case 34:
#line 418 "src/parser.y"
                     {
		// cout<<"Statement:	SwitchStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2396 "parser.tab.c"
    break;

  case 35:
#line 428 "src/parser.y"
                          {
		// cout<<"Statement:	FallthroughStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2410 "parser.tab.c"
    break;

  case 36:
#line 437 "src/parser.y"
                {
		// cout<<"Statement:	Block\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2425 "parser.tab.c"
    break;

  case 37:
#line 447 "src/parser.y"
                 {
		// cout<<"Statement:	IfStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2440 "parser.tab.c"
    break;

  case 38:
#line 457 "src/parser.y"
                  {
		// cout<<"Statement:	ForStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2455 "parser.tab.c"
    break;

  case 39:
#line 470 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2469 "parser.tab.c"
    break;

  case 40:
#line 479 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 2483 "parser.tab.c"
    break;

  case 41:
#line 503 "src/parser.y"
        {
		st->add_in_symbol_table({"0;",string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		st->output_csv_for_function(string((yyvsp[-3].sval)),st->get_current_scope());
	}
#line 2492 "parser.tab.c"
    break;

  case 42:
#line 506 "src/parser.y"
                     {
		// cout<<"FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock \n";
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-5].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) = curr;
		// st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		// cout<<($4->current_type->copyClass())->getDataType()<<"\n";
		// exit(1);
		(yyval.nt)-> current_node_data = new NodeData("Function-" + string((yyvsp[-5].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-2].nt)->current_node_data;
		dump_dot_file("./bin/"+string((yyvsp[-5].sval))+".dot", (yyval.nt));

		Instruction* ins1 = new Instruction("LBL", new Place(string((yyvsp[-5].sval)), NULL));
		(yyval.nt)->add_code_in_map(ins1);
		Instruction* ins2 = new Instruction("NEWFUNC");
		(yyval.nt)->add_code_in_map(ins2);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		Instruction* ins3 = new Instruction("NEWFUNCEND");
		(yyval.nt)->add_code_in_map(ins3);

	}
#line 2521 "parser.tab.c"
    break;

  case 43:
#line 530 "src/parser.y"
                                              {
		st->add_in_symbol_table({"0;",string((yyvsp[-2].sval))},(yyvsp[0].nt)->current_type);
		st->output_csv_for_function(string((yyvsp[-2].sval)),st->get_current_scope());
	}
#line 2530 "parser.tab.c"
    break;

  case 44:
#line 533 "src/parser.y"
                      {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) = curr;
		// st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function-"+ string((yyvsp[-4].sval)));
		dump_dot_file("./bin/"+string((yyvsp[-4].sval))+".dot", (yyval.nt));
	}
#line 2544 "parser.tab.c"
    break;

  case 45:
#line 545 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2556 "parser.tab.c"
    break;

  case 46:
#line 564 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2568 "parser.tab.c"
    break;

  case 47:
#line 575 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 2581 "parser.tab.c"
    break;

  case 48:
#line 583 "src/parser.y"
                         {
		// cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 2595 "parser.tab.c"
    break;

  case 49:
#line 592 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 2608 "parser.tab.c"
    break;

  case 50:
#line 600 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
		// cout<<"SimpleStmt: Assignment "<<($$->current_node_data==NULL)<<"\n";
	}
#line 2622 "parser.tab.c"
    break;

  case 51:
#line 609 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 2635 "parser.tab.c"
    break;

  case 52:
#line 620 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2644 "parser.tab.c"
    break;

  case 53:
#line 626 "src/parser.y"
            {   // For infinite looping
		(yyval.nt) = new Node("EmptyExpr");
		(yyval.nt)->current_node_data = new NodeData("true");
		(yyval.nt)->current_type = new BasicType("bool");
		(yyval.nt)->current_place = new Place((yyval.nt)->current_type);
	}
#line 2655 "parser.tab.c"
    break;

  case 54:
#line 636 "src/parser.y"
                   {
		// cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
		//scopeExpr from amigo.
	}
#line 2670 "parser.tab.c"
    break;

  case 55:
#line 650 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins1 = new Instruction("ADD", new Place("1"), (yyvsp[-1].nt)->current_place);
		(yyval.nt)->add_code_in_map(ins1);

	}
#line 2686 "parser.tab.c"
    break;

  case 56:
#line 661 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins1 = new Instruction("SUB", new Place("1"), (yyvsp[-1].nt)->current_place);
		(yyval.nt)->add_code_in_map(ins1);
	}
#line 2701 "parser.tab.c"
    break;

  case 57:
#line 675 "src/parser.y"
                                               {
		// cout<<"Assignment: ExpressionList ASSGN_OP ExpressionList "<<"\n";

		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);

		cout<<((yyvsp[-2].nt))<<" "<<((yyvsp[0].nt))<<"\n";
		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		Place* right_place = (yyvsp[0].nt)->current_place;
		// cout<<"A  AAA \n";
		// cout<<left_data->value<<" "<<right_data->value<<endl;
		// cout<<"A  AAA \n";
		while(left_data || right_type){
			// cout<<"ENTERED!"<<endl;
			// if(left_data){
			// 	cout<<"LEFT: "<<left_data->data_name<<endl;
			// }
			// if(right_type){
			// 	cout<<"RIGHT"<<right_type->getDataType()<<endl;
			// }
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
				// cout<<"Here 1"<<endl;
				string j = name;
				// cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				// if(name==j) cout<<"UNCHANGED!\n";
			}

				// cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}
					// cout<<"HERE 4\n";

			if(!st->get_type(name)){
						// cout<<"HERE 16\n";

				cout<<"[Undeclared Identifier] "<<name<<" not declared yet!";
				exit(1);
			}
			else{
				// cout<<"HERE 8\n";
				// cout<<(left_type==NULL)<<" "<<(right_type==NULL)<<"\n";
				// cout<<left_type->getDataType()<<"\n";
				// cout<<right_type->getDataType()<<"\n";

				if(left_type->getDataType() != right_type->getDataType()){

					cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
					exit(1);
				}

			}
			Instruction* ins = new Instruction("USTOR", right_place, new Place(left_data->lval, right_type));
			(yyval.nt)->add_code_in_map(ins);
				// cout<<"HERE 4\n";
			left_data = left_data->next_data;
			left_type = left_type->next_type;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight->node_child = (yyvsp[0].nt)->current_node_data;
		parLeft->next_data = parRight;
		cout<<string((yyvsp[-1].sval))<<"------\n";
		// printf("%sSHUBH\n",string($2));
		NodeData * temp_node_data = new NodeData(string((yyvsp[-1].sval)));

		// cout<<"temp_node_data "<<(temp_node_data==NULL) <<"    "<<(temp_node_data!=NULL)<<"\n";
		(yyval.nt)->current_node_data = temp_node_data;

		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2806 "parser.tab.c"
    break;

  case 58:
#line 779 "src/parser.y"
                                               {
		// cout<<"ShortVarDecl : IdentifierList INFER_EQ ExpressionList"<<endl;
		(yyval.nt) = new Node("ShortVarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		Place* right_place = (yyvsp[0].nt)->current_place;

		bool newVar = false;

		while(left_data || right_type){
			// if(left_data){
			// 	cout<<"LEFT :"<<left_data->data_name<<endl;
			// }
			// if(right_type){
			// 	cout<<"Right: "<<right_type->getDataType()<<endl;
			// }
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
				// cout<<"ADDING IN INFER_EQ mode \n\n\n\n";
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}

			Instruction* ins = new Instruction("USTOR", right_place, new Place(left_data->data_name, right_type));
			(yyval.nt)->add_code_in_map(ins);

			left_data = left_data -> next_data;
			right_type = right_type->next_type;
			right_data = right_data? right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
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
#line 2888 "parser.tab.c"
    break;

  case 59:
#line 859 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 2901 "parser.tab.c"
    break;

  case 60:
#line 867 "src/parser.y"
                                               {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[-1].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[-1].nt)->current_code;
	}
#line 2914 "parser.tab.c"
    break;

  case 61:
#line 878 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");

		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		// might need to add type checks
	}
#line 2930 "parser.tab.c"
    break;

  case 62:
#line 889 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
	}
#line 2942 "parser.tab.c"
    break;

  case 63:
#line 899 "src/parser.y"
                            {
		cout<<"VarSpec: IdentifierList Type\n";
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
			// cout<<curr->data_name<<"    "<< $2->current_type<<"   "<<$2->current_type->getDataType()<<"\n";
			Instruction* ins = new Instruction("DECL", new Place(st->get_current_scope() + curr->data_name));
			(yyval.nt)->add_code_in_map(ins);
			DataType * temp = (yyvsp[0].nt)->current_type->copyClass();
			// cout<<temp<<" "<<temp->getDataType()<<"  " <<temp->getDataType()<<"\n";
			// cout<<"VarSpec:	IdentifierList Type \n ";
			// exit(1);
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			curr = curr->next_data;
		}

		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2973 "parser.tab.c"
    break;

  case 64:
#line 925 "src/parser.y"
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
			Instruction* ins = new Instruction("DECL", new Place(st->get_current_scope() + curr->data_name));
			(yyval.nt)->add_code_in_map(ins);
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
#line 3004 "parser.tab.c"
    break;

  case 65:
#line 951 "src/parser.y"
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
				Instruction* ins = new Instruction("DECL", new Place(st->get_current_scope() + name));
				(yyval.nt)->add_code_in_map(ins);
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
#line 3062 "parser.tab.c"
    break;

  case 66:
#line 1024 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3075 "parser.tab.c"
    break;

  case 67:
#line 1035 "src/parser.y"
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

		int i = 0;
		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);
			Place* p1 = new Place(std::to_string(i++));
			Place* p2 = new Place(st->get_current_scope() + dcurr->data_name);
			Instruction* ins = new Instruction("ARGDECL", p1, p2);
			(yyval.nt)->add_code_in_map(ins);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}
		(yyval.nt) -> current_type = new FunctionType(arguments,return_types);

	}
#line 3111 "parser.tab.c"
    break;

  case 68:
#line 1066 "src/parser.y"
                            {
		(yyval.nt) = new Node("Signature");
		// cout<<"Signature: Parameters Result\n";
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

		int i = 0;
		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			Place* p1 = new Place(std::to_string(i++));
			Place* p2 = new Place(st->get_current_scope() + dcurr->data_name);
			Instruction* ins = new Instruction("ARGDECL", p1, p2);
			(yyval.nt)->add_code_in_map(ins);

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
#line 3157 "parser.tab.c"
    break;

  case 69:
#line 1110 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3168 "parser.tab.c"
    break;

  case 70:
#line 1116 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3179 "parser.tab.c"
    break;

  case 71:
#line 1125 "src/parser.y"
                        {
    	// cout<<"TypeList: TypeList COMMA Type"<<endl;
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3194 "parser.tab.c"
    break;

  case 72:
#line 1135 "src/parser.y"
           {
    	// cout<<"TypeList: TypeList COMMA Type"<<endl;
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3206 "parser.tab.c"
    break;

  case 73:
#line 1145 "src/parser.y"
                             {
		// cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = new NodeData("Empty Params");
		(yyval.nt)-> current_type = NULL;
	}
#line 3217 "parser.tab.c"
    break;

  case 74:
#line 1151 "src/parser.y"
                                             {
		// cout<<"Parameters: LEFTPARAN ParameterList RIGHTPARAN"<<endl;
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3230 "parser.tab.c"
    break;

  case 75:
#line 1159 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3241 "parser.tab.c"
    break;

  case 76:
#line 1168 "src/parser.y"
                      {
		// cout<<"ParameterList: ParameterDecl"<<endl;
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3253 "parser.tab.c"
    break;

  case 77:
#line 1175 "src/parser.y"
                                           {
		// cout<<"ParameterList: ParameterList COMMA ParameterDecl"<<endl;
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		// cout<<"Here"<<endl;
		// cout<<(($$->last_current_node_data()))<<" \n";
		// cout<<"  "<<(($$->last_current_type()))<<"\n";
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
		// cout<<"Here1"<<endl;
	}
#line 3272 "parser.tab.c"
    break;

  case 78:
#line 1192 "src/parser.y"
                            {
		// cout<<"ParameterDecl: IdentifierList Type"<<endl;
		(yyval.nt) = new Node("ParameterDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		NodeData *data = (yyvsp[-1].nt) -> current_node_data;
		DataType *type = (yyvsp[0].nt) -> current_type -> copyClass();
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		(yyval.nt)->current_node_data = data;

		while(data){
			// cout<<"HERE"<<endl;
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			// cout<<"add_in_symbol_table from ParameterDecl\n";
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, (yyvsp[0].nt)->current_type);
			// auto val = st->get_symbol_table_data();
			//  int x=0;
			//  for (auto temp:val)
			//  {

			//  	cout<<temp.first.first<<" - "<<temp.first.second<<" -  \n";
			//  	cout<<temp.second<<"\n";
			//  	if(x) cout<<temp.second->getDataType()<<"\n";
			//  	x+=1;
			//  }
			//  cout<<"\n\n\n\n\n\n";
			// exit(1);
			type->next_type = (data->next_data)? type->copyClass(): NULL;
			type = type->next_type;
			data = data->next_data;
		}
	}
#line 3312 "parser.tab.c"
    break;

  case 79:
#line 1230 "src/parser.y"
                                        {
		// cout<<"IdentifierList COMMA IDENTIFIER"<<endl;
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        ((yyval.nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyval.nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));

	}
#line 3328 "parser.tab.c"
    break;

  case 80:
#line 1241 "src/parser.y"
                     {
		// cout<<"Identifier"<<endl;
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3340 "parser.tab.c"
    break;

  case 81:
#line 1251 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3349 "parser.tab.c"
    break;

  case 82:
#line 1258 "src/parser.y"
                                 {
		// cout<<"CompositeLit: LiteralType LiteralValue"<<endl;
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
				(yyval.nt)->current_place = new Place((yyval.nt)->current_type);
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
				(yyval.nt)->current_place = new Place((yyval.nt)->current_type);
            default:
                cerr << "Composite type not yet supported" << endl;
                exit(1);
        }
    }
#line 3410 "parser.tab.c"
    break;

  case 83:
#line 1317 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3423 "parser.tab.c"
    break;

  case 84:
#line 1325 "src/parser.y"
                    {
		// cout<<"LiteralType: ArrayType"<<endl;
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3437 "parser.tab.c"
    break;

  case 85:
#line 1334 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3450 "parser.tab.c"
    break;

  case 86:
#line 1342 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3463 "parser.tab.c"
    break;

  case 87:
#line 1350 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3473 "parser.tab.c"
    break;

  case 88:
#line 1355 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 3486 "parser.tab.c"
    break;

  case 89:
#line 1366 "src/parser.y"
                    {
		// cout<<"Type: LiteralType"<<endl;
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3498 "parser.tab.c"
    break;

  case 90:
#line 1373 "src/parser.y"
                      {
		// cout<<"Type:OperandName"<<endl;
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3510 "parser.tab.c"
    break;

  case 91:
#line 1383 "src/parser.y"
                {
		// cout<<"Operand: Literal"<<endl;
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		// cout<<"Operand Value "<<$$->current_node_data->value<<endl;
	}
#line 3523 "parser.tab.c"
    break;

  case 92:
#line 1391 "src/parser.y"
                      {
		// cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		// cout<<"Value: "<<$$->current_node_data->value<<endl;
	}
#line 3536 "parser.tab.c"
    break;

  case 93:
#line 1399 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3547 "parser.tab.c"
    break;

  case 94:
#line 1408 "src/parser.y"
                   {
		// cout<<"OperandName:	IDENTIFIER - "<<string($1)<<"\n";
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
#line 3567 "parser.tab.c"
    break;

  case 95:
#line 1426 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3576 "parser.tab.c"
    break;

  case 96:
#line 1430 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[-1].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[-1].nt)->current_code;
	}
#line 3589 "parser.tab.c"
    break;

  case 97:
#line 1438 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[-2].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[-2].nt)->current_code;
	}
#line 3602 "parser.tab.c"
    break;

  case 98:
#line 1448 "src/parser.y"
                                    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new SliceType((yyvsp[0].nt)->current_type);
        (yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
		;}
#line 3613 "parser.tab.c"
    break;

  case 99:
#line 1457 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 3627 "parser.tab.c"
    break;

  case 100:
#line 1466 "src/parser.y"
                                         {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_place = (yyvsp[-2].nt)->current_place;

		(yyval.nt) = curr;

		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
		((yyval.nt)->last_current_place())->next_place = (yyvsp[0].nt)->current_place;

	}
#line 3648 "parser.tab.c"
    break;

  case 101:
#line 1485 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 3662 "parser.tab.c"
    break;

  case 102:
#line 1494 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;

	}
#line 3674 "parser.tab.c"
    break;

  case 103:
#line 1504 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3684 "parser.tab.c"
    break;

  case 104:
#line 1509 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3694 "parser.tab.c"
    break;

  case 105:
#line 1517 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 3708 "parser.tab.c"
    break;

  case 106:
#line 1526 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		(yyval.nt) = curr;
	}
#line 3722 "parser.tab.c"
    break;

  case 107:
#line 1540 "src/parser.y"
               {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->add_code_in_map(new Instruction("RET"));

	}
#line 3733 "parser.tab.c"
    break;

  case 108:
#line 1546 "src/parser.y"
                                {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 3744 "parser.tab.c"
    break;

  case 109:
#line 1556 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		if(bl->is_empty()){
			cout<<"[INVALID BREAK] Tried to break, outside from a for loop";
			exit(1);
		}
		(yyval.nt) = curr;
		Instruction* ins = new Instruction("JMP", new Place(bl->return_top_label()));
		(yyval.nt)->add_code_in_map(ins);
	}
#line 3760 "parser.tab.c"
    break;

  case 110:
#line 1567 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
		Instruction* ins = new Instruction("JMP", new Place("<unimplemented>"));
		(yyval.nt)->add_code_in_map(ins);
	}
#line 3774 "parser.tab.c"
    break;

  case 111:
#line 1581 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
		if(bl->is_empty()){
			cout<<"[INVALID CONTINUE] Tried to continue when not inside a loop!";
			exit(1);
		}
		Instruction* ins = new Instruction("JMP", new Place(bl->return_top_label()));
		(yyval.nt)->add_code_in_map(ins);
	}
#line 3790 "parser.tab.c"
    break;

  case 112:
#line 1603 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3802 "parser.tab.c"
    break;

  case 113:
#line 1614 "src/parser.y"
                       {
		// cout<<"SwitchStmt: ExprSwitchStmt\n";
		(yyval.nt) = new Node("SwitchStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 3814 "parser.tab.c"
    break;

  case 114:
#line 1632 "src/parser.y"
                                              { scl = new SwitchCaseList(); }
#line 3820 "parser.tab.c"
    break;

  case 115:
#line 1632 "src/parser.y"
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
#line 3839 "parser.tab.c"
    break;

  case 116:
#line 1646 "src/parser.y"
                                                       { scl = new SwitchCaseList(); }
#line 3845 "parser.tab.c"
    break;

  case 117:
#line 1647 "src/parser.y"
                                                         {
	 	// cout<<"SWITCH SimpleStmt SCOLON LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";

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
#line 3866 "parser.tab.c"
    break;

  case 118:
#line 1663 "src/parser.y"
                                                { scl = new SwitchCaseList(); }
#line 3872 "parser.tab.c"
    break;

  case 119:
#line 1663 "src/parser.y"
                                                                                                                         {
		// cout<<"SWITCH Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";
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
#line 3892 "parser.tab.c"
    break;

  case 120:
#line 1682 "src/parser.y"
                                          {
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause \n";
		// cout<<(($$->current_node_data->last_next_child())==NULL)<<"\n";
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[0].nt)->current_node_data;
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";

	}
#line 3909 "parser.tab.c"
    break;

  case 121:
#line 1694 "src/parser.y"
                         {
		// cout<<"ExprCaseClauseList: ExprCaseClause\n";
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("list");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		// $$->current_type = $1->current_type;
	}
#line 3922 "parser.tab.c"
    break;

  case 122:
#line 1705 "src/parser.y"
                                           {
		// cout<<"ExprCaseCause:	ExprSwitchCase COLON StatementList\n";
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
#line 3946 "parser.tab.c"
    break;

  case 123:
#line 1728 "src/parser.y"
        {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children("true");
		 curr->current_node_data = new NodeData("true");
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
	}
#line 3958 "parser.tab.c"
    break;

  case 124:
#line 1737 "src/parser.y"
                            {
		// cout<<"ExprSwitchCase:  CASE ExpressionList\n";
		(yyval.nt) = new Node("ExprSwitchCase");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		is_inside_case = true;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;

	}
#line 3972 "parser.tab.c"
    break;

  case 125:
#line 1746 "src/parser.y"
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
#line 3991 "parser.tab.c"
    break;

  case 126:
#line 1763 "src/parser.y"
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
		// cout<<"SET fallthrough_expression_count ==1\n";
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
#line 4017 "parser.tab.c"
    break;

  case 127:
#line 1789 "src/parser.y"
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
		string jmp_label = l->get_new_label();
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		Instruction* ins = new Instruction("JEQZ", (yyvsp[-2].nt)->current_place, new Place(jmp_label));
		(yyval.nt)->add_code_in_map(ins);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		(yyval.nt)->add_code_in_map(new Instruction("LBL", new Place(jmp_label)));
	}
#line 4046 "parser.tab.c"
    break;

  case 128:
#line 1813 "src/parser.y"
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
		string jmp_label = l->get_new_label();
		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		Instruction* ins = new Instruction("JEQZ", (yyvsp[-2].nt)->current_place, new Place(jmp_label));
		(yyval.nt)->add_code_in_map(ins);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		(yyval.nt)->add_code_in_map(new Instruction("LBL", new Place(jmp_label)));
	}
#line 4080 "parser.tab.c"
    break;

  case 129:
#line 1842 "src/parser.y"
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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		Instruction* ins1 = new Instruction("JEQZ", (yyvsp[-4].nt)->current_place, new Place(label_if));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins4);

	}
#line 4122 "parser.tab.c"
    break;

  case 130:
#line 1879 "src/parser.y"
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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		Instruction* ins1 = new Instruction("JEQZ", (yyvsp[-4].nt)->current_place, new Place(label_if));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins4);

	}
#line 4164 "parser.tab.c"
    break;

  case 131:
#line 1916 "src/parser.y"
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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-6].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		Instruction* ins1 = new Instruction("JEQZ", (yyvsp[-4].nt)->current_place, new Place(label_if));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins4);
	}
#line 4210 "parser.tab.c"
    break;

  case 132:
#line 1957 "src/parser.y"
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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-6].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		Instruction* ins1 = new Instruction("JEQZ", (yyvsp[-4].nt)->current_place, new Place(label_if));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_else));
		(yyval.nt)->add_code_in_map(ins4);
	}
#line 4256 "parser.tab.c"
    break;

  case 133:
#line 2002 "src/parser.y"
        {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

		string label = l->get_new_label();

		Instruction* ins = new Instruction("LBL", new Place(label));
		(yyval.nt)->add_code_in_map(ins);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		Instruction* ins1 = new Instruction("JMP", new Place(label));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
	}
#line 4280 "parser.tab.c"
    break;

  case 134:
#line 2021 "src/parser.y"
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

		string label_loop_start = l->get_new_label();
		string label_loop_end = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-8].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-6].nt)->current_code);
		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-5].nt)->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), (yyvsp[-5].nt)->current_place);
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins4);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins5);
	}
#line 4316 "parser.tab.c"
    break;

  case 135:
#line 2052 "src/parser.y"
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

		string label_loop_start = l->get_new_label();
		string label_loop_end = l->get_new_label();

		(yyval.nt)->add_code_in_map((yyvsp[-8].nt)->current_code);
		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-5].nt)->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), (yyvsp[-5].nt)->current_place);
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-6].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins4);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins5);
	}
#line 4353 "parser.tab.c"
    break;

  case 136:
#line 2084 "src/parser.y"
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

		string label_loop_start = l->get_new_label();
		string label_loop_end = l->get_new_label();

		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins1);
		(yyval.nt)->add_code_in_map((yyvsp[-4].nt)->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), new Place((yyvsp[-4].nt)->current_place->place_name));
		(yyval.nt)->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins3);
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[-3].nt)->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		(yyval.nt)->add_code_in_map(ins4);
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		(yyval.nt)->add_code_in_map(ins5);
	}
#line 4389 "parser.tab.c"
    break;

  case 137:
#line 2140 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> add_new_break_label(l->get_new_label());
	}
#line 4398 "parser.tab.c"
    break;

  case 138:
#line 2148 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> remove_last_break_label();
	;
	}
#line 4408 "parser.tab.c"
    break;

  case 139:
#line 2195 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			cout<<"MAI YAHA HU\n";
			cout<<((yyvsp[-2].nt)->current_place==NULL)<<"  Expression MUL Expression1 \n";
			cout<<((yyval.nt)->current_place==NULL)<<"  Expression MUL Expression2 \n";

			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("MUL",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);


		}
#line 4459 "parser.tab.c"
    break;

  case 140:
#line 2241 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("QUOT",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4503 "parser.tab.c"
    break;

  case 141:
#line 2280 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("MOD",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4548 "parser.tab.c"
    break;

  case 142:
#line 2320 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("SHL",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4593 "parser.tab.c"
    break;

  case 143:
#line 2360 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("SHR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4637 "parser.tab.c"
    break;

  case 144:
#line 2399 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("AND",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4681 "parser.tab.c"
    break;

  case 145:
#line 2438 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("ANDNOT",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4726 "parser.tab.c"
    break;

  case 146:
#line 2478 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("ADD",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4770 "parser.tab.c"
    break;

  case 147:
#line 2517 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("SUB",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4814 "parser.tab.c"
    break;

  case 148:
#line 2556 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("OR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);

		}
#line 4859 "parser.tab.c"
    break;

  case 149:
#line 2596 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("XOR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
		}
#line 4903 "parser.tab.c"
    break;

  case 150:
#line 2635 "src/parser.y"
                                       { // remaining
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);

			Place* p1 = new Place(l->get_new_label());

			Instruction* ins1 = new Instruction("CMP",new Place("$0"),(yyvsp[-2].nt)->current_place);
			Instruction* ins2 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,(yyval.nt)->current_place);
			Instruction* ins3 = new Instruction("JE",p1);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			Instruction* ins4 = new Instruction("USTOR",(yyvsp[0].nt)->current_place,(yyval.nt)->current_place);
			Instruction* ins5 = new Instruction("LBL",p1);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
			(yyval.nt)->add_code_in_map(ins5);

		}
#line 4953 "parser.tab.c"
    break;

  case 151:
#line 2680 "src/parser.y"
                                      { // remaining
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);

			Place* p1 = new Place(l->get_new_label());

			Instruction* ins1 = new Instruction("CMP",new Place("$0"),(yyvsp[-2].nt)->current_place);
			Instruction* ins2 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,(yyval.nt)->current_place);
			Instruction* ins3 = new Instruction("JNE",p1);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			Instruction* ins4 = new Instruction("USTOR",(yyvsp[0].nt)->current_place,(yyval.nt)->current_place);
			Instruction* ins5 = new Instruction("LBL",p1);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
			(yyval.nt)->add_code_in_map(ins5);
		}
#line 5002 "parser.tab.c"
    break;

  case 152:
#line 2724 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("ISEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5049 "parser.tab.c"
    break;

  case 153:
#line 2766 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("NEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5095 "parser.tab.c"
    break;

  case 154:
#line 2807 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("GRTEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5141 "parser.tab.c"
    break;

  case 155:
#line 2848 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("GRT",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5187 "parser.tab.c"
    break;

  case 156:
#line 2889 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("LESSEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5233 "parser.tab.c"
    break;

  case 157:
#line 2930 "src/parser.y"
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

			(yyval.nt)->current_place = new Place((yyval.nt)->current_type);

			(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

			Place* p1 = new Place((yyvsp[-2].nt)->current_type);
			Instruction* ins1 = new Instruction("USTOR",(yyvsp[-2].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins3 = new Instruction("LESS",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,(yyval.nt)->current_place);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->add_code_in_map(ins3);
			(yyval.nt)->add_code_in_map(ins4);
		}
#line 5279 "parser.tab.c"
    break;

  case 158:
#line 2971 "src/parser.y"
                    {
		 cout<<"Expression: UnaryExpr, Value: ";
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
			(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
			// cout<<"Unary value"<<endl;
			  cout<<(yyval.nt)->current_node_data->value<<endl;
			// cout<<"Unary value"<<endl;
		}
#line 5296 "parser.tab.c"
    break;

  case 159:
#line 2986 "src/parser.y"
                        {
		// cout<<"UnaryExpr: MUL PrimaryExpr "<<endl;
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("*unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
		if((yyvsp[0].nt)->current_type->current_data_type != _POINTER){
			cout<<"Can not dereference a non-pointer! Exiting..."<<endl;
			exit(1);
		}
		(yyval.nt)->current_type = dynamic_cast<PointerType*>((yyvsp[0].nt)->current_type)->type_of_address_pointing_to->copyClass();
		Place* p1 = new Place((yyval.nt)->current_type);
		Instruction* ins = new Instruction("UREF",(yyvsp[0].nt)->current_place,p1);
		(yyval.nt)->add_code_in_map(ins);
		(yyval.nt)->current_place = p1;
	}
#line 5319 "parser.tab.c"
    break;

  case 160:
#line 3004 "src/parser.y"
                          {
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("&unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = new PointerType((yyvsp[0].nt)->current_type);
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
		Place* p1 = new Place((yyval.nt)->current_type);
		Instruction* ins = new Instruction("UADDR",(yyvsp[0].nt)->current_place,p1);
		(yyval.nt)->add_code_in_map(ins);
		(yyval.nt)->current_place = p1;
		}
#line 5337 "parser.tab.c"
    break;

  case 161:
#line 3017 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("+unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			Place* p1 = new Place((yyval.nt)->current_type);

			Instruction* ins1 = new Instruction("USTOR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("ADD",(yyvsp[0].nt)->current_place,p1);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->current_place = p1;
		}
#line 5359 "parser.tab.c"
    break;

  case 162:
#line 3034 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("-unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			Place* p1 = new Place((yyval.nt)->current_type);

			Instruction* ins1 = new Instruction("USTOR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("SUB",(yyvsp[0].nt)->current_place,p1);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->current_place = p1;
		}
#line 5381 "parser.tab.c"
    break;

  case 163:
#line 3051 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("!unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			Place* p1 = new Place((yyval.nt)->current_type);

			Instruction* ins1 = new Instruction("USTOR",(yyvsp[0].nt)->current_place,p1);
			Instruction* ins2 = new Instruction("NOT",(yyvsp[0].nt)->current_place,p1);

			(yyval.nt)->add_code_in_map(ins1);
			(yyval.nt)->add_code_in_map(ins2);
			(yyval.nt)->current_place = p1;
		}
#line 5403 "parser.tab.c"
    break;

  case 164:
#line 3068 "src/parser.y"
                      {
		 cout<<"UnaryExpr: PrimaryExpr\n";
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
		//cout<<"Primary Value: "<<$$->current_node_data->value<<" "<<$1->current_node_data->value<< endl;

	}
#line 5419 "parser.tab.c"
    break;

  case 165:
#line 3083 "src/parser.y"
                 {
 		 cout<<" PrimaryExpr: Operand, Value:";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;

		(yyval.nt) = curr;
		cout<<(yyval.nt)->current_node_data->value<<endl;
		//cout<<"Operand Value:"<<$$->current_node_data->value<<endl;
	}
#line 5437 "parser.tab.c"
    break;

  case 166:
#line 3096 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;

		(yyval.nt) = curr;
	}
#line 5452 "parser.tab.c"
    break;

  case 167:
#line 3106 "src/parser.y"
                               { 
 		// cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		(yyval.nt) = new Node("PrimaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Access");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_node_data->value = true;

		// cout<<"Primary Expr Value Selector: "<<$$->current_node_data->value<<endl;
		auto temp_type = (yyvsp[-1].nt)->current_type;
		if(temp_type==NULL) {
			cout<<((yyvsp[-1].nt)->current_node_data->data_name)<<" has not been declared in the current scope\n";
			exit(1);
		}
		// cout<<"A\n";
		if((yyvsp[-1].nt)->current_type->current_data_type == _POINTER)
		{
			if((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type == _BASIC)
			{
				temp_type = (dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to;
			}
		}
		// cout<<"A\n";

		if (temp_type->current_data_type == _BASIC) {
        	// cout<<"D\n";
        	// cout<<temp_type->getDataType()<<"\n";
        	// for(auto valval:tt->get_type_table_data())
        	// {
        	// 	cout<<valval.first<<" -> "<<valval.second<<"\n";
        	// }
        	temp_type = (tt->get_type_table_data())[temp_type->getDataType()]->copyClass() ;
    		// cout<<"E\n";
    	}
		// cout<<"A\n";

    	if (temp_type->current_data_type != _STRUCT &&
	        (temp_type->current_data_type != _POINTER ||
	         ((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type !=_STRUCT))) {
	        cout <<"[Type mismatch] Expected a struct type or pointer to struct type but got "	<< (yyvsp[-1].nt)->current_node_data->data_name <<" which is "<<temp_type->getDataType() << "\n";
	        exit(1);
	    }
		// cout<<"A\n";

	    if(temp_type->current_data_type==_STRUCT)
	    {
	    	// cout<<"B\n";
	    	auto temp = (dynamic_cast<StructType *>(temp_type))->data_of_struct;
	    	// auto temp2 = *temp;
	   	    	// cout<<"B\n";
		 	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    else{
	    	    	// cout<<"C\n";
			auto temp = (dynamic_cast<StructType *>((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to))->data_of_struct;
	    	// auto temp = *temp;
	    		    	// cout<<"C\n";

	    	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
	    	// cout<<"C\n";
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    (yyval.nt)->current_node_data = new NodeData("Access");
	    (yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
        (yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_node_data->value = true;
		(yyval.nt)->current_place = new Place((yyvsp[-1].nt)->current_place->place_name + "." + (yyvsp[0].nt)->current_place->place_name);
		(yyval.nt)->current_node_data->lval = (yyval.nt)->current_place->place_name;
		(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);


	}
#line 5540 "parser.tab.c"
    break;

  case 168:
#line 3189 "src/parser.y"
                            { //remaining lval
 		cout<<"PrimaryExpr: PrimaryExpr Index"<<endl;
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

			(yyval.nt)->add_code_in_map((yyvsp[-1].nt)->current_code);
			(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
			//lval
 		}
#line 5590 "parser.tab.c"
    break;

  case 169:
#line 3234 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5601 "parser.tab.c"
    break;

  case 170:
#line 3240 "src/parser.y"
                                { // remaining
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
		(yyval.nt)->current_place =  new Place("");

		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);
		Instruction* ins = new Instruction("CALL",(yyvsp[-1].nt)->current_place);
		(yyval.nt)->add_code_in_map(ins);
		update_instructions_with_scope(&((yyval.nt)->current_code),st);

		Place* pp = (yyval.nt)->current_place;

		for(DataType* tp = (yyval.nt)->current_type; tp != NULL; tp = tp->next_type){
			pp->next_place = new Place(tp);
			Instruction* ins = new Instruction("POP",pp->next_place);
			pp = pp->next_place;
			(yyval.nt)->add_code_in_map(ins);
		}
		(yyval.nt)->current_place = (yyval.nt)->current_place->next_place;
		// remaining
		(yyval.nt)->current_node_data->value = false;
	}
#line 5664 "parser.tab.c"
    break;

  case 171:
#line 3298 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5675 "parser.tab.c"
    break;

  case 172:
#line 3304 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5686 "parser.tab.c"
    break;

  case 173:
#line 3313 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5696 "parser.tab.c"
    break;

  case 174:
#line 3321 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5707 "parser.tab.c"
    break;

  case 175:
#line 3327 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 5719 "parser.tab.c"
    break;

  case 176:
#line 3338 "src/parser.y"
                       {
		// cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		curr->current_place = new Place(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 5734 "parser.tab.c"
    break;

  case 177:
#line 3351 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_place = (yyvsp[-1].nt)->current_place;
		curr->current_code = (yyvsp[-1].nt)->current_code;

		(yyval.nt) = curr;
	}
#line 5750 "parser.tab.c"
    break;

  case 178:
#line 3365 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5762 "parser.tab.c"
    break;

  case 179:
#line 3372 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 5771 "parser.tab.c"
    break;

  case 180:
#line 3376 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 5782 "parser.tab.c"
    break;

  case 181:
#line 3382 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5794 "parser.tab.c"
    break;

  case 182:
#line 3389 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5807 "parser.tab.c"
    break;

  case 183:
#line 3397 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5821 "parser.tab.c"
    break;

  case 184:
#line 3410 "src/parser.y"
                                                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-5].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-3].nt)->current_node_data;
		curr->current_node_data->node_child->next_data = (yyvsp[-1].nt)->current_node_data;
		
		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place((yyvsp[-5].nt)->current_type->getDataType()));
		curr->add_code_in_map(ins);

		(yyval.nt) = curr;
	}
#line 5845 "parser.tab.c"
    break;

  case 185:
#line 3429 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place((yyvsp[-3].nt)->current_type->getDataType()));
		curr->add_code_in_map(ins);

		(yyval.nt) = curr;
	}
#line 5867 "parser.tab.c"
    break;

  case 186:
#line 3446 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place((yyvsp[-1].nt)->current_type->getDataType()));
		curr->add_code_in_map(ins);

		(yyval.nt) = curr;
	}
#line 5886 "parser.tab.c"
    break;

  case 187:
#line 3460 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");

		curr->current_place = new Place(curr->current_type);
		Instruction* ins = new Instruction("NEW",new Place((yyvsp[-1].nt)->current_type->getDataType()),new Place(curr->current_place->place_name));
		curr->add_code_in_map(ins);

		(yyval.nt) = curr;
	}
#line 5904 "parser.tab.c"
    break;

  case 188:
#line 3476 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5914 "parser.tab.c"
    break;

  case 189:
#line 3484 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 5923 "parser.tab.c"
    break;

  case 190:
#line 3488 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_place = (yyvsp[-1].nt)->current_place;
		curr->current_code = (yyvsp[-1].nt)->current_code;

		Place *temp = (yyvsp[-1].nt)->current_place, *p1, *p2;
		Instruction* inst;
        int i=0;

        while (temp != NULL) {
			p1 = new Place(std::to_string(i++));
			p2 = new Place(temp->place_name);
			inst = new Instruction("PUSHARG",p1,p2);
            curr->add_code_in_map(inst);
            temp = temp->next_place;
        }

		(yyval.nt) = curr;
	}
#line 5951 "parser.tab.c"
    break;

  case 191:
#line 3511 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_place = (yyvsp[-2].nt)->current_place;
		curr->current_code = (yyvsp[-2].nt)->current_code;

		Place *temp = (yyvsp[-2].nt)->current_place, *p1, *p2;
		Instruction* inst;
        int i=0;

        while (temp != NULL) {
			p1 = new Place(std::to_string(i++));
			p2 = new Place(temp->place_name);
			inst = new Instruction("PUSHARG",p1,p2);
            curr->add_code_in_map(inst);
            temp = temp->next_place;
        }


		(yyval.nt) = curr;
	}
#line 5981 "parser.tab.c"
    break;

  case 192:
#line 3540 "src/parser.y"
                   {
		cout<<"ExpressionList: Expression, Value: ";
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;

		cout<<(yyval.nt)->current_node_data->value<<endl;
		(yyval.nt) = curr;
	}
#line 5999 "parser.tab.c"
    break;

  case 193:
#line 3553 "src/parser.y"
                                          {
		(yyval.nt) = new Node("ExpressionList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[-2].nt)->current_place;
		((yyval.nt)->last_current_place())->next_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->add_code_in_map((yyvsp[-2].nt)->current_code);
		(yyval.nt)->add_code_in_map((yyvsp[0].nt)->current_code);

	}
#line 6018 "parser.tab.c"
    break;

  case 194:
#line 3575 "src/parser.y"
                      {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_place = (yyvsp[0].nt)->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 6032 "parser.tab.c"
    break;

  case 195:
#line 3603 "src/parser.y"
                {
		(yyval.nt) = new Node("TypeSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		// curr->current_place = $1->current_place;
		(yyval.nt)->current_code = (yyvsp[0].nt)->current_code;
	}
#line 6045 "parser.tab.c"
    break;

  case 196:
#line 3614 "src/parser.y"
                        {
		(yyval.nt) =  new Node("TypeDef");
		(yyval.nt)->add_terminal_children((yyvsp[-1].sval));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		tt->add_in_type_table(string((yyvsp[-1].sval)), (yyvsp[0].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("TypeDef");
	}
#line 6057 "parser.tab.c"
    break;

  case 197:
#line 3624 "src/parser.y"
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
#line 6075 "parser.tab.c"
    break;

  case 198:
#line 3640 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_place = (yyvsp[-1].nt)->current_place;
		curr->current_code = (yyvsp[-1].nt)->current_code;

		(yyval.nt) = curr;
	}
#line 6092 "parser.tab.c"
    break;

  case 199:
#line 3653 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 6106 "parser.tab.c"
    break;

  case 200:
#line 3665 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 6117 "parser.tab.c"
    break;

  case 201:
#line 3671 "src/parser.y"
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
#line 6143 "parser.tab.c"
    break;

  case 202:
#line 3695 "src/parser.y"
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
#line 6169 "parser.tab.c"
    break;

  case 203:
#line 3716 "src/parser.y"
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
#line 6193 "parser.tab.c"
    break;

  case 204:
#line 3738 "src/parser.y"
                     {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_place = (yyvsp[0].nt)->current_place;
		curr->current_code = (yyvsp[0].nt)->current_code;
		if((yyvsp[0].nt)->current_type->getDataType() == "undefined")
		{
			(yyvsp[0].nt)->current_type = new BasicType((yyvsp[0].nt)->current_node_data->data_name);
		}
		curr-> current_type = new PointerType((yyvsp[0].nt)->current_type->copyClass());
		(yyval.nt) = curr;
	}
#line 6214 "parser.tab.c"
    break;

  case 205:
#line 3757 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 6228 "parser.tab.c"
    break;

  case 206:
#line 3769 "src/parser.y"
                                               {
		// cout<<"ArrayType : LEFTSQUARE Expression RIGHTSQUARE Type"<<endl;
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
#line 6270 "parser.tab.c"
    break;

  case 207:
#line 3810 "src/parser.y"
                 {
		// cout<<"Literal:BasicLit\n";
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 curr->current_place = (yyvsp[0].nt)->current_place;
		 curr->current_code = (yyvsp[0].nt)->current_code;
		 (yyval.nt) = curr;
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 6286 "parser.tab.c"
    break;

  case 208:
#line 3821 "src/parser.y"
                 {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 curr->current_place = (yyvsp[0].nt)->current_place;
		 curr->current_code = (yyvsp[0].nt)->current_code;
		 (yyval.nt) = curr;
		 }
#line 6300 "parser.tab.c"
    break;

  case 209:
#line 3833 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
		 (yyval.nt) = curr;
		 }
#line 6313 "parser.tab.c"
    break;

  case 210:
#line 3841 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
		 (yyval.nt) = curr;
		 }
#line 6326 "parser.tab.c"
    break;

  case 211:
#line 3849 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
		 (yyval.nt) = curr;
		 }
#line 6339 "parser.tab.c"
    break;

  case 212:
#line 3857 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 curr->current_place = new Place((yyvsp[0].nt)->current_place->place_name,curr->current_type);
		 (yyval.nt) = curr;
		// cout<<"BasicLit:String ";
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 6354 "parser.tab.c"
    break;

  case 213:
#line 3867 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
		 (yyval.nt) = curr;
		 }
#line 6367 "parser.tab.c"
    break;

  case 214:
#line 3875 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
		 (yyval.nt) = curr;
		 }
#line 6380 "parser.tab.c"
    break;

  case 215:
#line 3886 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
			 (yyval.nt) = curr;}
#line 6391 "parser.tab.c"
    break;

  case 216:
#line 3892 "src/parser.y"
                             {
			cout<<"INTERPRETED_STRING: "<<string((yyvsp[0].sval))<<endl;
			 Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 curr->current_place = new Place(string((yyvsp[0].sval)),curr->current_type);
			 (yyval.nt) = curr;
		}
#line 6405 "parser.tab.c"
    break;


#line 6409 "parser.tab.c"

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
#line 3903 "src/parser.y"






int main (int argc, char **argv) {

	// tt->add_in_type_table("void", new BasicType("void"));
 //    tt->add_in_type_table("int", new BasicType("int"));
 //    tt->add_in_type_table("bool", new BasicType("bool"));
 //    tt->add_in_type_table("byte", new BasicType("byte"));
 //    tt->add_in_type_table("float", new BasicType("float"));
 //    tt->add_in_type_table("string", new BasicType("string"));
	// tt->add

	yyin = fopen(argv[1], "r");	//taking input as argument
	map<string, DataType *> fmt_functions = {
        {"Printf", new FunctionType(vector<DataType *>{new BasicType("string"), new BasicType("int")},
                                    vector<DataType *>{})},
        {"Scanf", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{new BasicType("int")})},
        {"Println", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{})},
        {"Scanln", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{new BasicType("int")})}
    };


    auto fmt_struct = new StructType(fmt_functions);

    tt->add_in_type_table("void", new BasicType("void"));
    tt->add_in_type_table("int", new BasicType("int"));
    tt->add_in_type_table("bool", new BasicType("bool"));
    tt->add_in_type_table("byte", new BasicType("byte"));
    tt->add_in_type_table("float", new BasicType("float"));
    tt->add_in_type_table("string", new BasicType("string"));

    tt->add_in_type_table(string("fmt"), fmt_struct);

    st->add_in_symbol_table({"0;",string("fmt")}, fmt_struct);
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
