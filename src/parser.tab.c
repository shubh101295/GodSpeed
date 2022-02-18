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
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern int yyparse();
	extern FILE* yyin;
	void yyerror(const char* s) {
		fprintf(stderr,"%s\n",s);
	};

#line 83 "parser.tab.c"

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
#line 16 "src/parser.y"

	char* nt;
	char* sval;

#line 210 "parser.tab.c"

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
#define YYLAST   1348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

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
       0,    64,    64,    65,    66,    67,    71,    72,    73,    74,
      75,    76,    80,    81,    82,    83,    84,    85,    86,    90,
      91,    92,    93,    94,    95,    99,   103,   107,   108,   112,
     113,   114,   118,   119,   123,   124,   125,   129,   133,   134,
     138,   139,   140,   144,   148,   152,   153,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   172,
     173,   174,   178,   179,   183,   187,   188,   192,   196,   200,
     201,   202,   203,   204,   207,   211,   215,   216,   220,   224,
     228,   229,   230,   234,   235,   239,   240,   241,   245,   246,
     247,   251,   252,   256,   257,   258,   262,   266,   267,   270,
     271,   275,   276,   277,   281,   282,   286,   287,   288,   292,
     293,   297,   301,   305,   309,   310,   311,   312,   313,   314,
     318,   319,   323,   324,   325,   329,   330,   334,   335,   336,
     340,   344,   345,   349,   350,   354,   355,   359,   360,   364,
     365,   370,   371,   376,   377,   381,   385,   389,   390,   391,
     392,   393,   394,   395,   396,   400,   401,   404,   408,   409,
     413,   417,   418,   419,   420,   421,   422,   426,   427,   428,
     429,   433,   434,   438,   442,   447,   448,   449,   453,   457,
     458,   462,   463,   467,   468,   472,   473,   477,   478,   482,
     483,   487,   488,   489,   490,   491,   492,   493,   494,   498,
     502,   503,   508,   512,   516,   517,   518,   519,   520,   521,
     525,   526,   527,   528,   532,   536,   537,   538,   542,   543,
     547,   548,   552,   553,   557,   558,   562,   566,   570,   574,
     575,   579,   580,   584,   585,   590,   594,   598,   602,   603,
     607,   608,   609,   610,   611,   612,   616,   617,   621,   622,
     623,   627,   628,   629,   630
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
  "$accept", "SourceFile", "Rel_OP", "Mul_OP", "Unary_OP", "PackageClause",
  "PackageName", "ImportDeclList", "ImportDecl", "ImportSpecList",
  "ImportSpec", "ImportPath", "TopLevelDeclList", "TopLevelDecl", "Block",
  "Condition", "StatementList", "Statement", "Declaration", "FunctionDecl",
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
  "Add_OP", YY_NULLPTR
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

#define YYPACT_NINF (-340)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-137)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,    68,   202,   167,  -340,  -340,  -340,   437,    94,   337,
     106,   172,   216,   437,   204,    17,   248,  -340,  -340,  -340,
    -340,  -340,  -340,   178,  -340,   212,  -340,   206,   243,   163,
    -340,  -340,   163,  -340,  -340,  -340,   -30,  -340,  -340,    93,
     -28,  -340,   109,   208,   133,  -340,  -340,  -340,   275,    17,
    -340,   291,  -340,   182,  -340,   279,  -340,   125,   262,   158,
     212,  -340,   281,   327,  -340,  -340,  -340,   -14,   329,   290,
     302,   182,  1161,   530,   293,   308,   317,  -340,  -340,   353,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,   -10,   372,  1161,
     358,    81,   380,   182,  -340,  -340,  -340,  -340,  -340,   227,
     182,  -340,   481,  -340,  -340,  -340,  -340,  -340,   262,  -340,
     390,  -340,  -340,   402,  -340,    42,   182,  -340,  -340,  -340,
    -340,  -340,  -340,   363,   368,  -340,  -340,  -340,  -340,    62,
    -340,  1161,  -340,  1255,  -340,   370,  -340,   374,  -340,   395,
     398,   478,  -340,  -340,  -340,   260,  -340,   382,  -340,  -340,
    -340,   389,   182,   400,  -340,   403,  1161,  -340,   455,  -340,
     382,  1161,  -340,   457,  -340,  -340,  -340,  -340,  -340,   404,
     404,  1161,  1208,   581,   728,   404,  -340,   335,  -340,   349,
     459,  -340,  -340,   386,  -340,  -340,  -340,  -340,  -340,  -340,
     270,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
      12,   277,  -340,  -340,  -340,  -340,   142,   131,   462,   419,
     182,   182,   422,   260,   630,  -340,  1161,  -340,  1161,  1161,
    -340,  -340,  -340,  -340,  -340,  -340,  1161,  -340,  -340,  -340,
    -340,  1161,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  1255,
     777,   824,   239,  -340,  -340,  -340,  -340,  -340,  1161,  1280,
    -340,   182,  -340,   382,  -340,   382,  -340,  -340,  -340,  -340,
     382,   127,   468,   234,  1161,  -340,   262,  -340,   284,   262,
     477,   262,   237,   574,    31,   482,   241,  -340,  -340,   484,
    -340,   481,  1161,  -340,  -340,  -340,   438,  1161,   442,   163,
    -340,   488,  -340,   182,   444,   300,  -340,  -340,   441,   347,
    -340,   445,  -340,   450,   451,   458,   398,   478,   424,   342,
     260,  -340,   180,   871,   198,   182,  -340,  -340,  -340,  -340,
    -340,  1161,   500,  -340,  -340,   922,  -340,   969,  -340,   510,
    1161,  -340,  -340,    38,  -340,   467,  1016,    71,  -340,  -340,
     382,  -340,   382,  -340,  -340,  -340,  -340,  -340,  -340,  1161,
    -340,   679,  1065,  1161,  -340,   474,  -340,  -340,   229,  -340,
    1114,   475,   262,     3,  1161,  1208,   521,  -340,  1161,   382,
    -340,  -340,   481,    82,   479,  -340,   103,   304,  -340,  -340,
    -340,  -340,  -340,   473,  -340,  -340,  1161,  -340,   371,  -340,
     524,  -340,  -340,  -340,  -340,  -340,  1208,  -340,   415,  -340,
     194,   196,  -340,  -340,  1161,  1161,   486,  -340,  1161,     3,
    -340,  -340,  -340,   213,   489,  -340,  -340,   492,  -340,  -340,
    -340,  -340,  -340
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    26,    25,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    40,    41,    42,
      60,    61,    59,     0,    64,     0,   112,     0,     0,     0,
     246,   247,     0,    31,    36,    37,     0,   110,    80,     0,
       0,    88,     0,     0,     0,   221,   224,   225,     0,     5,
      28,     0,    39,     0,   101,     0,   104,     0,    63,    97,
       0,    30,     0,     0,    35,    34,    82,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,   126,   120,    85,
     121,   117,   119,   114,   116,   115,    90,     0,     0,     0,
      93,     0,     0,     0,   227,    27,    38,   108,   102,     0,
       0,   106,    74,    96,    62,    98,    99,   100,    65,    29,
       0,    33,    81,     0,    84,     0,     0,   236,   235,   240,
     241,   244,   245,     0,     0,    19,    20,    21,    22,    23,
      24,     0,   242,     0,   239,     0,   191,   123,   218,   178,
     180,   182,   184,   186,   188,   189,   192,    87,   122,   238,
     243,     0,     0,     0,   109,     0,     0,    89,     0,    92,
      95,     0,   220,     0,   223,   226,   103,   105,   107,   141,
     143,   139,    74,    74,    74,     0,   160,   125,    56,    74,
       0,    47,    48,     0,    49,    69,    70,    71,    72,    73,
       0,    50,    51,    52,    53,    54,   146,    55,    57,    58,
     218,     0,    66,    32,    83,   230,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   113,     0,   197,     0,     0,
       6,     7,     8,     9,    10,    11,     0,   251,   252,   254,
     253,     0,    18,    12,    17,    14,    13,    15,    16,     0,
       0,     0,     0,   193,   194,   195,   198,   196,     0,     0,
     130,     0,   111,    86,    91,    94,   222,    68,   142,   144,
     140,   125,     0,   218,     0,   167,     0,   173,     0,     0,
       0,     0,   218,     0,     0,     0,   218,   145,    43,     0,
      46,    74,     0,    76,    77,   248,     0,     0,     0,   234,
     229,     0,   231,     0,     0,     0,   124,   127,   138,     0,
     131,     0,   133,   137,     0,     0,   179,   181,   183,   185,
     187,   215,     0,     0,     0,     0,   202,   219,   118,   123,
     237,     0,   161,   175,   169,     0,   168,     0,   170,   248,
       0,   159,   147,     0,   156,     0,     0,     0,    45,    67,
      79,   250,    78,   249,   233,   232,   228,   213,   212,     0,
     128,     0,     0,     0,   199,     0,   216,   205,     0,   203,
       0,     0,     0,     0,     0,    74,     0,    44,     0,   158,
     151,   155,    74,     0,     0,   149,     0,     0,   129,   132,
     138,   134,   137,   200,   217,   204,     0,   206,     0,   214,
     162,   164,   163,   176,   174,   171,    74,   177,   157,   148,
       0,     0,   153,   211,     0,     0,     0,   207,     0,     0,
     172,   152,   150,     0,     0,   201,   208,     0,   166,   165,
     154,   210,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -340,  -340,  -340,  -195,  -340,  -340,    11,  -340,   538,  -340,
      89,   225,   539,   126,   -58,   231,   184,  -168,    70,  -340,
    -340,  -340,  -340,   294,  -169,  -340,  -340,  -340,  -340,  -340,
    -340,  -340,    99,  -340,  -340,    -6,   446,   499,  -340,     9,
    -340,   461,    25,  -340,  -340,  -340,    27,    52,   312,   -26,
    -128,  -340,  -340,   211,  -340,   219,  -340,  -340,  -340,  -340,
    -340,  -340,  -322,  -324,  -340,  -340,  -339,  -340,  -340,  -340,
     176,  -340,   -72,  -340,   345,   354,   348,   344,  -340,  -125,
    -340,   171,  -340,  -340,  -340,  -340,  -340,  -340,   -40,  -340,
    -340,   -29,  -340,  -340,  -340,  -340,  -340,   373,  -340,  -340,
    -340,  -340,  -340,    -7,  -340,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   226,   239,   133,     3,    76,    13,    14,    62,
      33,    34,    15,    16,   178,   266,   179,   180,   181,    18,
      25,    19,   182,   183,   184,   185,   186,   187,   188,   189,
      20,    67,    38,    21,    87,    41,   104,    58,   105,    59,
      55,    56,   190,    77,    27,   134,   135,   117,   136,   137,
     298,    81,   299,   300,   301,   302,   191,   192,   193,   194,
     195,   196,   333,   334,   335,   197,   198,   199,   269,   270,
     395,   271,   138,   139,   140,   141,   142,   143,   144,   145,
     217,   305,   243,   244,   245,   146,   246,   247,   201,    22,
      91,    45,    46,    47,    82,    83,   207,   208,    84,   118,
      85,   148,   149,   150,   287,   231
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   153,    35,   262,   267,   275,   286,   215,   213,   371,
     288,   279,     5,    80,    92,   376,    80,    26,    80,   172,
      32,    35,    35,   -75,   392,    35,    66,    80,    86,     8,
     200,    80,   147,    80,    88,    39,    42,    10,    37,    32,
      37,    11,   112,   283,   284,    80,   157,    12,    57,   160,
     103,   400,   371,   330,    37,    35,     1,   331,    37,   212,
     330,    39,   163,   102,   331,    42,    78,    80,   106,    78,
     419,    78,   -75,    32,    80,    69,   371,    17,   286,   413,
      78,   158,   288,    17,    78,    17,    78,    70,   332,   371,
      80,    79,    39,   330,    90,   370,    94,   331,    78,   205,
     263,   272,   276,    80,   330,    97,    69,   200,   331,   101,
      37,   107,    42,   339,   310,   265,   253,    63,    70,    17,
      78,   255,    69,    73,    57,   330,    80,    78,   375,   331,
      75,   260,    71,   273,    70,    68,     4,   162,    69,   399,
     206,    51,   303,    78,   304,   165,    69,    72,    71,    44,
      70,   110,   168,    23,    73,    69,    78,    74,    70,   100,
     402,    75,    24,    89,    71,    36,   113,    70,   209,   314,
      73,    69,    71,    74,    37,    51,   317,    75,     7,    78,
      80,    71,  -110,    70,    80,    80,    73,    93,   290,    74,
     -26,  -110,   323,    75,    73,    69,   394,    71,   268,    37,
     312,    75,     6,    73,   250,   322,    74,    70,   324,   200,
      75,   326,    53,   328,   355,    50,   330,    23,   330,    73,
     331,    71,   331,   319,   380,    80,    75,   394,    30,    31,
     279,    40,   206,    78,    54,   330,   356,    78,    78,   331,
      37,   358,   340,    73,   248,   -75,    37,   342,   -75,   362,
      75,   411,   -75,   412,    64,   367,   359,    65,   289,    52,
     360,    53,   294,   295,   374,   283,   284,    80,   283,   284,
     420,    23,   283,   284,    60,    43,    44,   377,    78,   303,
     382,   383,   344,   166,    44,   340,    95,   385,   388,    80,
     369,   386,   393,   200,   102,    37,   397,   -44,   315,    61,
     200,   337,    96,   320,   390,   391,    29,   316,    30,    31,
     232,     4,   227,   228,   406,   229,   233,   234,   230,   240,
      78,   241,   102,   242,   200,   282,   200,   235,   236,   237,
     238,   285,   414,   304,    74,    98,   417,   109,   111,   325,
     114,   248,    78,    99,    29,   346,    30,    31,    74,     4,
     115,   418,   119,   120,   121,   122,   348,   169,   170,   171,
     403,   154,    69,   116,   349,   172,   173,   361,   404,    10,
     174,   -26,   123,    11,    70,   232,   124,   175,   176,    12,
     155,   233,   234,   159,   125,   126,   127,   128,   129,   130,
    -110,   164,   235,   236,   237,   238,    28,   -68,   -26,  -110,
      29,   203,    30,    31,   350,     4,   278,   156,   131,   102,
      73,   351,   161,   204,    30,    31,   132,   177,   119,   120,
     121,   122,   210,   169,   170,   171,   -74,   211,    69,   407,
     214,   172,   173,   408,   216,    10,   174,   218,   123,    11,
      70,   219,   124,   175,   176,    12,   248,   249,   281,     8,
     125,   126,   127,   128,   129,   130,     9,    10,   251,   227,
     228,    11,   229,   258,   259,   230,   254,    12,   256,   277,
     280,   252,   257,   292,   131,   102,    73,   293,   296,   321,
      30,    31,   132,   177,   119,   120,   121,   122,   327,   169,
     170,   171,   341,   336,    69,   338,   343,   172,   173,   345,
     347,    10,   174,  -136,   123,    11,    70,   352,   124,   175,
     176,    12,  -135,   353,   363,   354,   125,   126,   127,   128,
     129,   130,   220,   221,   222,   223,   224,   225,   368,   372,
     384,   389,   396,   119,   120,   121,   122,   405,   409,   401,
     131,   102,    73,    69,   416,   421,    30,    31,   132,   177,
     422,    48,    49,   123,   202,    70,   398,   124,   366,   108,
     167,   318,   379,   306,   151,   125,   126,   127,   128,   129,
     130,   381,   410,   307,   308,   309,   415,     0,     0,     0,
     291,     0,     0,     0,   119,   120,   121,   122,   152,   131,
       0,    73,     0,     0,    69,    30,    31,   132,    75,   264,
       0,     0,     0,     0,   123,     0,    70,   232,   124,   227,
     228,     0,   229,   233,   234,   230,   125,   126,   127,   128,
     129,   130,     0,     0,   235,   236,   237,   238,   329,     0,
       0,     0,     0,   119,   120,   121,   122,     0,   248,     0,
     131,   102,    73,    69,     0,     0,    30,    31,   132,   261,
       0,     0,     0,   123,     0,    70,     0,   124,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,   297,     0,   131,
     214,    73,    69,     0,     0,    30,    31,   132,    75,     0,
       0,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,   378,     0,   131,   214,
      73,    69,     0,     0,    30,    31,   132,    75,     0,     0,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,     0,     0,     0,   131,   274,    73,
      69,     0,     0,    30,    31,   132,   261,     0,     0,     0,
     123,     0,    70,     0,   124,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,   311,     0,     0,   131,    69,    73,     0,
       0,     0,    30,    31,   132,    75,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,     0,     0,   131,    69,    73,   313,     0,     0,    30,
      31,   132,    75,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,   357,
     131,     0,    73,     0,     0,    69,    30,    31,   132,    75,
     364,     0,     0,     0,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,     0,     0,     0,
     365,   131,    69,    73,     0,     0,     0,    30,    31,   132,
      75,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,     0,     0,     0,     0,     0,   131,    69,
      73,     0,     0,     0,    30,    31,   132,    75,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,   131,   373,    73,    69,     0,
       0,    30,    31,   132,    75,     0,     0,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,   131,   214,    73,    69,     0,     0,
      30,    31,   132,    75,     0,     0,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,     0,   387,   131,    69,    73,     0,     0,     0,    30,
      31,   132,    75,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,     0,     0,     0,     0,
     131,    69,    73,     0,     0,     0,    30,    31,   132,    75,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,     0,     0,   131,    69,    73,
       0,     0,     0,    30,    31,   132,   261,     0,   123,     0,
      70,     0,   124,   119,   120,   121,   122,     0,     0,     0,
       0,     0,     0,    69,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,    73,     0,     0,    71,
      30,    31,   132,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,    73,     0,     0,     0,    30,    31,   132,    75
};

static const yytype_int16 yycheck[] =
{
      58,    73,     9,   172,   173,   174,   201,   135,   133,   333,
     201,   179,     1,    39,    43,   337,    42,     8,    44,    16,
       9,    28,    29,    11,   363,    32,    56,    53,    56,    12,
     102,    57,    72,    59,    40,    10,    11,    20,    68,    28,
      68,    24,    56,    31,    32,    71,    56,    30,    23,    89,
     108,   373,   376,    22,    68,    62,    15,    26,    68,   131,
      22,    36,    91,    60,    26,    40,    39,    93,    59,    42,
     409,    44,    60,    62,   100,    13,   400,     7,   273,   401,
      53,    87,   273,    13,    57,    15,    59,    25,    57,   413,
     116,    39,    67,    22,    42,    57,    44,    26,    71,    57,
     172,   173,   174,   129,    22,    53,    13,   179,    26,    57,
      68,    59,    87,   281,   239,   173,   156,    28,    25,    49,
      93,   161,    13,    61,    99,    22,   152,   100,    57,    26,
      68,   171,    39,   173,    25,    36,    68,    56,    13,    57,
     115,    15,   214,   116,   216,    93,    13,    54,    39,    68,
      25,    62,   100,    59,    61,    13,   129,    64,    25,    34,
      57,    68,    68,    54,    39,    59,    67,    25,   116,   241,
      61,    13,    39,    64,    68,    49,   248,    68,    11,   152,
     206,    39,    55,    25,   210,   211,    61,    54,    57,    64,
      63,    64,   264,    68,    61,    13,   365,    39,   173,    68,
     240,    68,     0,    61,   152,   263,    64,    25,   266,   281,
      68,   269,    34,   271,    34,    11,    22,    59,    22,    61,
      26,    39,    26,   249,   352,   251,    68,   396,    65,    66,
     398,    59,   207,   206,    56,    22,    56,   210,   211,    26,
      68,   313,   282,    61,    64,    11,    68,   287,    11,   321,
      68,    57,    11,    57,    29,   327,    58,    32,   206,    11,
      62,    34,   210,   211,   336,    31,    32,   293,    31,    32,
      57,    59,    31,    32,    68,    59,    68,   349,   251,   351,
     352,   353,   289,    56,    68,   325,    11,    58,   360,   315,
     330,    62,   364,   365,    60,    68,   368,    60,    59,    56,
     372,    60,    11,   251,   362,   363,    63,    68,    65,    66,
      33,    68,    35,    36,   386,    38,    39,    40,    41,    59,
     293,    61,    60,    63,   396,    55,   398,    50,    51,    52,
      53,    54,   404,   405,    64,    56,   408,    56,    11,    55,
      11,    64,   315,    64,    63,   293,    65,    66,    64,    68,
      60,   409,     3,     4,     5,     6,    56,     8,     9,    10,
      56,    68,    13,    61,    64,    16,    17,   315,    64,    20,
      21,    63,    23,    24,    25,    33,    27,    28,    29,    30,
      63,    39,    40,    11,    35,    36,    37,    38,    39,    40,
      55,    11,    50,    51,    52,    53,    59,    62,    63,    64,
      63,    11,    65,    66,    57,    68,    57,    54,    59,    60,
      61,    64,    54,    11,    65,    66,    67,    68,     3,     4,
       5,     6,    59,     8,     9,    10,    11,    59,    13,    58,
      60,    16,    17,    62,    60,    20,    21,    42,    23,    24,
      25,    43,    27,    28,    29,    30,    64,    58,    62,    12,
      35,    36,    37,    38,    39,    40,    19,    20,    58,    35,
      36,    24,    38,   169,   170,    41,    11,    30,    11,   175,
      11,    68,    68,    11,    59,    60,    61,    58,    56,    11,
      65,    66,    67,    68,     3,     4,     5,     6,    11,     8,
       9,    10,    54,    11,    13,    11,    54,    16,    17,    11,
      56,    20,    21,    62,    23,    24,    25,    62,    27,    28,
      29,    30,    62,    62,    14,    57,    35,    36,    37,    38,
      39,    40,    44,    45,    46,    47,    48,    49,    18,    62,
      56,    56,    11,     3,     4,     5,     6,    64,    14,    60,
      59,    60,    61,    13,    58,    56,    65,    66,    67,    68,
      58,    13,    13,    23,   108,    25,   372,    27,   327,    60,
      99,   249,   351,   218,    34,    35,    36,    37,    38,    39,
      40,   352,   396,   219,   226,   231,   405,    -1,    -1,    -1,
     207,    -1,    -1,    -1,     3,     4,     5,     6,    58,    59,
      -1,    61,    -1,    -1,    13,    65,    66,    67,    68,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    33,    27,    35,
      36,    -1,    38,    39,    40,    41,    35,    36,    37,    38,
      39,    40,    -1,    -1,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    64,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    57,    -1,    59,
      60,    61,    13,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    57,    -1,    59,    60,
      61,    13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    56,    -1,    -1,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    59,    13,    61,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    58,
      59,    -1,    61,    -1,    -1,    13,    65,    66,    67,    68,
      18,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      11,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    58,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    39,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    75,    68,    76,     0,    11,    12,    19,
      20,    24,    30,    77,    78,    82,    83,    88,    89,    91,
     100,   103,   159,    59,    68,    90,   109,   114,    59,    63,
      65,    66,    76,    80,    81,   173,    59,    68,   102,   112,
      59,   105,   112,    59,    68,   161,   162,   163,    78,    82,
      11,    83,    11,    34,    56,   110,   111,   112,   107,   109,
      68,    56,    79,    80,    81,    81,    56,   101,   102,    13,
      25,    39,    54,    61,    64,    68,    76,   113,   116,   117,
     119,   121,   164,   165,   168,   170,    56,   104,   105,    54,
     117,   160,   161,    54,   117,    11,    11,   117,    56,    64,
      34,   117,    60,    84,   106,   108,   109,   117,   107,    56,
      80,    11,    56,   102,    11,    60,    61,   117,   169,     3,
       4,     5,     6,    23,    27,    35,    36,    37,    38,    39,
      40,    59,    67,    74,   115,   116,   118,   119,   142,   143,
     144,   145,   146,   147,   148,   149,   155,   158,   171,   172,
     173,    34,    58,   142,    68,    63,    54,    56,   105,    11,
     158,    54,    56,   161,    11,   117,    56,   111,   117,     8,
       9,    10,    16,    17,    21,    28,    29,    68,    84,    86,
      87,    88,    92,    93,    94,    95,    96,    97,    98,    99,
     112,   126,   127,   128,   129,   130,   131,   135,   136,   137,
     142,   158,   106,    11,    11,    57,   112,   166,   167,   117,
      59,    59,   142,   149,    60,   120,    60,   150,    42,    43,
      44,    45,    46,    47,    48,    49,    72,    35,    36,    38,
      41,   175,    33,    39,    40,    50,    51,    52,    53,    73,
      59,    61,    63,   152,   153,   154,   156,   157,    64,    58,
     117,    58,    68,   158,    11,   158,    11,    68,    93,    93,
     158,    68,    94,   142,    18,    84,    85,    94,   112,   138,
     139,   141,   142,   158,    60,    94,   142,    93,    57,    87,
      11,    62,    55,    31,    32,    54,    73,   174,   175,   117,
      57,   167,    11,    58,   117,   117,    56,    57,   120,   122,
     123,   124,   125,   142,   142,   151,   144,   145,   146,   147,
     149,    56,   158,    62,   142,    59,    68,   142,   118,   119,
     117,    11,    84,   142,    84,    55,    84,    11,    84,    54,
      22,    26,    57,   132,   133,   134,    11,    60,    11,    87,
     158,    54,   158,    54,   173,    11,   117,    56,    56,    64,
      57,    64,    62,    62,    57,    34,    56,    58,   142,    58,
      62,   117,   142,    14,    18,    11,    85,   142,    18,   158,
      57,   133,    62,    60,   142,    57,   132,   142,    57,   123,
     120,   125,   142,   142,    56,    58,    62,    58,   142,    56,
      84,    84,   136,   142,    94,   140,    11,   142,    86,    57,
     132,    60,    57,    56,    64,    64,   142,    58,    62,    14,
     140,    57,    57,   132,   142,   151,    58,   142,    84,   136,
      57,    56,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    76,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    80,    81,    82,    82,
      83,    83,    83,    84,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    90,    91,    91,    92,    93,    94,
      94,    94,    94,    94,    95,    96,    97,    97,    98,    99,
     100,   100,   100,   101,   101,   102,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   105,   106,   107,   107,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   111,   112,
     112,   113,   114,   115,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   120,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   134,   134,
     135,   136,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   138,   138,   139,   140,   141,   141,   141,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   150,
     151,   151,   152,   153,   154,   154,   154,   154,   154,   154,
     155,   155,   155,   155,   156,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   163,   164,   165,
     165,   166,   166,   167,   167,   168,   169,   170,   171,   171,
     172,   172,   172,   172,   172,   172,   173,   173,   174,   174,
     174,   175,   175,   175,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     3,     2,
       1,     1,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     4,     5,     3,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     3,     3,
       2,     4,     3,     3,     2,     2,     4,     3,     2,     4,
       3,     3,     2,     2,     4,     3,     1,     1,     2,     1,
       1,     2,     3,     4,     1,     3,     2,     3,     2,     3,
       1,     3,     1,     2,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     3,     4,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     1,     3,     5,     4,
       6,     4,     6,     5,     7,     2,     1,     3,     2,     1,
       1,     3,     5,     5,     5,     7,     7,     2,     3,     3,
       3,     4,     5,     1,     1,     2,     4,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     3,
       3,     5,     2,     3,     4,     3,     4,     5,     6,     7,
       8,     6,     4,     4,     4,     2,     3,     4,     1,     3,
       4,     2,     3,     2,     1,     1,     3,     2,     5,     4,
       3,     2,     3,     3,     2,     2,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1
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
#line 64 "src/parser.y"
                             {cout<<"PackageClause SCOLON\n";}
#line 1905 "parser.tab.c"
    break;

  case 3:
#line 65 "src/parser.y"
                                          {cout<<"PackageClause SCOLON ImportDeclList\n";}
#line 1911 "parser.tab.c"
    break;

  case 4:
#line 66 "src/parser.y"
                                                {cout<<"PackageClause SCOLON TopLevelDeclList\n";}
#line 1917 "parser.tab.c"
    break;

  case 5:
#line 67 "src/parser.y"
                                                               {cout<<"PackageClause SCOLON ImportDeclList TopLevelDeclList\n";}
#line 1923 "parser.tab.c"
    break;

  case 6:
#line 71 "src/parser.y"
             {;}
#line 1929 "parser.tab.c"
    break;

  case 7:
#line 72 "src/parser.y"
              {;}
#line 1935 "parser.tab.c"
    break;

  case 8:
#line 73 "src/parser.y"
                 {;}
#line 1941 "parser.tab.c"
    break;

  case 9:
#line 74 "src/parser.y"
                {;}
#line 1947 "parser.tab.c"
    break;

  case 10:
#line 75 "src/parser.y"
              {;}
#line 1953 "parser.tab.c"
    break;

  case 11:
#line 76 "src/parser.y"
               {;}
#line 1959 "parser.tab.c"
    break;

  case 12:
#line 80 "src/parser.y"
            {;}
#line 1965 "parser.tab.c"
    break;

  case 13:
#line 81 "src/parser.y"
              {;}
#line 1971 "parser.tab.c"
    break;

  case 14:
#line 82 "src/parser.y"
              {;}
#line 1977 "parser.tab.c"
    break;

  case 15:
#line 83 "src/parser.y"
              {;}
#line 1983 "parser.tab.c"
    break;

  case 16:
#line 84 "src/parser.y"
              {;}
#line 1989 "parser.tab.c"
    break;

  case 17:
#line 85 "src/parser.y"
              {;}
#line 1995 "parser.tab.c"
    break;

  case 18:
#line 86 "src/parser.y"
                 {;}
#line 2001 "parser.tab.c"
    break;

  case 19:
#line 90 "src/parser.y"
             {;}
#line 2007 "parser.tab.c"
    break;

  case 20:
#line 91 "src/parser.y"
              {;}
#line 2013 "parser.tab.c"
    break;

  case 21:
#line 92 "src/parser.y"
              {;}
#line 2019 "parser.tab.c"
    break;

  case 22:
#line 93 "src/parser.y"
              {;}
#line 2025 "parser.tab.c"
    break;

  case 23:
#line 94 "src/parser.y"
              {;}
#line 2031 "parser.tab.c"
    break;

  case 24:
#line 95 "src/parser.y"
              {;}
#line 2037 "parser.tab.c"
    break;

  case 25:
#line 99 "src/parser.y"
                            {cout<<"PackageClause\n";}
#line 2043 "parser.tab.c"
    break;

  case 26:
#line 103 "src/parser.y"
                   {;}
#line 2049 "parser.tab.c"
    break;

  case 27:
#line 107 "src/parser.y"
                                         {cout<<"ImportDeclList ImportDecl SCOLON\n";}
#line 2055 "parser.tab.c"
    break;

  case 28:
#line 108 "src/parser.y"
                            {cout<<"ImportDecl SCOLON\n";}
#line 2061 "parser.tab.c"
    break;

  case 29:
#line 112 "src/parser.y"
                                                   {;}
#line 2067 "parser.tab.c"
    break;

  case 30:
#line 113 "src/parser.y"
                                      {;}
#line 2073 "parser.tab.c"
    break;

  case 31:
#line 114 "src/parser.y"
                            {;}
#line 2079 "parser.tab.c"
    break;

  case 32:
#line 118 "src/parser.y"
                                         {;}
#line 2085 "parser.tab.c"
    break;

  case 33:
#line 119 "src/parser.y"
                            {;}
#line 2091 "parser.tab.c"
    break;

  case 34:
#line 123 "src/parser.y"
                               {;}
#line 2097 "parser.tab.c"
    break;

  case 35:
#line 124 "src/parser.y"
                         {;}
#line 2103 "parser.tab.c"
    break;

  case 36:
#line 125 "src/parser.y"
                     {;}
#line 2109 "parser.tab.c"
    break;

  case 38:
#line 133 "src/parser.y"
                                              { cout<<"TopLevelDeclList TopLevelDecl SCOLON\n";}
#line 2115 "parser.tab.c"
    break;

  case 39:
#line 134 "src/parser.y"
                              { cout<<"TopLevelDecl SCOLON\n";}
#line 2121 "parser.tab.c"
    break;

  case 43:
#line 144 "src/parser.y"
                                       {;}
#line 2127 "parser.tab.c"
    break;

  case 45:
#line 152 "src/parser.y"
                                       {cout<<"StatementList Statement SCOLON\n";}
#line 2133 "parser.tab.c"
    break;

  case 46:
#line 153 "src/parser.y"
                           {cout<<"Statement SCOLON\n";}
#line 2139 "parser.tab.c"
    break;

  case 62:
#line 178 "src/parser.y"
                                                 {;}
#line 2145 "parser.tab.c"
    break;

  case 63:
#line 179 "src/parser.y"
                                       {;}
#line 2151 "parser.tab.c"
    break;

  case 64:
#line 183 "src/parser.y"
                   {;}
#line 2157 "parser.tab.c"
    break;

  case 65:
#line 187 "src/parser.y"
                                           {;}
#line 2163 "parser.tab.c"
    break;

  case 66:
#line 188 "src/parser.y"
                                                          {;}
#line 2169 "parser.tab.c"
    break;

  case 68:
#line 196 "src/parser.y"
                  {;}
#line 2175 "parser.tab.c"
    break;

  case 74:
#line 207 "src/parser.y"
          {;}
#line 2181 "parser.tab.c"
    break;

  case 80:
#line 228 "src/parser.y"
                    {;}
#line 2187 "parser.tab.c"
    break;

  case 81:
#line 229 "src/parser.y"
                                               {;}
#line 2193 "parser.tab.c"
    break;

  case 82:
#line 230 "src/parser.y"
                                   {;}
#line 2199 "parser.tab.c"
    break;

  case 88:
#line 245 "src/parser.y"
                        {;}
#line 2205 "parser.tab.c"
    break;

  case 89:
#line 246 "src/parser.y"
                                                   {;}
#line 2211 "parser.tab.c"
    break;

  case 90:
#line 247 "src/parser.y"
                                     {;}
#line 2217 "parser.tab.c"
    break;

  case 97:
#line 266 "src/parser.y"
                   {cout<<"Parameters\n";}
#line 2223 "parser.tab.c"
    break;

  case 99:
#line 270 "src/parser.y"
                   {;}
#line 2229 "parser.tab.c"
    break;

  case 100:
#line 271 "src/parser.y"
               {;}
#line 2235 "parser.tab.c"
    break;

  case 101:
#line 275 "src/parser.y"
                             {cout<<"LEFTPARAN RIGHTPARAN\n";}
#line 2241 "parser.tab.c"
    break;

  case 102:
#line 276 "src/parser.y"
                                             {;}
#line 2247 "parser.tab.c"
    break;

  case 103:
#line 277 "src/parser.y"
                                                   {;}
#line 2253 "parser.tab.c"
    break;

  case 106:
#line 286 "src/parser.y"
                            {;}
#line 2259 "parser.tab.c"
    break;

  case 107:
#line 287 "src/parser.y"
                                      {;}
#line 2265 "parser.tab.c"
    break;

  case 108:
#line 288 "src/parser.y"
                       {;}
#line 2271 "parser.tab.c"
    break;

  case 109:
#line 292 "src/parser.y"
                                        {;}
#line 2277 "parser.tab.c"
    break;

  case 110:
#line 293 "src/parser.y"
                     {;}
#line 2283 "parser.tab.c"
    break;

  case 111:
#line 297 "src/parser.y"
                                   {cout<<"QualifiedIdent "<<(yyvsp[-2].nt)<<" "<<(yyvsp[-1].sval)<<" "<<(yyvsp[0].sval)<<"\n";}
#line 2289 "parser.tab.c"
    break;

  case 118:
#line 313 "src/parser.y"
                                                 {;}
#line 2295 "parser.tab.c"
    break;

  case 124:
#line 325 "src/parser.y"
                                          {;}
#line 2301 "parser.tab.c"
    break;

  case 125:
#line 329 "src/parser.y"
                   {;}
#line 2307 "parser.tab.c"
    break;

  case 126:
#line 330 "src/parser.y"
                         {cout<<"OperandName:QualifiedIdent "<<(yyvsp[0].nt)<<"\n";}
#line 2313 "parser.tab.c"
    break;

  case 127:
#line 334 "src/parser.y"
                             {;}
#line 2319 "parser.tab.c"
    break;

  case 128:
#line 335 "src/parser.y"
                                           {;}
#line 2325 "parser.tab.c"
    break;

  case 129:
#line 336 "src/parser.y"
                                                 {;}
#line 2331 "parser.tab.c"
    break;

  case 130:
#line 340 "src/parser.y"
                                    {;}
#line 2337 "parser.tab.c"
    break;

  case 139:
#line 364 "src/parser.y"
               {;}
#line 2343 "parser.tab.c"
    break;

  case 140:
#line 365 "src/parser.y"
                                {;}
#line 2349 "parser.tab.c"
    break;

  case 141:
#line 370 "src/parser.y"
              {;}
#line 2355 "parser.tab.c"
    break;

  case 142:
#line 371 "src/parser.y"
                      {;}
#line 2361 "parser.tab.c"
    break;

  case 143:
#line 376 "src/parser.y"
                 {;}
#line 2367 "parser.tab.c"
    break;

  case 144:
#line 377 "src/parser.y"
                         {;}
#line 2373 "parser.tab.c"
    break;

  case 145:
#line 381 "src/parser.y"
                   {;}
#line 2379 "parser.tab.c"
    break;

  case 147:
#line 389 "src/parser.y"
                                    {;}
#line 2385 "parser.tab.c"
    break;

  case 148:
#line 390 "src/parser.y"
                                                        {;}
#line 2391 "parser.tab.c"
    break;

  case 149:
#line 391 "src/parser.y"
                                                 { cout<<"SWITCH Expression LEFTBRACE RIGHTBRACE\n";}
#line 2397 "parser.tab.c"
    break;

  case 150:
#line 392 "src/parser.y"
                                                                   {;}
#line 2403 "parser.tab.c"
    break;

  case 151:
#line 393 "src/parser.y"
                                                        {;}
#line 2409 "parser.tab.c"
    break;

  case 152:
#line 394 "src/parser.y"
                                                                          {;}
#line 2415 "parser.tab.c"
    break;

  case 153:
#line 395 "src/parser.y"
                                                                    {;}
#line 2421 "parser.tab.c"
    break;

  case 154:
#line 396 "src/parser.y"
                                                                                      {;}
#line 2427 "parser.tab.c"
    break;

  case 155:
#line 400 "src/parser.y"
                                          {;}
#line 2433 "parser.tab.c"
    break;

  case 156:
#line 401 "src/parser.y"
                         {;}
#line 2439 "parser.tab.c"
    break;

  case 157:
#line 404 "src/parser.y"
                                           {;}
#line 2445 "parser.tab.c"
    break;

  case 158:
#line 408 "src/parser.y"
                            {;}
#line 2451 "parser.tab.c"
    break;

  case 159:
#line 409 "src/parser.y"
                  {;}
#line 2457 "parser.tab.c"
    break;

  case 160:
#line 413 "src/parser.y"
                    {;}
#line 2463 "parser.tab.c"
    break;

  case 161:
#line 417 "src/parser.y"
                            {;}
#line 2469 "parser.tab.c"
    break;

  case 162:
#line 418 "src/parser.y"
                                               {;}
#line 2475 "parser.tab.c"
    break;

  case 163:
#line 419 "src/parser.y"
                                         {;}
#line 2481 "parser.tab.c"
    break;

  case 164:
#line 420 "src/parser.y"
                                        {;}
#line 2487 "parser.tab.c"
    break;

  case 165:
#line 421 "src/parser.y"
                                                           {;}
#line 2493 "parser.tab.c"
    break;

  case 166:
#line 422 "src/parser.y"
                                                          {;}
#line 2499 "parser.tab.c"
    break;

  case 167:
#line 426 "src/parser.y"
                  {;}
#line 2505 "parser.tab.c"
    break;

  case 168:
#line 427 "src/parser.y"
                              {;}
#line 2511 "parser.tab.c"
    break;

  case 169:
#line 428 "src/parser.y"
                              {;}
#line 2517 "parser.tab.c"
    break;

  case 170:
#line 429 "src/parser.y"
                                {;}
#line 2523 "parser.tab.c"
    break;

  case 175:
#line 447 "src/parser.y"
                         {;}
#line 2529 "parser.tab.c"
    break;

  case 178:
#line 453 "src/parser.y"
                     {;}
#line 2535 "parser.tab.c"
    break;

  case 179:
#line 457 "src/parser.y"
                                                     {;}
#line 2541 "parser.tab.c"
    break;

  case 181:
#line 462 "src/parser.y"
                                                        {;}
#line 2547 "parser.tab.c"
    break;

  case 185:
#line 472 "src/parser.y"
                                                     {cout<<"ExpressionADD Add_OP ExpressionMUL %prec ADD";}
#line 2553 "parser.tab.c"
    break;

  case 199:
#line 498 "src/parser.y"
                                          {;}
#line 2559 "parser.tab.c"
    break;

  case 202:
#line 508 "src/parser.y"
                       {;}
#line 2565 "parser.tab.c"
    break;

  case 203:
#line 512 "src/parser.y"
                                          {;}
#line 2571 "parser.tab.c"
    break;

  case 204:
#line 516 "src/parser.y"
                                                 {;}
#line 2577 "parser.tab.c"
    break;

  case 205:
#line 517 "src/parser.y"
                                        {;}
#line 2583 "parser.tab.c"
    break;

  case 206:
#line 518 "src/parser.y"
                                                    {;}
#line 2589 "parser.tab.c"
    break;

  case 207:
#line 519 "src/parser.y"
                                                              {;}
#line 2595 "parser.tab.c"
    break;

  case 208:
#line 520 "src/parser.y"
                                                                    {;}
#line 2601 "parser.tab.c"
    break;

  case 209:
#line 521 "src/parser.y"
                                                                               {;}
#line 2607 "parser.tab.c"
    break;

  case 210:
#line 525 "src/parser.y"
                                                                         {;}
#line 2613 "parser.tab.c"
    break;

  case 211:
#line 526 "src/parser.y"
                                                          {;}
#line 2619 "parser.tab.c"
    break;

  case 212:
#line 527 "src/parser.y"
                                         {;}
#line 2625 "parser.tab.c"
    break;

  case 213:
#line 528 "src/parser.y"
                                        {;}
#line 2631 "parser.tab.c"
    break;

  case 214:
#line 532 "src/parser.y"
                                      {;}
#line 2637 "parser.tab.c"
    break;

  case 215:
#line 536 "src/parser.y"
                             {;}
#line 2643 "parser.tab.c"
    break;

  case 216:
#line 537 "src/parser.y"
                                              {cout<<"LEFTPARAN ExpressionList RIGHTPARAN\n";}
#line 2649 "parser.tab.c"
    break;

  case 217:
#line 538 "src/parser.y"
                                                      {cout<<"LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN\n";}
#line 2655 "parser.tab.c"
    break;

  case 218:
#line 542 "src/parser.y"
                   {cout<<"Expression "<<(yyvsp[0].nt)<<"\n";}
#line 2661 "parser.tab.c"
    break;

  case 219:
#line 543 "src/parser.y"
                                          {cout<<"ExpressionList COMMA Expression "<<(yyvsp[-2].nt)<<" "<<(yyvsp[-1].sval)<<" "<<(yyvsp[0].nt)<<"\n";}
#line 2667 "parser.tab.c"
    break;

  case 220:
#line 547 "src/parser.y"
                                               {;}
#line 2673 "parser.tab.c"
    break;

  case 221:
#line 548 "src/parser.y"
                        {;}
#line 2679 "parser.tab.c"
    break;

  case 226:
#line 562 "src/parser.y"
                           {;}
#line 2685 "parser.tab.c"
    break;

  case 227:
#line 566 "src/parser.y"
                        {;}
#line 2691 "parser.tab.c"
    break;

  case 228:
#line 570 "src/parser.y"
                                             {;}
#line 2697 "parser.tab.c"
    break;

  case 229:
#line 574 "src/parser.y"
                                                  {;}
#line 2703 "parser.tab.c"
    break;

  case 230:
#line 575 "src/parser.y"
                                      {;}
#line 2709 "parser.tab.c"
    break;

  case 231:
#line 579 "src/parser.y"
                         {;}
#line 2715 "parser.tab.c"
    break;

  case 232:
#line 580 "src/parser.y"
                                         {;}
#line 2721 "parser.tab.c"
    break;

  case 235:
#line 590 "src/parser.y"
                     {;}
#line 2727 "parser.tab.c"
    break;

  case 237:
#line 598 "src/parser.y"
                                               {;}
#line 2733 "parser.tab.c"
    break;

  case 240:
#line 607 "src/parser.y"
                    {;}
#line 2739 "parser.tab.c"
    break;

  case 241:
#line 608 "src/parser.y"
                    {;}
#line 2745 "parser.tab.c"
    break;

  case 242:
#line 609 "src/parser.y"
                    {;}
#line 2751 "parser.tab.c"
    break;

  case 244:
#line 611 "src/parser.y"
                    {;}
#line 2757 "parser.tab.c"
    break;

  case 245:
#line 612 "src/parser.y"
                    {;}
#line 2763 "parser.tab.c"
    break;

  case 246:
#line 616 "src/parser.y"
                   {;}
#line 2769 "parser.tab.c"
    break;

  case 247:
#line 617 "src/parser.y"
                             {cout<<"INTERPRETED_STRING "<<(yyvsp[0].sval)<<"\n";}
#line 2775 "parser.tab.c"
    break;

  case 248:
#line 621 "src/parser.y"
           {;}
#line 2781 "parser.tab.c"
    break;

  case 249:
#line 622 "src/parser.y"
                    {;}
#line 2787 "parser.tab.c"
    break;

  case 250:
#line 623 "src/parser.y"
                    {;}
#line 2793 "parser.tab.c"
    break;

  case 251:
#line 627 "src/parser.y"
            {cout<<"ADD\n";}
#line 2799 "parser.tab.c"
    break;

  case 252:
#line 628 "src/parser.y"
              {cout<<"SUB\n";}
#line 2805 "parser.tab.c"
    break;

  case 253:
#line 629 "src/parser.y"
             {cout<<"OR\n";}
#line 2811 "parser.tab.c"
    break;

  case 254:
#line 630 "src/parser.y"
              {;}
#line 2817 "parser.tab.c"
    break;


#line 2821 "parser.tab.c"

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
#line 632 "src/parser.y"




	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	
		
}









	


