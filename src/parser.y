%{
	#include<bits/stdc++.h>
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern "C" int yyparse();
	extern "C" FILE* yyin;
	void yyerror(const char* s);

	#define YYDEBUG 1
%}

%define parse.error verbose

%union {
	char* nt;
	char* sval;
}


%token <sval> INTEGER_VAL FLOAT_VAL TRUE FALSE NULLPOINTER BREAK CONTINUE RETURN
%token <sval> SCOLON FUNC STRUCT ELSE PACKAGE IF FOR RANGE IMPORT VAR SWITCH CASE NEW CONST MAP DEFAULT
%token <sval> MAKE GOTO TYPE PLUSPLUS MINUSMINUS PLUSEQUAL MINUSEQUAL ANDNOT ELIPSIS ADD SUB NOT XOR MUL AND OR 
%token <sval> LOGOR LOGAND ISEQ NEQ LESSEQ GRTEQ GRT LESS MOD QUOT SHL SHR EQ INFER_EQ RIGHTPARAN RIGHTBRACE RIGHTSQUARE
%token <sval> LEFTPARAN LEFTBRACE LEFTSQUARE COLON DOT COMMA RAW_STRING INTERPRETED_STRING BYTE_VAL IDENTIFIER
%type <nt> SourceFile Expression Expression1 Expression2 Expression3 Expression4 EmptyExpr
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec
%type <nt> Signature Result Parameters ParameterList ParameterDecl TypeList
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt Empty
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt StructType
%type <nt> FunctionBody ForStmt RangeClause
%type <nt> FunctionDecl
%type <nt> Condition  UnaryExpr PrimaryExpr Assign_OP Rel_OP Add_OP Mul_OP Unary_OP
%type <nt> Selector Index Slice TypeDecl TypeSpecList TypeSpec VarDecl
%type <nt> TypeAssertion Arguments ExpressionList ArrayType CompositeLit
%type <nt> String ImportPath SliceType LiteralType
%type <nt> LiteralValue ElementList KeyedElement Key Element
%type <nt> Operand Literal BasicLit OperandName ImportSpec IfStmt
%type <nt> PackageClause ImportDeclList ImportDecl ImportSpecList TopLevelDeclList
%type <nt> FieldDeclList FieldDecl MakeExpr StructLiteral KeyValueList Type
%type <nt> QualifiedIdent PointerType IdentifierList

%%

// TODO: Fix  warning: type clash on default action: <nt> != <sval> errors by defining {;} action

SourceFile:
    PackageClause SCOLON ImportDeclList TopLevelDeclList
    ;

Block:
    LEFTBRACE  StatementList  RIGHTBRACE
    ;

Condition:
	Expression
	;

StatementList:
	StatementList Statement SCOLON
	| Statement
	;

Statement:
	Declaration
	| LabeledStmt
	| SimpleStmt
	| ReturnStmt
	| BreakStmt
	| ContinueStmt
	| GotoStmt
	| Block
	| IfStmt
	| ForStmt
	;


SimpleStmt:
	EmptyStmt
	| ExpressionStmt
	| IncDecStmt
	| Assignment
	| ShortVarDecl
	;

EmptyStmt:
	;

ExpressionStmt:
	Expression
	;

IncDecStmt:
	Expression PLUSPLUS
	| Expression MINUSMINUS
	| Expression PLUSEQUAL
	| Expression MINUSEQUAL
	;

Rel_OP:
	ISEQ {;}
	| NEQ {;}
	| LESSEQ {;} 
	| GRTEQ {;}
	| GRT {;}
	| LESS {;}
	;

Add_OP:
	ADD {;} 
	| SUB {;} 
	| OR {;} 
	| XOR {;}
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

Assign_OP :
	Add_OP {;}
	| Mul_OP {;}
	| Add_OP EQ {;} 
	| Mul_OP EQ {;}
	;

Unary_OP:
	ADD  {;}
	| SUB {;} 
	| NOT {;} 
	| XOR {;} 
	| MUL {;}
	;

Assignment:
	ExpressionList Assign_OP ExpressionList
	;

ShortVarDecl:
	ExpressionList INFER_EQ ExpressionList
	;

VarDecl:
	VAR VarSpec
	;

VarSpec:
	IdentifierList Type
	| IdentifierList Type Assign_OP ExpressionList
	| IdentifierList Assign_OP ExpressionList
	;

Declaration:
	TypeDecl
	| VarDecl
	;

FunctionDecl:
	FUNC IDENTIFIER  Signature FunctionBody 
	| FUNC IDENTIFIER  Signature 
	;

FunctionBody:
	Block
	;

Signature:
	Parameters
	| Parameters Result;

Result:
	LEFTPARAN TypeList RIGHTPARAN
	| Type
	;

Parameters:
	LEFTPARAN RIGHTPARAN
	| LEFTPARAN ParameterList RIGHTPARAN
	| LEFTPARAN ParameterList COMMA RIGHTPARAN
	;

ParameterList:
	ParameterDecl
	| ParameterList COMMA ParameterDecl
	;

ParameterDecl:
	IdentifierList Type
	| IdentifierList ELIPSIS Type
	| ELIPSIS Type
	;

TypeList:
	TypeList COMMA Type
	| Type
	;

IdentifierList:
	IDENTIFIER
	| IdentifierList COMMA IDENTIFIER
	;

QualifiedIdent:
	IDENTIFIER DOT IDENTIFIER
	;

MethodDecl:
	FUNC Receiver IDENTIFIER Signature
	| FUNC Receiver IDENTIFIER Signature FunctionBody
	;

Receiver:
	Parameters
	;

TopLevelDeclList:
	TopLevelDeclList  SCOLON TopLevelDecl
	| TopLevelDecl
	;

TopLevelDecl:
	Declaration
	| FunctionDecl
	| MethodDecl
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
	| LEFTSQUARE ELIPSIS RIGHTSQUARE Operand  
	| MapType
	;

Type:
	LiteralType
	| OperandName
	;

Operand:	
	Literal
	| OperandName
	| LEFTPARAN Expression RIGHTPARAN
	;

OperandName:
	IDENTIFIER
	| QualifiedIdent
	;;
LiteralValue:
	LEFTBRACE RIGHTBRACE
	| LEFTBRACE ElementList RIGHTBRACE
	| LEFTBRACE ElementList COMMA RIGHTBRACE
	;

SliceType:
	LEFTSQUARE RIGHTSQUARE Type
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

LabeledStmt:
	IDENTIFIER COLON Statement
	;


ReturnStmt:
	RETURN
	| RETURN ExpressionList
	;


BreakStmt:
	BREAK
	| BREAK IDENTIFIER
	;


ContinueStmt:
	CONTINUE
	| CONTINUE IDENTIFIER
	;

GotoStmt:
	GOTO IDENTIFIER
	;

IfStmt:
	IF  Expression Block 
	|IF  SimpleStmt SCOLON Expression Block 
	|IF  Expression Block ELSE Block 
	|IF  Expression Block ELSE Block 
	|IF  Expression Block ELSE IfStmt 
	|IF  SimpleStmt SCOLON Expression Block ELSE IfStmt 
	|IF  SimpleStmt SCOLON Expression Block ELSE Block 
	;

EmptyExpr:
	;

Empty:
	;

ForStmt:
	FOR  SimpleStmt SCOLON ExpressionStmt SCOLON SimpleStmt Block  
	| FOR  Expression Block  
	| FOR Block 
	| ForStmt  SimpleStmt SCOLON EmptyExpr SCOLON SimpleStmt Block  
	| FOR  EmptyStmt Empty Expression Empty EmptyStmt Block  
	;


RangeClause:
	RANGE Expression
	| ExpressionList INFER_EQ RANGE Expression
	| ExpressionList EQ RANGE Expression
	;

Expression:
	Expression LOGOR Expression1
	| Expression1
	;

Expression1:
 	Expression1 LOGAND Expression2
 	| Expression2
 	;

 Expression2:
 	Expression2 Rel_OP Expression3
 	| Expression3
 	;

 Expression3:
 	Expression3 Add_OP Expression4
 	| Expression4
 	;

 Expression4:
 	Expression4 Mul_OP PrimaryExpr
 	| UnaryExpr
 	;

 UnaryExpr:
 	PrimaryExpr
 	| Unary_OP PrimaryExpr
 	;

 PrimaryExpr:
 	Operand
 	| MakeExpr
 	| PrimaryExpr Selector
 	| PrimaryExpr Index
 	| PrimaryExpr Slice
 	| PrimaryExpr Arguments
 	| OperandName StructLiteral
 	;

StructLiteral:
	LEFTBRACE KeyValueList RIGHTBRACE
	;

KeyValueList :
 	| Expression COLON Expression 
 	| Expression COLON Expression COMMA KeyValueList
 	;


Selector : 
	DOT IDENTIFIER
	;

Index:
	LEFTSQUARE Expression RIGHTSQUARE
	;

Slice:
	 LEFTSQUARE COLON Expression RIGHTSQUARE 
	 | LEFTSQUARE COLON RIGHTSQUARE 
	 | LEFTSQUARE Expression COLON RIGHTSQUARE 
	 | LEFTSQUARE Expression COLON Expression RIGHTSQUARE 
	 | LEFTSQUARE COLON Expression COLON Expression RIGHTSQUARE 
	 | LEFTSQUARE Expression COLON Expression COLON Expression RIGHTSQUARE
	 ;

MakeExpr:
	MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN
	| MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN
	| MAKE LEFTPARAN Type RIGHTPARAN
	| NEW LEFTPARAN Type RIGHTPARAN
	;

TypeAssertion:
	DOT LEFTPARAN Type RIGHTPARAN
	;

Arguments:
	LEFTPARAN RIGHTPARAN 
	| LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN
	;

ExpressionList: 
	Expression 
	| ExpressionList COMMA Expression
	;

TypeDecl:
	Type TypeSpec
	| Type LEFTPARAN TypeSpecList RIGHTPARAN
	;

TypeSpecList:
	TypeSpecList TypeSpec SCOLON
	| TypeSpec SCOLON
	;


TypeSpec:
	IDENTIFIER Type
	;

MapType:
	MAP LEFTSQUARE Type RIGHTSQUARE Type
	;

StructType:
	STRUCT LEFTBRACE FieldDeclList RIGHTBRACE
	| STRUCT LEFTBRACE RIGHTBRACE
	;

FieldDeclList:
	FieldDecl SCOLON
	| FieldDeclList FieldDecl SCOLON
	;

FieldDecl:
	IdentifierList Type String
	| IdentifierList Type
	;


PointerType:
	MUL Type
	;

ArrayType:
	LEFTSQUARE Expression RIGHTSQUARE Type
	;

Literal:
	BasicLit
	| CompositeLit
	;

BasicLit:
	INTEGER_VAL
	| FLOAT_VAL
	| BYTE_VAL
	| String
	| TRUE
	| FALSE
	;

String:
	RAW_STRING
	| INTERPRETED_STRING
	;

PackageClause:
	PACKAGE IDENTIFIER
	;

ImportDeclList :
	| ImportDeclList ImportDecl SCOLON
	| ImportDecl SCOLON
	;

ImportDecl:
	IMPORT LEFTPARAN ImportSpecList RIGHTPARAN
	| IMPORT ImportSpec
	;

ImportSpecList:
	| ImportSpecList ImportSpec SCOLON
	| ImportSpec SCOLON
	;

ImportSpec:
	IDENTIFIER ImportPath
	| DOT ImportPath
	| ImportPath
	;

ImportPath:
	String
	;

%%



	











	


