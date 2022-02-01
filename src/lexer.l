%{
    #include "y.tab.h"
    #include<iostream>
    using namespace std;
    long long int column = 1;
%}
%option yylineno

DD [0-9]
NL [\n]
ALPHA [a-zA-Z]
LETTER [a-zA-Z_]
UNICODE_BYTE_CHAR            [^']
BACKSLASH_BYTE_CHAR          [nt\\']
%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT

%%
    /* reserved keyword */

"true" {column+=yyleng; return TRUE;}
"false" {column+=yyleng; return FALSE;}
"nil" {column+=yyleng; return NULLPOINTER;}
"break" {column+=yyleng; return BREAK;}
"func" {column+=yyleng; return FUNC;}
"struct" {column+=yyleng; return STRUCT;}
"else" {column+=yyleng; return ELSE;}
"package" {column+=yyleng; return PACKAGE;}
"if" {column+=yyleng; return IF;}
"continue" {column+=yyleng; return CONTINUE;}
"for" {column+=yyleng; return FOR;}
"range" {column+=yyleng; return RANGE;}
"import" {column+=yyleng; return IMPORT;}
"return" {column+=yyleng; return RETURN;}
"var" {column+=yyleng; return VAR;}
"switch" {column+=yyleng; return SWITCH;}
"case" {column+=yyleng; return CASE;}
"new" {column+=yyleng; return NEW;}
"const" {column+=yyleng; return CONST;}
"fallthrough" {column+=yyleng; return FALLTHORUGH;}
"map" {column+=yyleng; return MAP;}
"default" {column+=yyleng; return DEFAULT;}
"make" {column+=yyleng; return MAKE;}
"goto" {column+=yyleng; return GOTO;}
"type" {column+=yyleng; return TYPE;}
"bool" {column+=yyleng; return BOOL;}
"byte" {column+=yyleng; return BYTE;}
"string" {column+=yyleng; return STRING;}
"int" {column+=yyleng; return INTEGER;}
"float" {column+=yyleng; return FLOAT;}


"++" {column+=yyleng; return PLUSPLUS;}
"--" {column+=yyleng; return MINUSMINUS;}
"+=" {column+=yyleng; return PLUSEQUAL;}
"-=" {column+=yyleng; return MINUSEQUAL;}
"*=" {column+=yyleng; return MULTEQUAL;}
"/=" {column+=yyleng; return DIVEQUAL;}
"&=" {column+=yyleng; return BITANDEQUAL;}
"|=" {column+=yyleng; return BITOREQUAL;}
"^=" {column+=yyleng; return BITXOREQUAL;}
"%=" {column+=yyleng; return MODULOEQUAL;}
"<<=" {column+=yyleng; return LEFTSHIFTEQUAL;}
">>=" {column+=yyleng; return RIGHTSHIFTEQUAL;}
"&^" {column+=yyleng; return ANDNOT;}

"..." {column+=yyleng; return ELIPSIS;}

    /* unary operators */
"+" {column+=yyleng; return ADD;}
"-" {column+=yyleng; return SUB;}
"!" {column+=yyleng; return NOT;}
"^" {column+=yyleng; return XOR;}
"*" {column+=yyleng; return MUL;}
"&" {column+=yyleng; return AND;}
"|" {column+=yyleng; return OR;}


    /* binary operators */
"||" {column+=yyleng; return LOGOR;}
"&&" {column+=yyleng; return LOGAND;}
"==" {column+=yyleng; return ISEQ;}
"!=" {column+=yyleng; return NEQ;}
"<=" {column+=yyleng; return LESSEQ;}
">=" {column+=yyleng; return GRTEQ;}
">" {column+=yyleng; return GRT;}
"<" {column+=yyleng; return LESS;}
"%" {column+=yyleng; return MOD;}
"/" {column+=yyleng; return QUOT;}
"<<" {column+=yyleng; return SHL;}
">>" {column+=yyleng; return SHR;}



    /* Assignment */
"=" {column+=yyleng; return EQ;}
":=" {column+=yyleng; return INFER_EQ;}

    /*Paranthesis, Punctuations*/
"(" {column+=yyleng; return LEFTPARAN;}
")" {column+=yyleng; return RIGHTPARAN;}
"{" {column+=yyleng; return LEFTBRACE;}
"}" {column+=yyleng; return RIGHTBRACE;}
"[" {column+=yyleng; return LEFTSQUARE;}
"]" {column+=yyleng; return RIGHTSQUARE;}
";" {column+=yyleng; return SCOLON;}
":" {column+=yyleng; return COLON;}
"." {column+=yyleng; return DOT;}
"," {column+=yyleng; return COMMA;}
  
    /*Identifiers and datatypes*/



[+-]?{DD}*\.({DD})* {column+=yyleng; return FLOAT_VAL;}
[+-]?{DD}+\.?({DD})*[eE][+-]?{DD}+ {column+=yyleng; return FLOAT_VAL;}
[+-]?{DD}*\.?({DD})+[eE][+-]?{DD}+ {column+=yyleng; return FLOAT_VAL;}
[+-]?{DD}+ {column+=yyleng; return INTEGER_VAL;}
\"([^\\\n\"]|(\\.))*\"  {column+=yyleng; return STRING_VAL;}
\'{UNICODE_BYTE_CHAR}\'  {column+=yyleng; return BYTE_VAL;}
\'\\{BACKSLASH_BYTE_CHAR}\'  {column+=yyleng; return BYTE_VAL;}

{LETTER}({LETTER}|{DD})* {column+=yyleng; return IDENTIFIER;}
[ ] {column+=yyleng;}
[\t] {column+=4;yyleng=4;}
[\n] {column=1;return NEWLINE;}


"//" {column+=yyleng; BEGIN(SINGLE_LINE_COMMENT); return COMMENT;}
<SINGLE_LINE_COMMENT>{NL} {column=1; BEGIN(INITIAL);}
<SINGLE_LINE_COMMENT>[^\n]* ;

"/*" {column+=yyleng; BEGIN(MULTI_LINE_COMMENT); return COMMENT;}
<MULTI_LINE_COMMENT>"*/" {column=1; BEGIN(INITIAL);}
<MULTI_LINE_COMMENT>[^*]* ;

. {cout<<"Bad character in "<<yylineno<<" column number "<<column;}

%%

int yywrap(void)
{
    return 1;
}