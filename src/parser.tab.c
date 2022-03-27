/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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


#line 96 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER_VAL = 3,                /* INTEGER_VAL  */
  YYSYMBOL_FLOAT_VAL = 4,                  /* FLOAT_VAL  */
  YYSYMBOL_TRUE = 5,                       /* TRUE  */
  YYSYMBOL_FALSE = 6,                      /* FALSE  */
  YYSYMBOL_NULLPOINTER = 7,                /* NULLPOINTER  */
  YYSYMBOL_BREAK = 8,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_SCOLON = 11,                    /* SCOLON  */
  YYSYMBOL_FUNC = 12,                      /* FUNC  */
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_PACKAGE = 15,                   /* PACKAGE  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_RANGE = 18,                     /* RANGE  */
  YYSYMBOL_IMPORT = 19,                    /* IMPORT  */
  YYSYMBOL_VAR = 20,                       /* VAR  */
  YYSYMBOL_SWITCH = 21,                    /* SWITCH  */
  YYSYMBOL_CASE = 22,                      /* CASE  */
  YYSYMBOL_NEW = 23,                       /* NEW  */
  YYSYMBOL_CONST = 24,                     /* CONST  */
  YYSYMBOL_MAP = 25,                       /* MAP  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_MAKE = 27,                      /* MAKE  */
  YYSYMBOL_GOTO = 28,                      /* GOTO  */
  YYSYMBOL_FALLTHROUGH = 29,               /* FALLTHROUGH  */
  YYSYMBOL_TYPE = 30,                      /* TYPE  */
  YYSYMBOL_PLUSPLUS = 31,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 32,                /* MINUSMINUS  */
  YYSYMBOL_ANDNOT = 33,                    /* ANDNOT  */
  YYSYMBOL_ELIPSIS = 34,                   /* ELIPSIS  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_SUB = 36,                       /* SUB  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_XOR = 38,                       /* XOR  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_LOGOR = 42,                     /* LOGOR  */
  YYSYMBOL_LOGAND = 43,                    /* LOGAND  */
  YYSYMBOL_ISEQ = 44,                      /* ISEQ  */
  YYSYMBOL_NEQ = 45,                       /* NEQ  */
  YYSYMBOL_LESSEQ = 46,                    /* LESSEQ  */
  YYSYMBOL_GRTEQ = 47,                     /* GRTEQ  */
  YYSYMBOL_GRT = 48,                       /* GRT  */
  YYSYMBOL_LESS = 49,                      /* LESS  */
  YYSYMBOL_MOD = 50,                       /* MOD  */
  YYSYMBOL_QUOT = 51,                      /* QUOT  */
  YYSYMBOL_SHL = 52,                       /* SHL  */
  YYSYMBOL_SHR = 53,                       /* SHR  */
  YYSYMBOL_EQ = 54,                        /* EQ  */
  YYSYMBOL_INFER_EQ = 55,                  /* INFER_EQ  */
  YYSYMBOL_RIGHTPARAN = 56,                /* RIGHTPARAN  */
  YYSYMBOL_RIGHTBRACE = 57,                /* RIGHTBRACE  */
  YYSYMBOL_RIGHTSQUARE = 58,               /* RIGHTSQUARE  */
  YYSYMBOL_LEFTPARAN = 59,                 /* LEFTPARAN  */
  YYSYMBOL_LEFTBRACE = 60,                 /* LEFTBRACE  */
  YYSYMBOL_LEFTSQUARE = 61,                /* LEFTSQUARE  */
  YYSYMBOL_COLON = 62,                     /* COLON  */
  YYSYMBOL_DOT = 63,                       /* DOT  */
  YYSYMBOL_COMMA = 64,                     /* COMMA  */
  YYSYMBOL_RAW_STRING = 65,                /* RAW_STRING  */
  YYSYMBOL_INTERPRETED_STRING = 66,        /* INTERPRETED_STRING  */
  YYSYMBOL_BYTE_VAL = 67,                  /* BYTE_VAL  */
  YYSYMBOL_IDENTIFIER = 68,                /* IDENTIFIER  */
  YYSYMBOL_ASSGN_OP = 69,                  /* ASSGN_OP  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_SourceFile = 71,                /* SourceFile  */
  YYSYMBOL_OpenBlock = 72,                 /* OpenBlock  */
  YYSYMBOL_CloseBlock = 73,                /* CloseBlock  */
  YYSYMBOL_PackageClause = 74,             /* PackageClause  */
  YYSYMBOL_PackageName = 75,               /* PackageName  */
  YYSYMBOL_ImportDeclList = 76,            /* ImportDeclList  */
  YYSYMBOL_ImportDecl = 77,                /* ImportDecl  */
  YYSYMBOL_ImportSpecList = 78,            /* ImportSpecList  */
  YYSYMBOL_ImportSpec = 79,                /* ImportSpec  */
  YYSYMBOL_ImportPath = 80,                /* ImportPath  */
  YYSYMBOL_TopLevelDeclList = 81,          /* TopLevelDeclList  */
  YYSYMBOL_TopLevelDecl = 82,              /* TopLevelDecl  */
  YYSYMBOL_Block = 83,                     /* Block  */
  YYSYMBOL_Condition = 84,                 /* Condition  */
  YYSYMBOL_StatementList = 85,             /* StatementList  */
  YYSYMBOL_Statement = 86,                 /* Statement  */
  YYSYMBOL_Declaration = 87,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 88,              /* FunctionDecl  */
  YYSYMBOL_MethodDecl = 89,                /* MethodDecl  */
  YYSYMBOL_LabeledStmt = 90,               /* LabeledStmt  */
  YYSYMBOL_SimpleStmt = 91,                /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 92,                 /* EmptyStmt  */
  YYSYMBOL_EmptyExpr = 93,                 /* EmptyExpr  */
  YYSYMBOL_ExpressionStmt = 94,            /* ExpressionStmt  */
  YYSYMBOL_IncDecStmt = 95,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 96,                /* Assignment  */
  YYSYMBOL_ShortVarDecl = 97,              /* ShortVarDecl  */
  YYSYMBOL_VarDecl = 98,                   /* VarDecl  */
  YYSYMBOL_VarSpecList = 99,               /* VarSpecList  */
  YYSYMBOL_VarSpec = 100,                  /* VarSpec  */
  YYSYMBOL_FunctionBody = 101,             /* FunctionBody  */
  YYSYMBOL_Signature = 102,                /* Signature  */
  YYSYMBOL_Result = 103,                   /* Result  */
  YYSYMBOL_TypeList = 104,                 /* TypeList  */
  YYSYMBOL_Parameters = 105,               /* Parameters  */
  YYSYMBOL_ParameterList = 106,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 107,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 108,           /* IdentifierList  */
  YYSYMBOL_Receiver = 109,                 /* Receiver  */
  YYSYMBOL_CompositeLit = 110,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 111,              /* LiteralType  */
  YYSYMBOL_Type = 112,                     /* Type  */
  YYSYMBOL_Operand = 113,                  /* Operand  */
  YYSYMBOL_OperandName = 114,              /* OperandName  */
  YYSYMBOL_LiteralValue = 115,             /* LiteralValue  */
  YYSYMBOL_SliceType = 116,                /* SliceType  */
  YYSYMBOL_ElementList = 117,              /* ElementList  */
  YYSYMBOL_KeyedElement = 118,             /* KeyedElement  */
  YYSYMBOL_Key = 119,                      /* Key  */
  YYSYMBOL_Element = 120,                  /* Element  */
  YYSYMBOL_ReturnStmt = 121,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 122,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 123,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 124,                 /* GotoStmt  */
  YYSYMBOL_SwitchStmt = 125,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 126,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 127,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 128,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 129,           /* ExprSwitchCase  */
  YYSYMBOL_FallthroughStmt = 130,          /* FallthroughStmt  */
  YYSYMBOL_IfStmt = 131,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 132,                  /* ForStmt  */
  YYSYMBOL_forMarker = 133,                /* forMarker  */
  YYSYMBOL_forMarkerEnd = 134,             /* forMarkerEnd  */
  YYSYMBOL_Empty = 135,                    /* Empty  */
  YYSYMBOL_Expression = 136,               /* Expression  */
  YYSYMBOL_UnaryExpr = 137,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 138,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 139,            /* StructLiteral  */
  YYSYMBOL_KeyValueList = 140,             /* KeyValueList  */
  YYSYMBOL_Selector = 141,                 /* Selector  */
  YYSYMBOL_Index = 142,                    /* Index  */
  YYSYMBOL_Slice = 143,                    /* Slice  */
  YYSYMBOL_MakeExpr = 144,                 /* MakeExpr  */
  YYSYMBOL_TypeAssertion = 145,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 146,                /* Arguments  */
  YYSYMBOL_ExpressionList = 147,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 148,                 /* TypeDecl  */
  YYSYMBOL_TypeSpec = 149,                 /* TypeSpec  */
  YYSYMBOL_TypeDef = 150,                  /* TypeDef  */
  YYSYMBOL_MapType = 151,                  /* MapType  */
  YYSYMBOL_StructType = 152,               /* StructType  */
  YYSYMBOL_FieldDeclList = 153,            /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 154,                /* FieldDecl  */
  YYSYMBOL_PointerType = 155,              /* PointerType  */
  YYSYMBOL_BaseType = 156,                 /* BaseType  */
  YYSYMBOL_ArrayType = 157,                /* ArrayType  */
  YYSYMBOL_Literal = 158,                  /* Literal  */
  YYSYMBOL_BasicLit = 159,                 /* BasicLit  */
  YYSYMBOL_String = 160                    /* String  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if 1

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
#endif /* 1 */

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
#define YYLAST   1622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  416

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    72,    72,    85,    92,    98,   107,   116,   122,   131,
     137,   141,   150,   156,   164,   170,   175,   184,   193,   201,
     211,   218,   226,   236,   246,   256,   265,   281,   289,   297,
     305,   312,   319,   326,   333,   340,   347,   354,   361,   371,
     378,   398,   410,   421,   428,   439,   450,   456,   463,   469,
     475,   483,   489,   497,   507,   515,   525,   583,   648,   654,
     663,   672,   681,   699,   723,   794,   803,   829,   867,   873,
     882,   891,   900,   906,   913,   922,   928,   940,   963,   973,
     982,   989,   996,  1002,  1008,  1014,  1020,  1025,  1034,  1040,
    1049,  1055,  1062,  1071,  1089,  1093,  1099,  1107,  1116,  1123,
    1139,  1146,  1156,  1161,  1169,  1176,  1187,  1192,  1203,  1209,
    1220,  1225,  1236,  1247,  1251,  1252,  1253,  1254,  1255,  1256,
    1257,  1258,  1262,  1267,  1273,  1281,  1285,  1291,  1297,  1315,
    1337,  1359,  1381,  1406,  1434,  1445,  1457,  1469,  1482,  1506,
    1514,  1522,  1561,  1588,  1613,  1639,  1665,  1690,  1715,  1741,
    1766,  1791,  1817,  1842,  1868,  1893,  1919,  1944,  1969,  1994,
    2019,  2044,  2053,  2066,  2074,  2082,  2090,  2098,  2109,  2117,
    2124,  2133,  2134,  2140,  2147,  2148,  2158,  2166,  2172,  2183,
    2195,  2207,  2214,  2218,  2224,  2231,  2239,  2252,  2262,  2271,
    2279,  2290,  2298,  2302,  2311,  2325,  2334,  2347,  2351,  2375,
    2389,  2396,  2412,  2423,  2435,  2441,  2465,  2480,  2485,  2499,
    2511,  2524,  2531,  2541,  2548,  2555,  2562,  2569,  2576,  2586,
    2590
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER_VAL",
  "FLOAT_VAL", "TRUE", "FALSE", "NULLPOINTER", "BREAK", "CONTINUE",
  "RETURN", "SCOLON", "FUNC", "STRUCT", "ELSE", "PACKAGE", "IF", "FOR",
  "RANGE", "IMPORT", "VAR", "SWITCH", "CASE", "NEW", "CONST", "MAP",
  "DEFAULT", "MAKE", "GOTO", "FALLTHROUGH", "TYPE", "PLUSPLUS",
  "MINUSMINUS", "ANDNOT", "ELIPSIS", "ADD", "SUB", "NOT", "XOR", "MUL",
  "AND", "OR", "LOGOR", "LOGAND", "ISEQ", "NEQ", "LESSEQ", "GRTEQ", "GRT",
  "LESS", "MOD", "QUOT", "SHL", "SHR", "EQ", "INFER_EQ", "RIGHTPARAN",
  "RIGHTBRACE", "RIGHTSQUARE", "LEFTPARAN", "LEFTBRACE", "LEFTSQUARE",
  "COLON", "DOT", "COMMA", "RAW_STRING", "INTERPRETED_STRING", "BYTE_VAL",
  "IDENTIFIER", "ASSGN_OP", "$accept", "SourceFile", "OpenBlock",
  "CloseBlock", "PackageClause", "PackageName", "ImportDeclList",
  "ImportDecl", "ImportSpecList", "ImportSpec", "ImportPath",
  "TopLevelDeclList", "TopLevelDecl", "Block", "Condition",
  "StatementList", "Statement", "Declaration", "FunctionDecl",
  "MethodDecl", "LabeledStmt", "SimpleStmt", "EmptyStmt", "EmptyExpr",
  "ExpressionStmt", "IncDecStmt", "Assignment", "ShortVarDecl", "VarDecl",
  "VarSpecList", "VarSpec", "FunctionBody", "Signature", "Result",
  "TypeList", "Parameters", "ParameterList", "ParameterDecl",
  "IdentifierList", "Receiver", "CompositeLit", "LiteralType", "Type",
  "Operand", "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase",
  "FallthroughStmt", "IfStmt", "ForStmt", "forMarker", "forMarkerEnd",
  "Empty", "Expression", "UnaryExpr", "PrimaryExpr", "StructLiteral",
  "KeyValueList", "Selector", "Index", "Slice", "MakeExpr",
  "TypeAssertion", "Arguments", "ExpressionList", "TypeDecl", "TypeSpec",
  "TypeDef", "MapType", "StructType", "FieldDeclList", "FieldDecl",
  "PointerType", "BaseType", "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-346)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-196)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,    18,   119,   142,  -346,  -346,  -346,   116,   231,   214,
     154,   273,   -33,  -346,  -346,   -33,  -346,  -346,  -346,    83,
      93,   108,   173,   169,   180,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,   303,   186,  -346,  -346,   -30,  -346,  -346,    98,
     130,  -346,  -346,   118,   143,   182,  -346,  -346,  -346,   224,
    -346,  -346,   226,  -346,  -346,     1,  -346,   124,   179,   179,
      16,   242,   206,   207,   182,   135,   213,  -346,  1000,  -346,
     222,  -346,  -346,  -346,  -346,  -346,  -346,   271,  -346,  -346,
    -346,  -346,    76,  -346,   235,    15,   235,  -346,   289,  -346,
      -9,   182,  -346,  -346,  -346,  -346,  -346,  -346,   251,   252,
     243,    14,    14,    14,    14,    14,   182,  1000,  -346,  -346,
     255,  -346,   257,  1420,  -346,   188,  -346,  -346,  -346,  -346,
    -346,  1527,   254,  1000,   267,  -346,  -346,  -346,  -346,  -346,
    -346,   182,  -346,  -346,  -346,  -346,  -346,   124,    21,   313,
     276,   182,   182,   374,   188,   188,   188,   255,   257,   188,
     188,  -346,  1483,   567,  -346,  1000,  -346,  1000,  1000,  1000,
    1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
    1000,  1000,  1000,  1000,  1000,  1000,   182,   665,   712,   163,
    -346,  -346,  -346,  -346,  -346,  1000,   254,  -346,   518,  -346,
     208,  -346,   -33,  -346,   314,  -346,   182,   279,   249,  -346,
    -346,  -346,  -346,   265,    57,  -346,   278,  -346,  1324,  1349,
     286,  -346,   223,   223,  -346,  -346,  -346,   223,  1548,  1569,
     311,   311,   311,   311,   311,   311,  -346,  -346,  -346,  -346,
    -346,  -346,   100,   759,  1240,   182,  -346,  1527,   277,   287,
    1000,  -346,   288,   806,   290,  -346,   155,  -346,   447,   342,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,   175,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  1154,    81,
    -346,   182,  -346,  -346,  -346,  -346,  -346,  1000,  -346,   616,
     855,  1000,  -346,   300,  -346,  -346,  1268,  -346,   904,   309,
    -346,  -346,   254,  1047,  1047,   235,    -1,   177,   356,  1085,
    -346,   518,   315,   363,  -346,  1000,  -346,  -346,  1000,  -346,
    1186,  -346,  -346,  -346,  -346,  1527,  1213,  -346,  -346,  1000,
    -346,  1296,  -346,   375,  1108,  -346,   377,   378,  1131,  -346,
    1000,  -346,  -346,    65,  -346,   328,   951,    89,  -346,  -346,
    -346,   254,   254,  -346,  1000,  1000,  1441,  -346,  1000,  1000,
     379,   235,  -346,  -346,  -346,   254,  -346,  -346,   518,    90,
    1374,  -346,   102,  1505,  -346,  -346,  1462,  1397,     0,  -346,
    -346,  1000,  1000,   447,  -346,   151,   183,  -346,  -346,  -346,
     380,  -346,  -346,  -346,   381,   384,  1527,  1527,  -346,  -346,
     198,     0,  -346,  -346,  -346,  -346,  1047,  1047,  -346,  -346,
    -346,  -346,   235,   235,   235,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   219,   220,     0,    11,    16,    17,     0,
       0,     0,     0,     2,     0,    20,    21,    22,    40,    39,
       8,    10,     0,     0,    15,    14,     0,     3,    80,     0,
       0,    79,    58,     0,     0,     0,   198,   199,     7,     0,
      19,     9,     0,    13,    72,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    88,
      62,    89,    85,    87,    82,    84,    83,     0,   200,    18,
      12,    73,     0,    77,     4,    66,    43,    59,     0,    61,
       0,     0,   209,   208,   213,   214,   217,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,   212,
       0,   168,    91,     0,   161,   167,   169,    90,   211,   216,
      78,   195,    64,     0,     0,    74,    76,     3,    42,    65,
       4,     0,    67,    69,    44,    60,   203,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,     0,    91,   162,
     163,    97,     0,     0,    81,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   171,   172,   175,   173,     0,    63,   197,    51,    41,
       0,    71,   207,   202,     0,   204,     0,     0,     0,    86,
      91,    92,    94,   105,     0,    98,     0,   100,   104,     0,
       0,   148,   149,   150,   152,   142,   147,   151,   154,   153,
     155,   156,   159,   157,   158,   160,   144,   143,   145,   146,
     210,   192,     0,     0,     0,     0,   179,   196,   108,   110,
     106,     3,     3,    51,     0,   127,    93,    36,     4,     0,
      27,    28,    29,    46,    47,    48,    49,    50,     0,    30,
      31,    32,    33,    34,   113,    35,    37,    38,    53,     0,
      68,     0,   206,   205,   201,   190,   189,     0,    95,     0,
       0,     0,   176,     0,   193,   182,     0,   180,     0,     0,
     109,   111,   107,    51,    51,     0,     0,    93,     0,   195,
     112,    51,     0,     0,    26,     0,    54,    55,     0,    70,
       0,    96,    99,   105,   101,   104,   177,   194,   181,     0,
     183,     0,   191,     0,   195,   139,     0,   141,   195,   140,
       0,   126,   114,     0,   123,     0,     0,     0,    45,    23,
      25,    57,    56,   188,     0,     0,     0,   184,     0,     0,
       4,     0,   139,   139,   134,   125,   118,   122,    51,     0,
       0,   116,     0,     0,   178,   185,     0,     0,     0,   128,
     140,    52,     0,   124,   115,     0,     0,   120,   187,   186,
       4,     4,     4,     4,     0,     0,    53,   141,   119,   117,
       0,     0,   129,   131,   130,   137,    51,    51,    51,   121,
       4,     4,     0,     0,     0,   133,   132,   140,   140,   140,
       4,     4,     4,   135,   136,   138
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -346,  -346,  -115,  -123,  -346,   396,  -346,   389,  -346,    13,
     304,  -346,   382,   -82,  -346,    44,  -237,    27,  -346,  -346,
    -346,  -242,  -280,  -346,    30,  -346,  -346,  -346,  -346,  -346,
       9,   317,   345,  -346,  -346,   388,  -346,   326,    -5,  -346,
    -346,   269,   285,   266,   161,  -150,  -346,  -346,   133,  -346,
     134,  -346,  -346,  -346,  -346,  -346,  -346,  -315,  -328,  -346,
    -346,  -345,  -346,  -282,  -341,    28,   -65,  -346,   280,  -346,
      72,  -346,  -346,  -346,  -346,  -346,  -346,   -60,  -346,   376,
    -346,  -346,  -346,  -346,   281,  -346,  -346,  -346,  -346,  -346,
      -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    58,   128,     3,    15,     9,    10,    32,    16,
      17,    23,    24,   247,   325,   248,   249,   250,    26,    27,
     251,   252,   253,   384,   254,   255,   256,   257,    28,    60,
      42,   130,    84,   132,   190,    85,    55,    56,   258,    39,
     109,   110,    92,   111,   112,   154,    72,   204,   205,   206,
     207,   259,   260,   261,   262,   263,   264,   333,   334,   335,
     265,   266,   267,   295,   354,   353,   121,   114,   115,   156,
     210,   180,   181,   182,   116,   183,   184,   269,    29,    46,
      47,    73,    74,   138,   139,    75,    93,    76,   117,   118,
     119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   298,   129,   203,   129,   357,    18,   189,   122,    18,
      18,   303,   188,    18,   327,    43,   241,    94,    95,    96,
      97,   330,   362,   382,    33,   331,    54,    62,    62,   383,
      18,    57,    13,    14,   357,    43,    25,    98,    41,    63,
      63,    99,   152,   351,   375,    52,   401,   357,   136,    61,
      25,   323,   326,    64,    64,    43,   332,    81,     1,    41,
     127,   390,   357,   186,   338,    82,   410,   411,   412,    88,
     371,   372,    87,   107,   131,    65,    65,    57,   193,    13,
      14,   108,    67,    67,    41,   137,     4,   330,   208,    41,
     209,   331,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   330,   330,   234,   278,   331,   331,   232,   404,     6,
     237,   279,   356,   268,   330,   302,   293,   294,   331,   203,
     313,    62,   125,   137,   283,     8,   303,    62,    94,    95,
      96,    97,    36,    63,    41,   185,   361,   374,    62,    63,
     308,    37,    40,     7,   402,   403,   284,    64,    98,   377,
      63,    41,    99,    64,   185,    30,    59,    44,   286,   100,
     101,   102,   103,   330,   104,   105,    45,   331,   299,    65,
     292,    19,    66,   268,    48,    65,    67,    68,    66,    20,
     272,    50,    67,   106,   107,    62,    65,    53,    41,    21,
      13,    14,   108,    67,    71,   330,    71,    63,   388,   331,
     -79,    45,   310,   329,   208,   315,   316,   301,    71,   -79,
     330,    64,   235,   321,   331,    71,    19,   369,   324,   328,
     305,   236,   -79,     8,    20,    79,   268,    80,    36,    66,
     389,   -79,   350,    65,    21,   341,    71,   177,   342,   178,
      67,   179,    71,    89,   346,   399,   157,   392,   393,   394,
     395,   160,   161,   162,   270,   148,    90,    71,    91,   370,
     355,   360,   271,   172,   173,   174,   175,   405,   406,   363,
     209,   120,   124,   366,   367,   380,   381,   413,   414,   415,
      11,   123,    71,   268,    12,   127,    13,    14,    71,     4,
     135,   143,    71,    71,   200,   276,   386,   387,   268,   400,
     141,   142,    69,   277,    69,   153,    34,   155,   185,    35,
     407,   408,   409,   187,   195,   273,    69,  -103,    70,    31,
      78,   268,   268,    69,   196,   275,    12,    71,    13,    14,
     280,     4,    83,   282,   157,   290,   158,   159,  -139,   160,
     161,   162,   163,   304,    69,   291,   317,    71,   300,    51,
      69,   172,   173,   174,   175,   322,    12,   336,    13,    14,
     133,     4,   339,   147,   340,    69,   140,    94,    95,    96,
      97,   144,   145,   146,   149,   150,   349,    62,   352,   -46,
     358,   151,   396,   368,   391,   397,    71,     5,    22,    63,
      69,   385,   373,   134,    86,    49,    69,    38,   126,   199,
      69,    69,   312,    64,   314,   398,   191,   364,     0,   194,
      77,     0,   192,     0,     0,     0,   197,   198,     0,     0,
       0,     0,    71,   107,     0,    65,     0,     0,     0,    13,
      14,   108,    67,     0,     0,    69,     0,     0,     0,     0,
      94,    95,    96,    97,     0,   238,   239,   240,   -51,     0,
      62,   230,     0,   241,   242,    69,     0,    20,   243,     0,
      98,     0,    63,     0,    99,   244,   245,    21,     0,     0,
       0,   274,   101,   102,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,   107,   127,    65,     0,
       0,     0,    13,    14,   108,   246,     0,     0,     0,     0,
     289,    94,    95,    96,    97,     0,   238,   239,   240,     0,
       0,    62,     0,     0,   241,   242,     0,     0,    20,   243,
      69,    98,     0,    63,     0,    99,   244,   245,    21,     0,
       0,     0,     0,   101,   102,   103,   309,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97,     0,     0,     0,   107,   127,    65,
      62,     0,     0,    13,    14,   108,   246,     0,     0,     0,
      98,     0,    63,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,     0,   202,     0,   107,   153,    65,    62,
       0,     0,    13,    14,   108,    67,     0,     0,     0,    98,
       0,    63,     0,    99,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,     0,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,    97,     0,   311,     0,   107,   153,    65,    62,     0,
       0,    13,    14,   108,    67,     0,     0,     0,    98,     0,
      63,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,     0,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,     0,
       0,   231,     0,     0,   107,    62,    65,     0,     0,     0,
      13,    14,   108,    67,     0,    98,     0,    63,     0,    99,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
       0,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,     0,     0,     0,     0,
       0,   107,    62,    65,   233,     0,     0,    13,    14,   108,
      67,     0,    98,     0,    63,     0,    99,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,     0,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,     0,     0,     0,     0,   285,   107,    62,
      65,     0,     0,     0,    13,    14,   108,    67,     0,    98,
       0,    63,     0,    99,     0,     0,     0,     0,     0,     0,
       0,   101,   102,   103,     0,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
      96,    97,     0,     0,     0,   107,   296,    65,    62,     0,
       0,    13,    14,   108,   297,     0,     0,     0,    98,     0,
      63,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,     0,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,     0,     0,     0,   107,   153,    65,    62,     0,     0,
      13,    14,   108,    67,     0,     0,     0,    98,     0,    63,
       0,    99,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,     0,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,     0,     0,
       0,     0,   320,   107,    62,    65,     0,     0,     0,    13,
      14,   108,    67,     0,    98,     0,    63,     0,    99,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,     0,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,     0,     0,     0,
     107,   359,    65,    62,     0,     0,    13,    14,   108,    67,
       0,     0,     0,    98,     0,    63,     0,    99,     0,     0,
       0,     0,     0,     0,     0,   101,   102,   103,     0,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97,     0,     0,     0,     0,     0,   107,
      62,    65,     0,     0,     0,    13,    14,   108,    67,     0,
      98,     0,    63,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,    65,     0,
       0,     0,    13,    14,   108,   297,   306,   307,   157,   -53,
     158,   159,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   306,
     307,   157,   -53,   158,   159,   337,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   306,   307,   157,     0,   158,   159,   127,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   306,   307,   157,     0,   158,
     159,   -24,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -195,   157,
       0,   158,   159,  -195,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,     0,   343,     0,     0,     0,   157,     0,   158,   159,
     344,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,   157,     0,   158,   159,   345,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,     0,     0,     0,     0,   287,     0,
       0,   157,   288,   158,   159,     0,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,     0,     0,     0,   318,     0,     0,   157,
     319,   158,   159,     0,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,     0,     0,     0,   347,     0,     0,   157,   348,   158,
     159,     0,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,     0,
       0,     0,   157,     0,   158,   159,  -102,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,     0,     0,     0,   157,     0,   158,
     159,   281,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,     0,
     157,     0,   158,   159,   376,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     0,     0,   157,     0,   158,   159,   127,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   157,     0,   158,   159,   176,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   157,     0,   158,   159,   365,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   157,     0,   158,   159,
     379,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,   157,   201,
     158,   159,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     157,   378,   158,   159,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   157,     0,   158,   159,     0,   160,   161,   162,   163,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   157,     0,   158,   159,     0,   160,   161,   162,
     163,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175
};

static const yytype_int16 yycheck[] =
{
      65,   243,    84,   153,    86,   333,     8,   130,    68,    11,
      12,   248,   127,    15,   294,    20,    16,     3,     4,     5,
       6,    22,   337,   368,    11,    26,    56,    13,    13,   370,
      32,    36,    65,    66,   362,    40,     9,    23,    68,    25,
      25,    27,   107,   325,   359,    32,   391,   375,    57,    40,
      23,   293,   294,    39,    39,    60,    57,    56,    15,    68,
      60,   376,   390,   123,   301,    64,   407,   408,   409,    60,
     352,   353,    56,    59,    59,    61,    61,    82,    57,    65,
      66,    67,    68,    68,    68,    90,    68,    22,   153,    68,
     155,    26,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    22,    22,   178,    57,    26,    26,   177,   398,     0,
     185,    64,    57,   188,    22,   248,   241,   242,    26,   279,
     280,    13,    56,   138,    34,    19,   373,    13,     3,     4,
       5,     6,    59,    25,    68,    64,    57,    57,    13,    25,
      69,    68,    59,    11,   396,   397,    56,    39,    23,    57,
      25,    68,    27,    39,    64,    11,    68,    59,   233,    34,
      35,    36,    37,    22,    39,    40,    68,    26,   243,    61,
     240,    12,    64,   248,    11,    61,    68,    69,    64,    20,
     192,    11,    68,    58,    59,    13,    61,    11,    68,    30,
      65,    66,    67,    68,    43,    22,    45,    25,    57,    26,
      55,    68,   277,   295,   279,   280,   281,    62,    57,    64,
      22,    39,    59,   288,    26,    64,    12,   350,   293,   294,
      55,    68,    55,    19,    20,    11,   301,    11,    59,    64,
      57,    64,   324,    61,    30,   305,    85,    59,   308,    61,
      68,    63,    91,    11,   319,    57,    33,   380,   381,   382,
     383,    38,    39,    40,    56,   104,    60,   106,    61,   351,
     330,   336,    64,    50,    51,    52,    53,   400,   401,   344,
     345,    68,    11,   348,   349,   367,   368,   410,   411,   412,
      59,    69,   131,   358,    63,    60,    65,    66,   137,    68,
      11,    58,   141,   142,   143,    56,   371,   372,   373,   391,
      59,    59,    43,    64,    45,    60,    12,    60,    64,    15,
     402,   403,   404,    56,    11,    11,    57,    62,    43,    56,
      45,   396,   397,    64,    58,    56,    63,   176,    65,    66,
      62,    68,    57,    57,    33,    68,    35,    36,    60,    38,
      39,    40,    41,    11,    85,    68,    56,   196,    68,    56,
      91,    50,    51,    52,    53,    56,    63,    11,    65,    66,
      85,    68,    57,   104,    11,   106,    91,     3,     4,     5,
       6,   101,   102,   103,   104,   105,    11,    13,    11,    11,
      62,   106,    11,    14,    14,    11,   235,     1,     9,    25,
     131,   371,   358,    86,    59,    23,   137,    19,    82,   143,
     141,   142,   279,    39,   280,   387,   131,   345,    -1,   138,
      44,    -1,   137,    -1,    -1,    -1,   141,   142,    -1,    -1,
      -1,    -1,   271,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,   176,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    -1,
      13,   176,    -1,    16,    17,   196,    -1,    20,    21,    -1,
      23,    -1,    25,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,   196,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    59,    60,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
     235,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
     271,    23,    -1,    25,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,   271,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    59,    60,    61,
      13,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    57,    -1,    59,    60,    61,    13,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    57,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    56,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    59,    13,    61,    62,    -1,    -1,    65,    66,    67,
      68,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    58,    59,    13,    61,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,
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
      53,    -1,    -1,    33,    -1,    35,    36,    60,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    33,    -1,    35,    36,    58,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    33,    -1,    35,    36,    58,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    33,    -1,    35,    36,
      58,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    33,    56,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      33,    56,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    -1,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    33,    -1,    35,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   160,    12,
      20,    30,    77,    81,    82,    87,    88,    89,    98,   148,
      11,    56,    78,    79,    80,    80,    59,    68,   105,   109,
      59,    68,   100,   108,    59,    68,   149,   150,    11,    82,
      11,    56,    79,    11,    56,   106,   107,   108,    72,    68,
      99,   100,    13,    25,    39,    61,    64,    68,    69,   111,
     112,   114,   116,   151,   152,   155,   157,   149,   112,    11,
      11,    56,    64,   112,   102,   105,   102,    56,   100,    11,
      60,    61,   112,   156,     3,     4,     5,     6,    23,    27,
      34,    35,    36,    37,    39,    40,    58,    59,    67,   110,
     111,   113,   114,   136,   137,   138,   144,   158,   159,   160,
      68,   136,   147,    69,    11,    56,   107,    60,    73,    83,
     101,    59,   103,   112,   101,    11,    57,   108,   153,   154,
     112,    59,    59,    58,   138,   138,   138,   111,   114,   138,
     138,   112,   136,    60,   115,    60,   139,    33,    35,    36,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    58,    59,    61,    63,
     141,   142,   143,   145,   146,    64,   147,    56,    72,    73,
     104,   112,   112,    57,   154,    11,    58,   112,   112,   113,
     114,    56,    57,   115,   117,   118,   119,   120,   136,   136,
     140,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     112,    56,   147,    62,   136,    59,    68,   136,     8,     9,
      10,    16,    17,    21,    28,    29,    68,    83,    85,    86,
      87,    90,    91,    92,    94,    95,    96,    97,   108,   121,
     122,   123,   124,   125,   126,   130,   131,   132,   136,   147,
      56,    64,   160,    11,   112,    56,    56,    64,    57,    64,
      62,    62,    57,    34,    56,    58,   136,    58,    62,   112,
      68,    68,   147,    72,    72,   133,    60,    68,    91,   136,
      68,    62,    73,    86,    11,    55,    31,    32,    69,   112,
     136,    57,   118,   115,   120,   136,   136,    56,    58,    62,
      58,   136,    56,    91,   136,    84,    91,    92,   136,    83,
      22,    26,    57,   127,   128,   129,    11,    60,    86,    57,
      11,   147,   147,    56,    64,    64,   136,    58,    62,    11,
      83,   133,    11,   135,   134,   147,    57,   128,    62,    60,
     136,    57,   127,   136,   140,    58,   136,   136,    14,    73,
      83,   133,   133,    85,    57,   127,    60,    57,    56,    58,
      83,    83,   131,   134,    93,    94,   136,   136,    57,    57,
     127,    14,    73,    73,    73,    73,    11,    11,   135,    57,
      83,   131,    91,    91,    92,    73,    73,    83,    83,    83,
     134,   134,   134,    73,    73,    73
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
     123,   123,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   129,   129,   130,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   133,
     134,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   140,   140,   141,
     142,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     150,   151,   152,   152,   153,   153,   154,   154,   155,   156,
     157,   158,   158,   159,   159,   159,   159,   159,   159,   160,
     160
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
       1,     2,     2,     1,     3,     5,     4,     6,     4,     6,
       5,     7,     2,     1,     3,     2,     1,     1,     5,     7,
       7,     7,     9,     9,     4,    11,    11,     7,    11,     0,
       0,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     3,     3,     5,     2,
       3,     4,     3,     4,     5,     6,     7,     8,     6,     4,
       4,     4,     2,     3,     4,     1,     3,     5,     2,     1,
       2,     5,     4,     3,     2,     3,     3,     2,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* SourceFile: PackageClause SCOLON ImportDeclList TopLevelDeclList  */
#line 72 "src/parser.y"
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
#line 2087 "parser.tab.c"
    break;

  case 3: /* OpenBlock: %empty  */
#line 85 "src/parser.y"
        {
		cout<<"OpenBlock: \n";
		st->enter_new_scope();
	}
#line 2096 "parser.tab.c"
    break;

  case 4: /* CloseBlock: %empty  */
#line 92 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 2104 "parser.tab.c"
    break;

  case 5: /* PackageClause: PACKAGE PackageName  */
#line 98 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2115 "parser.tab.c"
    break;

  case 6: /* PackageName: IDENTIFIER  */
#line 107 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string((yyvsp[0].sval))<<"\n";
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2126 "parser.tab.c"
    break;

  case 7: /* ImportDeclList: ImportDeclList ImportDecl SCOLON  */
#line 116 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2137 "parser.tab.c"
    break;

  case 8: /* ImportDeclList: ImportDecl SCOLON  */
#line 122 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2148 "parser.tab.c"
    break;

  case 9: /* ImportDecl: IMPORT LEFTPARAN ImportSpecList RIGHTPARAN  */
#line 131 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2159 "parser.tab.c"
    break;

  case 10: /* ImportDecl: IMPORT LEFTPARAN RIGHTPARAN  */
#line 137 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2168 "parser.tab.c"
    break;

  case 11: /* ImportDecl: IMPORT ImportSpec  */
#line 141 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2179 "parser.tab.c"
    break;

  case 12: /* ImportSpecList: ImportSpecList ImportSpec SCOLON  */
#line 150 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2190 "parser.tab.c"
    break;

  case 13: /* ImportSpecList: ImportSpec SCOLON  */
#line 156 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2200 "parser.tab.c"
    break;

  case 14: /* ImportSpec: PackageName ImportPath  */
#line 164 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2211 "parser.tab.c"
    break;

  case 15: /* ImportSpec: DOT ImportPath  */
#line 170 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2221 "parser.tab.c"
    break;

  case 16: /* ImportSpec: ImportPath  */
#line 175 "src/parser.y"
                     {
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2232 "parser.tab.c"
    break;

  case 17: /* ImportPath: String  */
#line 184 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2243 "parser.tab.c"
    break;

  case 18: /* TopLevelDeclList: TopLevelDeclList TopLevelDecl SCOLON  */
#line 193 "src/parser.y"
                                              {
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		(curr->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2256 "parser.tab.c"
    break;

  case 19: /* TopLevelDeclList: TopLevelDecl SCOLON  */
#line 201 "src/parser.y"
                              {
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2268 "parser.tab.c"
    break;

  case 20: /* TopLevelDecl: Declaration  */
#line 211 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2280 "parser.tab.c"
    break;

  case 21: /* TopLevelDecl: FunctionDecl  */
#line 218 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2293 "parser.tab.c"
    break;

  case 22: /* TopLevelDecl: MethodDecl  */
#line 226 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2305 "parser.tab.c"
    break;

  case 23: /* Block: LEFTBRACE OpenBlock StatementList CloseBlock RIGHTBRACE  */
#line 236 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2317 "parser.tab.c"
    break;

  case 24: /* Condition: Expression  */
#line 246 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 2329 "parser.tab.c"
    break;

  case 25: /* StatementList: StatementList Statement SCOLON  */
#line 256 "src/parser.y"
                                       {
		cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2343 "parser.tab.c"
    break;

  case 26: /* StatementList: Statement SCOLON  */
#line 265 "src/parser.y"
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
#line 2361 "parser.tab.c"
    break;

  case 27: /* Statement: Declaration  */
#line 281 "src/parser.y"
                    {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2374 "parser.tab.c"
    break;

  case 28: /* Statement: LabeledStmt  */
#line 289 "src/parser.y"
                      {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2387 "parser.tab.c"
    break;

  case 29: /* Statement: SimpleStmt  */
#line 297 "src/parser.y"
                     {
		Node* curr = new Node("Statement");
		cout<<"Statement:	SimpleStmt\n";
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2400 "parser.tab.c"
    break;

  case 30: /* Statement: ReturnStmt  */
#line 305 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2412 "parser.tab.c"
    break;

  case 31: /* Statement: BreakStmt  */
#line 312 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2424 "parser.tab.c"
    break;

  case 32: /* Statement: ContinueStmt  */
#line 319 "src/parser.y"
                       {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2436 "parser.tab.c"
    break;

  case 33: /* Statement: GotoStmt  */
#line 326 "src/parser.y"
                   {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2448 "parser.tab.c"
    break;

  case 34: /* Statement: SwitchStmt  */
#line 333 "src/parser.y"
                     {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2460 "parser.tab.c"
    break;

  case 35: /* Statement: FallthroughStmt  */
#line 340 "src/parser.y"
                          {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2472 "parser.tab.c"
    break;

  case 36: /* Statement: Block  */
#line 347 "src/parser.y"
                {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2484 "parser.tab.c"
    break;

  case 37: /* Statement: IfStmt  */
#line 354 "src/parser.y"
                 {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2496 "parser.tab.c"
    break;

  case 38: /* Statement: ForStmt  */
#line 361 "src/parser.y"
                  {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2508 "parser.tab.c"
    break;

  case 39: /* Declaration: TypeDecl  */
#line 371 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2520 "parser.tab.c"
    break;

  case 40: /* Declaration: VarDecl  */
#line 378 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2532 "parser.tab.c"
    break;

  case 41: /* FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock  */
#line 398 "src/parser.y"
                                                                    {

		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);
		(yyval.nt)-> current_node_data = new NodeData("Function-" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2549 "parser.tab.c"
    break;

  case 42: /* FunctionDecl: FUNC IDENTIFIER OpenBlock Signature CloseBlock  */
#line 410 "src/parser.y"
                                                          {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function-"+ string((yyvsp[-3].sval)));
	}
#line 2562 "parser.tab.c"
    break;

  case 43: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 421 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2574 "parser.tab.c"
    break;

  case 44: /* MethodDecl: FUNC Receiver IDENTIFIER Signature FunctionBody  */
#line 428 "src/parser.y"
                                                          {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2587 "parser.tab.c"
    break;

  case 45: /* LabeledStmt: IDENTIFIER COLON Statement  */
#line 439 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("Label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2599 "parser.tab.c"
    break;

  case 46: /* SimpleStmt: EmptyStmt  */
#line 450 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2610 "parser.tab.c"
    break;

  case 47: /* SimpleStmt: ExpressionStmt  */
#line 456 "src/parser.y"
                         {
		cout<<"SimpleStmt: ExpressionStmt\n";
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2622 "parser.tab.c"
    break;

  case 48: /* SimpleStmt: IncDecStmt  */
#line 463 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2633 "parser.tab.c"
    break;

  case 49: /* SimpleStmt: Assignment  */
#line 469 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2644 "parser.tab.c"
    break;

  case 50: /* SimpleStmt: ShortVarDecl  */
#line 475 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2655 "parser.tab.c"
    break;

  case 51: /* EmptyStmt: %empty  */
#line 483 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2664 "parser.tab.c"
    break;

  case 52: /* EmptyExpr: %empty  */
#line 489 "src/parser.y"
            {   // For infinite looping
		(yyval.nt) = new Node("EmptyExpr");
		(yyval.nt)->current_node_data = new NodeData("true");
		(yyval.nt)->current_type = new BasicType("bool");
	}
#line 2674 "parser.tab.c"
    break;

  case 53: /* ExpressionStmt: Expression  */
#line 497 "src/parser.y"
                   {
		cout<<"ExpressionStmt: Expression\n";
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2686 "parser.tab.c"
    break;

  case 54: /* IncDecStmt: Expression PLUSPLUS  */
#line 507 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2699 "parser.tab.c"
    break;

  case 55: /* IncDecStmt: Expression MINUSMINUS  */
#line 515 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2711 "parser.tab.c"
    break;

  case 56: /* Assignment: ExpressionList ASSGN_OP ExpressionList  */
#line 525 "src/parser.y"
                                               {
		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
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
#line 2771 "parser.tab.c"
    break;

  case 57: /* ShortVarDecl: IdentifierList INFER_EQ ExpressionList  */
#line 583 "src/parser.y"
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
#line 2838 "parser.tab.c"
    break;

  case 58: /* VarDecl: VAR VarSpec  */
#line 648 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2849 "parser.tab.c"
    break;

  case 59: /* VarDecl: VAR LEFTPARAN VarSpecList RIGHTPARAN  */
#line 654 "src/parser.y"
                                               {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2860 "parser.tab.c"
    break;

  case 60: /* VarSpecList: VarSpecList VarSpec SCOLON  */
#line 663 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");

		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
		// might need to add type checks
	}
#line 2874 "parser.tab.c"
    break;

  case 61: /* VarSpecList: VarSpec SCOLON  */
#line 672 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2885 "parser.tab.c"
    break;

  case 62: /* VarSpec: IdentifierList Type  */
#line 681 "src/parser.y"
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
#line 2908 "parser.tab.c"
    break;

  case 63: /* VarSpec: IdentifierList Type ASSGN_OP ExpressionList  */
#line 699 "src/parser.y"
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
#line 2937 "parser.tab.c"
    break;

  case 64: /* VarSpec: IdentifierList ASSGN_OP ExpressionList  */
#line 723 "src/parser.y"
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
#line 2993 "parser.tab.c"
    break;

  case 65: /* FunctionBody: Block  */
#line 794 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 3004 "parser.tab.c"
    break;

  case 66: /* Signature: Parameters  */
#line 803 "src/parser.y"
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
#line 3035 "parser.tab.c"
    break;

  case 67: /* Signature: Parameters Result  */
#line 829 "src/parser.y"
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
#line 3075 "parser.tab.c"
    break;

  case 68: /* Result: LEFTPARAN TypeList RIGHTPARAN  */
#line 867 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3086 "parser.tab.c"
    break;

  case 69: /* Result: Type  */
#line 873 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3097 "parser.tab.c"
    break;

  case 70: /* TypeList: TypeList COMMA Type  */
#line 882 "src/parser.y"
                        {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3111 "parser.tab.c"
    break;

  case 71: /* TypeList: Type  */
#line 891 "src/parser.y"
           {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3122 "parser.tab.c"
    break;

  case 72: /* Parameters: LEFTPARAN RIGHTPARAN  */
#line 900 "src/parser.y"
                             {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = NULL;
		(yyval.nt)-> current_type = NULL;
	}
#line 3133 "parser.tab.c"
    break;

  case 73: /* Parameters: LEFTPARAN ParameterList RIGHTPARAN  */
#line 906 "src/parser.y"
                                             {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3145 "parser.tab.c"
    break;

  case 74: /* Parameters: LEFTPARAN ParameterList COMMA RIGHTPARAN  */
#line 913 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3156 "parser.tab.c"
    break;

  case 75: /* ParameterList: ParameterDecl  */
#line 922 "src/parser.y"
                      {
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3167 "parser.tab.c"
    break;

  case 76: /* ParameterList: ParameterList COMMA ParameterDecl  */
#line 928 "src/parser.y"
                                           {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
	}
#line 3181 "parser.tab.c"
    break;

  case 77: /* ParameterDecl: IdentifierList Type  */
#line 940 "src/parser.y"
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
#line 3206 "parser.tab.c"
    break;

  case 78: /* IdentifierList: IdentifierList COMMA IDENTIFIER  */
#line 963 "src/parser.y"
                                        {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        ((yyvsp[-2].nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));

	}
#line 3221 "parser.tab.c"
    break;

  case 79: /* IdentifierList: IDENTIFIER  */
#line 973 "src/parser.y"
                     {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3232 "parser.tab.c"
    break;

  case 80: /* Receiver: Parameters  */
#line 982 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3241 "parser.tab.c"
    break;

  case 81: /* CompositeLit: LiteralType LiteralValue  */
#line 989 "src/parser.y"
                                 {
        (yyval.nt) = new Node("CompositeLit");

    }
#line 3250 "parser.tab.c"
    break;

  case 82: /* LiteralType: StructType  */
#line 996 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3261 "parser.tab.c"
    break;

  case 83: /* LiteralType: ArrayType  */
#line 1002 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3272 "parser.tab.c"
    break;

  case 84: /* LiteralType: PointerType  */
#line 1008 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3283 "parser.tab.c"
    break;

  case 85: /* LiteralType: SliceType  */
#line 1014 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3294 "parser.tab.c"
    break;

  case 86: /* LiteralType: LEFTSQUARE ELIPSIS RIGHTSQUARE Operand  */
#line 1020 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3304 "parser.tab.c"
    break;

  case 87: /* LiteralType: MapType  */
#line 1025 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3315 "parser.tab.c"
    break;

  case 88: /* Type: LiteralType  */
#line 1034 "src/parser.y"
                    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3326 "parser.tab.c"
    break;

  case 89: /* Type: OperandName  */
#line 1040 "src/parser.y"
                      {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3337 "parser.tab.c"
    break;

  case 90: /* Operand: Literal  */
#line 1049 "src/parser.y"
                {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3348 "parser.tab.c"
    break;

  case 91: /* Operand: OperandName  */
#line 1055 "src/parser.y"
                      {
		cout<<"Operand: OperandName";
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3360 "parser.tab.c"
    break;

  case 92: /* Operand: LEFTPARAN Expression RIGHTPARAN  */
#line 1062 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3371 "parser.tab.c"
    break;

  case 93: /* OperandName: IDENTIFIER  */
#line 1071 "src/parser.y"
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
#line 3391 "parser.tab.c"
    break;

  case 94: /* LiteralValue: LEFTBRACE RIGHTBRACE  */
#line 1089 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3400 "parser.tab.c"
    break;

  case 95: /* LiteralValue: LEFTBRACE ElementList RIGHTBRACE  */
#line 1093 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3411 "parser.tab.c"
    break;

  case 96: /* LiteralValue: LEFTBRACE ElementList COMMA RIGHTBRACE  */
#line 1099 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3422 "parser.tab.c"
    break;

  case 97: /* SliceType: LEFTSQUARE RIGHTSQUARE Type  */
#line 1107 "src/parser.y"
                                    {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new SliceType((yyvsp[0].nt)->current_type);
        (yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
		;}
#line 3433 "parser.tab.c"
    break;

  case 98: /* ElementList: KeyedElement  */
#line 1116 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3445 "parser.tab.c"
    break;

  case 99: /* ElementList: ElementList COMMA KeyedElement  */
#line 1123 "src/parser.y"
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
#line 3463 "parser.tab.c"
    break;

  case 100: /* KeyedElement: Element  */
#line 1139 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3475 "parser.tab.c"
    break;

  case 101: /* KeyedElement: Key COLON Element  */
#line 1146 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;

	}
#line 3487 "parser.tab.c"
    break;

  case 102: /* Key: Expression  */
#line 1156 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3497 "parser.tab.c"
    break;

  case 103: /* Key: LiteralValue  */
#line 1161 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3507 "parser.tab.c"
    break;

  case 104: /* Element: Expression  */
#line 1169 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3519 "parser.tab.c"
    break;

  case 105: /* Element: LiteralValue  */
#line 1176 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3531 "parser.tab.c"
    break;

  case 106: /* ReturnStmt: RETURN  */
#line 1187 "src/parser.y"
               {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> current_node_data = new NodeData(string((yyvsp[0].sval)));

	}
#line 3541 "parser.tab.c"
    break;

  case 107: /* ReturnStmt: RETURN ExpressionList  */
#line 1192 "src/parser.y"
                                {
		(yyval.nt) = new Node("ReturnStmt");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;

	}
#line 3553 "parser.tab.c"
    break;

  case 108: /* BreakStmt: BREAK  */
#line 1203 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		// break labels
		(yyval.nt) = curr;
	}
#line 3564 "parser.tab.c"
    break;

  case 109: /* BreakStmt: BREAK IDENTIFIER  */
#line 1209 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3576 "parser.tab.c"
    break;

  case 110: /* ContinueStmt: CONTINUE  */
#line 1220 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3586 "parser.tab.c"
    break;

  case 111: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 1225 "src/parser.y"
                              {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// check this reason
		curr->current_node_data->node_child =  new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3599 "parser.tab.c"
    break;

  case 112: /* GotoStmt: GOTO IDENTIFIER  */
#line 1236 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// still remaining
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3612 "parser.tab.c"
    break;

  case 114: /* ExprSwitchStmt: SWITCH LEFTBRACE RIGHTBRACE  */
#line 1251 "src/parser.y"
                                    {;}
#line 3618 "parser.tab.c"
    break;

  case 115: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON LEFTBRACE RIGHTBRACE  */
#line 1252 "src/parser.y"
                                                        {;}
#line 3624 "parser.tab.c"
    break;

  case 116: /* ExprSwitchStmt: SWITCH Expression LEFTBRACE RIGHTBRACE  */
#line 1253 "src/parser.y"
                                                 { ;}
#line 3630 "parser.tab.c"
    break;

  case 117: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON Expression LEFTBRACE RIGHTBRACE  */
#line 1254 "src/parser.y"
                                                                   {;}
#line 3636 "parser.tab.c"
    break;

  case 118: /* ExprSwitchStmt: SWITCH LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1255 "src/parser.y"
                                                        {;}
#line 3642 "parser.tab.c"
    break;

  case 119: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1256 "src/parser.y"
                                                                          {;}
#line 3648 "parser.tab.c"
    break;

  case 120: /* ExprSwitchStmt: SWITCH Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1257 "src/parser.y"
                                                                    {;}
#line 3654 "parser.tab.c"
    break;

  case 121: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1258 "src/parser.y"
                                                                                      {;}
#line 3660 "parser.tab.c"
    break;

  case 122: /* ExprCaseClauseList: ExprCaseClauseList ExprCaseClause  */
#line 1262 "src/parser.y"
                                          {
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3670 "parser.tab.c"
    break;

  case 123: /* ExprCaseClauseList: ExprCaseClause  */
#line 1267 "src/parser.y"
                         {
		(yyval.nt) = new Node("ExprCaseClauseList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3679 "parser.tab.c"
    break;

  case 124: /* ExprCaseClause: ExprSwitchCase COLON StatementList  */
#line 1273 "src/parser.y"
                                           {
		(yyval.nt) = new Node("ExprCaseClause");
		(yyval.nt) -> add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3689 "parser.tab.c"
    break;

  case 125: /* ExprSwitchCase: CASE ExpressionList  */
#line 1281 "src/parser.y"
                            {
		(yyval.nt) = new Node("ExprSwitchCase");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3698 "parser.tab.c"
    break;

  case 126: /* ExprSwitchCase: DEFAULT  */
#line 1285 "src/parser.y"
                  {
		(yyval.nt) = new Node("ExprSwitchCase");
	}
#line 3706 "parser.tab.c"
    break;

  case 127: /* FallthroughStmt: FALLTHROUGH  */
#line 1291 "src/parser.y"
                    {
		(yyval.nt) = new Node("FallthroughStmt");
	}
#line 3714 "parser.tab.c"
    break;

  case 128: /* IfStmt: IF OpenBlock Expression Block CloseBlock  */
#line 1297 "src/parser.y"
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
#line 3737 "parser.tab.c"
    break;

  case 129: /* IfStmt: IF OpenBlock SimpleStmt SCOLON Expression Block CloseBlock  */
#line 1315 "src/parser.y"
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
#line 3764 "parser.tab.c"
    break;

  case 130: /* IfStmt: IF OpenBlock Expression Block ELSE IfStmt CloseBlock  */
#line 1337 "src/parser.y"
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
#line 3791 "parser.tab.c"
    break;

  case 131: /* IfStmt: IF OpenBlock Expression Block ELSE Block CloseBlock  */
#line 1359 "src/parser.y"
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
#line 3818 "parser.tab.c"
    break;

  case 132: /* IfStmt: IF OpenBlock SimpleStmt SCOLON Expression Block ELSE IfStmt CloseBlock  */
#line 1381 "src/parser.y"
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
#line 3848 "parser.tab.c"
    break;

  case 133: /* IfStmt: IF OpenBlock SimpleStmt SCOLON Expression Block ELSE Block CloseBlock  */
#line 1406 "src/parser.y"
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
#line 3878 "parser.tab.c"
    break;

  case 134: /* ForStmt: FOR forMarker Block forMarkerEnd  */
#line 1435 "src/parser.y"
        {
		(yyval.nt) = new Node("ForStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = new NodeData("For");
		NodeData* it = (yyval.nt)->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 3893 "parser.tab.c"
    break;

  case 135: /* ForStmt: FOR OpenBlock SimpleStmt SCOLON forMarker EmptyExpr SCOLON SimpleStmt Block forMarkerEnd CloseBlock  */
#line 1445 "src/parser.y"
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
#line 3910 "parser.tab.c"
    break;

  case 136: /* ForStmt: FOR OpenBlock SimpleStmt SCOLON forMarker ExpressionStmt SCOLON SimpleStmt Block forMarkerEnd CloseBlock  */
#line 1457 "src/parser.y"
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
#line 3927 "parser.tab.c"
    break;

  case 137: /* ForStmt: FOR OpenBlock Condition forMarker Block forMarkerEnd CloseBlock  */
#line 1469 "src/parser.y"
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
#line 3945 "parser.tab.c"
    break;

  case 138: /* ForStmt: FOR OpenBlock EmptyStmt Empty forMarker Expression Empty EmptyStmt Block forMarkerEnd CloseBlock  */
#line 1482 "src/parser.y"
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
#line 3962 "parser.tab.c"
    break;

  case 139: /* forMarker: %empty  */
#line 1506 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> add_new_break_label();
	}
#line 3971 "parser.tab.c"
    break;

  case 140: /* forMarkerEnd: %empty  */
#line 1514 "src/parser.y"
        {
		(yyval.nt) = new Node("");
		bl -> remove_last_break_label();
	;
	}
#line 3981 "parser.tab.c"
    break;

  case 141: /* Empty: %empty  */
#line 1522 "src/parser.y"
        {

	}
#line 3989 "parser.tab.c"
    break;

  case 142: /* Expression: Expression MUL Expression  */
#line 1561 "src/parser.y"
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
#line 4021 "parser.tab.c"
    break;

  case 143: /* Expression: Expression QUOT Expression  */
#line 1588 "src/parser.y"
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
#line 4051 "parser.tab.c"
    break;

  case 144: /* Expression: Expression MOD Expression  */
#line 1613 "src/parser.y"
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
#line 4082 "parser.tab.c"
    break;

  case 145: /* Expression: Expression SHL Expression  */
#line 1639 "src/parser.y"
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
#line 4113 "parser.tab.c"
    break;

  case 146: /* Expression: Expression SHR Expression  */
#line 1665 "src/parser.y"
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
#line 4143 "parser.tab.c"
    break;

  case 147: /* Expression: Expression AND Expression  */
#line 1690 "src/parser.y"
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
#line 4173 "parser.tab.c"
    break;

  case 148: /* Expression: Expression ANDNOT Expression  */
#line 1715 "src/parser.y"
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
#line 4204 "parser.tab.c"
    break;

  case 149: /* Expression: Expression ADD Expression  */
#line 1741 "src/parser.y"
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
#line 4234 "parser.tab.c"
    break;

  case 150: /* Expression: Expression SUB Expression  */
#line 1766 "src/parser.y"
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
#line 4264 "parser.tab.c"
    break;

  case 151: /* Expression: Expression OR Expression  */
#line 1791 "src/parser.y"
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
#line 4295 "parser.tab.c"
    break;

  case 152: /* Expression: Expression XOR Expression  */
#line 1817 "src/parser.y"
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
#line 4325 "parser.tab.c"
    break;

  case 153: /* Expression: Expression LOGAND Expression  */
#line 1842 "src/parser.y"
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
#line 4356 "parser.tab.c"
    break;

  case 154: /* Expression: Expression LOGOR Expression  */
#line 1868 "src/parser.y"
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
#line 4386 "parser.tab.c"
    break;

  case 155: /* Expression: Expression ISEQ Expression  */
#line 1893 "src/parser.y"
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
#line 4417 "parser.tab.c"
    break;

  case 156: /* Expression: Expression NEQ Expression  */
#line 1919 "src/parser.y"
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
#line 4447 "parser.tab.c"
    break;

  case 157: /* Expression: Expression GRTEQ Expression  */
#line 1944 "src/parser.y"
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
#line 4477 "parser.tab.c"
    break;

  case 158: /* Expression: Expression GRT Expression  */
#line 1969 "src/parser.y"
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
#line 4507 "parser.tab.c"
    break;

  case 159: /* Expression: Expression LESSEQ Expression  */
#line 1994 "src/parser.y"
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
#line 4537 "parser.tab.c"
    break;

  case 160: /* Expression: Expression LESS Expression  */
#line 2019 "src/parser.y"
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
#line 4567 "parser.tab.c"
    break;

  case 161: /* Expression: UnaryExpr  */
#line 2044 "src/parser.y"
                    {
			(yyval.nt) = new Node("Expression");
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		}
#line 4578 "parser.tab.c"
    break;

  case 162: /* UnaryExpr: MUL PrimaryExpr  */
#line 2053 "src/parser.y"
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
#line 4596 "parser.tab.c"
    break;

  case 163: /* UnaryExpr: AND PrimaryExpr  */
#line 2066 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("&unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = new PointerType((yyvsp[0].nt)->current_type);
		}
#line 4609 "parser.tab.c"
    break;

  case 164: /* UnaryExpr: ADD PrimaryExpr  */
#line 2074 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("+unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4622 "parser.tab.c"
    break;

  case 165: /* UnaryExpr: SUB PrimaryExpr  */
#line 2082 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("-unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4635 "parser.tab.c"
    break;

  case 166: /* UnaryExpr: NOT PrimaryExpr  */
#line 2090 "src/parser.y"
                          {
			(yyval.nt) = new Node("UnaryExpr");
			(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
			(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
			(yyval.nt)->current_node_data = new NodeData("!unary");
			(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		}
#line 4648 "parser.tab.c"
    break;

  case 167: /* UnaryExpr: PrimaryExpr  */
#line 2098 "src/parser.y"
                      {
		(yyval.nt) = new Node("UnaryExpr");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 4659 "parser.tab.c"
    break;

  case 168: /* PrimaryExpr: Operand  */
#line 2109 "src/parser.y"
                 {
 		cout<<" PrimaryExpr: Operand \n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4672 "parser.tab.c"
    break;

  case 169: /* PrimaryExpr: MakeExpr  */
#line 2117 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4684 "parser.tab.c"
    break;

  case 170: /* PrimaryExpr: PrimaryExpr Selector  */
#line 2124 "src/parser.y"
                               {
 		cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		// still remaining
		// curr->current_type = isValidMemberon($1->current_type)
		(yyval.nt) = curr;
	}
#line 4698 "parser.tab.c"
    break;

  case 171: /* PrimaryExpr: PrimaryExpr Index  */
#line 2133 "src/parser.y"
                            {cout<<"PrimaryExpr:Index\n";}
#line 4704 "parser.tab.c"
    break;

  case 172: /* PrimaryExpr: PrimaryExpr Slice  */
#line 2134 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4715 "parser.tab.c"
    break;

  case 173: /* PrimaryExpr: PrimaryExpr Arguments  */
#line 2140 "src/parser.y"
                                {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4727 "parser.tab.c"
    break;

  case 174: /* PrimaryExpr: OperandName StructLiteral  */
#line 2147 "src/parser.y"
                                    {cout<<"PrimaryExpr:StructLiteral\n";}
#line 4733 "parser.tab.c"
    break;

  case 175: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 2148 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4745 "parser.tab.c"
    break;

  case 176: /* StructLiteral: LEFTBRACE KeyValueList RIGHTBRACE  */
#line 2158 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4755 "parser.tab.c"
    break;

  case 177: /* KeyValueList: Expression COLON Expression  */
#line 2166 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4766 "parser.tab.c"
    break;

  case 178: /* KeyValueList: Expression COLON Expression COMMA KeyValueList  */
#line 2172 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4778 "parser.tab.c"
    break;

  case 179: /* Selector: DOT IDENTIFIER  */
#line 2183 "src/parser.y"
                       {
		cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 4792 "parser.tab.c"
    break;

  case 180: /* Index: LEFTSQUARE Expression RIGHTSQUARE  */
#line 2195 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4806 "parser.tab.c"
    break;

  case 181: /* Slice: LEFTSQUARE COLON Expression RIGHTSQUARE  */
#line 2207 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4818 "parser.tab.c"
    break;

  case 182: /* Slice: LEFTSQUARE COLON RIGHTSQUARE  */
#line 2214 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 4827 "parser.tab.c"
    break;

  case 183: /* Slice: LEFTSQUARE Expression COLON RIGHTSQUARE  */
#line 2218 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 4838 "parser.tab.c"
    break;

  case 184: /* Slice: LEFTSQUARE Expression COLON Expression RIGHTSQUARE  */
#line 2224 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4850 "parser.tab.c"
    break;

  case 185: /* Slice: LEFTSQUARE COLON Expression COLON Expression RIGHTSQUARE  */
#line 2231 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4863 "parser.tab.c"
    break;

  case 186: /* Slice: LEFTSQUARE Expression COLON Expression COLON Expression RIGHTSQUARE  */
#line 2239 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4877 "parser.tab.c"
    break;

  case 187: /* MakeExpr: MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN  */
#line 2252 "src/parser.y"
                                                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-5].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4892 "parser.tab.c"
    break;

  case 188: /* MakeExpr: MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN  */
#line 2262 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4906 "parser.tab.c"
    break;

  case 189: /* MakeExpr: MAKE LEFTPARAN Type RIGHTPARAN  */
#line 2271 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4919 "parser.tab.c"
    break;

  case 190: /* MakeExpr: NEW LEFTPARAN Type RIGHTPARAN  */
#line 2279 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 4932 "parser.tab.c"
    break;

  case 191: /* TypeAssertion: DOT LEFTPARAN Type RIGHTPARAN  */
#line 2290 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4942 "parser.tab.c"
    break;

  case 192: /* Arguments: LEFTPARAN RIGHTPARAN  */
#line 2298 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 4951 "parser.tab.c"
    break;

  case 193: /* Arguments: LEFTPARAN ExpressionList RIGHTPARAN  */
#line 2302 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4965 "parser.tab.c"
    break;

  case 194: /* Arguments: LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN  */
#line 2311 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4980 "parser.tab.c"
    break;

  case 195: /* ExpressionList: Expression  */
#line 2325 "src/parser.y"
                   {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4994 "parser.tab.c"
    break;

  case 196: /* ExpressionList: ExpressionList COMMA Expression  */
#line 2334 "src/parser.y"
                                          {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5009 "parser.tab.c"
    break;

  case 197: /* TypeDecl: TYPE LEFTPARAN TypeSpec SCOLON RIGHTPARAN  */
#line 2347 "src/parser.y"
                                                  {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
	}
#line 5018 "parser.tab.c"
    break;

  case 198: /* TypeDecl: TYPE TypeSpec  */
#line 2351 "src/parser.y"
                        {
		(yyval.nt) = new Node("TypeDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 5027 "parser.tab.c"
    break;

  case 199: /* TypeSpec: TypeDef  */
#line 2375 "src/parser.y"
                {
		(yyval.nt) = new Node("TypeSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 5036 "parser.tab.c"
    break;

  case 200: /* TypeDef: IDENTIFIER Type  */
#line 2389 "src/parser.y"
                        {
		(yyval.nt) =  new Node("TypeDef");
		(yyval.nt) ->add_non_terminal_children((yyvsp[0].nt));
	}
#line 5045 "parser.tab.c"
    break;

  case 201: /* MapType: MAP LEFTSQUARE Type RIGHTSQUARE Type  */
#line 2396 "src/parser.y"
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
#line 5063 "parser.tab.c"
    break;

  case 202: /* StructType: STRUCT LEFTBRACE FieldDeclList RIGHTBRACE  */
#line 2412 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 5078 "parser.tab.c"
    break;

  case 203: /* StructType: STRUCT LEFTBRACE RIGHTBRACE  */
#line 2423 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 5092 "parser.tab.c"
    break;

  case 204: /* FieldDeclList: FieldDecl SCOLON  */
#line 2435 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 5103 "parser.tab.c"
    break;

  case 205: /* FieldDeclList: FieldDeclList FieldDecl SCOLON  */
#line 2441 "src/parser.y"
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
#line 5128 "parser.tab.c"
    break;

  case 206: /* FieldDecl: IdentifierList Type String  */
#line 2465 "src/parser.y"
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
#line 5148 "parser.tab.c"
    break;

  case 208: /* PointerType: MUL BaseType  */
#line 2485 "src/parser.y"
                     {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;


		(yyval.nt) = curr;
	}
#line 5164 "parser.tab.c"
    break;

  case 209: /* BaseType: Type  */
#line 2499 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 5178 "parser.tab.c"
    break;

  case 210: /* ArrayType: LEFTSQUARE Expression RIGHTSQUARE Type  */
#line 2511 "src/parser.y"
                                               {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children((yyvsp[-2].nt));
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 if((yyvsp[-2].nt)->current_type->getDataType() == "int"){
//			 curr->current_type = new ArrayType
		 }
		 (yyval.nt) = curr;
		 }
#line 5192 "parser.tab.c"
    break;

  case 211: /* Literal: BasicLit  */
#line 2524 "src/parser.y"
                 {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5204 "parser.tab.c"
    break;

  case 212: /* Literal: CompositeLit  */
#line 2531 "src/parser.y"
                     {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 5216 "parser.tab.c"
    break;

  case 213: /* BasicLit: INTEGER_VAL  */
#line 2541 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 5228 "parser.tab.c"
    break;

  case 214: /* BasicLit: FLOAT_VAL  */
#line 2548 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 5240 "parser.tab.c"
    break;

  case 215: /* BasicLit: BYTE_VAL  */
#line 2555 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 5252 "parser.tab.c"
    break;

  case 216: /* BasicLit: String  */
#line 2562 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		 }
#line 5264 "parser.tab.c"
    break;

  case 217: /* BasicLit: TRUE  */
#line 2569 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5276 "parser.tab.c"
    break;

  case 218: /* BasicLit: FALSE  */
#line 2576 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 5288 "parser.tab.c"
    break;

  case 219: /* String: RAW_STRING  */
#line 2586 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 5297 "parser.tab.c"
    break;

  case 220: /* String: INTERPRETED_STRING  */
#line 2590 "src/parser.y"
                             { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 5306 "parser.tab.c"
    break;


#line 5310 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 2596 "src/parser.y"






int main (int argc, char **argv) {

	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
