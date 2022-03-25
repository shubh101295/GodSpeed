%{
    #include "node.hpp"
    #include "parser.tab.h"
    #include<iostream>
    using namespace std;
    long long int column = 1;
    #define YY_DECL extern "C" int yylex()
%}
%option yylineno

DD [0-9]
NL [\n]
ALPHA [a-zA-Z]
LETTER [a-zA-Z_]
UNICODE_BYTE_CHAR            [^'\\"]
BACKSLASH_BYTE_CHAR          [nt\\']
UNICODE_VALUE ([^"]|{LITTLE_U_VALUE}|{BIG_U_VALUE}|{ESCAPE_CHAR})
BYTE_VALUE ({OCTAL_BYTE_VALUE}|{HEX_BYTE_VALUE})
LITTLE_U_VALUE (\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])
BIG_U_VALUE (\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])
ESCAPE_CHAR (\\(a|b|f|n|r|t|v|\\|\'|\"))
OCTAL_BYTE_VALUE (\\[0-7][0-7][0-7])
HEX_BYTE_VALUE (\\x[0-9a-fA-F][0-9a-fA-F])

RAW_STRING (`([^`]|{NL})*`)
INTERPRETED_STRING (\"({UNICODE_VALUE}|{BYTE_VALUE})*\")

LOGOR "\|\|"
LOGAND "&&"
LESSEQ "<="
LESS "<"
GRTEQ ">="
GRT ">"
ISEQ "=="
NEQ "!="
SHL "<<"
SHR ">>"
ANDNOT "&^"
PLUSPLUS "++"
MINUSMINUS "--"
INFER_EQ ":="
COLON ":"
ADD "+"
SUB "-"
MUL "*"
QUOT "/"
MOD "%"
OR "|"
AND "&"
XOR "^"
NOT "!"
REL_OP  {ISEQ}|{NEQ}|{GRTEQ}|{GRT}|{LESSEQ}|{LESS}
ADD_OP {ADD}|{SUB}|{OR}|{XOR}
MUL_OP {MUL}|{QUOT}|{MOD}|{SHL}|{SHR}|{AND}|{ANDNOT}
UNARY_OP {ADD}|{SUB}|{NOT}|{XOR}|{MUL}|{AND}
ASSGN_OP ({ADD_OP}|{MUL_OP})?"="


%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT
%x EXTRA_SEMICOLON_MODE
%%
    /* reserved keyword */

<EXTRA_SEMICOLON_MODE>{NL} { cout<<"Entering XS"<<endl;BEGIN(INITIAL); return SCOLON;}

"true"/[ ]*[\n] {  yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return TRUE;}
"false"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return FALSE;}
"nil"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return NULLPOINTER;}
"break"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return BREAK;}
"continue"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return CONTINUE;}
"fallthrough"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return FALLTHROUGH;}
"return"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return RETURN;}

"true" { yylval.sval = strdup(yytext); column+=yyleng; return TRUE;}
"false" { yylval.sval = strdup(yytext); column+=yyleng; return FALSE;}
"nil" { yylval.sval = strdup(yytext); column+=yyleng; return NULLPOINTER;}
"break" { yylval.sval = strdup(yytext); column+=yyleng; return BREAK;}
"continue" { yylval.sval = strdup(yytext); column+=yyleng; return CONTINUE;}
"fallthrough" { yylval.sval = strdup(yytext); column+=yyleng; return FALLTHROUGH;}
"return" { yylval.sval = strdup(yytext); column+=yyleng; return RETURN;}

"func" { yylval.sval = strdup(yytext); column+=yyleng; return FUNC;}
"struct" { yylval.sval = strdup(yytext); column+=yyleng; return STRUCT;}
"else" { yylval.sval = strdup(yytext); column+=yyleng; return ELSE;}
"package" { yylval.sval = strdup(yytext); column+=yyleng; return PACKAGE;}
"if" { yylval.sval = strdup(yytext); column+=yyleng; return IF;}
"for" { yylval.sval = strdup(yytext); column+=yyleng; return FOR;}
"range" { yylval.sval = strdup(yytext); column+=yyleng; return RANGE;}
"import" { yylval.sval = strdup(yytext); column+=yyleng; return IMPORT;}
"var" { yylval.sval = strdup(yytext); column+=yyleng; return VAR;}
"switch" { yylval.sval = strdup(yytext); column+=yyleng; return SWITCH;}
"case" { yylval.sval = strdup(yytext); column+=yyleng; return CASE;}
"new" { yylval.sval = strdup(yytext); column+=yyleng; return NEW;}
"const" { yylval.sval = strdup(yytext); column+=yyleng; return CONST;}
"map" { yylval.sval = strdup(yytext); column+=yyleng; return MAP;}
"default" { yylval.sval = strdup(yytext); column+=yyleng; return DEFAULT;}
"make" { yylval.sval = strdup(yytext); column+=yyleng; return MAKE;}
"goto" { yylval.sval = strdup(yytext); column+=yyleng; return GOTO;}
"type" { yylval.sval = strdup(yytext); column+=yyleng; return TYPE;}

"++"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return PLUSPLUS;}
"--"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return MINUSMINUS;}
"++" { yylval.sval = strdup(yytext); column+=yyleng; return PLUSPLUS;}
"--" { yylval.sval = strdup(yytext); column+=yyleng; return MINUSMINUS;}
{ANDNOT} { yylval.sval = strdup(yytext); column+=yyleng; return ANDNOT;}

"..." { yylval.sval = strdup(yytext); column+=yyleng; return ELIPSIS;}

    /* unary operators */
{ADD} { yylval.sval = strdup(yytext); column+=yyleng; return ADD;}
{SUB} { yylval.sval = strdup(yytext); column+=yyleng; return SUB;}
{NOT} { yylval.sval = strdup(yytext); column+=yyleng; return NOT;}
{XOR} { yylval.sval = strdup(yytext); column+=yyleng; return XOR;}
{MUL} { yylval.sval = strdup(yytext); column+=yyleng; return MUL;}
{AND} { yylval.sval = strdup(yytext); column+=yyleng; return AND;}
{OR} { yylval.sval = strdup(yytext); column+=yyleng; return OR;}


    /* binary operators */
{LOGOR} { yylval.sval = strdup(yytext); column+=yyleng; return LOGOR;}
{LOGAND} { yylval.sval = strdup(yytext); column+=yyleng; return LOGAND;}
{ISEQ} { yylval.sval = strdup(yytext); column+=yyleng; return ISEQ;}
{NEQ} { yylval.sval = strdup(yytext); column+=yyleng; return NEQ;}
{LESSEQ} { yylval.sval = strdup(yytext); column+=yyleng; return LESSEQ;}
{GRTEQ} { yylval.sval = strdup(yytext); column+=yyleng; return GRTEQ;}
{GRT} { yylval.sval = strdup(yytext); column+=yyleng; return GRT;}
{LESS} { yylval.sval = strdup(yytext); column+=yyleng; return LESS;}
{MOD} { yylval.sval = strdup(yytext); column+=yyleng; return MOD;}
{QUOT} { yylval.sval = strdup(yytext); column+=yyleng; return QUOT;}
{SHL} { yylval.sval = strdup(yytext); column+=yyleng; return SHL;}
{SHR} { yylval.sval = strdup(yytext); column+=yyleng; return SHR;}



    /* Assignment */
{INFER_EQ} { yylval.sval = strdup(yytext); column+=yyleng; return INFER_EQ;}
{ASSGN_OP} { yylval.sval = strdup(yytext); column+=yyleng; return ASSGN_OP;}

    /*Paranthesis, Punctuations*/

")"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return RIGHTPARAN;}
"}"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return RIGHTBRACE;}
"]"/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return RIGHTSQUARE;}

"(" { yylval.sval = strdup(yytext); column+=yyleng; return LEFTPARAN;}
")" { yylval.sval = strdup(yytext); column+=yyleng; return RIGHTPARAN;}
"{" { yylval.sval = strdup(yytext); column+=yyleng; return LEFTBRACE;}
"}" { yylval.sval = strdup(yytext); column+=yyleng; return RIGHTBRACE;}
"[" { yylval.sval = strdup(yytext); column+=yyleng; return LEFTSQUARE;}
"]" { yylval.sval = strdup(yytext); column+=yyleng; return RIGHTSQUARE;}
";" { yylval.sval = strdup(yytext); column+=yyleng; return SCOLON;}
":" { yylval.sval = strdup(yytext); column+=yyleng; return COLON;}
"." { yylval.sval = strdup(yytext); column+=yyleng; return DOT;}
"," { yylval.sval = strdup(yytext); column+=yyleng; return COMMA;}
  
    /*Identifiers and datatypes*/


{DD}*\.({DD})*/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return FLOAT_VAL;}
{DD}+\.?({DD})*[eE][+-]?{DD}+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return FLOAT_VAL;}
{DD}*\.?({DD})+[eE][+-]?{DD}+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return FLOAT_VAL;}
{DD}+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); /*cout<<"HERE !!!"<<endl;*/ return INTEGER_VAL;}
0(x|X)[0-9a-fA-F]+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return INTEGER_VAL;}
0(o|O)[0-7]+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return INTEGER_VAL;}
0(b|B)[0-1]+/[ ]*[\n] { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return INTEGER_VAL;}

{DD}*\.({DD})* { yylval.sval = strdup(yytext); column+=yyleng; return FLOAT_VAL;}
{DD}+\.?({DD})*[eE][+-]?{DD}+ { yylval.sval = strdup(yytext); column+=yyleng; return FLOAT_VAL;}
{DD}*\.?({DD})+[eE][+-]?{DD}+ { yylval.sval = strdup(yytext); column+=yyleng; return FLOAT_VAL;}
{DD}+ { yylval.sval = strdup(yytext); column+=yyleng; return INTEGER_VAL;}
0(x|X)[0-9a-fA-F]+ { yylval.sval = strdup(yytext); column+=yyleng; return INTEGER_VAL;}
0(o|O)[0-7]+ { yylval.sval = strdup(yytext); column+=yyleng; return INTEGER_VAL;}
0(b|B)[0-1]+ { yylval.sval = strdup(yytext); column+=yyleng; return INTEGER_VAL;}


\'{UNICODE_BYTE_CHAR}\'/[ ]*[\n]  { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return BYTE_VAL;}
\'\\{ESCAPE_CHAR}\'/[ ]*[\n]  { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return BYTE_VAL;}
{RAW_STRING}/[ ]*[\n]                          { yylval.sval = strdup(yytext); BEGIN(EXTRA_SEMICOLON_MODE); return RAW_STRING; }
{INTERPRETED_STRING}/[ ]*[\n]                  { yylval.sval = strdup(yytext); BEGIN(EXTRA_SEMICOLON_MODE); return INTERPRETED_STRING; }


\'{UNICODE_BYTE_CHAR}\'  { yylval.sval = strdup(yytext); column+=yyleng; return BYTE_VAL;}
\'\\{ESCAPE_CHAR}\'  { yylval.sval = strdup(yytext); column+=yyleng; return BYTE_VAL;}
{RAW_STRING}                               { yylval.sval = strdup(yytext); return RAW_STRING; }
{INTERPRETED_STRING}                       { yylval.sval = strdup(yytext); return INTERPRETED_STRING; }

{LETTER}({LETTER}|{DD})*/[ ]*[\n] { yylval.sval = strdup(yytext); cout<<yytext<<"--LEXER\n"; column+=yyleng; BEGIN(EXTRA_SEMICOLON_MODE); return IDENTIFIER;}
{LETTER}({LETTER}|{DD})* { yylval.sval = strdup(yytext); cout<<yytext<<"--LEXER\n"; column+=yyleng; return IDENTIFIER;}

[ ] { yylval.sval = strdup(yytext); column+=yyleng;}
[\t] {column+=4;yyleng=4;}
[\n] {;}


"//" { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(SINGLE_LINE_COMMENT);}
<SINGLE_LINE_COMMENT>{NL} {column=1; BEGIN(INITIAL);}
<SINGLE_LINE_COMMENT>[^\n]* ;

"/*" { yylval.sval = strdup(yytext); column+=yyleng; BEGIN(MULTI_LINE_COMMENT);}
<MULTI_LINE_COMMENT>"*/" {column=1; BEGIN(INITIAL);}
<MULTI_LINE_COMMENT>[^*]* ;


. {cout<<"Bad character in "<<yylineno<<" column number "<<column<<"\n"; }

%%

int yywrap(void)
{
    return 1;
}