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
%token <sval> MAKE GOTO FALLTHROUGH TYPE PLUSPLUS MINUSMINUS ANDNOT ELIPSIS ADD SUB NOT XOR MUL AND OR 
%token <sval> LOGOR LOGAND ISEQ NEQ LESSEQ GRTEQ GRT LESS MOD QUOT SHL SHR EQ INFER_EQ RIGHTPARAN RIGHTBRACE RIGHTSQUARE
%token <sval> LEFTPARAN LEFTBRACE LEFTSQUARE COLON DOT COMMA RAW_STRING INTERPRETED_STRING BYTE_VAL IDENTIFIER
%type <nt> SourceFile Expression Expression1 Expression2 Expression3 Expression4 EmptyExpr
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec PackageName
%type <nt> Signature Result Parameters ParameterList ParameterDecl TypeList
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt Empty Label
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
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
%type <nt> QualifiedIdent PointerType IdentifierList AliasDecl TypeDef


%%

// TODO: Fix  warning: type clash on default action: <nt> != <sval> errors by defining {;} action

SourceFile:
    PackageClause SCOLON ImportDeclList TopLevelDeclList
    ;

Assign_OP :
	EQ {;}
	| Add_OP EQ {;} 
	| Mul_OP EQ {;}
	;

Add_OP:
	ADD {cout << "ISEQ\n";} 
	| SUB {cout << "ISEQ\n";} 
	| OR {cout << "ISEQ\n";} 
	| XOR {cout << "ISEQ\n";}
	;

Rel_OP:
	ISEQ {cout << "ISEQ\n";}
	| NEQ {cout << "ISEQ\n";}
	| LESSEQ {cout << "ISEQ\n";} 
	| GRTEQ {cout << "ISEQ\n";}
	| GRT {cout << "ISEQ\n";}
	| LESS {cout << "ISEQ\n";}
	;

Mul_OP:
	MUL {cout << "ISEQ\n";}
	| QUOT{cout << "ISEQ\n";} 
	| MOD {cout << "ISEQ\n";}
	| SHL {cout << "ISEQ\n";}
	| SHR {cout << "ISEQ\n";}
	| AND {cout << "ISEQ\n";}
	| ANDNOT {cout << "ISEQ\n";}
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
	PACKAGE PackageName
	;

PackageName:
	IDENTIFIER
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
	PackageName ImportPath
	| DOT ImportPath
	| ImportPath
	;

ImportPath:
	String
	;

TopLevelDeclList:
	TopLevelDeclList TopLevelDecl SCOLON
	| TopLevelDecl SCOLON
	;

TopLevelDecl:
	Declaration
	| FunctionDecl
	| MethodDecl
	;

Block:
    LEFTBRACE StatementList RIGHTBRACE
    ;

Condition:
	Expression
	;

StatementList:
	StatementList Statement SCOLON
	| Statement SCOLON
	;

Statement:
	Declaration
	| LabeledStmt
	| SimpleStmt
	| ReturnStmt
	| BreakStmt
	| ContinueStmt
	| GotoStmt
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
	FUNC IDENTIFIER Signature FunctionBody 
	| FUNC IDENTIFIER Signature 
	;

MethodDecl:
	FUNC Receiver IDENTIFIER Signature
	| FUNC Receiver IDENTIFIER Signature FunctionBody
	;

LabeledStmt:
	Label COLON Statement
	;

Label:
	IDENTIFIER
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
	;

Assignment:
	ExpressionList Assign_OP ExpressionList
	;

ShortVarDecl:
	IdentifierList INFER_EQ ExpressionList
	;

VarDecl:
	VAR VarSpec
	| VAR LEFTPARAN VarSpecList RIGHTPARAN
	;

VarSpecList:
	VarSpecList VarSpec SCOLON
	| VarSpec SCOLON

VarSpec:
	IdentifierList Type
	| IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
	;

ConstDecl:
	CONST ConstSpec
	| CONST LEFTPARAN ConstSpecList RIGHTPARAN
	;

ConstSpecList:
	ConstSpecList ConstSpec SCOLON
	| ConstSpec SCOLON

ConstSpec:
	IdentifierList Type
	| IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
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
	IdentifierList COMMA IDENTIFIER
	| IDENTIFIER
	;

QualifiedIdent:
	IDENTIFIER DOT IDENTIFIER
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

ReturnStmt:
	RETURN
	| RETURN ExpressionList
	;


BreakStmt:
	BREAK
	| BREAK Label
	;


ContinueStmt:
	CONTINUE
	| CONTINUE Label
	;

GotoStmt:
	GOTO Label
	;

FallthroughStmt:
	FALLTHROUGH
	;

IfStmt:
	IF Expression Block
	|IF SimpleStmt SCOLON Expression Block
	|IF Expression Block ELSE IfStmt
	|IF Expression Block ELSE Block
	|IF SimpleStmt SCOLON Expression Block ELSE IfStmt
	|IF SimpleStmt SCOLON Expression Block ELSE Block
	;

EmptyExpr:
	;

Empty:
	;

ForStmt:
	FOR Block
	| FOR ForClause Block
	| FOR Condition Block
	| FOR RangeClause Block
	;

ForClause:
	SCOLON SCOLON
	| InitStmt SCOLON SCOLON
	| SCOLON Condition SCOLON
	| SCOLON SCOLON PostStmt
	| InitStmt SCOLON Condition SCOLON
	| InitStmt SCOLON SCOLON PostStmt
	| SCOLON Condition SCOLON PostStmt
	| InitStmt SCOLON Condition SCOLON PostStmt
	;

InitStmt:
	SimpleStmt
	;

PostStmt:
	SimpleStmt
	;


RangeClause:
	RANGE Expression
	| IdentifierList INFER_EQ RANGE Expression
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
	| PrimaryExpr TypeAssertion
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
	ExpressionList COMMA Expression 
	| Expression
	;

TypeDecl:
	TYPE LEFTPARAN TypeSpecList RIGHTPARAN
	| TYPE TypeSpec
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
	IDENTIFIER EQ Type
	;

TypeDef:
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
%%



	











	


