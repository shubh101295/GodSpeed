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

	extern int yylex();
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
#define YYLAST   1339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  253
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

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
     173,   174,   178,   179,   183,   186,   187,   191,   195,   199,
     200,   201,   202,   203,   206,   210,   214,   215,   219,   223,
     227,   228,   229,   233,   234,   238,   239,   240,   244,   245,
     246,   250,   251,   255,   256,   257,   261,   265,   266,   269,
     270,   274,   275,   276,   280,   281,   285,   286,   287,   291,
     292,   296,   300,   304,   308,   309,   310,   311,   312,   313,
     317,   318,   322,   323,   324,   328,   329,   333,   334,   335,
     339,   343,   344,   348,   349,   353,   354,   358,   359,   363,
     364,   369,   370,   375,   376,   380,   384,   388,   389,   390,
     391,   392,   393,   394,   395,   399,   400,   403,   407,   408,
     412,   416,   417,   418,   419,   420,   421,   425,   426,   427,
     428,   432,   433,   437,   441,   446,   447,   448,   452,   456,
     457,   461,   462,   466,   467,   471,   472,   476,   477,   481,
     482,   486,   487,   488,   489,   490,   491,   492,   493,   497,
     501,   502,   507,   511,   515,   516,   517,   518,   519,   520,
     524,   525,   526,   527,   531,   535,   536,   540,   541,   545,
     546,   550,   551,   555,   556,   560,   564,   568,   572,   573,
     577,   578,   582,   583,   588,   592,   596,   600,   601,   605,
     606,   607,   608,   609,   610,   614,   615,   619,   620,   621,
     625,   626,   627,   628
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

#define YYPACT_NINF (-322)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-137)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -17,    68,    95,  -322,  -322,  -322,   297,   -11,   357,
     188,   193,   234,   297,    97,   239,   134,  -322,  -322,  -322,
    -322,  -322,  -322,   238,  -322,    70,  -322,   123,   291,    -2,
    -322,  -322,    -2,  -322,  -322,  -322,   -21,  -322,  -322,   168,
     -10,  -322,   276,   131,    98,  -322,  -322,  -322,   243,   239,
    -322,   254,  -322,   136,  -322,   107,  -322,   151,   207,   237,
      70,  -322,   349,   259,  -322,  -322,  -322,     5,   260,   240,
     187,   136,  1186,   555,   261,   245,   248,  -322,  -322,   280,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,    56,   331,  1186,
     295,    57,   337,   136,  -322,  -322,  -322,  -322,  -322,   256,
     136,  -322,   506,  -322,  -322,  -322,  -322,  -322,   207,  -322,
     367,  -322,  -322,   372,  -322,   112,   136,  -322,  -322,  -322,
    -322,  -322,  -322,   323,   326,  -322,  -322,  -322,  -322,    14,
    -322,  1186,  -322,   135,  -322,   330,  -322,   343,   322,   355,
     361,   446,  -322,  -322,  -322,   309,  -322,  -322,  -322,  -322,
    -322,   368,   136,   369,  -322,   345,  1186,  -322,   418,  -322,
    -322,  1186,  -322,   423,  -322,  -322,  -322,  -322,  -322,   384,
     384,  1186,  1233,   606,   753,   384,  -322,   378,  -322,   371,
     424,  -322,  -322,   392,  -322,  -322,  -322,  -322,  -322,  -322,
     281,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
      12,   599,  -322,  -322,  -322,  -322,   294,   115,   444,   400,
     136,   136,   403,   309,   655,  -322,  1186,  -322,  1186,  1186,
    1186,  -322,  -322,  -322,  -322,  -322,  -322,  1186,  -322,  -322,
    -322,  -322,  1186,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
     135,   802,   849,   301,  -322,  -322,  -322,  -322,  -322,  1271,
    -322,   136,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,   -22,   451,   122,  1186,  -322,   207,  -322,   338,   207,
     455,   207,   157,   648,   100,   460,   307,  -322,  -322,   461,
    -322,   506,  1186,  -322,  -322,  -322,   419,  1186,   420,    -2,
    -322,   471,  -322,   136,   429,   142,  -322,  -322,   425,    46,
    -322,   426,  -322,   434,   435,   441,  -322,   361,   446,   383,
     313,   309,  -322,   452,   896,    47,   136,  -322,  -322,  -322,
    -322,  1186,   488,  -322,  -322,   947,  -322,   994,  -322,   485,
    1186,  -322,  -322,   108,  -322,   442,  1041,   110,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  1186,
    -322,   704,  1090,  1186,  -322,   457,  -322,   152,  -322,  1139,
     462,   207,    -8,  1186,  1233,   509,  -322,  1186,  -322,  -322,
    -322,   506,   201,   464,  -322,   209,   164,  -322,  -322,  -322,
    -322,  -322,   453,  -322,  -322,  1186,  -322,   264,  -322,   507,
    -322,  -322,  -322,  -322,  -322,  1233,  -322,   440,  -322,   217,
     218,  -322,  -322,  1186,  1186,   467,  -322,  1186,    -8,  -322,
    -322,  -322,   231,   472,  -322,  -322,   474,  -322,  -322,  -322,
    -322,  -322
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    26,    25,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     4,     0,    40,    41,    42,
      60,    61,    59,     0,    64,     0,   112,     0,     0,     0,
     245,   246,     0,    31,    36,    37,     0,   110,    80,     0,
       0,    88,     0,     0,     0,   220,   223,   224,     0,     5,
      28,     0,    39,     0,   101,     0,   104,     0,    63,    97,
       0,    30,     0,     0,    35,    34,    82,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,   126,   120,    85,
     121,   117,   119,   114,   116,   115,    90,     0,     0,     0,
      93,     0,     0,     0,   226,    27,    38,   108,   102,     0,
       0,   106,    74,    96,    62,    98,    99,   100,    65,    29,
       0,    33,    81,     0,    84,     0,     0,   235,   234,   239,
     240,   243,   244,     0,     0,    19,    20,    21,    22,    23,
      24,     0,   241,     0,   238,     0,   191,   123,   217,   178,
     180,   182,   184,   186,   188,   189,   192,    87,   122,   237,
     242,     0,     0,     0,   109,     0,     0,    89,     0,    92,
      95,     0,   219,     0,   222,   225,   103,   105,   107,   141,
     143,   139,    74,    74,    74,     0,   160,   125,    56,    74,
       0,    47,    48,     0,    49,    69,    70,    71,    72,    73,
       0,    50,    51,    52,    53,    54,   146,    55,    57,    58,
     217,     0,    66,    32,    83,   229,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   113,     0,   197,     0,     0,
       0,     6,     7,     8,     9,    10,    11,     0,   250,   251,
     253,   252,     0,    18,    12,    17,    14,    13,    15,    16,
       0,     0,     0,     0,   193,   194,   195,   198,   196,     0,
     130,     0,   111,    86,    91,    94,   221,    68,   142,   144,
     140,   125,     0,   217,     0,   167,     0,   173,     0,     0,
       0,     0,   217,     0,     0,     0,   217,   145,    43,     0,
      46,    74,     0,    76,    77,   247,     0,     0,     0,   233,
     228,     0,   230,     0,     0,     0,   124,   127,   138,     0,
     131,     0,   133,   137,     0,     0,   218,   179,   181,   183,
     185,   187,   215,     0,     0,     0,     0,   202,   118,   123,
     236,     0,   161,   175,   169,     0,   168,     0,   170,   247,
       0,   159,   147,     0,   156,     0,     0,     0,    45,    67,
      79,   249,    78,   248,   232,   231,   227,   213,   212,     0,
     128,     0,     0,     0,   199,     0,   205,     0,   203,     0,
       0,     0,     0,     0,    74,     0,    44,     0,   158,   151,
     155,    74,     0,     0,   149,     0,     0,   129,   132,   138,
     134,   137,   200,   216,   204,     0,   206,     0,   214,   162,
     164,   163,   176,   174,   171,    74,   177,   157,   148,     0,
       0,   153,   211,     0,     0,     0,   207,     0,     0,   172,
     152,   150,     0,     0,   201,   208,     0,   166,   165,   154,
     210,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -322,  -322,  -322,  -188,  -322,  -322,    28,  -322,   524,  -322,
      69,   118,   525,   106,   -58,   212,   169,  -163,    21,  -322,
    -322,  -322,  -322,   314,  -169,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,    -5,  -322,  -322,     0,   439,   489,  -322,     6,
    -322,   449,   274,  -322,  -322,  -322,    27,    35,   302,   -33,
    -128,  -322,  -322,   199,  -322,   200,  -322,  -322,  -322,  -322,
    -322,  -322,  -319,  -321,  -322,  -322,  -313,  -322,  -322,  -322,
     158,  -322,   -72,  -322,   335,   336,   328,   325,  -322,  -123,
    -322,   159,  -322,  -322,  -322,  -322,  -322,  -322,   -57,  -322,
    -322,     2,  -322,  -322,  -322,  -322,  -322,   362,  -322,  -322,
    -322,  -322,  -322,    -7,  -322,  -184
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   227,   240,   133,     3,    76,    13,    14,    62,
      33,    34,    15,    16,   178,   266,   179,   180,   181,    18,
      25,    19,   182,   183,   184,   185,   186,   187,   188,   189,
      20,    67,    38,    21,    87,    41,   104,    58,   105,    59,
      55,    56,   190,    77,    27,   134,   135,   117,   136,   137,
     298,    81,   299,   300,   301,   302,   191,   192,   193,   194,
     195,   196,   333,   334,   335,   197,   198,   199,   269,   270,
     394,   271,   138,   139,   140,   141,   142,   143,   144,   145,
     217,   305,   244,   245,   246,   146,   247,   248,   201,    22,
      91,    45,    46,    47,    82,    83,   207,   208,    84,   118,
      85,   148,   149,   150,   287,   232
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   153,    35,   262,   267,   275,    80,   215,   172,    80,
     213,    80,   370,   286,    26,   147,   279,   288,   375,     1,
      80,    35,    35,   -75,    80,    35,    80,    69,    17,     5,
     200,    68,   160,  -110,    17,    66,    17,    32,    80,    70,
      88,   -26,  -110,   283,   284,    92,    86,    37,    23,   391,
     103,     4,   102,   399,   370,    35,    32,    24,    37,   212,
      80,   112,   113,    30,    31,   106,    78,    80,     6,    78,
      17,    78,   -75,    37,    79,    73,   218,    90,   370,    94,
      78,   412,    75,    80,    78,   286,    78,   158,    97,   288,
      32,   370,   101,   163,   107,   418,    80,    63,    78,   253,
     263,   272,   276,   350,   255,   358,     7,   200,    50,   359,
     351,    69,   157,   162,   260,   265,   273,   311,   339,    80,
      78,    51,   330,    70,    37,    44,   331,    78,   165,    23,
     330,   110,   330,   -75,   331,   168,   331,    71,   119,   120,
     121,   122,   303,    78,   304,    52,   306,    64,    69,    69,
      65,   209,    93,   283,   284,    51,    78,   332,   123,    73,
      70,    70,   124,    98,    69,   369,    75,   374,   -75,   205,
     315,    99,   290,    80,    71,    71,    70,    80,    80,    78,
      37,    69,   102,    37,   313,   100,   218,   250,   283,   284,
      71,    60,   323,    70,   131,   393,    73,    73,   348,    44,
      30,    31,   132,    75,    75,   322,   349,    71,   324,   200,
     384,   326,    73,   328,   385,    74,   319,   -44,    80,    75,
     402,   218,    72,   330,   379,   340,   393,   331,   403,    73,
     342,   330,    74,    78,   279,   331,    75,    78,    78,   330,
     330,   289,   357,   331,   331,   294,   295,    36,   116,   361,
      69,     8,    40,   330,    95,   366,    37,   331,   398,    10,
      80,    37,    70,    11,   373,    96,   401,   102,   340,    12,
     111,   114,    53,   368,   410,   411,    71,   376,    78,   303,
     381,   382,   344,    80,    39,    42,   320,   387,   419,    69,
      53,   392,   200,    43,    54,   396,    23,    57,    73,   200,
     115,    70,    44,   389,   390,    75,    37,    69,   -26,     8,
      39,   155,   166,   405,    42,    71,     9,    10,   -75,    70,
      78,    11,   406,   200,    37,   200,   407,    12,   346,   154,
      89,   413,   304,    71,   156,   416,   282,    73,   283,   284,
      74,    39,   159,    78,    75,    74,   233,    61,   164,   161,
     417,   360,   234,   235,    29,    73,    30,    31,    74,     4,
     316,    42,    75,   236,   237,   238,   239,   337,   241,   317,
     242,   218,   243,    57,   119,   120,   121,   122,   203,   169,
     170,   171,   210,   204,    69,   211,   218,   172,   173,   206,
     214,    10,   174,   325,   123,    11,    70,   219,   124,   175,
     176,    12,    74,   216,   220,   109,   125,   126,   127,   128,
     129,   130,    29,   252,    30,    31,    28,     4,   228,   229,
      29,   230,    30,    31,   231,     4,   249,   251,   278,   254,
     131,   102,    73,  -110,   256,   280,    30,    31,   132,   177,
     -68,   -26,  -110,   119,   120,   121,   122,   268,   169,   170,
     171,   -74,   257,    69,   281,   292,   172,   173,   293,   296,
      10,   174,   321,   123,    11,    70,   327,   124,   175,   176,
      12,   336,   338,   341,   343,   125,   126,   127,   128,   129,
     130,   206,   345,   258,   259,   347,   355,  -136,   352,   277,
     221,   222,   223,   224,   225,   226,  -135,   353,   354,   131,
     102,    73,   362,   367,   371,    30,    31,   132,   177,   119,
     120,   121,   122,   383,   169,   170,   171,   404,   388,    69,
     395,   408,   172,   173,   400,   415,    10,   174,   420,   123,
      11,    70,   421,   124,   175,   176,    12,    48,    49,   365,
     397,   125,   126,   127,   128,   129,   130,   202,   167,   108,
     378,   318,   380,   409,   307,   309,   308,   310,   119,   120,
     121,   122,     0,   414,     0,   131,   102,    73,    69,   291,
       0,    30,    31,   132,   177,     0,     0,     0,   123,     0,
      70,     0,   124,     0,     0,     0,     0,     0,     0,   151,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,   152,   131,     0,    73,     0,     0,    69,
      30,    31,   132,    75,   264,     0,     0,     0,     0,   123,
       0,    70,   233,   124,   228,   229,     0,   230,   234,   235,
     231,   125,   126,   127,   128,   129,   130,     0,     0,   236,
     237,   238,   239,   285,     0,     0,     0,     0,   119,   120,
     121,   122,     0,     0,     0,   131,   102,    73,    69,     0,
       0,    30,    31,   132,   261,     0,     0,     0,   123,     0,
      70,   233,   124,   228,   229,     0,   230,   234,   235,   231,
     125,   126,   127,   128,   129,   130,     0,     0,   236,   237,
     238,   239,   329,     0,     0,     0,     0,   119,   120,   121,
     122,     0,   297,     0,   131,   214,    73,    69,     0,     0,
      30,    31,   132,    75,     0,     0,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
       0,   377,     0,   131,   214,    73,    69,     0,     0,    30,
      31,   132,    75,     0,     0,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,   122,     0,
       0,     0,   131,   274,    73,    69,     0,     0,    30,    31,
     132,   261,     0,     0,     0,   123,     0,    70,     0,   124,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,     0,   312,     0,
       0,   131,    69,    73,     0,     0,     0,    30,    31,   132,
      75,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,     0,     0,     0,     0,     0,   131,    69,
      73,   314,     0,     0,    30,    31,   132,    75,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,   122,   356,   131,     0,    73,     0,     0,
      69,    30,    31,   132,    75,   363,     0,     0,     0,     0,
     123,     0,    70,     0,   124,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
     122,     0,     0,     0,     0,   364,   131,    69,    73,     0,
       0,     0,    30,    31,   132,    75,     0,   123,     0,    70,
       0,   124,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,   122,     0,     0,
       0,     0,     0,   131,    69,    73,     0,     0,     0,    30,
      31,   132,    75,     0,   123,     0,    70,     0,   124,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   122,     0,     0,     0,
     131,   372,    73,    69,     0,     0,    30,    31,   132,    75,
       0,     0,     0,   123,     0,    70,     0,   124,     0,     0,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,   122,     0,     0,     0,   131,
     214,    73,    69,     0,     0,    30,    31,   132,    75,     0,
       0,     0,   123,     0,    70,     0,   124,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,     0,     0,     0,     0,   386,   131,    69,
      73,     0,     0,     0,    30,    31,   132,    75,     0,   123,
       0,    70,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   122,
       0,     0,     0,     0,     0,   131,    69,    73,     0,     0,
       0,    30,    31,   132,    75,     0,   123,     0,    70,     0,
     124,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,   131,     0,    73,     0,    70,     0,    30,    31,
     132,   261,     0,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     131,     0,    73,     0,     0,     0,    30,    31,   132,    75
};

static const yytype_int16 yycheck[] =
{
      58,    73,     9,   172,   173,   174,    39,   135,    16,    42,
     133,    44,   333,   201,     8,    72,   179,   201,   337,    15,
      53,    28,    29,    11,    57,    32,    59,    13,     7,     1,
     102,    36,    89,    55,    13,    56,    15,     9,    71,    25,
      40,    63,    64,    31,    32,    43,    56,    68,    59,   362,
     108,    68,    60,   372,   375,    62,    28,    68,    68,   131,
      93,    56,    67,    65,    66,    59,    39,   100,     0,    42,
      49,    44,    60,    68,    39,    61,    64,    42,   399,    44,
      53,   400,    68,   116,    57,   273,    59,    87,    53,   273,
      62,   412,    57,    91,    59,   408,   129,    28,    71,   156,
     172,   173,   174,    57,   161,    58,    11,   179,    11,    62,
      64,    13,    56,    56,   171,   173,   173,   240,   281,   152,
      93,    15,    22,    25,    68,    68,    26,   100,    93,    59,
      22,    62,    22,    11,    26,   100,    26,    39,     3,     4,
       5,     6,   214,   116,   216,    11,   218,    29,    13,    13,
      32,   116,    54,    31,    32,    49,   129,    57,    23,    61,
      25,    25,    27,    56,    13,    57,    68,    57,    11,    57,
     242,    64,    57,   206,    39,    39,    25,   210,   211,   152,
      68,    13,    60,    68,   241,    34,    64,   152,    31,    32,
      39,    68,   264,    25,    59,   364,    61,    61,    56,    68,
      65,    66,    67,    68,    68,   263,    64,    39,   266,   281,
      58,   269,    61,   271,    62,    64,   249,    60,   251,    68,
      56,    64,    54,    22,   352,   282,   395,    26,    64,    61,
     287,    22,    64,   206,   397,    26,    68,   210,   211,    22,
      22,   206,   314,    26,    26,   210,   211,    59,    61,   321,
      13,    12,    59,    22,    11,   327,    68,    26,    57,    20,
     293,    68,    25,    24,   336,    11,    57,    60,   325,    30,
      11,    11,    34,   330,    57,    57,    39,   349,   251,   351,
     352,   353,   289,   316,    10,    11,   251,   359,    57,    13,
      34,   363,   364,    59,    56,   367,    59,    23,    61,   371,
      60,    25,    68,   361,   362,    68,    68,    13,    63,    12,
      36,    63,    56,   385,    40,    39,    19,    20,    11,    25,
     293,    24,    58,   395,    68,   397,    62,    30,   293,    68,
      54,   403,   404,    39,    54,   407,    55,    61,    31,    32,
      64,    67,    11,   316,    68,    64,    33,    56,    11,    54,
     408,   316,    39,    40,    63,    61,    65,    66,    64,    68,
      59,    87,    68,    50,    51,    52,    53,    60,    59,    68,
      61,    64,    63,    99,     3,     4,     5,     6,    11,     8,
       9,    10,    59,    11,    13,    59,    64,    16,    17,   115,
      60,    20,    21,    55,    23,    24,    25,    42,    27,    28,
      29,    30,    64,    60,    43,    56,    35,    36,    37,    38,
      39,    40,    63,    68,    65,    66,    59,    68,    35,    36,
      63,    38,    65,    66,    41,    68,    58,    58,    57,    11,
      59,    60,    61,    55,    11,    11,    65,    66,    67,    68,
      62,    63,    64,     3,     4,     5,     6,   173,     8,     9,
      10,    11,    68,    13,    62,    11,    16,    17,    58,    56,
      20,    21,    11,    23,    24,    25,    11,    27,    28,    29,
      30,    11,    11,    54,    54,    35,    36,    37,    38,    39,
      40,   207,    11,   169,   170,    56,    34,    62,    62,   175,
      44,    45,    46,    47,    48,    49,    62,    62,    57,    59,
      60,    61,    14,    18,    62,    65,    66,    67,    68,     3,
       4,     5,     6,    56,     8,     9,    10,    64,    56,    13,
      11,    14,    16,    17,    60,    58,    20,    21,    56,    23,
      24,    25,    58,    27,    28,    29,    30,    13,    13,   327,
     371,    35,    36,    37,    38,    39,    40,   108,    99,    60,
     351,   249,   352,   395,   219,   227,   220,   232,     3,     4,
       5,     6,    -1,   404,    -1,    59,    60,    61,    13,   207,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    58,    59,    -1,    61,    -1,    -1,    13,
      65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,    23,
      -1,    25,    33,    27,    35,    36,    -1,    38,    39,    40,
      41,    35,    36,    37,    38,    39,    40,    -1,    -1,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    33,    27,    35,    36,    -1,    38,    39,    40,    41,
      35,    36,    37,    38,    39,    40,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    57,    -1,    59,    60,    61,    13,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,    -1,
      -1,    59,    13,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    62,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    58,    59,    -1,    61,    -1,    -1,
      13,    65,    66,    67,    68,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    11,    59,    13,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
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
      37,    38,    39,    40,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    25,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,    68
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
      59,    59,   142,   149,    60,   120,    60,   150,    64,    42,
      43,    44,    45,    46,    47,    48,    49,    72,    35,    36,
      38,    41,   175,    33,    39,    40,    50,    51,    52,    53,
      73,    59,    61,    63,   152,   153,   154,   156,   157,    58,
     117,    58,    68,   158,    11,   158,    11,    68,    93,    93,
     158,    68,    94,   142,    18,    84,    85,    94,   112,   138,
     139,   141,   142,   158,    60,    94,   142,    93,    57,    87,
      11,    62,    55,    31,    32,    54,    73,   174,   175,   117,
      57,   167,    11,    58,   117,   117,    56,    57,   120,   122,
     123,   124,   125,   142,   142,   151,   142,   144,   145,   146,
     147,   149,    56,   158,    62,   142,    59,    68,   118,   119,
     117,    11,    84,   142,    84,    55,    84,    11,    84,    54,
      22,    26,    57,   132,   133,   134,    11,    60,    11,    87,
     158,    54,   158,    54,   173,    11,   117,    56,    56,    64,
      57,    64,    62,    62,    57,    34,    58,   142,    58,    62,
     117,   142,    14,    18,    11,    85,   142,    18,   158,    57,
     133,    62,    60,   142,    57,   132,   142,    57,   123,   120,
     125,   142,   142,    56,    58,    62,    58,   142,    56,    84,
      84,   136,   142,    94,   140,    11,   142,    86,    57,   132,
      60,    57,    56,    64,    64,   142,    58,    62,    14,   140,
      57,    57,   132,   142,   151,    58,   142,    84,   136,    57,
      56,    58
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
     155,   155,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   163,   164,   165,   165,
     166,   166,   167,   167,   168,   169,   170,   171,   171,   172,
     172,   172,   172,   172,   172,   173,   173,   174,   174,   174,
     175,   175,   175,   175
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
       8,     6,     4,     4,     4,     2,     4,     1,     3,     4,
       2,     3,     2,     1,     1,     3,     2,     5,     4,     3,
       2,     3,     3,     2,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1
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
  case 6:
#line 71 "src/parser.y"
             {;}
#line 1903 "parser.tab.c"
    break;

  case 7:
#line 72 "src/parser.y"
              {;}
#line 1909 "parser.tab.c"
    break;

  case 8:
#line 73 "src/parser.y"
                 {;}
#line 1915 "parser.tab.c"
    break;

  case 9:
#line 74 "src/parser.y"
                {;}
#line 1921 "parser.tab.c"
    break;

  case 10:
#line 75 "src/parser.y"
              {;}
#line 1927 "parser.tab.c"
    break;

  case 11:
#line 76 "src/parser.y"
               {;}
#line 1933 "parser.tab.c"
    break;

  case 12:
#line 80 "src/parser.y"
            {;}
#line 1939 "parser.tab.c"
    break;

  case 13:
#line 81 "src/parser.y"
              {;}
#line 1945 "parser.tab.c"
    break;

  case 14:
#line 82 "src/parser.y"
              {;}
#line 1951 "parser.tab.c"
    break;

  case 15:
#line 83 "src/parser.y"
              {;}
#line 1957 "parser.tab.c"
    break;

  case 16:
#line 84 "src/parser.y"
              {;}
#line 1963 "parser.tab.c"
    break;

  case 17:
#line 85 "src/parser.y"
              {;}
#line 1969 "parser.tab.c"
    break;

  case 18:
#line 86 "src/parser.y"
                 {;}
#line 1975 "parser.tab.c"
    break;

  case 19:
#line 90 "src/parser.y"
             {;}
#line 1981 "parser.tab.c"
    break;

  case 20:
#line 91 "src/parser.y"
              {;}
#line 1987 "parser.tab.c"
    break;

  case 21:
#line 92 "src/parser.y"
              {;}
#line 1993 "parser.tab.c"
    break;

  case 22:
#line 93 "src/parser.y"
              {;}
#line 1999 "parser.tab.c"
    break;

  case 23:
#line 94 "src/parser.y"
              {;}
#line 2005 "parser.tab.c"
    break;

  case 24:
#line 95 "src/parser.y"
              {;}
#line 2011 "parser.tab.c"
    break;

  case 25:
#line 99 "src/parser.y"
                            {;}
#line 2017 "parser.tab.c"
    break;

  case 26:
#line 103 "src/parser.y"
                   {;}
#line 2023 "parser.tab.c"
    break;

  case 27:
#line 107 "src/parser.y"
                                         {;}
#line 2029 "parser.tab.c"
    break;

  case 28:
#line 108 "src/parser.y"
                            {;}
#line 2035 "parser.tab.c"
    break;

  case 29:
#line 112 "src/parser.y"
                                                   {;}
#line 2041 "parser.tab.c"
    break;

  case 30:
#line 113 "src/parser.y"
                                      {;}
#line 2047 "parser.tab.c"
    break;

  case 31:
#line 114 "src/parser.y"
                            {;}
#line 2053 "parser.tab.c"
    break;

  case 32:
#line 118 "src/parser.y"
                                         {;}
#line 2059 "parser.tab.c"
    break;

  case 33:
#line 119 "src/parser.y"
                            {;}
#line 2065 "parser.tab.c"
    break;

  case 34:
#line 123 "src/parser.y"
                               {;}
#line 2071 "parser.tab.c"
    break;

  case 35:
#line 124 "src/parser.y"
                         {;}
#line 2077 "parser.tab.c"
    break;

  case 36:
#line 125 "src/parser.y"
                     {;}
#line 2083 "parser.tab.c"
    break;

  case 43:
#line 144 "src/parser.y"
                                       {;}
#line 2089 "parser.tab.c"
    break;

  case 62:
#line 178 "src/parser.y"
                                                 {;}
#line 2095 "parser.tab.c"
    break;

  case 63:
#line 179 "src/parser.y"
                                       {;}
#line 2101 "parser.tab.c"
    break;

  case 64:
#line 183 "src/parser.y"
                   {;}
#line 2107 "parser.tab.c"
    break;

  case 65:
#line 186 "src/parser.y"
                                           {;}
#line 2113 "parser.tab.c"
    break;

  case 66:
#line 187 "src/parser.y"
                                                          {;}
#line 2119 "parser.tab.c"
    break;

  case 68:
#line 195 "src/parser.y"
                  {;}
#line 2125 "parser.tab.c"
    break;

  case 74:
#line 206 "src/parser.y"
          {;}
#line 2131 "parser.tab.c"
    break;

  case 80:
#line 227 "src/parser.y"
                    {;}
#line 2137 "parser.tab.c"
    break;

  case 81:
#line 228 "src/parser.y"
                                               {;}
#line 2143 "parser.tab.c"
    break;

  case 82:
#line 229 "src/parser.y"
                                   {;}
#line 2149 "parser.tab.c"
    break;

  case 88:
#line 244 "src/parser.y"
                        {;}
#line 2155 "parser.tab.c"
    break;

  case 89:
#line 245 "src/parser.y"
                                                   {;}
#line 2161 "parser.tab.c"
    break;

  case 90:
#line 246 "src/parser.y"
                                     {;}
#line 2167 "parser.tab.c"
    break;

  case 99:
#line 269 "src/parser.y"
                   {;}
#line 2173 "parser.tab.c"
    break;

  case 100:
#line 270 "src/parser.y"
               {;}
#line 2179 "parser.tab.c"
    break;

  case 101:
#line 274 "src/parser.y"
                             {;}
#line 2185 "parser.tab.c"
    break;

  case 102:
#line 275 "src/parser.y"
                                             {;}
#line 2191 "parser.tab.c"
    break;

  case 103:
#line 276 "src/parser.y"
                                                   {;}
#line 2197 "parser.tab.c"
    break;

  case 106:
#line 285 "src/parser.y"
                            {;}
#line 2203 "parser.tab.c"
    break;

  case 107:
#line 286 "src/parser.y"
                                      {;}
#line 2209 "parser.tab.c"
    break;

  case 108:
#line 287 "src/parser.y"
                       {;}
#line 2215 "parser.tab.c"
    break;

  case 109:
#line 291 "src/parser.y"
                                        {;}
#line 2221 "parser.tab.c"
    break;

  case 110:
#line 292 "src/parser.y"
                     {;}
#line 2227 "parser.tab.c"
    break;

  case 111:
#line 296 "src/parser.y"
                                   {;}
#line 2233 "parser.tab.c"
    break;

  case 118:
#line 312 "src/parser.y"
                                                 {;}
#line 2239 "parser.tab.c"
    break;

  case 124:
#line 324 "src/parser.y"
                                          {;}
#line 2245 "parser.tab.c"
    break;

  case 125:
#line 328 "src/parser.y"
                   {;}
#line 2251 "parser.tab.c"
    break;

  case 127:
#line 333 "src/parser.y"
                             {;}
#line 2257 "parser.tab.c"
    break;

  case 128:
#line 334 "src/parser.y"
                                           {;}
#line 2263 "parser.tab.c"
    break;

  case 129:
#line 335 "src/parser.y"
                                                 {;}
#line 2269 "parser.tab.c"
    break;

  case 130:
#line 339 "src/parser.y"
                                    {;}
#line 2275 "parser.tab.c"
    break;

  case 139:
#line 363 "src/parser.y"
               {;}
#line 2281 "parser.tab.c"
    break;

  case 140:
#line 364 "src/parser.y"
                                {;}
#line 2287 "parser.tab.c"
    break;

  case 141:
#line 369 "src/parser.y"
              {;}
#line 2293 "parser.tab.c"
    break;

  case 142:
#line 370 "src/parser.y"
                      {;}
#line 2299 "parser.tab.c"
    break;

  case 143:
#line 375 "src/parser.y"
                 {;}
#line 2305 "parser.tab.c"
    break;

  case 144:
#line 376 "src/parser.y"
                         {;}
#line 2311 "parser.tab.c"
    break;

  case 145:
#line 380 "src/parser.y"
                   {;}
#line 2317 "parser.tab.c"
    break;

  case 147:
#line 388 "src/parser.y"
                                    {;}
#line 2323 "parser.tab.c"
    break;

  case 148:
#line 389 "src/parser.y"
                                                        {;}
#line 2329 "parser.tab.c"
    break;

  case 149:
#line 390 "src/parser.y"
                                                 {;}
#line 2335 "parser.tab.c"
    break;

  case 150:
#line 391 "src/parser.y"
                                                                   {;}
#line 2341 "parser.tab.c"
    break;

  case 151:
#line 392 "src/parser.y"
                                                        {;}
#line 2347 "parser.tab.c"
    break;

  case 152:
#line 393 "src/parser.y"
                                                                          {;}
#line 2353 "parser.tab.c"
    break;

  case 153:
#line 394 "src/parser.y"
                                                                    {;}
#line 2359 "parser.tab.c"
    break;

  case 154:
#line 395 "src/parser.y"
                                                                                      {;}
#line 2365 "parser.tab.c"
    break;

  case 155:
#line 399 "src/parser.y"
                                          {;}
#line 2371 "parser.tab.c"
    break;

  case 156:
#line 400 "src/parser.y"
                         {;}
#line 2377 "parser.tab.c"
    break;

  case 157:
#line 403 "src/parser.y"
                                           {;}
#line 2383 "parser.tab.c"
    break;

  case 158:
#line 407 "src/parser.y"
                            {;}
#line 2389 "parser.tab.c"
    break;

  case 159:
#line 408 "src/parser.y"
                  {;}
#line 2395 "parser.tab.c"
    break;

  case 160:
#line 412 "src/parser.y"
                    {;}
#line 2401 "parser.tab.c"
    break;

  case 161:
#line 416 "src/parser.y"
                            {;}
#line 2407 "parser.tab.c"
    break;

  case 162:
#line 417 "src/parser.y"
                                               {;}
#line 2413 "parser.tab.c"
    break;

  case 163:
#line 418 "src/parser.y"
                                         {;}
#line 2419 "parser.tab.c"
    break;

  case 164:
#line 419 "src/parser.y"
                                        {;}
#line 2425 "parser.tab.c"
    break;

  case 165:
#line 420 "src/parser.y"
                                                           {;}
#line 2431 "parser.tab.c"
    break;

  case 166:
#line 421 "src/parser.y"
                                                          {;}
#line 2437 "parser.tab.c"
    break;

  case 167:
#line 425 "src/parser.y"
                  {;}
#line 2443 "parser.tab.c"
    break;

  case 168:
#line 426 "src/parser.y"
                              {;}
#line 2449 "parser.tab.c"
    break;

  case 169:
#line 427 "src/parser.y"
                              {;}
#line 2455 "parser.tab.c"
    break;

  case 170:
#line 428 "src/parser.y"
                                {;}
#line 2461 "parser.tab.c"
    break;

  case 175:
#line 446 "src/parser.y"
                         {;}
#line 2467 "parser.tab.c"
    break;

  case 178:
#line 452 "src/parser.y"
                     {;}
#line 2473 "parser.tab.c"
    break;

  case 179:
#line 456 "src/parser.y"
                                                     {;}
#line 2479 "parser.tab.c"
    break;

  case 181:
#line 461 "src/parser.y"
                                                        {;}
#line 2485 "parser.tab.c"
    break;

  case 199:
#line 497 "src/parser.y"
                                          {;}
#line 2491 "parser.tab.c"
    break;

  case 202:
#line 507 "src/parser.y"
                       {;}
#line 2497 "parser.tab.c"
    break;

  case 203:
#line 511 "src/parser.y"
                                          {;}
#line 2503 "parser.tab.c"
    break;

  case 204:
#line 515 "src/parser.y"
                                                 {;}
#line 2509 "parser.tab.c"
    break;

  case 205:
#line 516 "src/parser.y"
                                        {;}
#line 2515 "parser.tab.c"
    break;

  case 206:
#line 517 "src/parser.y"
                                                    {;}
#line 2521 "parser.tab.c"
    break;

  case 207:
#line 518 "src/parser.y"
                                                              {;}
#line 2527 "parser.tab.c"
    break;

  case 208:
#line 519 "src/parser.y"
                                                                    {;}
#line 2533 "parser.tab.c"
    break;

  case 209:
#line 520 "src/parser.y"
                                                                               {;}
#line 2539 "parser.tab.c"
    break;

  case 210:
#line 524 "src/parser.y"
                                                                         {;}
#line 2545 "parser.tab.c"
    break;

  case 211:
#line 525 "src/parser.y"
                                                          {;}
#line 2551 "parser.tab.c"
    break;

  case 212:
#line 526 "src/parser.y"
                                         {;}
#line 2557 "parser.tab.c"
    break;

  case 213:
#line 527 "src/parser.y"
                                        {;}
#line 2563 "parser.tab.c"
    break;

  case 214:
#line 531 "src/parser.y"
                                      {;}
#line 2569 "parser.tab.c"
    break;

  case 215:
#line 535 "src/parser.y"
                             {;}
#line 2575 "parser.tab.c"
    break;

  case 216:
#line 536 "src/parser.y"
                                                      {;}
#line 2581 "parser.tab.c"
    break;

  case 219:
#line 545 "src/parser.y"
                                               {;}
#line 2587 "parser.tab.c"
    break;

  case 220:
#line 546 "src/parser.y"
                        {;}
#line 2593 "parser.tab.c"
    break;

  case 225:
#line 560 "src/parser.y"
                           {;}
#line 2599 "parser.tab.c"
    break;

  case 226:
#line 564 "src/parser.y"
                        {;}
#line 2605 "parser.tab.c"
    break;

  case 227:
#line 568 "src/parser.y"
                                             {;}
#line 2611 "parser.tab.c"
    break;

  case 228:
#line 572 "src/parser.y"
                                                  {;}
#line 2617 "parser.tab.c"
    break;

  case 229:
#line 573 "src/parser.y"
                                      {;}
#line 2623 "parser.tab.c"
    break;

  case 230:
#line 577 "src/parser.y"
                         {;}
#line 2629 "parser.tab.c"
    break;

  case 231:
#line 578 "src/parser.y"
                                         {;}
#line 2635 "parser.tab.c"
    break;

  case 234:
#line 588 "src/parser.y"
                     {;}
#line 2641 "parser.tab.c"
    break;

  case 236:
#line 596 "src/parser.y"
                                               {;}
#line 2647 "parser.tab.c"
    break;

  case 239:
#line 605 "src/parser.y"
                    {;}
#line 2653 "parser.tab.c"
    break;

  case 240:
#line 606 "src/parser.y"
                    {;}
#line 2659 "parser.tab.c"
    break;

  case 241:
#line 607 "src/parser.y"
                    {;}
#line 2665 "parser.tab.c"
    break;

  case 243:
#line 609 "src/parser.y"
                    {;}
#line 2671 "parser.tab.c"
    break;

  case 244:
#line 610 "src/parser.y"
                    {;}
#line 2677 "parser.tab.c"
    break;

  case 245:
#line 614 "src/parser.y"
                   {;}
#line 2683 "parser.tab.c"
    break;

  case 246:
#line 615 "src/parser.y"
                             {;}
#line 2689 "parser.tab.c"
    break;

  case 247:
#line 619 "src/parser.y"
           {;}
#line 2695 "parser.tab.c"
    break;

  case 248:
#line 620 "src/parser.y"
                    {;}
#line 2701 "parser.tab.c"
    break;

  case 249:
#line 621 "src/parser.y"
                    {;}
#line 2707 "parser.tab.c"
    break;

  case 250:
#line 625 "src/parser.y"
            {;}
#line 2713 "parser.tab.c"
    break;

  case 251:
#line 626 "src/parser.y"
              {;}
#line 2719 "parser.tab.c"
    break;

  case 252:
#line 627 "src/parser.y"
             {;}
#line 2725 "parser.tab.c"
    break;

  case 253:
#line 628 "src/parser.y"
              {;}
#line 2731 "parser.tab.c"
    break;


#line 2735 "parser.tab.c"

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
#line 630 "src/parser.y"




	











	


