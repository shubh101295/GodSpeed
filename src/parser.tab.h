/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 27 "src/parser.y"

	#include "node.hpp"

#line 53 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER_VAL = 258,             /* INTEGER_VAL  */
    FLOAT_VAL = 259,               /* FLOAT_VAL  */
    TRUE = 260,                    /* TRUE  */
    FALSE = 261,                   /* FALSE  */
    NULLPOINTER = 262,             /* NULLPOINTER  */
    BREAK = 263,                   /* BREAK  */
    CONTINUE = 264,                /* CONTINUE  */
    RETURN = 265,                  /* RETURN  */
    SCOLON = 266,                  /* SCOLON  */
    FUNC = 267,                    /* FUNC  */
    STRUCT = 268,                  /* STRUCT  */
    ELSE = 269,                    /* ELSE  */
    PACKAGE = 270,                 /* PACKAGE  */
    IF = 271,                      /* IF  */
    FOR = 272,                     /* FOR  */
    RANGE = 273,                   /* RANGE  */
    IMPORT = 274,                  /* IMPORT  */
    VAR = 275,                     /* VAR  */
    SWITCH = 276,                  /* SWITCH  */
    CASE = 277,                    /* CASE  */
    NEW = 278,                     /* NEW  */
    CONST = 279,                   /* CONST  */
    MAP = 280,                     /* MAP  */
    DEFAULT = 281,                 /* DEFAULT  */
    MAKE = 282,                    /* MAKE  */
    GOTO = 283,                    /* GOTO  */
    FALLTHROUGH = 284,             /* FALLTHROUGH  */
    TYPE = 285,                    /* TYPE  */
    PLUSPLUS = 286,                /* PLUSPLUS  */
    MINUSMINUS = 287,              /* MINUSMINUS  */
    ANDNOT = 288,                  /* ANDNOT  */
    ELIPSIS = 289,                 /* ELIPSIS  */
    ADD = 290,                     /* ADD  */
    SUB = 291,                     /* SUB  */
    NOT = 292,                     /* NOT  */
    XOR = 293,                     /* XOR  */
    MUL = 294,                     /* MUL  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    LOGOR = 297,                   /* LOGOR  */
    LOGAND = 298,                  /* LOGAND  */
    ISEQ = 299,                    /* ISEQ  */
    NEQ = 300,                     /* NEQ  */
    LESSEQ = 301,                  /* LESSEQ  */
    GRTEQ = 302,                   /* GRTEQ  */
    GRT = 303,                     /* GRT  */
    LESS = 304,                    /* LESS  */
    MOD = 305,                     /* MOD  */
    QUOT = 306,                    /* QUOT  */
    SHL = 307,                     /* SHL  */
    SHR = 308,                     /* SHR  */
    EQ = 309,                      /* EQ  */
    INFER_EQ = 310,                /* INFER_EQ  */
    RIGHTPARAN = 311,              /* RIGHTPARAN  */
    RIGHTBRACE = 312,              /* RIGHTBRACE  */
    RIGHTSQUARE = 313,             /* RIGHTSQUARE  */
    LEFTPARAN = 314,               /* LEFTPARAN  */
    LEFTBRACE = 315,               /* LEFTBRACE  */
    LEFTSQUARE = 316,              /* LEFTSQUARE  */
    COLON = 317,                   /* COLON  */
    DOT = 318,                     /* DOT  */
    COMMA = 319,                   /* COMMA  */
    RAW_STRING = 320,              /* RAW_STRING  */
    INTERPRETED_STRING = 321,      /* INTERPRETED_STRING  */
    BYTE_VAL = 322,                /* BYTE_VAL  */
    IDENTIFIER = 323,              /* IDENTIFIER  */
    ASSGN_OP = 324                 /* ASSGN_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "src/parser.y"

	Node* nt;
	char* sval;

#line 144 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
