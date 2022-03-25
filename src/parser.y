%{

	#include<bits/stdc++.h>
	#include "node.hpp"
	#include "tables.hpp"
	#include "datatypes.hpp"
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

%}

%define parse.error verbose
%code requires{
	#include "node.hpp"
}

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
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
%type <nt> FunctionBody ForStmt RangeClause
%type <nt> FunctionDecl ConstDecl SwitchStmt ExprSwitchCase ExprSwitchStmt
%type <nt> Condition  UnaryExpr PrimaryExpr
%type <nt> Selector Index Slice TypeDecl TypeSpecList TypeSpec VarDecl
%type <nt> TypeAssertion Arguments ExpressionList ArrayType CompositeLit
%type <nt> String ImportPath SliceType LiteralType
%type <nt> LiteralValue ElementList KeyedElement Key Element
%type <nt> Operand Literal BasicLit OperandName ImportSpec IfStmt ExprCaseClauseList
%type <nt> PackageClause ImportDeclList ImportDecl ImportSpecList TopLevelDeclList
%type <nt> FieldDeclList FieldDecl MakeExpr StructLiteral KeyValueList Type BaseType
%type <nt> PointerType IdentifierList AliasDecl TypeDef
%type <nt> VarSpecList TypeList 
%left LOGOR
%left LOGAND
%left ISEQ NEQ GRTEQ GRT LESSEQ LESS
%left ADD SUB OR
%left MUL QUOT MOD SHL SHR AND ANDNOT XOR
%%



SourceFile:
	//PackageClause SCOLON {
	//	;}
 //   | PackageClause SCOLON ImportDeclList {;}
	//| PackageClause SCOLON TopLevelDeclList {;}
	PackageClause SCOLON ImportDeclList TopLevelDeclList {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children($1);
			 curr->add_non_terminal_children($3);
			 curr->add_non_terminal_children($4);
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = $4->current_node_data;
			 $$ = curr;
			}
    ;

OpenBlock:
	{
		st->enter_new_scope();
	}
	;

CloseBlock:
	{
		st->exit_latest_scope();
	}
	;

PackageClause:
	PACKAGE PackageName {
		Node* curr = new Node("PackageClause");
		curr -> add_non_terminal_children($2);
		$$ = curr;
	}
	;

PackageName:
	IDENTIFIER {
		Node* curr = new Node("PackageName");
		curr -> add_terminal_children(string($1));
		$$ = curr;
	}
	;
// Might change
ImportDeclList:
	ImportDeclList ImportDecl SCOLON {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| ImportDecl SCOLON {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

ImportDecl:
	IMPORT LEFTPARAN ImportSpecList RIGHTPARAN {
		Node* curr = new Node("ImportDecl");
		curr->add_non_terminal_children($3);
		$$ = curr;
	}
	| IMPORT LEFTPARAN RIGHTPARAN {
		Node* curr = new Node("ImportDecl");
		$$ = curr;
	}
	| IMPORT ImportSpec {
		Node* curr = new Node("ImportDecl");
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	;

// Might change
ImportSpecList:
	ImportSpecList ImportSpec SCOLON {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| ImportSpec SCOLON {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

ImportSpec:
	PackageName ImportPath {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| DOT ImportPath {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| ImportPath {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

ImportPath:
	String {
		Node* curr = new Node("ImportPath");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

TopLevelDeclList:
	TopLevelDeclList TopLevelDecl SCOLON  { 
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		curr->current_node_data = $1 -> current_node_data;
		(curr->last_current_node_data())->next_data = $2->current_node_data;
		$$ = curr;
	}
	| TopLevelDecl SCOLON { 
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children($1);
		$$ = curr;
		$$->current_node_data = $1->current_node_data;
	}
	;

TopLevelDecl:
	Declaration {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| FunctionDecl {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| MethodDecl {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	;
// Might change
Block:
    LEFTBRACE OpenBlock StatementList CloseBlock RIGHTBRACE {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children($3); 
		curr->current_type = $3->current_type;
		curr->current_node_data = $3->current_node_data;
		$$ = curr;
    }
    ;

Condition:
	Expression {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

StatementList:
	StatementList Statement SCOLON {
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
		$$->current_node_data = $1->current_node_data;
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
	}
	| Statement SCOLON {
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children($1);
		$$ = curr;
		$$->current_node_data = new NodeData("list");
		if(!$1->current_node_data){
			cout<<"NO AST found here! Exiting........";
			exit(1);	
		}
		$$->current_node_data->node_child = $1->current_node_data;
	}
	;

Statement:
	Declaration {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| LabeledStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| SimpleStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ReturnStmt{
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| BreakStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ContinueStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| GotoStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| SwitchStmt {
		// Might change - tpbe done by shubh
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	| FallthroughStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	| Block {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| IfStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ForStmt {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	;

Declaration:
	TypeDecl {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| VarDecl {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ConstDecl  {
		// might change
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	;

FunctionDecl:
	FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock {
		st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
	
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		curr->add_non_terminal_children($5);
		$$ = curr;
		$$-> current_node_data = new NodeData("Function" + string($2));
		$$-> current_node_data->node_child = $5->current_node_data; 

	}
	| FUNC IDENTIFIER OpenBlock Signature CloseBlock  {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		$$ = curr;
		st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		$$->current_node_data = new NodeData("Function"+ string($2));
	}
	;

MethodDecl:
	FUNC Receiver IDENTIFIER Signature {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		curr->add_non_terminal_children($4);
		$$=curr;
	}
	| FUNC Receiver IDENTIFIER Signature FunctionBody {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		curr->add_non_terminal_children($4);
		$$=curr;
	} 
	;

LabeledStmt:
	IDENTIFIER COLON Statement{
		$$ = new Node("LabeledStmt");
		$$->add_terminal_children(string($1));
		$$->add_non_terminal_children($3);
		$$->current_node_data = new NodeData("label-" + string($1));
		$$->current_node_data->node_child = $3->current_node_data;
	}
	;


SimpleStmt:
	EmptyStmt {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	| ExpressionStmt {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	| IncDecStmt {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	} 
	| Assignment {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	| ShortVarDecl {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	;

EmptyStmt:{
		$$ = new Node("EmptyStmt");
		$$->current_node_data = new NodeData("");
	}
	;

ExpressionStmt:
	Expression {
		$$ = new Node("ExpressionStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	;

IncDecStmt:
	Expression PLUSPLUS {
		$$ = new Node("IncDecStmt");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->current_node_data = new NodeData(string($2) + "unary");
		$$->current_node_data->node_child = $1->current_node_data;

	}
	| Expression MINUSMINUS {
		$$ = new Node("IncDecStmt");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->current_node_data = new NodeData(string($2) + "unary");
		$$->current_node_data->node_child = $1->current_node_data;
	}
	;

Assignment:
	ExpressionList ASSGN_OP ExpressionList {
		$$ = new Node("Assignment");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->add_terminal_children(string($2));
		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $1->current_node_data;

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
		parLeft->node_child = $1->current_node_data;
		parRight->node_child = $3->current_node_data;
		parLeft->next_data = parRight;
		$$->current_node_data = new NodeData(string($2));
		$$->current_node_data->node_child = parLeft;
	}
	;

ShortVarDecl:
	IdentifierList INFER_EQ ExpressionList {
		$$ = new Node("ShortVarDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

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
		parLeft->node_child = $1->current_node_data;
		parRight->node_child = $3->current_node_data;
		parLeft->next_data = parRight;
		$$->current_node_data = new NodeData(string($2));
		$$->current_node_data->node_child = parLeft;

	}
	;

VarDecl:
	VAR VarSpec {
		$$ = new Node("VarDecl");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
	}
	| VAR LEFTPARAN VarSpecList RIGHTPARAN {
		// Might change
		$$ = new Node("VarDecl");
		$$->add_non_terminal_children($3);
		$$->current_type = $3->current_type;
		$$->current_node_data = $3->current_node_data;
	}
	//| VAR LEFTPARAN RIGHTPARAN {;} // might change, as effectivly of no use 
	;

// Might change, not defined
VarSpecList:
	VarSpecList VarSpec SCOLON {
		$$ = new Node("VarSpecList");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
	}
	| VarSpec SCOLON {
		$$ = new Node("VarSpecList");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
	}
	;

VarSpec:
	IdentifierList Type {
		$$ = new Node("VarSpec");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);

		NodeData *curr = $1->current_node_data;
		while(curr){
			if(st->scope_level(curr->data_name)==0){
				cout<<"("<<curr->data_name<<") is already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},$2->current_type);
			$$->current_type = $2->current_type;
			curr = curr->next_data;
		}

		$$->current_node_data = new NodeData("");
	}
	| IdentifierList Type ASSGN_OP ExpressionList {
		$$ = new Node("VarSpec");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->add_non_terminal_children($4);

		NodeData *curr = $1->current_node_data;
		while(curr){
			if(!st->scope_level(curr->data_name)){
				cout<<curr->data_name<<" already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},$2->current_type);
			$$->current_type = $2->current_type;
			curr = curr->next_data;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = $1->current_node_data;
		parRight -> node_child = $4->current_node_data;
		parLeft -> next_data = parRight;
		$$->current_node_data = new NodeData("=");	
		$$->current_node_data->node_child = parLeft;	
	}
	| IdentifierList ASSGN_OP ExpressionList {
		$$ = new Node("VarSpec");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		bool newVar = false;
		while(left_data || right_type || right_data){
			if(!left_data || !right_type || !right_data){
				//cout<<":= must have equal number of operands in LHS and RHS"<<endl;
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";

				exit(1);
			}

			string name = left_data->data_name;
			if(left_data->node_child){
				//cout<<"Non identifier to the left of :=";
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(right_type && right_type->getDataType() == "undefined"){
				//cout<<"Identifier in RHS not yet declared"<<endl;
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
		parLeft->node_child = $1->current_node_data;
		parRight -> node_child = $3->current_node_data;
		parLeft -> next_data = parRight;
		$$->current_node_data = new NodeData(":=");	
		$$->current_node_data->node_child = parLeft;

	}	
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
	Block {
		$$ = new Node("FunctionBody");
		$$ -> add_non_terminal_children($1);
		$$ -> current_type = $1->current_type;
		$$ -> current_node_data = $1->current_node_data;
	}
	;

Signature:
	Parameters {
		$$ = new Node("Signature");
		$$ -> add_non_terminal_children($1);
		$$ -> current_node_data = new NodeData("params");
		$$ -> current_node_data->node_child = $1->current_node_data;
		$$ -> current_node_data -> next_data = new NodeData("return");
		$$ -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = $1 -> current_type;
		NodeData* dcurr = $1 -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}
		$$ -> current_type = new FunctionType(arguments,return_types);

	}
	| Parameters Result {
		$$ = new Node("Signature");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$ -> current_node_data = new NodeData("params");
		$$ -> current_node_data->node_child = $1->current_node_data;
		$$ -> current_node_data -> next_data = new NodeData("return");
		$$ -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = $1 -> current_type;
		NodeData* dcurr = $1 -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}

		curr = $2->current_type;
		while(curr){
			DataType *temp = curr->copyClass();
			temp->next_type = NULL;
			return_types.push_back(temp);
			curr=curr->next_type;
		}

		$$ -> current_type = new FunctionType(arguments,return_types);	
	} 
	;

Result:
	LEFTPARAN TypeList RIGHTPARAN {
		$$ = new Node("Result");
		$$->add_non_terminal_children($2);
		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;
	}
	| Type {
		$$ = new Node("Result");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	;

TypeList:
    TypeList COMMA Type {
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->add_non_terminal_children($3);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
        $$->current_node_data->next_data = $3->current_node_data;
        $$->current_type->next_type = $3->current_type;
    }
    | Type {
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
    }
    ;

Parameters:
	LEFTPARAN RIGHTPARAN {
		$$ = new Node("Parameters");
		$$->current_node_data = NULL;
		$$-> current_type = NULL;
	}
	| LEFTPARAN ParameterList RIGHTPARAN {
		$$ = new Node("Parameters");
		$$->add_non_terminal_children($2);
		$$->current_node_data = $2->current_node_data;
		$$-> current_type = $2->current_type;

	}
	| LEFTPARAN ParameterList COMMA RIGHTPARAN {
		$$ = new Node("Parameters");
		$$->add_non_terminal_children($2);
		$$->current_node_data = $2->current_node_data;
		$$-> current_type = $2->current_type;
	}
	;

ParameterList:
	ParameterDecl {
		$$ = new Node("ParameterList");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$-> current_type = $1->current_type;
	}
	| ParameterList COMMA ParameterDecl{
		$$ = new Node("Parameters");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->current_node_data = $1->current_node_data;
		$$-> current_type = $1->current_type;
		($$->last_current_node_data())->next_data = $3->current_node_data;
		($$->last_current_type())->next_type = $3->current_type;
	}
	;

ParameterDecl:
	IdentifierList Type {
		$$ = new Node("ParameterDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		NodeData *data = $1 -> current_node_data;
		DataType *type = $2 -> current_type -> copyClass();
		$$->current_type = $2->current_type->copyClass();
		$$->current_node_data = data;

		while(data){
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, $2->current_type);
			type->next_type = (data->next_data)? type->copyClass(): NULL;
			type = type->next_type;
			data = data->next_data;
		}
	}
	//| IdentifierList ELIPSIS Type {;}
	//| ELIPSIS Type {;}
	;

IdentifierList:
	IdentifierList COMMA IDENTIFIER {
		$$ = new Node("IdentifierList");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($3));
        ($1->last_current_node_data())->next_data = new NodeData(string($3));
        ($1->last_current_type())->next_type = (st->get_type(string($3)))?(st->get_type(string($3))):(new BasicType("undefined"));
        
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
	}
	| IDENTIFIER {
		$$ = new Node("IdentifierList");
		$$ -> add_terminal_children(string($1));
		$$->current_node_data = new NodeData(string($1));
		$$->current_type = (st->get_type(string($1)))?(st->get_type(string($1))):(new BasicType("undefined"));
	}
	;

Receiver:
	Parameters {
		$$ = new Node("Receiver");
		$$ -> add_non_terminal_children($1);
	}
	;

CompositeLit:
	LiteralType LiteralValue {
        $$ = new Node("CompositeLit");
        
    }
	;

LiteralType:
	StructType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| ArrayType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| PointerType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| SliceType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| LEFTSQUARE ELIPSIS RIGHTSQUARE Operand {
		$$ = new Node("LiteralType");
		$$->add_terminal_children(string($2));
		$$->add_non_terminal_children($4);
	}
	| MapType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	;

Type:
	LiteralType {
		$$ = new Node("Type");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = new NodeData($$->current_type->getDataType());
	}
	| OperandName {
		$$ = new Node("Type");
		$$->add_non_terminal_children($1);
		$$->current_type = new BasicType(string($1 -> current_node_data -> data_name));
		$$->current_node_data = new NodeData($$->current_type->getDataType());
	}	
	;

Operand:	
	Literal {
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| OperandName {
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	| LEFTPARAN Expression RIGHTPARAN {
		$$ = new Node("Operand");
		$$->add_non_terminal_children($2);
		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;
	}
	;

OperandName:
	IDENTIFIER {
		$$ = new Node("OperandName");
		$$->add_terminal_children(string($1));
		$$->current_node_data->value = true;
		$$->current_type = st->get_type(string($1))?st->get_type(string($1)):new BasicType("undefined");

	}	
	;

LiteralValue:
	LEFTBRACE RIGHTBRACE {
		$$ = new Node("LiteralValue");
		$$-> current_node_data = new NodeData("Empty");
	}
	| LEFTBRACE ElementList RIGHTBRACE {
		$$ = new Node("LiteralValue");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
	}
	| LEFTBRACE ElementList COMMA RIGHTBRACE {
		$$ = new Node("LiteralValue");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
	}
	;
SliceType:
	LEFTSQUARE RIGHTSQUARE Type {;}
	;

ElementList:
	KeyedElement {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	| ElementList COMMA KeyedElement {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);

		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;

		($$->last_current_node_data())->next_data = $3->current_node_data;
		($$->last_current_type())->next_type = $3->current_type;

		$$ = curr;
	}
	;

KeyedElement:
	Element {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	| Key COLON Element {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);
		$$ = curr;
	}
	;

Key:
	Expression {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	| LiteralValue {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

Element:
	Expression {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	| LiteralValue {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	;
// remaining
ReturnStmt:
	RETURN {;}
	| RETURN ExpressionList {;}
	;

// remaining
BreakStmt:
	BREAK {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string($1));
		// break labels
		$$ = curr;
	}
	| BREAK IDENTIFIER {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string($2));
		curr->current_node_data = new NodeData (string($1));
		curr->current_node_data->node_child = new NodeData(string($2));
		$$ = curr;
	}
	;


// remaining (label:data->child)
ContinueStmt:
	CONTINUE {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string($1));
		$$ = curr;
	}
	| CONTINUE IDENTIFIER {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string($2));
		curr->current_node_data = new NodeData(string($1));
		// check this reason
		// curr->current_node_data->node_child = $2->current_node_data;
		$$ = curr;
	}
	;

GotoStmt:
	GOTO IDENTIFIER {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string($2));
		curr->current_node_data = new NodeData(string($1));
		// still remaining
		// curr->current_node_data->node_child = $2->current_node_data;
		$$ = curr;
	}
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
	;
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

// remaining isValidMemberon()
 PrimaryExpr:
 	Operand  {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
 	| MakeExpr {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
 	| PrimaryExpr Selector {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		// still remaining
		// curr->current_type = isValidMemberon($1->current_type)
		$$ = curr;
	}
 	| PrimaryExpr Index {cout<<"PrimaryExpr:Index\n";}
 	| PrimaryExpr Slice {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
 	| PrimaryExpr Arguments {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		// still remaining
		// curr->add_non_terminal_children($2);
		$$ = curr;
	}
 	| OperandName StructLiteral {cout<<"PrimaryExpr:StructLiteral\n";}
	| PrimaryExpr TypeAssertion {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		// still remaining
		// curr->add_non_terminal_children($2);
		$$ = curr;
	}
 	;

StructLiteral:
	LEFTBRACE KeyValueList RIGHTBRACE {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children($2);
		$$ = curr;
	} 
	;

KeyValueList :
 	Expression COLON Expression {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);
		$$ = curr;
	} 
 	| Expression COLON Expression COMMA KeyValueList {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);
		$$ = curr;
	} 
 	;


Selector : 
	DOT IDENTIFIER {
		Node* curr = new Node("Selector");
		curr->add_terminal_children($2);

		curr->current_node_data = new NodeData(string($2));

		$$ = curr;
	} 
	;

Index:
	LEFTSQUARE Expression RIGHTSQUARE {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children($2);

		curr->current_type = $2->current_type;
		curr->current_node_data = $2->current_node_data;

		$$ = curr;
	} 
	;

Slice:
	 LEFTSQUARE COLON Expression RIGHTSQUARE {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string($2));
		// still ramining
		curr->add_non_terminal_children($3);
		$$ = curr;
	}
	 | LEFTSQUARE COLON RIGHTSQUARE {
		Node* curr = new Node("Slice");
		$$ = curr;
	}
	 | LEFTSQUARE Expression COLON RIGHTSQUARE  {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		$$ = curr;
	}
	 | LEFTSQUARE Expression COLON Expression RIGHTSQUARE {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		curr->add_non_terminal_children($4);
		$$ = curr;
	}
	 | LEFTSQUARE COLON Expression COLON Expression RIGHTSQUARE {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($3);
		curr->add_terminal_children(string($4));
		curr->add_non_terminal_children($5);
		$$ = curr;
	}
	 | LEFTSQUARE Expression COLON Expression COLON Expression RIGHTSQUARE {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		curr->add_non_terminal_children($4);
		curr->add_terminal_children(string($5));
		curr->add_non_terminal_children($6);
		$$ = curr;
	}
	 ;

// remaining (child)
MakeExpr:
	MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);
		curr->add_non_terminal_children($7);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");
		$$ = curr;
	}
	| MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");
		$$ = curr;
	}
	| MAKE LEFTPARAN Type RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");
		$$ = curr;
	}
	| NEW LEFTPARAN Type RIGHTPARAN {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children($3);

		curr->current_type = new PointerType($3->current_type);
		curr->current_node_data = new NodeData("New");
		$$ = curr;
	}
	;

TypeAssertion:
	DOT LEFTPARAN Type RIGHTPARAN {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children($3);
		$$ = curr;
	}
	;

Arguments:
	LEFTPARAN RIGHTPARAN {
		Node* curr = new Node("Arguments");
		$$ = curr;
	}
	| LEFTPARAN ExpressionList RIGHTPARAN {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children($2);

		curr->current_node_data = $2->current_node_data;
		curr->current_type = $2->current_type;

		$$ = curr;
	}
	| LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));

		curr->current_node_data = $2->current_node_data;
		curr->current_type = $2->current_type;

		$$ = curr;
	}
	;
	
// remaining
ExpressionList: 
	Expression {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children($1);

		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;

		$$ = curr;
	}
	| ExpressionList COMMA Expression {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);

		curr->current_node_data = $3->current_node_data;
		curr->current_type = $3->current_type;

		$$ = curr;
	}
	;
// remaining
TypeDecl:
	TYPE LEFTPARAN TypeSpecList RIGHTPARAN {;}
	| TYPE TypeSpec {;}
	;
// remaining
TypeSpecList:
	TypeSpecList TypeSpec SCOLON
	| TypeSpec SCOLON
	;
// remaining
TypeSpec:
	AliasDecl
	| TypeDef
	;
// remaining
AliasDecl:
	IDENTIFIER ASSGN_OP Type {;}
	;
// remaining
TypeDef:
	IDENTIFIER Type {;}
	;

MapType:
	MAP LEFTSQUARE Type RIGHTSQUARE Type {
		Node* curr = new Node("MapType");
		curr->add_terminal_children(string($1));
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);

		DataType *key, *value;
		key = $3->current_type;
		value = $5->current_type;

		curr->current_type = new MapType(key,value);
		$$ = curr;
	}
	;

StructType:
	STRUCT LEFTBRACE FieldDeclList RIGHTBRACE {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string($1));
		curr->add_non_terminal_children($3);

		curr->current_node_data = $3->current_node_data;
		curr->current_type = $3->current_type;

		$$ = curr;
	}

	| STRUCT LEFTBRACE RIGHTBRACE {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string($1));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		$$ = curr;
	}
	;

FieldDeclList:
	FieldDecl SCOLON {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	| FieldDeclList FieldDecl SCOLON {
		Node* curr = new Node("FieldDeclList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		curr->current_node_data = $1->current_node_data;

		map< string, DataType*> mem1 = ((StructType*)$1->current_type)->data_of_struct;
		map< string, DataType*> mem2 = ((StructType*)$2->current_type)->data_of_struct;

		for(auto& it: mem2) {
            string key = it.first;
			DataType* value = it.second->copyClass();
//            if(mem1.find(key) == mem1.end()) {
// Remaining                ("Redeclaration of struct member: ", key, @2);
//            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		$$ = curr;
	}
	;

// Remaining
 FieldDecl:
	IdentifierList Type String {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		curr->add_non_terminal_children($3);

		DataType* tp = $2->current_type;
//		tp->next = NULL;

		NodeData* lp = $1->current_node_data;
		


		$$ = curr;
		}
	| IdentifierList Type
	;

// remaining (data->name)
PointerType:
	MUL BaseType {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children($1);
		curr->add_non_terminal_children($2);

		curr->current_type = $2->current_type;
		curr->current_node_data = $2->current_node_data;


		$$ = curr;
	} 
	;

BaseType:
	Type{
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children($1);

		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;

		$$ = curr;
	} 
	;
// Remaining
ArrayType:
	LEFTSQUARE Expression RIGHTSQUARE Type {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children($2);
		 curr->add_non_terminal_children($4);
		 if($2->current_type->getDataType() == "int"){
//			 curr->current_type = new ArrayType
		 }
		 $$ = curr;
		 }
		 ;
	

Literal:
	BasicLit {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = $1->current_type;
		 $$ = curr;
		 }
    |	 CompositeLit{
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = $1->current_type;
		 $$ = curr;
		 }
	;

BasicLit:
	INTEGER_VAL {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("int");
		 $$ = curr;
		 }
	| FLOAT_VAL {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("float");
		 $$ = curr;
		 }
	| BYTE_VAL  {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children($1);
		 curr->current_node_data = new NodeData(string($1));
		 curr->current_type = new BasicType("byte");
		 $$ = curr;
		 }
	| String {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = new BasicType("string");
		 $$ = curr;
		 }
	| TRUE      {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("bool");
		 $$ = curr;
		 }
	| FALSE     {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("bool");
		 $$ = curr;
		 }
	;

String:
	RAW_STRING { Node* curr = new Node("String");
			 curr->add_terminal_children(string($1));
			 curr->current_node_data = new NodeData($1);
			 $$ = curr;}
	| INTERPRETED_STRING { Node* curr = new Node("String");
			 curr->add_terminal_children(string($1));
			 curr->current_node_data = new NodeData($1);
			 $$ = curr;}
	;

%%



	

int main (int argc, char **argv) {
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";
		
}