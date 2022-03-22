%{

	#include<bits/stdc++.h>
	#include "node.hpp"
	#include "tables.hpp"
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern int yyparse();
	extern FILE* yyin;
	void yyerror(const char* s) {
		fprintf(stderr,"%s\n",s);
		exit(1);
	};

	SymbolTable* st = new SymbolTable();
	TypesTable* tt = new TypesTable();
	BreakLabels* bl = new BreakLabels();

%}

%define parse.error verbose

%union {
	Node* nt;
	char* sval;
}


%token <sval> INTEGER_VAL FLOAT_VAL TRUE FALSE NULLPOINTER BREAK CONTINUE RETURN
%token <sval> SCOLON FUNC STRUCT ELSE PACKAGE IF FOR RANGE IMPORT VAR SWITCH CASE NEW CONST MAP DEFAULT
%token <sval> MAKE GOTO FALLTHROUGH TYPE PLUSPLUS MINUSMINUS ANDNOT ELIPSIS ADD SUB NOT XOR MUL AND OR 
%token <sval> LOGOR LOGAND ISEQ NEQ LESSEQ GRTEQ GRT LESS MOD QUOT SHL SHR EQ INFER_EQ RIGHTPARAN RIGHTBRACE RIGHTSQUARE
%token <sval> LEFTPARAN LEFTBRACE LEFTSQUARE COLON DOT COMMA RAW_STRING INTERPRETED_STRING BYTE_VAL IDENTIFIER
%token <sval> ASSGN_OP 

%type <nt> SourceFile Expression
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec PackageName
%type <nt> Signature Result Parameters ParameterList ParameterDecl 
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt Label
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
%type <nt> FunctionBody ForStmt RangeClause
%type <nt> FunctionDecl ConstDecl SwitchStmt ExprSwitchCase ExprSwitchStmt
%type <nt> Condition  UnaryExpr PrimaryExpr
%type <nt> Selector Index Slice TypeDecl TypeSpecList TypeSpec VarDecl
%type <nt> TypeAssertion Arguments ExpressionList ArrayType CompositeLit
%type <nt> String ImportPath SliceType LiteralType FunctionName
%type <nt> LiteralValue ElementList KeyedElement Key Element
%type <nt> Operand Literal BasicLit OperandName ImportSpec IfStmt ExprCaseClauseList
%type <nt> PackageClause ImportDeclList ImportDecl ImportSpecList TopLevelDeclList
%type <nt> FieldDeclList FieldDecl MakeExpr StructLiteral KeyValueList Type BaseType
%type <nt> PointerType IdentifierList AliasDecl TypeDef

%left LOGOR
%left LOGAND
%left ISEQ NEQ GRTEQ GRT LESSEQ LESS
%left ADD SUB OR
%left MUL QUOT MOD SHL SHR AND ANDNOT XOR
%%



SourceFile:
	PackageClause SCOLON {
		;}
    | PackageClause SCOLON ImportDeclList {;}
	| PackageClause SCOLON TopLevelDeclList {;}
	| PackageClause SCOLON ImportDeclList TopLevelDeclList {
			// Node* current_node = new Node("SourceFile");
			// current_node->add_non_terminal_children($1);
			// current_node->add_non_terminal_children($3);
			// current_node->add_non_terminal_children($4);
			// $$ = current_node;
			;}
    ;

PackageClause:
	PACKAGE PackageName {;}
	;

PackageName:
	IDENTIFIER {;}
	;

ImportDeclList:
	ImportDeclList ImportDecl SCOLON {;}
	| ImportDecl SCOLON {;}
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
	TopLevelDeclList TopLevelDecl SCOLON  { ;}
	| TopLevelDecl SCOLON { ;}
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
	Expression {;}
	;

StatementList:
	StatementList Statement SCOLON {cout<<"BB\n";}
	| Statement SCOLON {cout<<"AA\n";}
	;

Statement:
	Declaration
	| LabeledStmt {cout<<"LabeledStmt:  \n";}
	| SimpleStmt {cout<<"SimpleStmt:  \n";}
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
	| ExpressionStmt {cout<<"ExpressionStmt: \n";}
	| IncDecStmt 
	| Assignment
	| ShortVarDecl
	;

EmptyStmt:{;}
	;

ExpressionStmt:
	Expression {cout<<"ExpressionStmt: Expression \n";}
	;

IncDecStmt:
	Expression PLUSPLUS
	| Expression MINUSMINUS
	;

Assignment:
	ExpressionList ASSGN_OP ExpressionList
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
	| IdentifierList Type ASSGN_OP ExpressionList
	| IdentifierList ASSGN_OP ExpressionList
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
	| IdentifierList Type ASSGN_OP ExpressionList
	| IdentifierList ASSGN_OP ExpressionList
	;

FunctionBody:
	Block
	;

Signature:
	Parameters {;}
	| Parameters Result;

Result:
	Parameters {;}
	| Type {;}
	;

Parameters:
	LEFTPARAN RIGHTPARAN {;}
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

Receiver:
	Parameters
	;

CompositeLit:
	LiteralType LiteralValue
	;

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
	Literal {cout<<"Operand:Literal\n";}
	| OperandName {cout<<"Operand:OperandName\n";}
	| LEFTPARAN Expression RIGHTPARAN {;}
	;

OperandName:
	IDENTIFIER { cout<<"OperandName:IDENTIFIER "<<$1<<"\n";}	
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
	BREAK {
		$$ = new Node("BreakStmt");
		// current_node->add_non_terminal_children($1);
		// current_node->add_non_terminal_children($3);
		// current_node->add_non_terminal_children($4);
		// $$ = current_node;
	}
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
	| SWITCH Expression LEFTBRACE RIGHTBRACE { ;}
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
	| ExpressionList ASSGN_OP RANGE Expression
	;
Expression:
	Expression MUL Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression QUOT Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression MOD Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression SHL Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression SHR Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression AND Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression ANDNOT Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression ADD Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression SUB Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression OR Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression XOR Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression LOGAND Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression LOGOR Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression ISEQ Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression NEQ Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression GRTEQ Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression GRT Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression LESSEQ Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| Expression LESS Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
	| UnaryExpr {
		//cout<<"Unary Expr begins from expression" <<endl;
		}
	;

UnaryExpr:
	MUL UnaryExpr { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
	| AND UnaryExpr { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
	| ADD UnaryExpr { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
	| SUB UnaryExpr { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
	| NOT UnaryExpr { 
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
	| PrimaryExpr {
		//cout<<"Primary begins from unary\n";
		}
 	
 	;

 PrimaryExpr:
 	Operand {cout<<"PrimaryExpr:Operand\n";}
 	| MakeExpr {cout<<"PrimaryExpr:MakeExpr\n";}
 	| PrimaryExpr Selector {cout<<"PrimaryExpr:Selector\n";}
 	| PrimaryExpr Index {cout<<"PrimaryExpr:Index\n";}
 	| PrimaryExpr Slice {cout<<"PrimaryExpr:Slice\n";}
 	| PrimaryExpr Arguments {cout<<"PrimaryExpr:Arguments\n";}
 	| OperandName StructLiteral {cout<<"PrimaryExpr:StructLiteral\n";}
	| PrimaryExpr TypeAssertion {cout<<"PrimaryExpr:TypeAssertion\n";}
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
	| LEFTPARAN ExpressionList RIGHTPARAN {;}
	| LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN {;}
	;

ExpressionList: 
	Expression {;}
	| ExpressionList COMMA Expression {;}
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
	IDENTIFIER ASSGN_OP Type {;}
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
	MUL BaseType {;} 
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
	| INTERPRETED_STRING {;}
	;

%%



	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";
		
}









	

