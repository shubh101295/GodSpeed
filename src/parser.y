%{
	#include<bits/stdc++.h>
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern int yyparse();
	extern FILE* yyin;
	void yyerror(const char* s) {
		fprintf(stderr,"%s\n",s);
	};
%}

%define parse.error verbose

%union {
	char* nt;
	char* sval;
}


%token <sval> INTEGER_VAL FLOAT_VAL TRUE FALSE NULLPOINTER BREAK CONTINUE RETURN
%token <sval> SCOLON FUNC STRUCT ELSE PACKAGE IF FOR RANGE IMPORT VAR SWITCH CASE NEW CONST MAP DEFAULT
%token <sval> MAKE GOTO FALLTHROUGH TYPE PLUSPLUS MINUSMINUS ANDNOT ELIPSIS ADD SUB NOT XOR MUL AND OR 
%token <sval> LOGOR LOGAND ISEQ NEQ LESSEQ GRTEQ GRT LESS MOD QUOT SHL SHR EQ INFER_EQ RIGHTPARAN RIGHTBRACE RIGHTSQUARE
%token <sval> LEFTPARAN LEFTBRACE LEFTSQUARE COLON DOT COMMA RAW_STRING INTERPRETED_STRING BYTE_VAL IDENTIFIER
%type <nt> SourceFile Expression
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec PackageName
%type <nt> Signature Result Parameters ParameterList ParameterDecl 
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt Label
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
%type <nt> FunctionBody ForStmt RangeClause
%type <nt> FunctionDecl ConstDecl SwitchStmt ExprSwitchCase ExprSwitchStmt
%type <nt> Condition  UnaryExpr PrimaryExpr Assign_OP Rel_OP Add_OP Mul_OP Unary_OP
%type <nt> Selector Index Slice TypeDecl TypeSpecList TypeSpec VarDecl
%type <nt> TypeAssertion Arguments ExpressionList ArrayType CompositeLit
%type <nt> String ImportPath SliceType LiteralType FunctionName
%type <nt> LiteralValue ElementList KeyedElement Key Element
%type <nt> Operand Literal BasicLit OperandName ImportSpec IfStmt ExprCaseClauseList
%type <nt> PackageClause ImportDeclList ImportDecl ImportSpecList TopLevelDeclList
%type <nt> FieldDeclList FieldDecl MakeExpr StructLiteral KeyValueList Type BaseType
%type <nt> QualifiedIdent PointerType IdentifierList AliasDecl TypeDef

%left EQ INFER_EQ
%left LOGOR
%left LOGAND
%left ISEQ NEQ LESSEQ GRTEQ GRT LESS
%left ADD SUB OR XOR
%left MUL QUOT MOD SHL SHR AND ANDNOT
%left NOT
%left LEFTBRACE LEFTPARAN LEFTSQUARE RIGHTSQUARE RIGHTPARAN RIGHTBRACE COMMA DOT COLON SCOLON
%%


// TODO: Fix  warning: type clash on default action: <nt> != <sval> errors by defining {;} action

SourceFile:
	PackageClause SCOLON {cout<<"PackageClause SCOLON\n";}
    | PackageClause SCOLON ImportDeclList {cout<<"PackageClause SCOLON ImportDeclList\n";}
	| PackageClause SCOLON TopLevelDeclList {cout<<"PackageClause SCOLON TopLevelDeclList\n";}
	| PackageClause SCOLON ImportDeclList TopLevelDeclList {cout<<"PackageClause SCOLON ImportDeclList TopLevelDeclList\n";}
    ;

Rel_OP:
	ISEQ {;}
	| NEQ {;}
	| LESSEQ {;} 
	| GRTEQ {;}
	| GRT {;}
	| LESS {;}
	;

Mul_OP:
	MUL {;}
	| QUOT{;} 
	| MOD {;}
	| SHL {;}
	| SHR {;}
	| AND {;}
	| ANDNOT {;}
	;

Unary_OP:
	ADD  {;}
	| SUB {;}
	| NOT {;}
	| XOR {;}
	| MUL {;}
	| AND {;}
	;

PackageClause:
	PACKAGE PackageName {cout<<"PackageClause\n";}
	;

PackageName:
	IDENTIFIER {;}
	;

ImportDeclList:
	ImportDeclList ImportDecl SCOLON {cout<<"ImportDeclList ImportDecl SCOLON\n";}
	| ImportDecl SCOLON {cout<<"ImportDecl SCOLON\n";}
	;

ImportDecl:
	IMPORT LEFTPARAN ImportSpecList RIGHTPARAN {;}
	| IMPORT LEFTPARAN RIGHTPARAN {;}
	| IMPORT ImportSpec {;}
	;

ImportSpecList:
	ImportSpecList ImportSpec SCOLON {;}
	| ImportSpec SCOLON {;}
	;

ImportSpec:
	PackageName ImportPath {;}
	| DOT ImportPath {;}
	| ImportPath {;}
	;

ImportPath:
	String
	;

TopLevelDeclList:
	TopLevelDeclList TopLevelDecl SCOLON  { cout<<"TopLevelDeclList TopLevelDecl SCOLON\n";}
	| TopLevelDecl SCOLON { cout<<"TopLevelDecl SCOLON\n";}
	;

TopLevelDecl:
	Declaration
	| FunctionDecl
	| MethodDecl
	;

Block:
    LEFTBRACE StatementList RIGHTBRACE {;}
    ;

Condition:
	Expression
	;

StatementList:
	StatementList Statement SCOLON {cout<<"StatementList Statement SCOLON\n";}
	| Statement SCOLON {cout<<"Statement SCOLON\n";}
	;

Statement:
	Declaration
	| LabeledStmt
	| SimpleStmt
	| ReturnStmt
	| BreakStmt
	| ContinueStmt
	| GotoStmt
	| SwitchStmt
	| FallthroughStmt
	| Block
	| IfStmt
	| ForStmt
	;

Declaration:
	TypeDecl
	| VarDecl
	| ConstDecl 
	;

FunctionDecl:
	FUNC FunctionName Signature FunctionBody {;}
	| FUNC FunctionName Signature  {;}
	;

FunctionName:
	IDENTIFIER {;}
	;

MethodDecl:
	FUNC Receiver IDENTIFIER Signature {;}
	| FUNC Receiver IDENTIFIER Signature FunctionBody {;}
	;

LabeledStmt:
	Label COLON Statement
	;

Label:
	IDENTIFIER{;}
	;

SimpleStmt:
	EmptyStmt
	| ExpressionStmt
	| IncDecStmt
	| Assignment
	| ShortVarDecl
	;

EmptyStmt:{;}
	;

ExpressionStmt:
	Expression
	;

IncDecStmt:
	Expression PLUSPLUS
	| Expression MINUSMINUS
	;

Assignment:
	ExpressionList Assign_OP ExpressionList
	;

ShortVarDecl:
	IdentifierList INFER_EQ ExpressionList
	;

VarDecl:
	VAR VarSpec {;}
	| VAR LEFTPARAN VarSpecList RIGHTPARAN {;}
	| VAR LEFTPARAN RIGHTPARAN {;}
	;

VarSpecList:
	VarSpecList VarSpec SCOLON
	| VarSpec SCOLON
	;

VarSpec:
	IdentifierList Type
	| IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
	;

ConstDecl:
	CONST ConstSpec {;}
	| CONST LEFTPARAN ConstSpecList RIGHTPARAN {;}
	| CONST LEFTPARAN RIGHTPARAN {;}
	;

ConstSpecList:
	ConstSpecList ConstSpec SCOLON
	| ConstSpec SCOLON
	;

ConstSpec:
	IdentifierList Type
	| IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
	;

FunctionBody:
	Block
	;

Signature:
	Parameters {cout<<"Parameters\n";}
	| Parameters Result;

Result:
	Parameters {;}
	| Type {;}
	;

Parameters:
	LEFTPARAN RIGHTPARAN {cout<<"LEFTPARAN RIGHTPARAN\n";}
	| LEFTPARAN ParameterList RIGHTPARAN {;}
	| LEFTPARAN ParameterList COMMA RIGHTPARAN {;}
	;

ParameterList:
	ParameterDecl
	| ParameterList COMMA ParameterDecl
	;

ParameterDecl:
	IdentifierList Type {;}
	| IdentifierList ELIPSIS Type {;}
	| ELIPSIS Type {;}
	;

IdentifierList:
	IdentifierList COMMA IDENTIFIER {;}
	| IDENTIFIER {;}
	;

QualifiedIdent:
	PackageName DOT IDENTIFIER {cout<<"QualifiedIdent "<<$1<<" "<<$2<<" "<<$3<<"\n";}
	;

Receiver:
	Parameters
	;

CompositeLit:
	LiteralType LiteralValue
	;
// Something diff in both versions in type, literaltype-> check with others 
LiteralType:
	StructType
	| ArrayType
	| PointerType
	| SliceType
	| LEFTSQUARE ELIPSIS RIGHTSQUARE Operand {;}
	| MapType
	;

Type:
	LiteralType
	| OperandName
	;

Operand:	
	Literal
	| OperandName
	| LEFTPARAN Expression RIGHTPARAN {;}
	;

OperandName:
	IDENTIFIER {;}	 
	| QualifiedIdent {cout<<"OperandName:QualifiedIdent "<<$1<<"\n";}
	;

LiteralValue:
	LEFTBRACE RIGHTBRACE {;}
	| LEFTBRACE ElementList RIGHTBRACE {;}
	| LEFTBRACE ElementList COMMA RIGHTBRACE {;}
	;

SliceType:
	LEFTSQUARE RIGHTSQUARE Type {;}
	;

ElementList:
	KeyedElement
	| ElementList COMMA KeyedElement
	;

KeyedElement:
	Element
	| Key COLON Element
	;

Key:
	Expression
	| LiteralValue
	;

Element:
	Expression
	| LiteralValue
	;

ReturnStmt:
	RETURN {;}
	| RETURN ExpressionList {;}
	;


BreakStmt:
	BREAK {;}
	| BREAK Label {;}
	;


ContinueStmt:
	CONTINUE {;}
	| CONTINUE Label {;}
	;

GotoStmt:
	GOTO Label {;}
	;

SwitchStmt:
	ExprSwitchStmt
	;

ExprSwitchStmt:
	SWITCH LEFTBRACE RIGHTBRACE {;}
	| SWITCH SimpleStmt SCOLON LEFTBRACE RIGHTBRACE {;}
	| SWITCH Expression LEFTBRACE RIGHTBRACE { cout<<"SWITCH Expression LEFTBRACE RIGHTBRACE\n";}
	| SWITCH SimpleStmt SCOLON Expression LEFTBRACE RIGHTBRACE {;}
	| SWITCH LEFTBRACE ExprCaseClauseList RIGHTBRACE{;}
	| SWITCH SimpleStmt SCOLON LEFTBRACE ExprCaseClauseList RIGHTBRACE{;}
	| SWITCH Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE {;}
	| SWITCH SimpleStmt SCOLON Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE {;}
	;

ExprCaseClauseList:
	ExprCaseClauseList ExprCaseClause {;}
	| ExprCaseClause {;}

ExprCaseClause:
	ExprSwitchCase COLON StatementList {;}
	;

ExprSwitchCase:
	CASE ExpressionList {;}
	| DEFAULT {;}
	;

FallthroughStmt:
	FALLTHROUGH {;}
	;

IfStmt:
	IF Expression Block {;}
	|IF SimpleStmt SCOLON Expression Block {;}
	|IF Expression Block ELSE IfStmt {;}
	|IF Expression Block ELSE Block {;}
	|IF SimpleStmt SCOLON Expression Block ELSE IfStmt {;}
	|IF SimpleStmt SCOLON Expression Block ELSE Block {;}
	;

ForStmt:
	FOR Block {;}
	| FOR ForClause Block {;}
	| FOR Condition Block {;}
	| FOR RangeClause Block {;}
	;

ForClause:
	InitStmt SCOLON SCOLON PostStmt
	| InitStmt SCOLON Condition SCOLON PostStmt
	;

InitStmt:
	SimpleStmt
	;

PostStmt:
	SimpleStmt
	;


RangeClause:
	RANGE Expression {;}
	| IdentifierList INFER_EQ RANGE Expression
	| ExpressionList EQ RANGE Expression
	;

Expression:
	ExpressionOR {;}
	;

ExpressionOR:
	ExpressionOR LOGOR ExpressionAND %prec LOGOR {cout<<"ExpressionOR LOGOR ExpressionAND %prec LOGOR "<<"\n";} 
	| ExpressionAND %prec LOGAND
	;

ExpressionAND:
	ExpressionAND LOGAND ExpressionREL %prec LOGAND {;}
	| ExpressionREL %prec ISEQ {cout<<"ExpressionREL\n";}
	;

ExpressionREL:
		ExpressionREL ISEQ ExpressionADD %prec ISEQ
	|	ExpressionREL NEQ ExpressionADD %prec ISEQ
	|	ExpressionREL LESSEQ ExpressionADD %prec ISEQ
	|	ExpressionREL GRTEQ ExpressionADD %prec ISEQ
	|	ExpressionREL GRT ExpressionADD %prec ISEQ
	|	ExpressionREL LESS ExpressionADD %prec ISEQ
	
	| ExpressionADD %prec ADD {cout<<"ExpressionADD\n";}
	;

ExpressionADD:
	ExpressionADD ADD ExpressionMUL %prec MUL {cout<<"ExpressionADD ADD ExpressionMUL\n";}
	| ExpressionADD SUB ExpressionMUL %prec MUL {cout<<"ExpressionADD ADD ExpressionMUL\n";}
	| ExpressionADD OR ExpressionMUL %prec MUL {cout<<"ExpressionADD ADD ExpressionMUL\n";}
	| ExpressionADD XOR ExpressionMUL %prec MUL {cout<<"ExpressionADD ADD ExpressionMUL\n";}
	
	| ExpressionMUL %prec MUL {cout<<"ExpressionMUL\n";}
	;

ExpressionMUL:
	ExpressionMUL Mul_OP PrimaryExpr %prec MUL
	| UnaryExpr %prec NOT {cout<<"UnaryExpr\n";}
	;

UnaryExpr:
 	PrimaryExpr {cout<<"PrimaryExpr\n";}
 	| Unary_OP PrimaryExpr
 	;

 PrimaryExpr:
 	Operand {cout<<"Operand\n";}
 	| MakeExpr
 	| PrimaryExpr Selector
 	| PrimaryExpr Index
 	| PrimaryExpr Slice
 	| PrimaryExpr Arguments
 	| OperandName StructLiteral
	| PrimaryExpr TypeAssertion
 	;

StructLiteral:
	LEFTBRACE KeyValueList RIGHTBRACE {;}
	;

KeyValueList :
 	Expression COLON Expression 
 	| Expression COLON Expression COMMA KeyValueList
 	;


Selector : 
	DOT IDENTIFIER {;}
	;

Index:
	LEFTSQUARE Expression RIGHTSQUARE {;}
	;

Slice:
	 LEFTSQUARE COLON Expression RIGHTSQUARE {;}
	 | LEFTSQUARE COLON RIGHTSQUARE {;}
	 | LEFTSQUARE Expression COLON RIGHTSQUARE  {;}
	 | LEFTSQUARE Expression COLON Expression RIGHTSQUARE {;}
	 | LEFTSQUARE COLON Expression COLON Expression RIGHTSQUARE {;} 
	 | LEFTSQUARE Expression COLON Expression COLON Expression RIGHTSQUARE {;}
	 ;

MakeExpr:
	MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN {;}
	| MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN {;}
	| MAKE LEFTPARAN Type RIGHTPARAN {;}
	| NEW LEFTPARAN Type RIGHTPARAN {;}
	;

TypeAssertion:
	DOT LEFTPARAN Type RIGHTPARAN {;}
	;

Arguments:
	LEFTPARAN RIGHTPARAN {;}
	| LEFTPARAN ExpressionList RIGHTPARAN {cout<<"LEFTPARAN ExpressionList RIGHTPARAN\n";}
	| LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN {cout<<"LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN\n";}
	;

ExpressionList: 
	Expression {cout<<"Expression "<<$1<<"\n";}
	| ExpressionList COMMA Expression {cout<<"ExpressionList COMMA Expression "<<$1<<" "<<$2<<" "<<$3<<"\n";}
	;

TypeDecl:
	TYPE LEFTPARAN TypeSpecList RIGHTPARAN {;}
	| TYPE TypeSpec {;}
	;

TypeSpecList:
	TypeSpecList TypeSpec SCOLON
	| TypeSpec SCOLON
	;

TypeSpec:
	AliasDecl
	| TypeDef
	;

AliasDecl:
	IDENTIFIER EQ Type {;}
	;

TypeDef:
	IDENTIFIER Type {;}
	;

MapType:
	MAP LEFTSQUARE Type RIGHTSQUARE Type {;}
	;

StructType:
	STRUCT LEFTBRACE FieldDeclList RIGHTBRACE {;}
	| STRUCT LEFTBRACE RIGHTBRACE {;}
	;

FieldDeclList:
	FieldDecl SCOLON {;}
	| FieldDeclList FieldDecl SCOLON {;}
	;

FieldDecl:
	IdentifierList Type String
	| IdentifierList Type
	;


PointerType:
	MUL BaseType {;} %prec LEFTPARAN
	;

BaseType:
	Type
	;

ArrayType:
	LEFTSQUARE Expression RIGHTSQUARE Type {;}
	;

Literal:
	BasicLit
	| CompositeLit
	;

BasicLit:
	INTEGER_VAL {;}
	| FLOAT_VAL {;}
	| BYTE_VAL  {;}
	| String
	| TRUE      {;}
	| FALSE     {;}
	;

String:
	RAW_STRING {;}
	| INTERPRETED_STRING {cout<<"INTERPRETED_STRING "<<$1<<"\n";}
	;

Assign_OP :
	EQ {;}
	| Add_OP EQ {;} %prec ADD
	| Mul_OP EQ {;} %prec MUL
	;

Add_OP:
	ADD {cout<<"ADD\n";} 
	| SUB {cout<<"SUB\n";} 
	| OR {cout<<"OR\n";} 
	| XOR {;}
	;
%%



	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	
		
}









	


