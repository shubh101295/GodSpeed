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
#define YYLAST   1458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
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
       0,    79,    79,    92,    99,   105,   114,   123,   129,   138,
     144,   148,   157,   163,   171,   177,   182,   191,   200,   211,
     221,   228,   236,   246,   256,   266,   290,   309,   317,   325,
     335,   343,   351,   359,   367,   375,   382,   390,   398,   409,
     416,   436,   448,   459,   466,   477,   488,   494,   501,   507,
     514,   522,   528,   536,   546,   554,   564,   653,   725,   731,
     740,   749,   758,   776,   800,   871,   880,   906,   944,   950,
     959,   968,   977,   983,   990,   999,  1005,  1017,  1040,  1051,
    1060,  1067,  1074,  1080,  1086,  1092,  1098,  1103,  1112,  1118,
    1127,  1135,  1142,  1151,  1169,  1173,  1179,  1187,  1196,  1203,
    1219,  1226,  1236,  1241,  1249,  1256,  1267,  1272,  1282,  1291,
    1302,  1307,  1318,  1328,  1346,  1346,  1360,  1360,  1377,  1377,
    1396,  1408,  1419,  1442,  1451,  1460,  1477,  1502,  1520,  1542,
    1564,  1586,  1611,  1639,  1650,  1662,  1674,  1711,  1719,  1766,
    1793,  1818,  1844,  1870,  1895,  1920,  1946,  1971,  1996,  2022,
    2047,  2073,  2098,  2124,  2149,  2174,  2199,  2224,  2249,  2261,
    2274,  2282,  2290,  2298,  2306,  2319,  2328,  2335,  2405,  2446,
    2452,  2459,  2465,  2474,  2482,  2488,  2499,  2511,  2523,  2530,
    2534,  2540,  2547,  2555,  2567,  2581,  2592,  2600,  2611,  2619,
    2623,  2632,  2646,  2656,  2674,  2700,  2709,  2719,  2735,  2746,
    2758,  2764,  2788,  2809,  2831,  2848,  2860,  2901,  2910,  2920,
    2927,  2934,  2941,  2950,  2957,  2967,  2972
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

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-193)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -54,    47,   104,  -341,  -341,  -341,   114,   151,   147,
     137,   196,     0,  -341,  -341,     0,  -341,  -341,  -341,   115,
     123,    66,   140,    57,   144,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   243,   174,  -341,  -341,    17,  -341,  -341,   119,
     169,  -341,  -341,   163,   265,  -341,  -341,  -341,   238,  -341,
    -341,   249,  -341,  -341,     7,  -341,   182,   194,   194,    61,
     254,   210,   220,   265,   458,   223,  -341,   842,  -341,   219,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
      67,  -341,   232,   183,   232,  -341,   290,  -341,    56,   265,
    -341,  -341,  -341,  -341,  -341,  -341,   244,   253,   252,   914,
     914,   914,   914,   914,   265,   842,  -341,  -341,   263,  -341,
     264,  1277,  -341,   259,  -341,  -341,  -341,  -341,  -341,  1384,
     255,   842,  -341,  -341,  -341,  -341,  -341,  -341,   265,  -341,
    -341,  -341,  -341,  -341,   182,    62,   302,   269,   265,   265,
     927,   259,   259,   259,   263,   264,   259,   259,  -341,  1340,
      15,  -341,   842,  -341,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   265,   556,   603,   179,  -341,  -341,  -341,
    -341,  -341,   842,   255,   133,  -341,   159,  -341,     0,  -341,
     317,  -341,   265,   274,   211,  -341,  -341,  -341,  -341,   279,
       4,  -341,   280,  -341,  1204,  1229,   286,  -341,   415,   415,
    -341,  -341,  -341,   415,  1405,   312,   500,   500,   500,   500,
     500,   500,  -341,  -341,  -341,  -341,  -341,  -341,   -27,   650,
    1120,   265,  -341,  1384,   281,   298,   842,  -341,   294,  -341,
     299,  -341,   142,  -341,   391,   358,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,   199,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  1034,    20,  -341,   265,  -341,  -341,
    -341,  -341,  -341,   842,  -341,   507,   697,   842,  -341,   315,
    -341,  -341,  1148,  -341,   746,   316,  -341,  -341,   255,   889,
     889,   232,   793,  -341,   133,   318,   362,  -341,   842,  -341,
    -341,   842,  -341,  1066,  -341,  -341,  -341,  -341,  1384,  1093,
    -341,  -341,   842,  -341,  1176,  -341,   216,   363,   965,  -341,
     366,   988,  -341,   367,   322,  1011,  -341,  -341,  -341,   255,
     255,  -341,   842,   842,  1298,  -341,   842,   842,   369,   232,
    -341,  -341,   324,  -341,  -341,  1362,  -341,  -341,  1319,  1254,
      -1,  -341,  -341,   842,  -341,    88,    88,  -341,  -341,   372,
    -341,  -341,  -341,   376,   377,  1384,    88,   842,  -341,     5,
    -341,   329,    22,    -1,  -341,  -341,  -341,  -341,   889,   889,
      90,   255,  -341,  -341,  -341,   133,  -341,  -341,  -341,   232,
     232,  -341,  -341,   391,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   215,   216,     0,    11,    16,    17,     0,
       0,     0,     0,     2,     0,    20,    21,    22,    40,    39,
       8,    10,     0,     0,    15,    14,     0,     3,    80,     0,
       0,    79,    58,     0,     0,   194,   195,     7,     0,    19,
       9,     0,    13,    72,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    88,    62,
      89,    85,    87,    82,    84,    83,   196,    18,    12,    73,
       0,    77,     4,    66,    43,    59,     0,    61,     0,     0,
     205,   204,   209,   210,   213,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   208,     0,   165,
      91,     0,   158,   164,   166,    90,   207,   212,    78,   192,
      64,     0,    74,    76,     3,    42,    65,     4,     0,    67,
      69,    44,    60,   199,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,     0,    91,   159,   160,    97,     0,
       0,    81,     0,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,   168,   169,
     172,   170,     0,    63,    51,    41,     0,    71,   203,   198,
       0,   200,     0,     0,     0,    86,    91,    92,    94,   105,
       0,    98,     0,   100,   104,     0,     0,   145,   146,   147,
     149,   139,   144,   148,   151,   150,   152,   153,   156,   154,
     155,   157,   141,   140,   142,   143,   206,   189,     0,     0,
       0,     0,   176,   193,   108,   110,   106,     3,     3,     3,
       0,   126,    93,    36,     4,     0,    27,    28,    29,    46,
      47,    48,    49,    50,     0,    30,    31,    32,    33,    34,
     113,    35,    37,    38,    53,     0,    68,     0,   202,   201,
     197,   187,   186,     0,    95,     0,     0,     0,   173,     0,
     190,   179,     0,   177,     0,     0,   109,   111,   107,    51,
      51,     0,    51,   112,    51,     0,     0,    26,     0,    54,
      55,     0,    70,     0,    96,    99,   105,   101,   104,   174,
     191,   178,     0,   180,     0,   188,    93,     0,   192,   137,
       0,   192,   138,     0,     0,   192,    45,    23,    25,    57,
      56,   185,     0,     0,     0,   181,     0,     0,     4,     0,
     137,   133,     0,   114,   118,     0,   175,   182,     0,     0,
       0,   127,   138,    52,   116,     0,     0,   184,   183,     4,
       4,     4,     4,     0,     0,    53,     0,     0,   123,     0,
     121,     0,     0,     0,   128,   130,   129,   136,    51,    51,
       0,   124,   125,     4,   120,    51,     4,     4,     4,     0,
       0,     4,   115,   122,   119,   132,   131,   138,   138,   117,
       4,     4,   134,   135
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -111,  -104,  -341,   392,  -341,   383,  -341,    11,
      52,  -341,   375,   -73,  -341,    18,  -241,    37,  -341,  -341,
    -341,  -257,  -341,  -341,    53,  -341,  -341,  -341,  -341,  -341,
     -23,   321,   351,  -341,  -341,   394,  -341,   330,   -10,  -341,
    -341,   242,   251,   277,   101,  -144,  -341,  -341,   148,  -341,
     146,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -177,  -194,    64,  -341,  -341,  -334,  -341,  -295,  -340,   -64,
    -341,   236,  -341,    92,  -341,  -341,  -341,  -341,  -341,  -341,
     -65,  -341,  -341,  -341,  -341,  -341,  -341,   300,  -341,  -341,
    -341,  -341,  -341,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    57,   125,     3,    15,     9,    10,    32,    16,
      17,    23,    24,   243,   319,   244,   245,   246,    26,    27,
     247,   248,   249,   363,   250,   251,   252,   253,    28,    59,
      42,   127,    82,   129,   186,    83,    54,    55,   254,    39,
     107,   108,    90,   109,   110,   151,    71,   200,   201,   202,
     203,   255,   256,   257,   258,   259,   260,   355,   366,   356,
     369,   370,   324,   371,   261,   262,   263,   291,   341,   119,
     112,   113,   153,   206,   177,   178,   179,   114,   180,   181,
     265,    29,    45,    46,    72,    73,   135,   136,    74,    91,
      75,   115,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,    18,   120,   296,    18,    18,   199,   279,    18,   126,
      43,   126,   362,   184,     4,   237,   361,    60,    92,    93,
      94,    95,    33,   185,   339,    18,    56,   367,    61,   280,
      43,   368,   317,   320,     1,   323,    86,   182,    96,   388,
      62,   149,    97,    51,   367,   353,    25,     6,   368,    43,
      99,   100,   101,   326,   102,   103,   183,   400,   401,   124,
      25,   274,   383,    79,    34,    13,    14,    35,   275,    19,
      56,    80,   198,    53,   105,   150,    64,    20,   134,   386,
      13,    14,   106,    66,   182,    41,   204,    21,   205,   301,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   228,
     367,   230,   367,   133,   368,     7,   368,    85,   233,   189,
     264,   389,   390,   122,    41,   134,   289,   290,   292,    41,
      41,   199,   306,     8,    44,    41,    92,    93,    94,    95,
     295,   234,   235,   236,    70,    70,    61,   391,    30,   237,
     238,    47,   296,    20,   239,    49,    96,    70,    62,    19,
      97,   240,   241,    21,    70,   282,     8,    20,    99,   100,
     101,   288,   102,   103,    36,   384,    61,    21,   384,   372,
     264,   268,    40,    37,    70,    52,   384,    58,    62,   380,
      70,    41,   105,   124,    64,    61,    61,   -79,    13,    14,
     106,   242,    63,   145,   294,    70,   -79,    62,    62,   303,
      11,   204,   308,   309,    12,   266,    13,    14,   322,     4,
     314,    63,    63,   267,    64,   318,   321,    65,   325,    70,
     264,    66,    67,   329,   351,    70,   330,    41,   231,    70,
      70,   196,   128,    64,    64,   338,    65,   232,   334,    77,
      66,    66,    31,    36,   298,   374,   375,   376,   377,    12,
      78,    13,    14,    65,     4,    87,   352,   272,   345,   205,
      88,   -79,   348,   349,    70,   273,   359,   360,    61,   392,
     -79,    89,   394,   395,   396,    68,    68,   399,   121,   365,
      62,   118,   124,    70,    69,    76,   402,   403,    68,    50,
     387,   132,   381,   138,    63,    68,    12,    81,    13,    14,
     140,     4,   139,   191,   264,   264,   397,   398,   174,   182,
     175,   264,   176,   150,   152,    68,    64,   192,   269,   264,
     271,    68,    70,    66,   130,   141,   142,   143,   146,   147,
     137,  -103,   276,   278,   144,   154,    68,   155,   156,   286,
     157,   158,   159,   160,  -137,   148,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   287,   293,    70,   297,
      68,   310,   315,   328,   337,   327,    68,   340,   342,   187,
      68,    68,   343,   350,   354,   188,   373,   378,   379,   193,
     194,   385,    22,     5,    92,    93,    94,    95,    48,   234,
     235,   236,   -51,   393,    61,   131,   364,   237,   238,    84,
     123,    20,   239,    38,    96,    68,    62,   195,    97,   240,
     241,    21,   307,   305,   226,   346,    99,   100,   101,     0,
     102,   103,   382,     0,    68,   190,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,   154,     0,
     105,   124,    64,   157,   158,   159,    13,    14,   106,   242,
       0,    92,    93,    94,    95,   169,   170,   171,   172,     0,
       0,    61,     0,    68,     0,     0,     0,     0,     0,     0,
       0,    96,   285,    62,     0,    97,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      92,    93,    94,    95,     0,     0,   104,   105,   302,    64,
      61,     0,     0,    13,    14,   106,    66,     0,     0,     0,
      96,     0,    62,   154,    97,   155,   156,     0,   157,   158,
     159,   160,    99,   100,   101,     0,   102,   103,     0,     0,
     169,   170,   171,   172,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,   304,     0,   105,   150,    64,    61,
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
       0,     0,     0,     0,   313,   105,    61,    64,     0,     0,
       0,    13,    14,   106,    66,     0,    96,     0,    62,     0,
      97,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,     0,
       0,     0,   105,  -123,    64,    61,     0,     0,    13,    14,
     106,   316,     0,     0,     0,    96,     0,    62,     0,    97,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,     0,     0,     0,     0,
       0,   105,    61,    64,     0,     0,     0,    13,    14,   106,
      66,     0,    96,     0,    62,     0,    97,    92,    93,    94,
      95,     0,     0,     0,    99,   100,   101,    61,   102,   103,
      92,    93,    94,    95,     0,     0,     0,    96,     0,    62,
      61,    97,     0,     0,     0,     0,     0,     0,   105,     0,
      64,     0,    62,    63,    13,    14,   106,   316,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,     0,     0,   105,     0,    64,   -53,     0,     0,    13,
      14,   106,    66,     0,     0,     0,   105,     0,    64,     0,
       0,     0,    13,    14,   106,    66,   299,   300,   154,   -53,
     155,   156,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   299,
     300,   154,   -53,   155,   156,   124,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   299,   300,   154,     0,   155,   156,   -24,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   299,   300,   154,     0,   155,
     156,   344,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -192,   154,
       0,   155,   156,  -192,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,   331,     0,     0,     0,   154,     0,   155,   156,
     332,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,   154,     0,   155,   156,   333,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,     0,   283,     0,
       0,   154,   284,   155,   156,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,   311,     0,     0,   154,
     312,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     0,     0,     0,   335,     0,     0,   154,   336,   155,
     156,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,     0,   154,     0,   155,   156,  -102,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,     0,     0,     0,     0,   154,     0,   155,
     156,   277,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,     0,     0,
     154,     0,   155,   156,   124,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   154,     0,   155,   156,   173,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   154,     0,   155,   156,   347,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   154,     0,   155,   156,   358,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,   154,   197,   155,   156,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,     0,   154,   357,   155,
     156,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   154,     0,
     155,   156,     0,   157,   158,   159,   160,     0,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172
};

static const yytype_int16 yycheck[] =
{
      64,     8,    67,   244,    11,    12,   150,    34,    15,    82,
      20,    84,   352,   124,    68,    16,   350,    40,     3,     4,
       5,     6,    11,   127,   319,    32,    36,    22,    13,    56,
      40,    26,   289,   290,    15,   292,    59,    64,    23,   373,
      25,   105,    27,    32,    22,   340,     9,     0,    26,    59,
      35,    36,    37,   294,    39,    40,   121,   397,   398,    60,
      23,    57,    57,    56,    12,    65,    66,    15,    64,    12,
      80,    64,    57,    56,    59,    60,    61,    20,    88,    57,
      65,    66,    67,    68,    64,    68,   150,    30,   152,    69,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   174,
      22,   175,    22,    57,    26,    11,    26,    56,   182,    57,
     184,   378,   379,    56,    68,   135,   237,   238,   239,    68,
      68,   275,   276,    19,    68,    68,     3,     4,     5,     6,
     244,     8,     9,    10,    43,    44,    13,    57,    11,    16,
      17,    11,   393,    20,    21,    11,    23,    56,    25,    12,
      27,    28,    29,    30,    63,   229,    19,    20,    35,    36,
      37,   236,    39,    40,    59,   369,    13,    30,   372,   356,
     244,   188,    59,    68,    83,    11,   380,    68,    25,   366,
      89,    68,    59,    60,    61,    13,    13,    55,    65,    66,
      67,    68,    39,   102,    62,   104,    64,    25,    25,   273,
      59,   275,   276,   277,    63,    56,    65,    66,   291,    68,
     284,    39,    39,    64,    61,   289,   290,    64,   292,   128,
     294,    68,    69,   298,   338,   134,   301,    68,    59,   138,
     139,   140,    59,    61,    61,   318,    64,    68,   312,    11,
      68,    68,    56,    59,    55,   359,   360,   361,   362,    63,
      11,    65,    66,    64,    68,    11,   339,    56,   332,   333,
      60,    55,   336,   337,   173,    64,   349,   350,    13,   383,
      64,    61,   386,   387,   388,    43,    44,   391,    69,   353,
      25,    68,    60,   192,    43,    44,   400,   401,    56,    56,
     373,    11,   367,    59,    39,    63,    63,    56,    65,    66,
      58,    68,    59,    11,   378,   379,   389,   390,    59,    64,
      61,   385,    63,    60,    60,    83,    61,    58,    11,   393,
      56,    89,   231,    68,    83,    99,   100,   101,   102,   103,
      89,    62,    62,    57,   102,    33,   104,    35,    36,    68,
      38,    39,    40,    41,    60,   104,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    68,    68,   267,    11,
     128,    56,    56,    11,    11,    57,   134,    11,    11,   128,
     138,   139,    60,    14,    60,   134,    14,    11,    11,   138,
     139,    62,     9,     1,     3,     4,     5,     6,    23,     8,
       9,    10,    11,   385,    13,    84,   353,    16,    17,    58,
      80,    20,    21,    19,    23,   173,    25,   140,    27,    28,
      29,    30,   276,   275,   173,   333,    35,    36,    37,    -1,
      39,    40,   368,    -1,   192,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    33,    -1,
      59,    60,    61,    38,    39,    40,    65,    66,    67,    68,
      -1,     3,     4,     5,     6,    50,    51,    52,    53,    -1,
      -1,    13,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,   231,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
       3,     4,     5,     6,    -1,    -1,    58,    59,   267,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    33,    27,    35,    36,    -1,    38,    39,
      40,    41,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,     3,
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
      68,    -1,    23,    -1,    25,    -1,    27,     3,     4,     5,
       6,    -1,    -1,    -1,    35,    36,    37,    13,    39,    40,
       3,     4,     5,     6,    -1,    -1,    -1,    23,    -1,    25,
      13,    27,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    25,    39,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    11,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    31,    32,    33,    11,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    31,
      32,    33,    11,    35,    36,    60,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    31,    32,    33,    -1,    35,    36,    60,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    31,    32,    33,    -1,    35,
      36,    60,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    33,
      -1,    35,    36,    69,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    33,    -1,    35,    36,
      64,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    64,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    33,    62,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    33,
      62,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    62,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    62,    38,    39,    40,    41,    42,    43,    44,    45,
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
      46,    47,    48,    49,    50,    51,    52,    53,    33,    -1,
      35,    36,    -1,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
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
      56,    58,   139,    58,    62,   112,    68,    68,   150,    72,
      72,   137,    72,    68,    62,    73,    86,    11,    55,    31,
      32,    69,   112,   139,    57,   118,   115,   120,   139,   139,
      56,    58,    62,    58,   139,    56,    68,    91,   139,    84,
      91,   139,    83,    91,   132,   139,    86,    57,    11,   150,
     150,    56,    64,    64,   139,    58,    62,    11,    83,   137,
      11,   138,    11,    60,    60,   139,   143,    58,   139,   139,
      14,    73,    83,   137,    60,   127,   129,    56,    58,    83,
      83,   135,   138,    93,    94,   139,   128,    22,    26,   130,
     131,   133,   130,    14,    73,    73,    73,    73,    11,    11,
     130,   150,   132,    57,   131,    62,    57,    83,   135,    91,
      91,    57,    73,    85,    73,    73,    73,    83,    83,    73,
     138,   138,    73,    73
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
     123,   123,   124,   125,   127,   126,   128,   126,   129,   126,
     130,   130,   131,   132,   133,   133,   134,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   137,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   143,   143,   144,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   148,   149,
     149,   149,   150,   150,   151,   152,   153,   154,   155,   155,
     156,   156,   157,   157,   158,   159,   160,   161,   161,   162,
     162,   162,   162,   162,   162,   163,   163
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
       1,     2,     2,     1,     0,     8,     0,     9,     0,     8,
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
			}
#line 1937 "parser.tab.c"
    break;

  case 3:
#line 92 "src/parser.y"
        {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 1946 "parser.tab.c"
    break;

  case 4:
#line 99 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 1954 "parser.tab.c"
    break;

  case 5:
#line 105 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 1965 "parser.tab.c"
    break;

  case 6:
#line 114 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 1976 "parser.tab.c"
    break;

  case 7:
#line 123 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1987 "parser.tab.c"
    break;

  case 8:
#line 129 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 1998 "parser.tab.c"
    break;

  case 9:
#line 138 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2009 "parser.tab.c"
    break;

  case 10:
#line 144 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2018 "parser.tab.c"
    break;

  case 11:
#line 148 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2029 "parser.tab.c"
    break;

  case 12:
#line 157 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2040 "parser.tab.c"
    break;

  case 13:
#line 163 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2050 "parser.tab.c"
    break;

  case 14:
#line 171 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2061 "parser.tab.c"
    break;

  case 15:
#line 177 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2071 "parser.tab.c"
    break;

  case 16:
#line 182 "src/parser.y"
                     {
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2082 "parser.tab.c"
    break;

  case 17:
#line 191 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2093 "parser.tab.c"
    break;

  case 18:
#line 200 "src/parser.y"
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
#line 2109 "parser.tab.c"
    break;

  case 19:
#line 211 "src/parser.y"
                              {
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2121 "parser.tab.c"
    break;

  case 20:
#line 221 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2133 "parser.tab.c"
    break;

  case 21:
#line 228 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2146 "parser.tab.c"
    break;

  case 22:
#line 236 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2158 "parser.tab.c"
    break;

  case 23:
#line 246 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2170 "parser.tab.c"
    break;

  case 24:
#line 256 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2182 "parser.tab.c"
    break;

  case 25:
#line 266 "src/parser.y"
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
#line 2211 "parser.tab.c"
    break;

  case 26:
#line 290 "src/parser.y"
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
#line 2232 "parser.tab.c"
    break;

  case 27:
#line 309 "src/parser.y"
                    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2245 "parser.tab.c"
    break;

  case 28:
#line 317 "src/parser.y"
                      {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2258 "parser.tab.c"
    break;

  case 29:
#line 325 "src/parser.y"
                     {
		// cout<<"Statement:	SimpleStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		cout<<"Statement:	SimpleStmt "<<((yyvsp[0].nt)->current_node_data==NULL)<<"\n";
		(yyval.nt) = curr;
	}
#line 2273 "parser.tab.c"
    break;

  case 30:
#line 335 "src/parser.y"
                    {
		cout<<"Statement:	ReturnStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2286 "parser.tab.c"
    break;

  case 31:
#line 343 "src/parser.y"
                    {
		cout<<"Statement:	BreakStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2299 "parser.tab.c"
    break;

  case 32:
#line 351 "src/parser.y"
                       {
		cout<<"Statement:	ContinueStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2312 "parser.tab.c"
    break;

  case 33:
#line 359 "src/parser.y"
                   {
		cout<<"Statement:	GotoStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2325 "parser.tab.c"
    break;

  case 34:
#line 367 "src/parser.y"
                     {
		cout<<"Statement:	SwitchStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2338 "parser.tab.c"
    break;

  case 35:
#line 375 "src/parser.y"
                          {
		cout<<"Statement:	FallthroughStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2350 "parser.tab.c"
    break;

  case 36:
#line 382 "src/parser.y"
                {
		cout<<"Statement:	Block\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2363 "parser.tab.c"
    break;

  case 37:
#line 390 "src/parser.y"
                 {
		cout<<"Statement:	IfStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2376 "parser.tab.c"
    break;

  case 38:
#line 398 "src/parser.y"
                  {
		cout<<"Statement:	ForStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2389 "parser.tab.c"
    break;

  case 39:
#line 409 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2401 "parser.tab.c"
    break;

  case 40:
#line 416 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2413 "parser.tab.c"
    break;

  case 41:
#line 436 "src/parser.y"
                                                                    {
		cout<<"FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock \n";
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);
		(yyval.nt)-> current_node_data = new NodeData("Function-" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2430 "parser.tab.c"
    break;

  case 42:
#line 448 "src/parser.y"
                                                          {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function-"+ string((yyvsp[-3].sval)));
	}
#line 2443 "parser.tab.c"
    break;

  case 43:
#line 459 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2455 "parser.tab.c"
    break;

  case 44:
#line 466 "src/parser.y"
                                                          {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2468 "parser.tab.c"
    break;

  case 45:
#line 477 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2480 "parser.tab.c"
    break;

  case 46:
#line 488 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2491 "parser.tab.c"
    break;

  case 47:
#line 494 "src/parser.y"
                         {
		cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2503 "parser.tab.c"
    break;

  case 48:
#line 501 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2514 "parser.tab.c"
    break;

  case 49:
#line 507 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		cout<<"SimpleStmt: Assignment "<<((yyval.nt)->current_node_data==NULL)<<"\n";
	}
#line 2526 "parser.tab.c"
    break;

  case 50:
#line 514 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2537 "parser.tab.c"
    break;

  case 51:
#line 522 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2546 "parser.tab.c"
    break;

  case 52:
#line 528 "src/parser.y"
            {   // For infinite looping
		(yyval.nt) = new Node("EmptyExpr");
		(yyval.nt)->current_node_data = new NodeData("true");
		(yyval.nt)->current_type = new BasicType("bool");
	}
#line 2556 "parser.tab.c"
    break;

  case 53:
#line 536 "src/parser.y"
                   {
		cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2568 "parser.tab.c"
    break;

  case 54:
#line 546 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2581 "parser.tab.c"
    break;

  case 55:
#line 554 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2593 "parser.tab.c"
    break;

  case 56:
#line 564 "src/parser.y"
                                               {
		cout<<"Assignment: ExpressionList ASSGN_OP ExpressionList "<<((yyval.nt)->current_node_data==NULL)<<"\n";

		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;
		cout<<left_data->value<<" "<<right_data->value<<endl;
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
			if(!left_data->value && left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(left_data -> value){
				cout<<"Here 1"<<endl;
				string j = name;
				cout<<"HERE 2\n";
				name = (left_data->node_child)? left_data->node_child->data_name:left_data->data_name;
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
#line 2684 "parser.tab.c"
    break;

  case 57:
#line 653 "src/parser.y"
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
#line 2758 "parser.tab.c"
    break;

  case 58:
#line 725 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2769 "parser.tab.c"
    break;

  case 59:
#line 731 "src/parser.y"
                                               {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2780 "parser.tab.c"
    break;

  case 60:
#line 740 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");

		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		// might need to add type checks
	}
#line 2794 "parser.tab.c"
    break;

  case 61:
#line 749 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2805 "parser.tab.c"
    break;

  case 62:
#line 758 "src/parser.y"
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
#line 2828 "parser.tab.c"
    break;

  case 63:
#line 776 "src/parser.y"
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
#line 2857 "parser.tab.c"
    break;

  case 64:
#line 800 "src/parser.y"
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
#line 2913 "parser.tab.c"
    break;

  case 65:
#line 871 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2924 "parser.tab.c"
    break;

  case 66:
#line 880 "src/parser.y"
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
#line 2955 "parser.tab.c"
    break;

  case 67:
#line 906 "src/parser.y"
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
#line 2995 "parser.tab.c"
    break;

  case 68:
#line 944 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3006 "parser.tab.c"
    break;

  case 69:
#line 950 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3017 "parser.tab.c"
    break;

  case 70:
#line 959 "src/parser.y"
                        {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3031 "parser.tab.c"
    break;

  case 71:
#line 968 "src/parser.y"
           {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3042 "parser.tab.c"
    break;

  case 72:
#line 977 "src/parser.y"
                             {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = NULL;
		(yyval.nt)-> current_type = NULL;
	}
#line 3053 "parser.tab.c"
    break;

  case 73:
#line 983 "src/parser.y"
                                             {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3065 "parser.tab.c"
    break;

  case 74:
#line 990 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3076 "parser.tab.c"
    break;

  case 75:
#line 999 "src/parser.y"
                      {
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3087 "parser.tab.c"
    break;

  case 76:
#line 1005 "src/parser.y"
                                           {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
	}
#line 3101 "parser.tab.c"
    break;

  case 77:
#line 1017 "src/parser.y"
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
#line 3126 "parser.tab.c"
    break;

  case 78:
#line 1040 "src/parser.y"
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
#line 3142 "parser.tab.c"
    break;

  case 79:
#line 1051 "src/parser.y"
                     {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3153 "parser.tab.c"
    break;

  case 80:
#line 1060 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3162 "parser.tab.c"
    break;

  case 81:
#line 1067 "src/parser.y"
                                 {
        (yyval.nt) = new Node("CompositeLit");

    }
#line 3171 "parser.tab.c"
    break;

  case 82:
#line 1074 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3182 "parser.tab.c"
    break;

  case 83:
#line 1080 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3193 "parser.tab.c"
    break;

  case 84:
#line 1086 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3204 "parser.tab.c"
    break;

  case 85:
#line 1092 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3215 "parser.tab.c"
    break;

  case 86:
#line 1098 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3225 "parser.tab.c"
    break;

  case 87:
#line 1103 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3236 "parser.tab.c"
    break;

  case 88:
#line 1112 "src/parser.y"
                    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3247 "parser.tab.c"
    break;

  case 89:
#line 1118 "src/parser.y"
                      {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3258 "parser.tab.c"
    break;

  case 90:
#line 1127 "src/parser.y"
                {
		cout<<"Operand: Literal"<<endl;
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		cout<<"Operand Value "<<(yyval.nt)->current_node_data->value<<endl;
	}
#line 3271 "parser.tab.c"
    break;

  case 91:
#line 1135 "src/parser.y"
                      {
		cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3283 "parser.tab.c"
    break;

  case 92:
#line 1142 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3294 "parser.tab.c"
    break;

  case 93:
#line 1151 "src/parser.y"
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
#line 3314 "parser.tab.c"
    break;

  case 94:
#line 1169 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3323 "parser.tab.c"
    break;

  case 95:
#line 1173 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3334 "parser.tab.c"
    break;

  case 96:
#line 1179 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3345 "parser.tab.c"
    break;

  case 97:
#line 1187 "src/parser.y"
                                    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new SliceType((yyvsp[0].nt)->current_type);
        (yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
		;}
#line 3356 "parser.tab.c"
    break;

  case 98:
#line 1196 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3368 "parser.tab.c"
    break;

  case 99:
#line 1203 "src/parser.y"
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
#line 3386 "parser.tab.c"
    break;

  case 100:
#line 1219 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3398 "parser.tab.c"
    break;

  case 101:
#line 1226 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;

	}
#line 3410 "parser.tab.c"
    break;

  case 102:
#line 1236 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3420 "parser.tab.c"
    break;

  case 103:
#line 1241 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3430 "parser.tab.c"
    break;

  case 104:
#line 1249 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3442 "parser.tab.c"
    break;

  case 105:
#line 1256 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3454 "parser.tab.c"
    break;

  case 106:
#line 1267 "src/parser.y"
               {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> current_node_data = new NodeData(string((yyvsp[0].sval)));

	}
#line 3464 "parser.tab.c"
    break;

  case 107:
#line 1272 "src/parser.y"
                                {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;

	}
#line 3476 "parser.tab.c"
    break;

  case 108:
#line 1282 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		if(bl->is_empty()){
			cout<<"Tried to break out without any label! Exiting..";
			exit(1);
		}
		(yyval.nt) = curr;
	}
#line 3490 "parser.tab.c"
    break;

  case 109:
#line 1291 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3502 "parser.tab.c"
    break;

  case 110:
#line 1302 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3512 "parser.tab.c"
    break;

  case 111:
#line 1307 "src/parser.y"
                              {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// check this reason
		curr->current_node_data->node_child =  new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3525 "parser.tab.c"
    break;

  case 112:
#line 1318 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3537 "parser.tab.c"
    break;

  case 113:
#line 1328 "src/parser.y"
                       {
		cout<<"SwitchStmt: ExprSwitchStmt\n";
		(yyval.nt) = new Node("SwitchStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 3549 "parser.tab.c"
    break;

  case 114:
#line 1346 "src/parser.y"
                                              { scl = new SwitchCaseList(); }
#line 3555 "parser.tab.c"
    break;

  case 115:
#line 1346 "src/parser.y"
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
#line 3574 "parser.tab.c"
    break;

  case 116:
#line 1360 "src/parser.y"
                                                       { scl = new SwitchCaseList(); }
#line 3580 "parser.tab.c"
    break;

  case 117:
#line 1361 "src/parser.y"
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
#line 3601 "parser.tab.c"
    break;

  case 118:
#line 1377 "src/parser.y"
                                                { scl = new SwitchCaseList(); }
#line 3607 "parser.tab.c"
    break;

  case 119:
#line 1377 "src/parser.y"
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
#line 3627 "parser.tab.c"
    break;

  case 120:
#line 1396 "src/parser.y"
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
#line 3644 "parser.tab.c"
    break;

  case 121:
#line 1408 "src/parser.y"
                         {
		cout<<"ExprCaseClauseList: ExprCaseClause\n";
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("list");
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		// $$->current_type = $1->current_type;
	}
#line 3657 "parser.tab.c"
    break;

  case 122:
#line 1419 "src/parser.y"
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
#line 3681 "parser.tab.c"
    break;

  case 123:
#line 1442 "src/parser.y"
        {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children("true");
		 curr->current_node_data = new NodeData("true");
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
	}
#line 3693 "parser.tab.c"
    break;

  case 124:
#line 1451 "src/parser.y"
                            {
		cout<<"ExprSwitchCase:  CASE ExpressionList\n";
		(yyval.nt) = new Node("ExprSwitchCase");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		is_inside_case = true;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;

	}
#line 3707 "parser.tab.c"
    break;

  case 125:
#line 1460 "src/parser.y"
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
#line 3726 "parser.tab.c"
    break;

  case 126:
#line 1477 "src/parser.y"
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
#line 3752 "parser.tab.c"
    break;

  case 127:
#line 1502 "src/parser.y"
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
#line 3775 "parser.tab.c"
    break;

  case 128:
#line 1520 "src/parser.y"
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
#line 3802 "parser.tab.c"
    break;

  case 129:
#line 1542 "src/parser.y"
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
#line 3829 "parser.tab.c"
    break;

  case 130:
#line 1564 "src/parser.y"
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
#line 3856 "parser.tab.c"
    break;

  case 131:
#line 1586 "src/parser.y"
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
#line 3886 "parser.tab.c"
    break;

  case 132:
#line 1611 "src/parser.y"
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
#line 3916 "parser.tab.c"
    break;

  case 133:
#line 1640 "src/parser.y"
        {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 3931 "parser.tab.c"
    break;

  case 134:
#line 1650 "src/parser.y"
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
#line 3948 "parser.tab.c"
    break;

  case 135:
#line 1662 "src/parser.y"
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
#line 3965 "parser.tab.c"
    break;

  case 136:
#line 1674 "src/parser.y"
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
#line 3983 "parser.tab.c"
    break;

  case 137:
#line 1711 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> add_new_break_label();
	}
#line 3992 "parser.tab.c"
    break;

  case 138:
#line 1719 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> remove_last_break_label();
	;
	}
#line 4002 "parser.tab.c"
    break;

  case 139:
#line 1766 "src/parser.y"
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
#line 4034 "parser.tab.c"
    break;

  case 140:
#line 1793 "src/parser.y"
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
#line 4064 "parser.tab.c"
    break;

  case 141:
#line 1818 "src/parser.y"
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
#line 4095 "parser.tab.c"
    break;

  case 142:
#line 1844 "src/parser.y"
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
#line 4126 "parser.tab.c"
    break;

  case 143:
#line 1870 "src/parser.y"
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
#line 4156 "parser.tab.c"
    break;

  case 144:
#line 1895 "src/parser.y"
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
#line 4186 "parser.tab.c"
    break;

  case 145:
#line 1920 "src/parser.y"
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
#line 4217 "parser.tab.c"
    break;

  case 146:
#line 1946 "src/parser.y"
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
#line 4247 "parser.tab.c"
    break;

  case 147:
#line 1971 "src/parser.y"
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
#line 4277 "parser.tab.c"
    break;

  case 148:
#line 1996 "src/parser.y"
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
#line 4308 "parser.tab.c"
    break;

  case 149:
#line 2022 "src/parser.y"
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
#line 4338 "parser.tab.c"
    break;

  case 150:
#line 2047 "src/parser.y"
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
#line 4369 "parser.tab.c"
    break;

  case 151:
#line 2073 "src/parser.y"
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
#line 4399 "parser.tab.c"
    break;

  case 152:
#line 2098 "src/parser.y"
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
#line 4430 "parser.tab.c"
    break;

  case 153:
#line 2124 "src/parser.y"
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
#line 4460 "parser.tab.c"
    break;

  case 154:
#line 2149 "src/parser.y"
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
#line 4490 "parser.tab.c"
    break;

  case 155:
#line 2174 "src/parser.y"
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
#line 4520 "parser.tab.c"
    break;

  case 156:
#line 2199 "src/parser.y"
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
#line 4550 "parser.tab.c"
    break;

  case 157:
#line 2224 "src/parser.y"
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
#line 4580 "parser.tab.c"
    break;

  case 158:
#line 2249 "src/parser.y"
                    {
		cout<<"Expression: UnaryExpr\n";
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
			cout<<"Unary value"<<endl;
			cout<<(yyval.nt)->current_node_data->value<<endl;
		}
#line 4594 "parser.tab.c"
    break;

  case 159:
#line 2261 "src/parser.y"
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
#line 4612 "parser.tab.c"
    break;

  case 160:
#line 2274 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("&unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = new PointerType((yyvsp[0].nt)->current_type);
		}
#line 4625 "parser.tab.c"
    break;

  case 161:
#line 2282 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("+unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4638 "parser.tab.c"
    break;

  case 162:
#line 2290 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("-unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4651 "parser.tab.c"
    break;

  case 163:
#line 2298 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("!unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4664 "parser.tab.c"
    break;

  case 164:
#line 2306 "src/parser.y"
                      {
		cout<<"UnaryExpr: PrimaryExpr\n";
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		//cout<<"Primary Value: "<<$$->current_node_data->value<<" "<<$1->current_node_data->value<< endl;

	}
#line 4678 "parser.tab.c"
    break;

  case 165:
#line 2319 "src/parser.y"
                 {
 		cout<<" PrimaryExpr: Operand \n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
		//cout<<"Operand Value:"<<$$->current_node_data->value<<endl;
	}
#line 4692 "parser.tab.c"
    break;

  case 166:
#line 2328 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4704 "parser.tab.c"
    break;

  case 167:
#line 2335 "src/parser.y"
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
// _ARRAY,
// 	_BASIC,
// 	_FUNCTION,
// 	_MAP,
// 	_NULL, 
// 	_POINTER,
// 	_SLICE,
// 	_STRUCT
		if((yyvsp[-1].nt)->current_type->current_data_type == _POINTER)
		{
			if((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type == _BASIC)
			{
				temp_type = (dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to;
			}
		}

		if (temp_type->current_data_type == _BASIC) {
        	temp_type = (tt->get_type_table_data())[temp_type->getDataType()]->copyClass() ;
    	}

    	if (temp_type->current_data_type != _STRUCT &&
	        (temp_type->current_data_type != _POINTER ||
	         ((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type !=_STRUCT))) {
	        cout <<"[Type mismatch] Expected a struct type or pointer to struct type but got "	<< (yyvsp[-1].nt)->current_node_data->data_name <<" which is "<<temp_type->getDataType() << "\n";
	        exit(1);
	    }

	    if(temp_type->current_data_type==_STRUCT)
	    {
	    	auto temp = (dynamic_cast<StructType *>(temp_type))->data_of_struct;
	    	// auto temp2 = *temp;
	    	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    else{
	    	auto temp = (dynamic_cast<StructType *>((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to))->data_of_struct;
	    	// auto temp = *temp;
	    	if(temp.find((yyvsp[0].nt)->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<(yyvsp[0].nt)->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    (yyval.nt)->current_type =  temp[(yyvsp[0].nt)->current_node_data->data_name];
	    }
	    (yyval.nt)->current_node_data = new NodeData("Access");
	    (yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
        (yyval.nt)->current_node_data->node_child->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_node_data->value = true;


	}
#line 4779 "parser.tab.c"
    break;

  case 168:
#line 2405 "src/parser.y"
                            {
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
#line 4825 "parser.tab.c"
    break;

  case 169:
#line 2446 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4836 "parser.tab.c"
    break;

  case 170:
#line 2452 "src/parser.y"
                                {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4848 "parser.tab.c"
    break;

  case 171:
#line 2459 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4859 "parser.tab.c"
    break;

  case 172:
#line 2465 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4870 "parser.tab.c"
    break;

  case 173:
#line 2474 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4880 "parser.tab.c"
    break;

  case 174:
#line 2482 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4891 "parser.tab.c"
    break;

  case 175:
#line 2488 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4903 "parser.tab.c"
    break;

  case 176:
#line 2499 "src/parser.y"
                       {
		cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 4917 "parser.tab.c"
    break;

  case 177:
#line 2511 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4931 "parser.tab.c"
    break;

  case 178:
#line 2523 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4943 "parser.tab.c"
    break;

  case 179:
#line 2530 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 4952 "parser.tab.c"
    break;

  case 180:
#line 2534 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 4963 "parser.tab.c"
    break;

  case 181:
#line 2540 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4975 "parser.tab.c"
    break;

  case 182:
#line 2547 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4988 "parser.tab.c"
    break;

  case 183:
#line 2555 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5002 "parser.tab.c"
    break;

  case 184:
#line 2567 "src/parser.y"
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
#line 5021 "parser.tab.c"
    break;

  case 185:
#line 2581 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 5037 "parser.tab.c"
    break;

  case 186:
#line 2592 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 5050 "parser.tab.c"
    break;

  case 187:
#line 2600 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 5063 "parser.tab.c"
    break;

  case 188:
#line 2611 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 5073 "parser.tab.c"
    break;

  case 189:
#line 2619 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 5082 "parser.tab.c"
    break;

  case 190:
#line 2623 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5096 "parser.tab.c"
    break;

  case 191:
#line 2632 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5111 "parser.tab.c"
    break;

  case 192:
#line 2646 "src/parser.y"
                   {
		cout<<"ExpressionList: Expression\n";
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		// cout<<
		(yyval.nt) = curr;
	}
#line 5126 "parser.tab.c"
    break;

  case 193:
#line 2656 "src/parser.y"
                                          {
		(yyval.nt) = new Node("ExpressionList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;

	}
#line 5141 "parser.tab.c"
    break;

  case 194:
#line 2674 "src/parser.y"
                      {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 5153 "parser.tab.c"
    break;

  case 195:
#line 2700 "src/parser.y"
                {
		(yyval.nt) = new Node("TypeSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 5164 "parser.tab.c"
    break;

  case 196:
#line 2709 "src/parser.y"
                        {
		(yyval.nt) =  new Node("TypeDef");
		(yyval.nt)->add_terminal_children((yyvsp[-1].sval));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		tt->add_in_type_table(string((yyvsp[-1].sval)), (yyvsp[0].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("TypeDef");
	}
#line 5176 "parser.tab.c"
    break;

  case 197:
#line 2719 "src/parser.y"
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
#line 5194 "parser.tab.c"
    break;

  case 198:
#line 2735 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5209 "parser.tab.c"
    break;

  case 199:
#line 2746 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 5223 "parser.tab.c"
    break;

  case 200:
#line 2758 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 5234 "parser.tab.c"
    break;

  case 201:
#line 2764 "src/parser.y"
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
#line 5260 "parser.tab.c"
    break;

  case 202:
#line 2788 "src/parser.y"
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
#line 5286 "parser.tab.c"
    break;

  case 203:
#line 2809 "src/parser.y"
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
#line 5310 "parser.tab.c"
    break;

  case 204:
#line 2831 "src/parser.y"
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
#line 5329 "parser.tab.c"
    break;

  case 205:
#line 2848 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 5343 "parser.tab.c"
    break;

  case 206:
#line 2860 "src/parser.y"
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
#line 5385 "parser.tab.c"
    break;

  case 207:
#line 2901 "src/parser.y"
                 {
		cout<<"Literal:BasicLit\n";
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 5399 "parser.tab.c"
    break;

  case 208:
#line 2910 "src/parser.y"
                 {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5411 "parser.tab.c"
    break;

  case 209:
#line 2920 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 5423 "parser.tab.c"
    break;

  case 210:
#line 2927 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 5435 "parser.tab.c"
    break;

  case 211:
#line 2934 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 5447 "parser.tab.c"
    break;

  case 212:
#line 2941 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		cout<<"BasicLit:String ";
		 cout<<((yyval.nt)->current_type)<<"\n";
		 }
#line 5461 "parser.tab.c"
    break;

  case 213:
#line 2950 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5473 "parser.tab.c"
    break;

  case 214:
#line 2957 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5485 "parser.tab.c"
    break;

  case 215:
#line 2967 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 (yyval.nt) = curr;}
#line 5495 "parser.tab.c"
    break;

  case 216:
#line 2972 "src/parser.y"
                             {
			cout<<"INTERPRETED_STRING: "<<string((yyvsp[0].sval))<<endl;
			 Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 curr->current_type = new BasicType("string");
			 (yyval.nt) = curr;
		}
#line 5508 "parser.tab.c"
    break;


#line 5512 "parser.tab.c"

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
#line 2982 "src/parser.y"






int main (int argc, char **argv) {

	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	tt->add_in_type_table("void", new BasicType("void"));
    tt->add_in_type_table("int", new BasicType("int"));
    tt->add_in_type_table("bool", new BasicType("bool"));
    tt->add_in_type_table("byte", new BasicType("byte"));
    tt->add_in_type_table("float", new BasicType("float"));
    tt->add_in_type_table("string", new BasicType("string"));
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
