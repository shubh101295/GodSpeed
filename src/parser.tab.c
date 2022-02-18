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
    IDENTIFIER = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "src/parser.y"

	char* nt;
	char* sval;

#line 209 "parser.tab.c"

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
#define YYLAST   1345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  256
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  433

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    75,    76,    77,    78,
      79,    80,    81,    85,    86,    87,    88,    89,    90,    94,
      98,   102,   103,   107,   108,   109,   113,   114,   118,   119,
     120,   124,   128,   129,   133,   134,   135,   139,   143,   147,
     148,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   167,   168,   169,   173,   174,   178,   182,
     183,   187,   191,   195,   196,   197,   198,   199,   202,   206,
     210,   211,   215,   219,   223,   224,   225,   229,   230,   234,
     235,   236,   240,   241,   242,   246,   247,   251,   252,   253,
     257,   261,   262,   265,   266,   270,   271,   272,   276,   277,
     281,   282,   283,   287,   288,   292,   296,   300,   304,   305,
     306,   307,   308,   309,   313,   314,   318,   319,   320,   324,
     325,   329,   330,   331,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   359,   360,   365,   366,   371,   372,   376,
     380,   384,   385,   386,   387,   388,   389,   390,   391,   395,
     396,   399,   403,   404,   408,   412,   413,   414,   415,   416,
     417,   421,   422,   423,   424,   428,   429,   433,   437,   442,
     443,   444,   448,   452,   453,   457,   458,   462,   463,   464,
     465,   466,   467,   469,   473,   474,   475,   476,   478,   482,
     483,   487,   488,   492,   493,   494,   495,   496,   497,   498,
     499,   503,   507,   508,   513,   517,   521,   522,   523,   524,
     525,   526,   530,   531,   532,   533,   537,   541,   542,   543,
     547,   548,   552,   553,   557,   558,   562,   563,   567,   571,
     575,   579,   580,   584,   585,   589,   590,   595,   599,   603,
     607,   608,   612,   613,   614,   615,   616,   617,   621,   622,
     626,   627,   628,   632,   633,   634,   635
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
  "SourceFile", "Mul_OP", "Unary_OP", "PackageClause", "PackageName",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF (-340)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-131)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -39,    78,    73,  -340,  -340,  -340,   299,   181,   267,
     198,   209,   220,   299,    86,   301,   141,  -340,  -340,  -340,
    -340,  -340,  -340,    65,  -340,    52,  -340,    45,    24,   215,
    -340,  -340,   215,  -340,  -340,  -340,    75,  -340,  -340,    93,
     100,  -340,   101,   128,   121,  -340,  -340,  -340,   190,   301,
    -340,   204,  -340,    18,  -340,    74,  -340,   233,   160,    49,
      52,  -340,   324,   214,  -340,  -340,  -340,   127,   225,   262,
     208,    18,  1158,   527,   207,   246,   265,  -340,  -340,   258,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,   142,   271,  1158,
     273,   170,   327,    18,  -340,  -340,  -340,  -340,  -340,   249,
      18,  -340,   478,  -340,  -340,  -340,  -340,  -340,   160,  -340,
     329,  -340,  -340,   347,  -340,   -45,    18,  -340,  -340,  -340,
    -340,  -340,  -340,   298,   306,  -340,  -340,  -340,  -340,   126,
    -340,  1158,  -340,  1252,  -340,   312,  -340,   318,  -340,   337,
     350,   417,  -340,  -340,  -340,   488,  -340,   330,  -340,  -340,
    -340,   344,    18,   351,  -340,   340,  1158,  -340,   399,  -340,
     330,  1158,  -340,   408,  -340,  -340,  -340,  -340,  -340,   356,
     356,  1158,  1205,   578,   725,   356,  -340,   333,  -340,   346,
     415,  -340,  -340,   365,  -340,  -340,  -340,  -340,  -340,  -340,
     289,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
      16,   571,  -340,  -340,  -340,  -340,   166,    91,   419,   373,
      18,    18,   378,   488,   627,  -340,  1158,  -340,  1158,  1158,
    1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,  1252,   774,   821,
     309,  -340,  -340,  -340,  -340,  -340,  1158,  1277,  -340,    18,
    -340,   330,  -340,   330,  -340,  -340,  -340,  -340,   330,   284,
     427,    62,  1158,  -340,   160,  -340,   336,   160,   442,   160,
     139,   718,   119,   445,   161,  -340,  -340,   446,  -340,   478,
    1158,  -340,  -340,  -340,  -340,  -340,  -340,  -340,   404,  1158,
     405,   215,  -340,   456,  -340,    18,   413,   102,  -340,  -340,
     406,   -15,  -340,   414,  -340,   423,   428,   418,   350,   417,
     363,   363,   363,   363,   363,   363,  -340,  -340,  -340,  -340,
     488,  -340,   199,   868,   194,    18,  -340,  -340,  -340,  -340,
    -340,  1158,   460,  -340,  -340,   919,  -340,   966,  -340,   452,
    1158,  -340,  -340,   162,  -340,   430,  1013,   182,  -340,  -340,
     330,  -340,   330,  -340,  -340,  -340,  -340,  -340,  -340,  1158,
    -340,   676,  1062,  1158,  -340,   433,  -340,  -340,   283,  -340,
    1111,   437,   160,    69,  1158,  1205,   485,  -340,  1158,   330,
    -340,  -340,   478,   191,   440,  -340,   219,   252,  -340,  -340,
    -340,  -340,  -340,   447,  -340,  -340,  1158,  -340,   302,  -340,
     483,  -340,  -340,  -340,  -340,  -340,  1205,  -340,   412,  -340,
     221,   228,  -340,  -340,  1158,  1158,   451,  -340,  1158,    69,
    -340,  -340,  -340,   238,   448,  -340,  -340,   454,  -340,  -340,
    -340,  -340,  -340
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,    20,    19,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    34,    35,    36,
      54,    55,    53,     0,    58,     0,   106,     0,     0,     0,
     248,   249,     0,    25,    30,    31,     0,   104,    74,     0,
       0,    82,     0,     0,     0,   223,   226,   227,     0,     5,
      22,     0,    33,     0,    95,     0,    98,     0,    57,    91,
       0,    24,     0,     0,    29,    28,    76,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,   120,   114,    79,
     115,   111,   113,   108,   110,   109,    84,     0,     0,     0,
      87,     0,     0,     0,   229,    21,    32,   102,    96,     0,
       0,   100,    68,    90,    56,    92,    93,    94,    59,    23,
       0,    27,    75,     0,    78,     0,     0,   238,   237,   242,
     243,   246,   247,     0,     0,    13,    14,    15,    16,    17,
      18,     0,   244,     0,   241,     0,   193,   117,   220,   172,
     174,   176,   183,   188,   190,   191,   194,    81,   116,   240,
     245,     0,     0,     0,   103,     0,     0,    83,     0,    86,
      89,     0,   222,     0,   225,   228,    97,    99,   101,   135,
     137,   133,    68,    68,    68,     0,   154,   119,    50,    68,
       0,    41,    42,     0,    43,    63,    64,    65,    66,    67,
       0,    44,    45,    46,    47,    48,   140,    49,    51,    52,
     220,     0,    60,    26,    77,   232,     0,     0,     0,     0,
       0,     0,     0,   192,     0,   107,     0,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     6,    11,     8,     7,     9,    10,     0,     0,     0,
       0,   195,   196,   197,   200,   198,     0,     0,   124,     0,
     105,    80,    85,    88,   224,    62,   136,   138,   134,   119,
       0,   220,     0,   161,     0,   167,     0,     0,     0,     0,
     220,     0,     0,     0,   220,   139,    37,     0,    40,    68,
       0,    70,    71,   253,   254,   256,   255,   250,     0,     0,
       0,   236,   231,     0,   233,     0,     0,     0,   118,   121,
     132,     0,   125,     0,   127,   131,     0,     0,   173,   175,
     177,   178,   179,   180,   181,   182,   184,   185,   187,   186,
     189,   217,     0,     0,     0,     0,   204,   221,   112,   117,
     239,     0,   155,   169,   163,     0,   162,     0,   164,   250,
       0,   153,   141,     0,   150,     0,     0,     0,    39,    61,
      73,   252,    72,   251,   235,   234,   230,   215,   214,     0,
     122,     0,     0,     0,   201,     0,   218,   207,     0,   205,
       0,     0,     0,     0,     0,    68,     0,    38,     0,   152,
     145,   149,    68,     0,     0,   143,     0,     0,   123,   126,
     132,   128,   131,   202,   219,   206,     0,   208,     0,   216,
     156,   158,   157,   170,   168,   165,    68,   171,   151,   142,
       0,     0,   147,   213,     0,     0,     0,   209,     0,     0,
     166,   146,   144,     0,     0,   203,   210,     0,   160,   159,
     148,   212,   211
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -340,  -340,  -194,  -340,  -340,    36,  -340,   497,  -340,   135,
     264,   506,     3,   -58,   189,   145,  -176,   222,  -340,  -340,
    -340,  -340,   285,  -133,  -340,  -340,  -340,  -340,  -340,  -340,
    -340,    -1,  -340,  -340,   -24,   420,   469,  -340,     2,  -340,
     435,   113,  -340,  -340,  -340,   -25,    12,   288,   -33,  -131,
    -340,  -340,   175,  -340,   179,  -340,  -340,  -340,  -340,  -340,
    -340,  -339,  -328,  -340,  -340,  -303,  -340,  -340,  -340,   136,
    -340,   -72,  -340,   335,   338,   300,   217,  -340,  -128,  -340,
     133,  -340,  -340,  -340,  -340,  -340,  -340,   -36,  -340,  -340,
     -10,  -340,  -340,  -340,  -340,  -340,   348,  -340,  -340,  -340,
    -340,  -340,    -7,  -340,  -340
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   237,   133,     3,    76,    13,    14,    62,    33,
      34,    15,    16,   178,   264,   179,   180,   181,    18,    25,
      19,   182,   183,   184,   185,   186,   187,   188,   189,    20,
      67,    38,    21,    87,    41,   104,    58,   105,    59,    55,
      56,   190,    77,    27,   134,   135,   117,   136,   137,   300,
      81,   301,   302,   303,   304,   191,   192,   193,   194,   195,
     196,   343,   344,   345,   197,   198,   199,   267,   268,   405,
     269,   138,   139,   140,   141,   142,   143,   144,   145,   217,
     307,   241,   242,   243,   146,   244,   245,   201,    22,    91,
      45,    46,    47,    82,    83,   207,   208,    84,   118,    85,
     148,   149,   150,   289,   290
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   153,    35,   277,   215,   213,    80,   288,   386,    80,
      26,    80,   205,     1,    78,   381,    88,    78,    51,    78,
      80,    35,    35,    37,    80,    35,    80,   -69,    78,     4,
     200,    69,    78,    92,    78,    68,   147,     5,    80,   260,
     265,   273,   360,    70,   410,    32,    78,   281,   282,   361,
     103,    79,    51,   160,    90,    35,    94,    71,   381,   212,
      80,   106,    69,   158,    32,    97,   113,    80,    78,   101,
     402,   107,   423,   -69,    70,    78,   -69,   288,     6,    73,
      61,   163,   381,    80,     7,   172,    75,    29,    71,    30,
      31,    78,     4,   281,   282,   381,    80,    50,    32,    53,
     261,   270,   274,   349,    78,   165,    69,   200,    23,   320,
      73,    23,   168,    60,    69,   263,   429,    75,    70,    80,
     251,    54,   102,    39,    42,   253,    70,    78,   209,   102,
      98,    66,    71,    37,    69,   258,    57,   271,    99,    69,
      71,   340,   305,    37,   306,   341,    70,    72,   292,    39,
     -69,    70,    52,    42,    73,    89,    86,    74,   358,    37,
      71,    75,    73,    63,   248,    74,   359,   324,    37,    75,
     281,   282,   -69,    80,   327,    93,   342,    80,    80,    69,
      39,    78,    73,   112,   340,    78,    78,    73,   341,    75,
     333,    70,   281,   282,    75,    37,    44,   110,   157,   -38,
      42,    95,   322,   332,   340,    71,   334,   200,   341,   336,
      37,   338,    57,   340,   329,    96,    80,   341,   291,   380,
     102,   347,   296,   297,    78,   111,   162,    73,   206,    17,
      74,   390,   277,   365,    75,    17,   114,    17,    44,   385,
      23,   340,   404,   340,   350,   341,    69,   341,   409,    24,
     340,   368,   369,   352,   341,   366,   370,    36,    70,   372,
     340,   330,    80,   246,   341,   377,    37,   100,    40,   116,
      78,    17,    71,   404,   384,   154,   412,    37,   421,    43,
      30,    31,   159,    53,   354,   422,   266,   387,    44,   305,
     392,   393,    80,    64,    73,   430,    65,    74,   398,   350,
      78,    75,   403,   200,   379,   166,   407,   356,   413,   -20,
     200,     8,   156,     8,   400,   401,   414,    37,     9,    10,
     206,    10,   115,    11,   416,    11,    28,   161,   155,    12,
      29,    12,    30,    31,   200,     4,   200,   371,   164,  -104,
     203,   395,   424,   306,   280,   396,   427,   -20,  -104,   119,
     120,   121,   122,    74,   169,   170,   171,   210,   204,    69,
     417,   428,   172,   173,   418,   211,    10,   174,   325,   123,
      11,    70,   214,   124,   175,   176,    12,   326,   216,   218,
     109,   125,   126,   127,   128,   129,   130,    29,  -104,    30,
      31,   335,     4,   219,   246,   -62,   -20,  -104,   226,   227,
      74,   228,   247,   276,   229,   131,   102,    73,   250,   249,
     252,    30,    31,   132,   177,   119,   120,   121,   122,   254,
     169,   170,   171,   -68,   255,    69,   278,   279,   172,   173,
     294,   295,    10,   174,   298,   123,    11,    70,   331,   124,
     175,   176,    12,   316,   317,   318,   319,   125,   126,   127,
     128,   129,   130,   337,   256,   257,   346,   348,   351,   353,
     275,   220,   221,   222,   223,   224,   225,   355,  -130,   357,
     378,   131,   102,    73,   373,   364,   362,    30,    31,   132,
     177,   119,   120,   121,   122,  -129,   169,   170,   171,   394,
     363,    69,   382,   399,   172,   173,   406,   419,    10,   174,
     411,   123,    11,    70,   431,   124,   175,   176,    12,   426,
      48,   415,   432,   125,   126,   127,   128,   129,   130,    49,
     310,   311,   312,   313,   314,   315,   376,   408,   202,   108,
     119,   120,   121,   122,   167,   328,   389,   131,   102,    73,
      69,   391,   420,    30,    31,   132,   177,   238,   425,   239,
     123,   240,    70,   308,   124,   293,     0,   309,     0,     0,
       0,   151,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   152,   131,     0,    73,     0,
       0,    69,    30,    31,   132,    75,   262,     0,     0,     0,
       0,   123,     0,    70,   230,   124,   283,   284,     0,   285,
     231,   232,   286,   125,   126,   127,   128,   129,   130,     0,
       0,   233,   234,   235,   236,   287,     0,     0,     0,     0,
     119,   120,   121,   122,     0,   246,     0,   131,   102,    73,
      69,     0,     0,    30,    31,   132,   259,     0,     0,     0,
     123,     0,    70,     0,   124,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,     0,   299,     0,   131,   214,    73,    69,
       0,     0,    30,    31,   132,    75,     0,     0,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,   388,     0,   131,   214,    73,    69,     0,
       0,    30,    31,   132,    75,     0,     0,     0,   123,     0,
      70,   230,   124,   283,   284,     0,   285,   231,   232,   286,
     125,   126,   127,   128,   129,   130,     0,     0,   233,   234,
     235,   236,   339,     0,     0,     0,     0,   119,   120,   121,
     122,     0,   246,     0,   131,   272,    73,    69,     0,     0,
      30,    31,   132,   259,     0,     0,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
     321,     0,     0,   131,    69,    73,     0,     0,     0,    30,
      31,   132,    75,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,     0,     0,     0,     0,
     131,    69,    73,   323,     0,     0,    30,    31,   132,    75,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,   367,   131,     0,    73,
       0,     0,    69,    30,    31,   132,    75,   374,     0,     0,
       0,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,     0,     0,     0,     0,   375,   131,    69,
      73,     0,     0,     0,    30,    31,   132,    75,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
       0,     0,     0,     0,     0,   131,    69,    73,     0,     0,
       0,    30,    31,   132,    75,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
       0,     0,   131,   383,    73,    69,     0,     0,    30,    31,
     132,    75,     0,     0,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,   131,   214,    73,    69,     0,     0,    30,    31,   132,
      75,     0,     0,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,     0,     0,     0,     0,   397,
     131,    69,    73,     0,     0,     0,    30,    31,   132,    75,
       0,   123,     0,    70,     0,   124,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,     0,     0,   131,    69,    73,
       0,     0,     0,    30,    31,   132,    75,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
       0,     0,     0,     0,   131,    69,    73,     0,     0,     0,
      30,    31,   132,   259,     0,   123,     0,    70,     0,   124,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
      69,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,   131,     0,    73,     0,     0,    71,    30,    31,   132,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,     0,    73,     0,
       0,     0,    30,    31,   132,    75
};

static const yytype_int16 yycheck[] =
{
      58,    73,     9,   179,   135,   133,    39,   201,   347,    42,
       8,    44,    57,    15,    39,   343,    40,    42,    15,    44,
      53,    28,    29,    68,    57,    32,    59,    11,    53,    68,
     102,    13,    57,    43,    59,    36,    72,     1,    71,   172,
     173,   174,    57,    25,   383,     9,    71,    31,    32,    64,
     108,    39,    49,    89,    42,    62,    44,    39,   386,   131,
      93,    59,    13,    87,    28,    53,    67,   100,    93,    57,
     373,    59,   411,    11,    25,   100,    60,   271,     0,    61,
      56,    91,   410,   116,    11,    16,    68,    63,    39,    65,
      66,   116,    68,    31,    32,   423,   129,    11,    62,    34,
     172,   173,   174,   279,   129,    93,    13,   179,    59,   237,
      61,    59,   100,    68,    13,   173,   419,    68,    25,   152,
     156,    56,    60,    10,    11,   161,    25,   152,   116,    60,
      56,    56,    39,    68,    13,   171,    23,   173,    64,    13,
      39,    22,   214,    68,   216,    26,    25,    54,    57,    36,
      11,    25,    11,    40,    61,    54,    56,    64,    56,    68,
      39,    68,    61,    28,   152,    64,    64,   239,    68,    68,
      31,    32,    11,   206,   246,    54,    57,   210,   211,    13,
      67,   206,    61,    56,    22,   210,   211,    61,    26,    68,
     262,    25,    31,    32,    68,    68,    68,    62,    56,    60,
      87,    11,   238,   261,    22,    39,   264,   279,    26,   267,
      68,   269,    99,    22,   247,    11,   249,    26,   206,    57,
      60,    60,   210,   211,   249,    11,    56,    61,   115,     7,
      64,   362,   408,    34,    68,    13,    11,    15,    68,    57,
      59,    22,   375,    22,   280,    26,    13,    26,    57,    68,
      22,   323,    58,   289,    26,    56,    62,    59,    25,   331,
      22,   249,   295,    64,    26,   337,    68,    34,    59,    61,
     295,    49,    39,   406,   346,    68,    57,    68,    57,    59,
      65,    66,    11,    34,   291,    57,   173,   359,    68,   361,
     362,   363,   325,    29,    61,    57,    32,    64,   370,   335,
     325,    68,   374,   375,   340,    56,   378,   295,    56,    63,
     382,    12,    54,    12,   372,   373,    64,    68,    19,    20,
     207,    20,    60,    24,   396,    24,    59,    54,    63,    30,
      63,    30,    65,    66,   406,    68,   408,   325,    11,    55,
      11,    58,   414,   415,    55,    62,   418,    63,    64,     3,
       4,     5,     6,    64,     8,     9,    10,    59,    11,    13,
      58,   419,    16,    17,    62,    59,    20,    21,    59,    23,
      24,    25,    60,    27,    28,    29,    30,    68,    60,    42,
      56,    35,    36,    37,    38,    39,    40,    63,    55,    65,
      66,    55,    68,    43,    64,    62,    63,    64,    35,    36,
      64,    38,    58,    57,    41,    59,    60,    61,    68,    58,
      11,    65,    66,    67,    68,     3,     4,     5,     6,    11,
       8,     9,    10,    11,    68,    13,    11,    62,    16,    17,
      11,    58,    20,    21,    56,    23,    24,    25,    11,    27,
      28,    29,    30,   226,   227,   228,   229,    35,    36,    37,
      38,    39,    40,    11,   169,   170,    11,    11,    54,    54,
     175,    44,    45,    46,    47,    48,    49,    11,    62,    56,
      18,    59,    60,    61,    14,    57,    62,    65,    66,    67,
      68,     3,     4,     5,     6,    62,     8,     9,    10,    56,
      62,    13,    62,    56,    16,    17,    11,    14,    20,    21,
      60,    23,    24,    25,    56,    27,    28,    29,    30,    58,
      13,    64,    58,    35,    36,    37,    38,    39,    40,    13,
     220,   221,   222,   223,   224,   225,   337,   382,   108,    60,
       3,     4,     5,     6,    99,   247,   361,    59,    60,    61,
      13,   362,   406,    65,    66,    67,    68,    59,   415,    61,
      23,    63,    25,   218,    27,   207,    -1,   219,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    58,    59,    -1,    61,    -1,
      -1,    13,    65,    66,    67,    68,    18,    -1,    -1,    -1,
      -1,    23,    -1,    25,    33,    27,    35,    36,    -1,    38,
      39,    40,    41,    35,    36,    37,    38,    39,    40,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    64,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    57,    -1,    59,    60,    61,    13,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    57,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    33,    27,    35,    36,    -1,    38,    39,    40,    41,
      35,    36,    37,    38,    39,    40,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    64,    -1,    59,    60,    61,    13,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    39,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    70,    73,    68,    74,     0,    11,    12,    19,
      20,    24,    30,    75,    76,    80,    81,    86,    87,    89,
      98,   101,   157,    59,    68,    88,   107,   112,    59,    63,
      65,    66,    74,    78,    79,   171,    59,    68,   100,   110,
      59,   103,   110,    59,    68,   159,   160,   161,    76,    80,
      11,    81,    11,    34,    56,   108,   109,   110,   105,   107,
      68,    56,    77,    78,    79,    79,    56,    99,   100,    13,
      25,    39,    54,    61,    64,    68,    74,   111,   114,   115,
     117,   119,   162,   163,   166,   168,    56,   102,   103,    54,
     115,   158,   159,    54,   115,    11,    11,   115,    56,    64,
      34,   115,    60,    82,   104,   106,   107,   115,   105,    56,
      78,    11,    56,   100,    11,    60,    61,   115,   167,     3,
       4,     5,     6,    23,    27,    35,    36,    37,    38,    39,
      40,    59,    67,    72,   113,   114,   116,   117,   140,   141,
     142,   143,   144,   145,   146,   147,   153,   156,   169,   170,
     171,    34,    58,   140,    68,    63,    54,    56,   103,    11,
     156,    54,    56,   159,    11,   115,    56,   109,   115,     8,
       9,    10,    16,    17,    21,    28,    29,    68,    82,    84,
      85,    86,    90,    91,    92,    93,    94,    95,    96,    97,
     110,   124,   125,   126,   127,   128,   129,   133,   134,   135,
     140,   156,   104,    11,    11,    57,   110,   164,   165,   115,
      59,    59,   140,   147,    60,   118,    60,   148,    42,    43,
      44,    45,    46,    47,    48,    49,    35,    36,    38,    41,
      33,    39,    40,    50,    51,    52,    53,    71,    59,    61,
      63,   150,   151,   152,   154,   155,    64,    58,   115,    58,
      68,   156,    11,   156,    11,    68,    91,    91,   156,    68,
      92,   140,    18,    82,    83,    92,   110,   136,   137,   139,
     140,   156,    60,    92,   140,    91,    57,    85,    11,    62,
      55,    31,    32,    35,    36,    38,    41,    54,    71,   172,
     173,   115,    57,   165,    11,    58,   115,   115,    56,    57,
     118,   120,   121,   122,   123,   140,   140,   149,   142,   143,
     144,   144,   144,   144,   144,   144,   145,   145,   145,   145,
     147,    56,   156,    62,   140,    59,    68,   140,   116,   117,
     115,    11,    82,   140,    82,    55,    82,    11,    82,    54,
      22,    26,    57,   130,   131,   132,    11,    60,    11,    85,
     156,    54,   156,    54,   171,    11,   115,    56,    56,    64,
      57,    64,    62,    62,    57,    34,    56,    58,   140,    58,
      62,   115,   140,    14,    18,    11,    83,   140,    18,   156,
      57,   131,    62,    60,   140,    57,   130,   140,    57,   121,
     118,   123,   140,   140,    56,    58,    62,    58,   140,    56,
      82,    82,   134,   140,    92,   138,    11,   140,    84,    57,
     130,    60,    57,    56,    64,    64,   140,    58,    62,    14,
     138,    57,    57,   130,   140,   149,    58,   140,    82,   134,
      57,    56,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    76,    76,    77,    77,    78,    78,
      78,    79,    80,    80,    81,    81,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    88,    89,
      89,    90,    91,    92,    92,    92,    92,    92,    93,    94,
      95,    95,    96,    97,    98,    98,    98,    99,    99,   100,
     100,   100,   101,   101,   101,   102,   102,   103,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   107,   108,   108,
     109,   109,   109,   110,   110,   111,   112,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   118,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   132,   132,   133,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   135,   136,   136,   137,   138,   139,
     139,   139,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   149,   150,   151,   152,   152,   152,   152,
     152,   152,   153,   153,   153,   153,   154,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   161,
     162,   163,   163,   164,   164,   165,   165,   166,   167,   168,
     169,   169,   170,   170,   170,   170,   170,   170,   171,   171,
     172,   172,   172,   173,   173,   173,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     2,     4,     3,     2,     3,     2,     2,     2,
       1,     1,     3,     2,     1,     1,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     4,
       5,     3,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     3,     3,     2,     4,     3,     3,     2,     2,
       4,     3,     2,     4,     3,     3,     2,     2,     4,     3,
       1,     1,     2,     1,     1,     2,     3,     4,     1,     3,
       2,     3,     2,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     3,     4,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       1,     3,     5,     4,     6,     4,     6,     5,     7,     2,
       1,     3,     2,     1,     1,     3,     5,     5,     5,     7,
       7,     2,     3,     3,     3,     4,     5,     1,     1,     2,
       4,     4,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     3,     3,     5,     2,     3,     4,     3,     4,     5,
       6,     7,     8,     6,     4,     4,     4,     2,     3,     4,
       1,     3,     4,     2,     3,     2,     1,     1,     3,     2,
       5,     4,     3,     2,     3,     3,     2,     2,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1
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
#line 59 "src/parser.y"
                             {cout<<"PackageClause SCOLON\n";}
#line 1907 "parser.tab.c"
    break;

  case 3:
#line 60 "src/parser.y"
                                          {cout<<"PackageClause SCOLON ImportDeclList\n";}
#line 1913 "parser.tab.c"
    break;

  case 4:
#line 61 "src/parser.y"
                                                {cout<<"PackageClause SCOLON TopLevelDeclList\n";}
#line 1919 "parser.tab.c"
    break;

  case 5:
#line 62 "src/parser.y"
                                                               {cout<<"PackageClause SCOLON ImportDeclList TopLevelDeclList\n";}
#line 1925 "parser.tab.c"
    break;

  case 6:
#line 75 "src/parser.y"
            {;}
#line 1931 "parser.tab.c"
    break;

  case 7:
#line 76 "src/parser.y"
              {;}
#line 1937 "parser.tab.c"
    break;

  case 8:
#line 77 "src/parser.y"
              {;}
#line 1943 "parser.tab.c"
    break;

  case 9:
#line 78 "src/parser.y"
              {;}
#line 1949 "parser.tab.c"
    break;

  case 10:
#line 79 "src/parser.y"
              {;}
#line 1955 "parser.tab.c"
    break;

  case 11:
#line 80 "src/parser.y"
              {;}
#line 1961 "parser.tab.c"
    break;

  case 12:
#line 81 "src/parser.y"
                 {;}
#line 1967 "parser.tab.c"
    break;

  case 13:
#line 85 "src/parser.y"
             {;}
#line 1973 "parser.tab.c"
    break;

  case 14:
#line 86 "src/parser.y"
              {;}
#line 1979 "parser.tab.c"
    break;

  case 15:
#line 87 "src/parser.y"
              {;}
#line 1985 "parser.tab.c"
    break;

  case 16:
#line 88 "src/parser.y"
              {;}
#line 1991 "parser.tab.c"
    break;

  case 17:
#line 89 "src/parser.y"
              {;}
#line 1997 "parser.tab.c"
    break;

  case 18:
#line 90 "src/parser.y"
              {;}
#line 2003 "parser.tab.c"
    break;

  case 19:
#line 94 "src/parser.y"
                            {cout<<"PackageClause\n";}
#line 2009 "parser.tab.c"
    break;

  case 20:
#line 98 "src/parser.y"
                   {;}
#line 2015 "parser.tab.c"
    break;

  case 21:
#line 102 "src/parser.y"
                                         {cout<<"ImportDeclList ImportDecl SCOLON\n";}
#line 2021 "parser.tab.c"
    break;

  case 22:
#line 103 "src/parser.y"
                            {cout<<"ImportDecl SCOLON\n";}
#line 2027 "parser.tab.c"
    break;

  case 23:
#line 107 "src/parser.y"
                                                   {;}
#line 2033 "parser.tab.c"
    break;

  case 24:
#line 108 "src/parser.y"
                                      {;}
#line 2039 "parser.tab.c"
    break;

  case 25:
#line 109 "src/parser.y"
                            {;}
#line 2045 "parser.tab.c"
    break;

  case 26:
#line 113 "src/parser.y"
                                         {;}
#line 2051 "parser.tab.c"
    break;

  case 27:
#line 114 "src/parser.y"
                            {;}
#line 2057 "parser.tab.c"
    break;

  case 28:
#line 118 "src/parser.y"
                               {;}
#line 2063 "parser.tab.c"
    break;

  case 29:
#line 119 "src/parser.y"
                         {;}
#line 2069 "parser.tab.c"
    break;

  case 30:
#line 120 "src/parser.y"
                     {;}
#line 2075 "parser.tab.c"
    break;

  case 32:
#line 128 "src/parser.y"
                                              { cout<<"TopLevelDeclList TopLevelDecl SCOLON\n";}
#line 2081 "parser.tab.c"
    break;

  case 33:
#line 129 "src/parser.y"
                              { cout<<"TopLevelDecl SCOLON\n";}
#line 2087 "parser.tab.c"
    break;

  case 37:
#line 139 "src/parser.y"
                                       {;}
#line 2093 "parser.tab.c"
    break;

  case 39:
#line 147 "src/parser.y"
                                       {cout<<"StatementList Statement SCOLON\n";}
#line 2099 "parser.tab.c"
    break;

  case 40:
#line 148 "src/parser.y"
                           {cout<<"Statement SCOLON\n";}
#line 2105 "parser.tab.c"
    break;

  case 56:
#line 173 "src/parser.y"
                                                 {;}
#line 2111 "parser.tab.c"
    break;

  case 57:
#line 174 "src/parser.y"
                                       {;}
#line 2117 "parser.tab.c"
    break;

  case 58:
#line 178 "src/parser.y"
                   {;}
#line 2123 "parser.tab.c"
    break;

  case 59:
#line 182 "src/parser.y"
                                           {;}
#line 2129 "parser.tab.c"
    break;

  case 60:
#line 183 "src/parser.y"
                                                          {;}
#line 2135 "parser.tab.c"
    break;

  case 62:
#line 191 "src/parser.y"
                  {;}
#line 2141 "parser.tab.c"
    break;

  case 68:
#line 202 "src/parser.y"
          {;}
#line 2147 "parser.tab.c"
    break;

  case 74:
#line 223 "src/parser.y"
                    {;}
#line 2153 "parser.tab.c"
    break;

  case 75:
#line 224 "src/parser.y"
                                               {;}
#line 2159 "parser.tab.c"
    break;

  case 76:
#line 225 "src/parser.y"
                                   {;}
#line 2165 "parser.tab.c"
    break;

  case 82:
#line 240 "src/parser.y"
                        {;}
#line 2171 "parser.tab.c"
    break;

  case 83:
#line 241 "src/parser.y"
                                                   {;}
#line 2177 "parser.tab.c"
    break;

  case 84:
#line 242 "src/parser.y"
                                     {;}
#line 2183 "parser.tab.c"
    break;

  case 91:
#line 261 "src/parser.y"
                   {cout<<"Parameters\n";}
#line 2189 "parser.tab.c"
    break;

  case 93:
#line 265 "src/parser.y"
                   {;}
#line 2195 "parser.tab.c"
    break;

  case 94:
#line 266 "src/parser.y"
               {;}
#line 2201 "parser.tab.c"
    break;

  case 95:
#line 270 "src/parser.y"
                             {cout<<"LEFTPARAN RIGHTPARAN\n";}
#line 2207 "parser.tab.c"
    break;

  case 96:
#line 271 "src/parser.y"
                                             {;}
#line 2213 "parser.tab.c"
    break;

  case 97:
#line 272 "src/parser.y"
                                                   {;}
#line 2219 "parser.tab.c"
    break;

  case 100:
#line 281 "src/parser.y"
                            {;}
#line 2225 "parser.tab.c"
    break;

  case 101:
#line 282 "src/parser.y"
                                      {;}
#line 2231 "parser.tab.c"
    break;

  case 102:
#line 283 "src/parser.y"
                       {;}
#line 2237 "parser.tab.c"
    break;

  case 103:
#line 287 "src/parser.y"
                                        {;}
#line 2243 "parser.tab.c"
    break;

  case 104:
#line 288 "src/parser.y"
                     {;}
#line 2249 "parser.tab.c"
    break;

  case 105:
#line 292 "src/parser.y"
                                   {cout<<"QualifiedIdent "<<(yyvsp[-2].nt)<<" "<<(yyvsp[-1].sval)<<" "<<(yyvsp[0].sval)<<"\n";}
#line 2255 "parser.tab.c"
    break;

  case 112:
#line 308 "src/parser.y"
                                                 {;}
#line 2261 "parser.tab.c"
    break;

  case 118:
#line 320 "src/parser.y"
                                          {;}
#line 2267 "parser.tab.c"
    break;

  case 119:
#line 324 "src/parser.y"
                   {;}
#line 2273 "parser.tab.c"
    break;

  case 120:
#line 325 "src/parser.y"
                         {cout<<"OperandName:QualifiedIdent "<<(yyvsp[0].nt)<<"\n";}
#line 2279 "parser.tab.c"
    break;

  case 121:
#line 329 "src/parser.y"
                             {;}
#line 2285 "parser.tab.c"
    break;

  case 122:
#line 330 "src/parser.y"
                                           {;}
#line 2291 "parser.tab.c"
    break;

  case 123:
#line 331 "src/parser.y"
                                                 {;}
#line 2297 "parser.tab.c"
    break;

  case 124:
#line 335 "src/parser.y"
                                    {;}
#line 2303 "parser.tab.c"
    break;

  case 133:
#line 359 "src/parser.y"
               {;}
#line 2309 "parser.tab.c"
    break;

  case 134:
#line 360 "src/parser.y"
                                {;}
#line 2315 "parser.tab.c"
    break;

  case 135:
#line 365 "src/parser.y"
              {;}
#line 2321 "parser.tab.c"
    break;

  case 136:
#line 366 "src/parser.y"
                      {;}
#line 2327 "parser.tab.c"
    break;

  case 137:
#line 371 "src/parser.y"
                 {;}
#line 2333 "parser.tab.c"
    break;

  case 138:
#line 372 "src/parser.y"
                         {;}
#line 2339 "parser.tab.c"
    break;

  case 139:
#line 376 "src/parser.y"
                   {;}
#line 2345 "parser.tab.c"
    break;

  case 141:
#line 384 "src/parser.y"
                                    {;}
#line 2351 "parser.tab.c"
    break;

  case 142:
#line 385 "src/parser.y"
                                                        {;}
#line 2357 "parser.tab.c"
    break;

  case 143:
#line 386 "src/parser.y"
                                                 { cout<<"SWITCH Expression LEFTBRACE RIGHTBRACE\n";}
#line 2363 "parser.tab.c"
    break;

  case 144:
#line 387 "src/parser.y"
                                                                   {;}
#line 2369 "parser.tab.c"
    break;

  case 145:
#line 388 "src/parser.y"
                                                        {;}
#line 2375 "parser.tab.c"
    break;

  case 146:
#line 389 "src/parser.y"
                                                                          {;}
#line 2381 "parser.tab.c"
    break;

  case 147:
#line 390 "src/parser.y"
                                                                    {;}
#line 2387 "parser.tab.c"
    break;

  case 148:
#line 391 "src/parser.y"
                                                                                      {;}
#line 2393 "parser.tab.c"
    break;

  case 149:
#line 395 "src/parser.y"
                                          {;}
#line 2399 "parser.tab.c"
    break;

  case 150:
#line 396 "src/parser.y"
                         {;}
#line 2405 "parser.tab.c"
    break;

  case 151:
#line 399 "src/parser.y"
                                           {;}
#line 2411 "parser.tab.c"
    break;

  case 152:
#line 403 "src/parser.y"
                            {;}
#line 2417 "parser.tab.c"
    break;

  case 153:
#line 404 "src/parser.y"
                  {;}
#line 2423 "parser.tab.c"
    break;

  case 154:
#line 408 "src/parser.y"
                    {;}
#line 2429 "parser.tab.c"
    break;

  case 155:
#line 412 "src/parser.y"
                            {;}
#line 2435 "parser.tab.c"
    break;

  case 156:
#line 413 "src/parser.y"
                                               {;}
#line 2441 "parser.tab.c"
    break;

  case 157:
#line 414 "src/parser.y"
                                         {;}
#line 2447 "parser.tab.c"
    break;

  case 158:
#line 415 "src/parser.y"
                                        {;}
#line 2453 "parser.tab.c"
    break;

  case 159:
#line 416 "src/parser.y"
                                                           {;}
#line 2459 "parser.tab.c"
    break;

  case 160:
#line 417 "src/parser.y"
                                                          {;}
#line 2465 "parser.tab.c"
    break;

  case 161:
#line 421 "src/parser.y"
                  {;}
#line 2471 "parser.tab.c"
    break;

  case 162:
#line 422 "src/parser.y"
                              {;}
#line 2477 "parser.tab.c"
    break;

  case 163:
#line 423 "src/parser.y"
                              {;}
#line 2483 "parser.tab.c"
    break;

  case 164:
#line 424 "src/parser.y"
                                {;}
#line 2489 "parser.tab.c"
    break;

  case 169:
#line 442 "src/parser.y"
                         {;}
#line 2495 "parser.tab.c"
    break;

  case 172:
#line 448 "src/parser.y"
                     {;}
#line 2501 "parser.tab.c"
    break;

  case 173:
#line 452 "src/parser.y"
                                                     {cout<<"ExpressionOR LOGOR ExpressionAND %prec LOGOR "<<"\n";}
#line 2507 "parser.tab.c"
    break;

  case 175:
#line 457 "src/parser.y"
                                                        {;}
#line 2513 "parser.tab.c"
    break;

  case 176:
#line 458 "src/parser.y"
                                   {cout<<"ExpressionREL\n";}
#line 2519 "parser.tab.c"
    break;

  case 183:
#line 469 "src/parser.y"
                                  {cout<<"ExpressionADD\n";}
#line 2525 "parser.tab.c"
    break;

  case 184:
#line 473 "src/parser.y"
                                                  {cout<<"ExpressionADD ADD ExpressionMUL\n";}
#line 2531 "parser.tab.c"
    break;

  case 185:
#line 474 "src/parser.y"
                                                    {cout<<"ExpressionADD ADD ExpressionMUL\n";}
#line 2537 "parser.tab.c"
    break;

  case 186:
#line 475 "src/parser.y"
                                                   {cout<<"ExpressionADD ADD ExpressionMUL\n";}
#line 2543 "parser.tab.c"
    break;

  case 187:
#line 476 "src/parser.y"
                                                    {cout<<"ExpressionADD ADD ExpressionMUL\n";}
#line 2549 "parser.tab.c"
    break;

  case 188:
#line 478 "src/parser.y"
                                  {cout<<"ExpressionMUL\n";}
#line 2555 "parser.tab.c"
    break;

  case 190:
#line 483 "src/parser.y"
                              {cout<<"UnaryExpr\n";}
#line 2561 "parser.tab.c"
    break;

  case 191:
#line 487 "src/parser.y"
                    {cout<<"PrimaryExpr\n";}
#line 2567 "parser.tab.c"
    break;

  case 193:
#line 492 "src/parser.y"
                {cout<<"Operand\n";}
#line 2573 "parser.tab.c"
    break;

  case 201:
#line 503 "src/parser.y"
                                          {;}
#line 2579 "parser.tab.c"
    break;

  case 204:
#line 513 "src/parser.y"
                       {;}
#line 2585 "parser.tab.c"
    break;

  case 205:
#line 517 "src/parser.y"
                                          {;}
#line 2591 "parser.tab.c"
    break;

  case 206:
#line 521 "src/parser.y"
                                                 {;}
#line 2597 "parser.tab.c"
    break;

  case 207:
#line 522 "src/parser.y"
                                        {;}
#line 2603 "parser.tab.c"
    break;

  case 208:
#line 523 "src/parser.y"
                                                    {;}
#line 2609 "parser.tab.c"
    break;

  case 209:
#line 524 "src/parser.y"
                                                              {;}
#line 2615 "parser.tab.c"
    break;

  case 210:
#line 525 "src/parser.y"
                                                                    {;}
#line 2621 "parser.tab.c"
    break;

  case 211:
#line 526 "src/parser.y"
                                                                               {;}
#line 2627 "parser.tab.c"
    break;

  case 212:
#line 530 "src/parser.y"
                                                                         {;}
#line 2633 "parser.tab.c"
    break;

  case 213:
#line 531 "src/parser.y"
                                                          {;}
#line 2639 "parser.tab.c"
    break;

  case 214:
#line 532 "src/parser.y"
                                         {;}
#line 2645 "parser.tab.c"
    break;

  case 215:
#line 533 "src/parser.y"
                                        {;}
#line 2651 "parser.tab.c"
    break;

  case 216:
#line 537 "src/parser.y"
                                      {;}
#line 2657 "parser.tab.c"
    break;

  case 217:
#line 541 "src/parser.y"
                             {;}
#line 2663 "parser.tab.c"
    break;

  case 218:
#line 542 "src/parser.y"
                                              {cout<<"LEFTPARAN ExpressionList RIGHTPARAN\n";}
#line 2669 "parser.tab.c"
    break;

  case 219:
#line 543 "src/parser.y"
                                                      {cout<<"LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN\n";}
#line 2675 "parser.tab.c"
    break;

  case 220:
#line 547 "src/parser.y"
                   {cout<<"Expression "<<(yyvsp[0].nt)<<"\n";}
#line 2681 "parser.tab.c"
    break;

  case 221:
#line 548 "src/parser.y"
                                          {cout<<"ExpressionList COMMA Expression "<<(yyvsp[-2].nt)<<" "<<(yyvsp[-1].sval)<<" "<<(yyvsp[0].nt)<<"\n";}
#line 2687 "parser.tab.c"
    break;

  case 222:
#line 552 "src/parser.y"
                                               {;}
#line 2693 "parser.tab.c"
    break;

  case 223:
#line 553 "src/parser.y"
                        {;}
#line 2699 "parser.tab.c"
    break;

  case 228:
#line 567 "src/parser.y"
                           {;}
#line 2705 "parser.tab.c"
    break;

  case 229:
#line 571 "src/parser.y"
                        {;}
#line 2711 "parser.tab.c"
    break;

  case 230:
#line 575 "src/parser.y"
                                             {;}
#line 2717 "parser.tab.c"
    break;

  case 231:
#line 579 "src/parser.y"
                                                  {;}
#line 2723 "parser.tab.c"
    break;

  case 232:
#line 580 "src/parser.y"
                                      {;}
#line 2729 "parser.tab.c"
    break;

  case 233:
#line 584 "src/parser.y"
                         {;}
#line 2735 "parser.tab.c"
    break;

  case 234:
#line 585 "src/parser.y"
                                         {;}
#line 2741 "parser.tab.c"
    break;

  case 237:
#line 595 "src/parser.y"
                     {;}
#line 2747 "parser.tab.c"
    break;

  case 239:
#line 603 "src/parser.y"
                                               {;}
#line 2753 "parser.tab.c"
    break;

  case 242:
#line 612 "src/parser.y"
                    {;}
#line 2759 "parser.tab.c"
    break;

  case 243:
#line 613 "src/parser.y"
                    {;}
#line 2765 "parser.tab.c"
    break;

  case 244:
#line 614 "src/parser.y"
                    {;}
#line 2771 "parser.tab.c"
    break;

  case 246:
#line 616 "src/parser.y"
                    {;}
#line 2777 "parser.tab.c"
    break;

  case 247:
#line 617 "src/parser.y"
                    {;}
#line 2783 "parser.tab.c"
    break;

  case 248:
#line 621 "src/parser.y"
                   {;}
#line 2789 "parser.tab.c"
    break;

  case 249:
#line 622 "src/parser.y"
                             {cout<<"INTERPRETED_STRING "<<(yyvsp[0].sval)<<"\n";}
#line 2795 "parser.tab.c"
    break;

  case 250:
#line 626 "src/parser.y"
           {;}
#line 2801 "parser.tab.c"
    break;

  case 251:
#line 627 "src/parser.y"
                    {;}
#line 2807 "parser.tab.c"
    break;

  case 252:
#line 628 "src/parser.y"
                    {;}
#line 2813 "parser.tab.c"
    break;

  case 253:
#line 632 "src/parser.y"
            {cout<<"ADD\n";}
#line 2819 "parser.tab.c"
    break;

  case 254:
#line 633 "src/parser.y"
              {cout<<"SUB\n";}
#line 2825 "parser.tab.c"
    break;

  case 255:
#line 634 "src/parser.y"
             {cout<<"OR\n";}
#line 2831 "parser.tab.c"
    break;

  case 256:
#line 635 "src/parser.y"
              {;}
#line 2837 "parser.tab.c"
    break;


#line 2841 "parser.tab.c"

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
#line 637 "src/parser.y"




	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	
		
}









	


