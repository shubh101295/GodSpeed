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

%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT

%%
    /* reserved keyword */

"break" {column+=yyleng; return BREAK;}
"func" {column+=yyleng; return FUNC;}
"struct" {column+=yyleng; return STRUCT;}
"else" {column+=yyleng; return ELSE;}
"package" {column+=yyleng; return PACKAGE;}
"if" {column+=yyleng; return IF;}
"continue" {column+=yyleng; return CONTINUE;}
"for" {column+=yyleng; return FOR;}
"import" {column+=yyleng; return IMPORT;}
"return" {column+=yyleng; return RETURN;}
"var" {column+=yyleng; return VAR;}
"new" {column+=yyleng; return NEW;}
"const" {column+=yyleng; return CONST;}

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
"(" {column+=yyleng; return LP;}
")" {column+=yyleng; return RP;}
"{" {column+=yyleng; return LB;}
"}" {column+=yyleng; return RB;}
"[" {column+=yyleng; return LSQ;}
"]" {column+=yyleng; return RSQ;}
";" {column+=yyleng; return SCOLON;}
":" {column+=yyleng; return COLON;}
"." {column+=yyleng; return DOT;}
"," {column+=yyleng; return COMMA;}

    /*Identifiers and datatypes*/

[+-]?{DD}+\.({DD})* {column+=yyleng; return FLOAT;}
[+-]?{DD}+\.({DD})*[eE]{DD}+ {column+=yyleng; return FLOAT;}
[+-]?{DD}+ {column+=yyleng; return INTEGER;}

{ALPHA}({LETTER}|{DD})* {column+=yyleng; return IDENTIFIER;}
[ \t] {column+=yyleng; return SPACE;}
. {cout<<"Bad character in "<<yylineno<<" column number "<<column;}

%%

int yywrap(void)
{
    return 1;
}