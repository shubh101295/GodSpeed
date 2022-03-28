%{

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
	SwitchCaseList* scl= NULL;

	// for switch statements
	bool is_inside_case = false;
	// bool is_last_statement = false;
	int fallthrough_expression_count = 0;
	bool has_default_statement = false;
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

%type <nt> SourceFile Expression forMarker forMarkerEnd EmptyExpr
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec PackageName
%type <nt> Signature Result Parameters ParameterList ParameterDecl
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
%type <nt> FunctionBody ForStmt RangeClause
%type <nt> FunctionDecl SwitchStmt ExprSwitchCase ExprSwitchStmt
%type <nt> Condition  UnaryExpr PrimaryExpr
%type <nt> Selector Index Slice TypeDecl TypeSpec VarDecl
%type <nt> TypeAssertion Arguments ExpressionList ArrayType CompositeLit
%type <nt> String ImportPath SliceType LiteralType
%type <nt> LiteralValue ElementList KeyedElement Key Element
%type <nt> Operand Literal BasicLit OperandName ImportSpec IfStmt ExprCaseClauseList
%type <nt> PackageClause ImportDeclList ImportDecl ImportSpecList TopLevelDeclList
%type <nt> FieldDeclList FieldDecl MakeExpr StructLiteral KeyValueList Type BaseType
%type <nt> PointerType IdentifierList TypeDef
%type <nt> VarSpecList TypeList ExprCaseClause
%type <nt> FakeTrue
%left LOGOR
%left LOGAND
%left ISEQ NEQ GRTEQ GRT LESSEQ LESS
%left ADD SUB OR
%left MUL QUOT MOD SHL SHR AND ANDNOT XOR
%%



SourceFile:
	PackageClause SCOLON ImportDeclList TopLevelDeclList {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children($1);
			 curr->add_non_terminal_children($3);
			 curr->add_non_terminal_children($4);
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = $4->current_node_data;
			 $$ = curr;
			 dump_dot_file("ast.dot", $$);
			}
    ;

OpenBlock:
	{
		cout<<"OpenBlock: \n";
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
		cout<<"PackageClause:	PACKAGE PackageName \n";
		curr -> add_non_terminal_children($2);
		$$ = curr;
	}
	;

PackageName:
	IDENTIFIER {
		Node* curr = new Node("PackageName");
		cout<<"PackageName: IDENTIFIER - "<<string($1)<<"\n";
		curr -> add_terminal_children(string($1));
		$$ = curr;
	}
	;

ImportDeclList:
	ImportDeclList ImportDecl SCOLON {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| ImportDecl SCOLON {
		Node* curr = new Node("ImportDeclList");
		cout<<"ImportDeclList: ImportDecl SCOLON \n";
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

ImportDecl:
	IMPORT LEFTPARAN ImportSpecList RIGHTPARAN {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl:IMPORT LEFTPARAN ImportSpecList RIGHTPARAN\n";
		curr->add_non_terminal_children($3);
		$$ = curr;
	}
	| IMPORT LEFTPARAN RIGHTPARAN {
		Node* curr = new Node("ImportDecl");
		$$ = curr;
	}
	| IMPORT ImportSpec {
		Node* curr = new Node("ImportDecl");
		cout<<"ImportDecl: IMPORT ImportSpec \n";
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	;

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
		cout<<"ImportSpec: ImportPath\n";
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

ImportPath:
	String {
		Node* curr = new Node("ImportPath");
		cout<<"ImportPath: String\n";
		curr->add_non_terminal_children($1);
		$$ = curr;
	}
	;

TopLevelDeclList:
	TopLevelDeclList TopLevelDecl SCOLON  {
		cout<<"TopLevelDeclList: TopLevelDeclList TopLevelDecl SCOLON\n";
		$$ = new Node("TopLevelDeclList");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = $1 -> current_node_data;
		if($$->last_current_node_data() == NULL){
			cout<<"NULL"<<endl;
		}
		($$->last_current_node_data())->next_data = $2->current_node_data;
	}
	| TopLevelDecl SCOLON {
		Node* curr = new Node("TopLevelDeclList");
		cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
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
		cout<<"TopLevelDecl : FunctionDecl\n";
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
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
	;

StatementList:
	StatementList Statement SCOLON {

		cout<<"StatementList: 	StatementList Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
		$$->current_node_data = $1->current_node_data;
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
		
		// for checking if the fallthrough statement is the last one
		if(fallthrough_expression_count){
			cout<<"INC fallthrough_expression_count\n";
			fallthrough_expression_count+=1;

		} 
		if (fallthrough_expression_count>2)
		{
			cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
			exit(1);
			// fallthrough_expression_count+=1;
		}
	
	}
	| Statement SCOLON {
		cout<<"Statement SCOLON\n";
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children($1);
		$$ = curr;
		$$->current_node_data = new NodeData("list");
		cout<<"HERE\n";
		if($1->current_node_data==NULL){
			cout<<"NO AST found here! Exiting........";
			exit(1);
		}
		cout<<"HERE\n";
		$$->current_node_data->node_child = $1->current_node_data;
		cout<<"HERE\n";
	
	}
	;

Statement:
	Declaration {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| LabeledStmt {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| SimpleStmt {
		// cout<<"Statement:	SimpleStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		
		curr->current_node_data = $1->current_node_data;
		cout<<"Statement:	SimpleStmt "<<($1->current_node_data==NULL)<<"\n";
		$$ = curr;
	}
	| ReturnStmt{
		cout<<"Statement:	ReturnStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| BreakStmt {
		cout<<"Statement:	BreakStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ContinueStmt {
		cout<<"Statement:	ContinueStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| GotoStmt {
		cout<<"Statement:	GotoStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| SwitchStmt {
		cout<<"Statement:	SwitchStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| FallthroughStmt {
		cout<<"Statement:	FallthroughStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| Block {
		cout<<"Statement:	Block\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| IfStmt {
		cout<<"Statement:	IfStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		$$ = curr;
	}
	| ForStmt {
		cout<<"Statement:	ForStmt\n";
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
	;

	// | ConstDecl  {
	// 	// might change
	// 	Node* curr = new Node("Declaration");
	// 	curr->add_non_terminal_children($1);
	// 	curr->current_type = $1->current_type;
	// 	curr->current_node_data = $1->current_node_data;
	// 	$$ = curr;
	// }

// might change
FunctionDecl:
	FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock {
		cout<<"FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock \n";
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		curr->add_non_terminal_children($5);
		$$ = curr;
		st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		$$-> current_node_data = new NodeData("Function-" + string($2));
		$$-> current_node_data->node_child = $5->current_node_data;

	}
	| FUNC IDENTIFIER OpenBlock Signature CloseBlock  {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		$$ = curr;
		st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		$$->current_node_data = new NodeData("Function-"+ string($2));
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
		curr->add_non_terminal_children($5);
		$$=curr;
	}
	;

LabeledStmt:
	IDENTIFIER COLON Statement{
		$$ = new Node("LabeledStmt");
		$$->add_terminal_children(string($1));
		$$->add_non_terminal_children($3);
		$$->current_node_data = new NodeData("Label-" + string($1));
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
		cout<<"SimpleStmt: ExpressionStmt\n";
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
		cout<<"SimpleStmt: Assignment "<<($$->current_node_data==NULL)<<"\n";
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

EmptyExpr : {   // For infinite looping
		$$ = new Node("EmptyExpr");
		$$->current_node_data = new NodeData("true");
		$$->current_type = new BasicType("bool");
	}
	;

ExpressionStmt:
	Expression {
		cout<<"ExpressionStmt: Expression\n";
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
		cout<<"Assignment: ExpressionList ASSGN_OP ExpressionList "<<"\n";

		$$ = new Node("Assignment");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->add_non_terminal_children($3);
		cout<<($1)<<" "<<($3)<<"\n";
		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;
		// cout<<"A  AAA \n";
		// cout<<left_data->value<<" "<<right_data->value<<endl;
		cout<<"A  AAA \n";
		while(left_data || right_type){
			cout<<"ENTERED!"<<endl;
			if(left_data){
				cout<<"LEFT: "<<left_data->data_name<<endl;
			}
			if(right_type){
				cout<<"RIGHT"<<right_type->getDataType()<<endl;
			}
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}
			string name = left_data->data_name;
			auto temp_left_data = left_data;
			if(left_data->data_name.substr(1) == "unary"){
				temp_left_data = left_data->node_child;
			}
			if(!temp_left_data->value && temp_left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(temp_left_data -> value){
				cout<<"Here 1"<<endl;
				string j = name;
				cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				if(name==j) cout<<"UNCHANGED!\n";
			}	

				cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}
					cout<<"HERE 4\n";
		
			if(!st->get_type(name)){
						cout<<"HERE 16\n";
		
				cout<<"[Undeclared Identifier] "<<name<<" not declared yet!";
				exit(1);
			}
			else{
				cout<<"HERE 8\n";
				cout<<(left_type==NULL)<<" "<<(right_type==NULL)<<"\n";
				cout<<left_type->getDataType()<<"\n";
				cout<<right_type->getDataType()<<"\n";
								
				if(left_type->getDataType() != right_type->getDataType()){
				
					cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
					exit(1);
				}

			}
				cout<<"HERE 4\n";
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
		cout<<string($2)<<"------\n";
		// printf("%sSHUBH\n",string($2));
		NodeData * temp_node_data = new NodeData(string($2));
		
		cout<<"temp_node_data "<<(temp_node_data==NULL) <<"    "<<(temp_node_data!=NULL)<<"\n";
		$$->current_node_data = temp_node_data;

		$$->current_node_data->node_child = parLeft;
	}
	;

ShortVarDecl:
	IdentifierList INFER_EQ ExpressionList {
		cout<<"ShortVarDecl : IdentifierList INFER_EQ ExpressionList"<<endl;
		$$ = new Node("ShortVarDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		bool newVar = false;

		while(left_data || right_type){
			if(left_data){
				cout<<"LEFT :"<<left_data->data_name<<endl;
			}
			if(right_type){
				cout<<"Right: "<<right_type->getDataType()<<endl;
			}
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
		$$ = new Node("VarDecl");
		$$->add_non_terminal_children($3);
		$$->current_type = $3->current_type;
		$$->current_node_data = $3->current_node_data;
	}
	;

VarSpecList:
	VarSpecList VarSpec SCOLON {
		$$ = new Node("VarSpecList");

		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = $1->current_node_data;
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
		// might need to add type checks
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
		parLeft->node_child = $1->current_node_data;
		parRight -> node_child = $3->current_node_data;
		parLeft -> next_data = parRight;
		$$->current_node_data = new NodeData(":=");
		$$->current_node_data->node_child = parLeft;

	}
	;

//ConstDecl:
//	CONST ConstSpec {;}
//	| CONST LEFTPARAN ConstSpecList RIGHTPARAN {;}
//	| CONST LEFTPARAN RIGHTPARAN {;}
//	;

//ConstSpecList:
//	ConstSpecList ConstSpec SCOLON
//	| ConstSpec SCOLON
//	;

//ConstSpec:
//	IdentifierList Type
//	| IdentifierList Type ASSGN_OP ExpressionList
//	| IdentifierList ASSGN_OP ExpressionList
//	;

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
		cout<<"Signature: Parameters\n";
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
		cout<<"Signature: Parameters Result\n";
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
    	cout<<"TypeList: TypeList COMMA Type"<<endl;
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->add_non_terminal_children($3);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
        $$->current_node_data->next_data = $3->current_node_data;
        $$->current_type->next_type = $3->current_type;
    }
    | Type {
    	cout<<"TypeList: TypeList COMMA Type"<<endl;
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
    }
    ;

Parameters:
	LEFTPARAN RIGHTPARAN {
		cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		$$ = new Node("Parameters");
		$$->current_node_data = NULL;
		$$-> current_type = NULL;
	}
	| LEFTPARAN ParameterList RIGHTPARAN {
		cout<<"Parameters: LEFTPARAN ParameterList RIGHTPARAN"<<endl;
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
		cout<<"ParameterList: ParameterList COMMA ParameterDecl"<<endl;
		$$ = new Node("Parameters");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->current_node_data = $1->current_node_data;
		$$-> current_type = $1->current_type;
		cout<<"Here"<<endl;
		cout<<(($$->last_current_node_data()))<<" \n";
		cout<<"  "<<(($$->last_current_type()))<<"\n";
		($$->last_current_node_data())->next_data = $3->current_node_data;
		($$->last_current_type())->next_type = $3->current_type;
		cout<<"Here1"<<endl;
	}
	;

ParameterDecl:
	IdentifierList Type {
		cout<<"ParameterDecl: IdentifierList Type"<<endl;
		$$ = new Node("ParameterDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		NodeData *data = $1 -> current_node_data;
		DataType *type = $2 -> current_type -> copyClass();
		$$->current_type = $2->current_type->copyClass();
		$$->current_node_data = data;

		while(data){
			cout<<"HERE"<<endl;
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
	;

IdentifierList:
	IdentifierList COMMA IDENTIFIER {
		cout<<"IdentifierList COMMA IDENTIFIER"<<endl;
		$$ = new Node("IdentifierList");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($3));
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
        ($$->last_current_node_data())->next_data = new NodeData(string($3));
        ($$->last_current_type())->next_type = (st->get_type(string($3)))?(st->get_type(string($3))):(new BasicType("undefined"));

	}
	| IDENTIFIER {
		cout<<"Identifier"<<endl;
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
		cout<<"CompositeLit: LiteralType LiteralValue"<<endl;
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
		cout<<"LiteralType: ArrayType"<<endl;
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
		cout<<"Type: LiteralType"<<endl;
		$$ = new Node("Type");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = new NodeData($$->current_type->getDataType());
	}
	| OperandName {
		cout<<"Type:OperandName"<<endl;
		$$ = new Node("Type");
		$$->add_non_terminal_children($1);
		$$->current_type = new BasicType(string($1 -> current_node_data -> data_name));
		$$->current_node_data = new NodeData($$->current_type->getDataType());
	}
	;

Operand:
	Literal {
		cout<<"Operand: Literal"<<endl;
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		cout<<"Operand Value "<<$$->current_node_data->value<<endl;
	}
	| OperandName {
		cout<<"Operand: OperandName";
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		cout<<"Value: "<<$$->current_node_data->value<<endl;
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
		cout<<"OperandName:	IDENTIFIER - "<<string($1)<<"\n";
		$$ = new Node("OperandName");
		// cout<<"OperandName2:	IDENTIFIER - "<<string($1)<<"\n";
		$$->add_terminal_children(string($1));
		// cout<<"OperandName3:	IDENTIFIER - "<<string($1)<<"\n";

		$$->current_node_data = new NodeData(string($1));
		$$->current_node_data->value = true;
		// cout<<"OperandName4:	IDENTIFIER - "<<string($1)<<"\n";

		$$->current_type = st->get_type(string($1))?st->get_type(string($1)):new BasicType("undefined");
		// cout<<"OperandName5:	IDENTIFIER - "<<string($1)<<"\n";

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
	LEFTSQUARE RIGHTSQUARE Type {
		$$ = new Node("LiteralValue");
		$$->add_non_terminal_children($3);
		$$->current_type = new SliceType($3->current_type);
        $$->current_node_data = new NodeData($$->current_type->getDataType());
		;}
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
	RETURN {
		$$ = new Node("ReturnStmt");
		$$ -> current_node_data = new NodeData(string($1));

	}
	| RETURN ExpressionList {
		$$ = new Node("ReturnStmt");
		$$ -> add_non_terminal_children($2);
		$$->current_node_data = new NodeData(string($1));
		$$->current_node_data->node_child = $2->current_node_data;

	}
	;

BreakStmt:
	BREAK {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string($1));
		if(bl->is_empty()){
			cout<<"[INVALID BREAK] Tried to break, outside from a for loop";
			exit(1);
		}
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


ContinueStmt:
	CONTINUE {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string($1));
		$$ = curr;
		if(bl->is_empty()){
			cout<<"[INVALID CONTINUE] Tried to continue when not inside a loop!";
			exit(1);
		}
		
	}
	// | CONTINUE IDENTIFIER {
	// 	Node* curr = new Node("ContinueStmt");
	// 	curr->add_terminal_children(string($2));
	// 	curr->current_node_data = new NodeData(string($1));
	// 	// check this reason
	// 	curr->current_node_data->node_child =  new NodeData(string($2));
	// 	$$ = curr;
	// }
	;

GotoStmt:
	GOTO IDENTIFIER {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string($2));
		curr->current_node_data = new NodeData(string($1));
		curr->current_node_data->node_child = new NodeData(string($2));
		$$ = curr;
	}
	;

SwitchStmt:
	ExprSwitchStmt {
		cout<<"SwitchStmt: ExprSwitchStmt\n";
		$$ = new Node("SwitchStmt");
		$$ -> add_non_terminal_children($1);
		$$ -> current_type = $1->current_type;
		$$ -> current_node_data = $1->current_node_data;
	}
	;

ExprSwitchStmt:

	// empty switches
	// SWITCH LEFTBRACE RIGHTBRACE {;}
	// | SWITCH SimpleStmt SCOLON LEFTBRACE RIGHTBRACE {;}
	// | SWITCH Expression LEFTBRACE RIGHTBRACE { ;}
	// | SWITCH SimpleStmt SCOLON Expression LEFTBRACE RIGHTBRACE {;}
	// |

	 SWITCH OpenBlock FakeTrue LEFTBRACE  { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE CloseBlock {
	 	$$ = new Node("ExprSwitchStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$ -> current_node_data = new NodeData("SWITCH");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = $6->current_node_data;
	 	scl = NULL;
	 }
	| SWITCH OpenBlock SimpleStmt SCOLON LEFTBRACE { scl = new SwitchCaseList(); }
	 	ExprCaseClauseList RIGHTBRACE CloseBlock {
	 	cout<<"SWITCH SimpleStmt SCOLON LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";

	 	$$ = new Node("ExprSwitchStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($7);
		$$ -> current_node_data = new NodeData("SWITCH");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = $7->current_node_data;
	 	scl = NULL;
	}
	| SWITCH OpenBlock Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE CloseBlock {
		cout<<"SWITCH Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";
		$$ = new Node("ExprSwitchStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$ -> current_node_data = new NodeData("SWITCH");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("MatchCondition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("SwitchCases");
		it=it->next_data;
		it->node_child = $6->current_node_data;
	 	scl = NULL;
	}
	// | SWITCH SimpleStmt SCOLON Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE {;}
	;

ExprCaseClauseList:
	ExprCaseClauseList ExprCaseClause {
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		$$ = new Node("ExprCaseClauseList");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = $1->current_node_data;
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause \n";
		cout<<(($$->current_node_data->last_next_child())==NULL)<<"\n";
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
		cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		
	}
	| ExprCaseClause {
		cout<<"ExprCaseClauseList: ExprCaseClause\n";
		$$ = new Node("ExprCaseClauseList");
		$$->add_non_terminal_children($1);
		$$->current_node_data = new NodeData("list");
		$$->current_node_data->node_child = $1->current_node_data;
		// $$->current_type = $1->current_type;
	}
	;

ExprCaseClause:
	ExprSwitchCase COLON StatementList {
		cout<<"ExprCaseCause:	ExprSwitchCase COLON StatementList\n";
		$$ = new Node("ExprCaseClause");
		$$ -> add_non_terminal_children($1);
		$$ -> add_non_terminal_children($3);
		scl->add_case_label(has_default_statement,fallthrough_expression_count==2);
		if(fallthrough_expression_count>2)
		{
			cout<<"[Error in parser.y] ExprCaseClause->ExprSwitchCase COLON StatementList (fallthrough_expression_count>2)==true\n";
			exit(1);
		}
		has_default_statement=false;
		is_inside_case = false;
		fallthrough_expression_count=0;

		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_node_data->next_data = $3->current_node_data;
    }
	;


FakeTrue:
	{
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children("true");
		 curr->current_node_data = new NodeData("true");
		 curr->current_type = new BasicType("bool");
		 $$ = curr;
	}

ExprSwitchCase:
	CASE ExpressionList {
		cout<<"ExprSwitchCase:  CASE ExpressionList\n";
		$$ = new Node("ExprSwitchCase");
		$$ -> add_non_terminal_children($2);
		is_inside_case = true;
		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;

	}
	| DEFAULT FakeTrue {
		/* a fake true as expression list*/
		// Node* child_curr = new Node("BasicLit");
		//  child_curr->add_terminal_children("true");
		//  child_curr->current_node_data = new NodeData("true");
		//  child_curr->current_type = new BasicType("bool");
		//  // $$ = curr;

		$$ = new Node("ExprSwitchCase");
		is_inside_case = true;
		has_default_statement = true;
		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;	
	}
	;

FallthroughStmt:
	FALLTHROUGH {
		if (is_inside_case==false){
			cout<<"[FALLTHROUGH] fallthrough can only be used inside switch cases\n";
			exit(1); 
		}
		// if(is_last_statement==false)
		// {
		// 	cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
		// 	exit(1); 
		// }
		cout<<"SET fallthrough_expression_count ==1\n";
		if (fallthrough_expression_count)
		{
			cout<<"[FALLTHROUGH] fallthrough statement out of place\n";
			exit(1);
			// fallthrough_expression_count+=1;
		}
		fallthrough_expression_count= 1;
		$$ = new Node("FallthroughStmt");
		$$->current_node_data = new NodeData("FallThorugh");
	}

	;

IfStmt:
	IF OpenBlock Expression Block CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($4);
		$$ -> current_node_data =new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("Condition");
		it = it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $4->current_node_data;

		if($3->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$3->current_type->getDataType()<<endl;
			exit(1);
		}
	}
	|IF OpenBlock SimpleStmt SCOLON Expression Block CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($5);
		$$->add_non_terminal_children($6);
		$$ -> current_node_data =new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it = it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = $5->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $6->current_node_data;

		if($5->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$5->current_type->getDataType()<<endl;
			exit(1);
		}
	}
	|IF OpenBlock Expression Block ELSE IfStmt CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($4);
		$$->add_non_terminal_children($6);
		$$ -> current_node_data = new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $4->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = $6->current_node_data;

		if($3->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$3->current_type->getDataType()<<endl;
			exit(1);
		}

	}
	|IF OpenBlock Expression Block ELSE Block CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($4);
		$$->add_non_terminal_children($6);
		$$ -> current_node_data = new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $4->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = $6->current_node_data;

		if($3->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$3->current_type->getDataType()<<endl;
			exit(1);
		}

	}
	|IF OpenBlock SimpleStmt SCOLON Expression Block ELSE IfStmt CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($5);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$ -> current_node_data = new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = $5->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $6->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = $8->current_node_data;

		if($5->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$5->current_type->getDataType()<<endl;
			exit(1);
		}
	}
	|IF OpenBlock SimpleStmt SCOLON Expression Block ELSE Block CloseBlock {
		$$ = new Node("IfStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($5);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$ -> current_node_data = new NodeData("If");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("SimpleStmt");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data = new NodeData("Condition");
		it=it->next_data;
		it->node_child = $5->current_node_data;
		it->next_data = new NodeData("IfBody");
		it=it->next_data;
		it->node_child = $6->current_node_data;
		it->next_data = new NodeData("Else");
		it->next_data->node_child = $8->current_node_data;

		if($5->current_type->getDataType() != "bool"){
			cout<<"Boolean Expression expected inside If Statement, Received: ( "<<$5->current_type->getDataType()<<endl;
			exit(1);
		}
	}
	;

ForStmt:
	FOR forMarker Block forMarkerEnd
	{
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->current_node_data = new NodeData("For");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = $3->current_node_data;

	}
	| FOR OpenBlock SimpleStmt SCOLON forMarker EmptyExpr SCOLON SimpleStmt Block forMarkerEnd CloseBlock {
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$->add_non_terminal_children($9);
		$$->current_node_data = new NodeData("For");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = $9->current_node_data;

	}
	| FOR OpenBlock SimpleStmt SCOLON forMarker ExpressionStmt SCOLON SimpleStmt Block forMarkerEnd CloseBlock {
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$->add_non_terminal_children($9);

		$$ -> current_node_data = new NodeData("For");
		NodeData* it= $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = $9->current_node_data;
	}
	| FOR OpenBlock Condition forMarker Block forMarkerEnd CloseBlock {
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($5);
		$$ -> current_node_data = new NodeData("For");
		NodeData* it= $$->current_node_data;
		it->node_child = new NodeData("Condition");
		it=it->node_child;
		it->node_child = $3->current_node_data;
		it->next_data= new NodeData("ForBody");
		it = it->next_data;
		it->node_child= $5->current_node_data;
	}
	//| FOR OpenBlock EmptyStmt Empty forMarker Expression Empty EmptyStmt Block forMarkerEnd CloseBlock {
	//	$$ = new Node("ForStmt");
	//	$$->add_non_terminal_children($3);
	//	$$->add_non_terminal_children($6);
	//	$$->add_non_terminal_children($8);
	//	$$->add_non_terminal_children($9);

	//	$$ -> current_node_data = new NodeData("For");
	//	NodeData* it= $$->current_node_data;
	//	it->node_child = new NodeData("ForBody");
	//	it->node_child->node_child = $9->current_node_data;
	//}
	;

//ForClause:
//	InitStmt SCOLON SCOLON PostStmt {

//	}
//	| InitStmt SCOLON Condition SCOLON PostStmt {

//	}
//	;

forMarker:
	{
		$$ = new Node("");
		bl -> add_new_break_label();
	}

	;

forMarkerEnd:
	{
		$$ = new Node("");
		bl -> remove_last_break_label();
	;
	}
	;
//Empty:
	/* empty */
	//{

	//}
	//;

// Might change, temporarily added
RangeClause:
	RANGE Expression {
		$$ = new Node("RangeClause");
		$$->add_non_terminal_children($2);
		$$ -> current_node_data = new NodeData("RangeClause");
		$$ -> current_node_data -> node_child = new NodeData("Expression");
		$$ -> current_node_data ->node_child->node_child = $2->current_node_data;
	}
	| IdentifierList INFER_EQ RANGE Expression {
		$$ = new Node("RangeClause");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($4);
		$$ -> current_node_data = new NodeData("RangeClause");
		$$ -> current_node_data -> node_child = new NodeData("IdentifierList");
		$$ -> current_node_data -> node_child -> node_child = $1->current_node_data;
		NodeData* it = $$->current_node_data -> node_child;
		it->next = new NodeData("RangeExpression");
		it->next->node_child = $4->current_node_data;
	}
	| ExpressionList ASSGN_OP RANGE Expression {
		$$ = new Node("RangeClause");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($4);
		$$ -> current_node_data = new NodeData("RangeClause");
		$$ -> current_node_data -> node_child = new NodeData("ExpressionList");
		$$ -> current_node_data -> node_child -> node_child = $1->current_node_data;
		NodeData* it = $$->current_node_data -> node_child;
		it->next = new NodeData("RangeExpression");
		it->next->node_child = $4->current_node_data;

	}
	;
Expression:
	Expression MUL Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

		}
	| Expression QUOT Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression MOD Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression SHL Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression SHR Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression AND Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_bitwise");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression ANDNOT Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_bitwise");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression ADD Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression SUB Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression OR Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_bitwise");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

		}
	| Expression XOR Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = $1->current_type;
		}
	| Expression LOGAND Expression {
		$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

		}
	| Expression LOGOR Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression ISEQ Expression {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression NEQ Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression GRTEQ Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression GRT Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression LESSEQ Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| Expression LESS Expression {
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->add_terminal_children(string($2));
			$$->add_non_terminal_children($3);


			$$->current_node_data = new NodeData(string($2) + "binary_op");
			$$->current_node_data -> node_child = $1->current_node_data;
			$$->current_node_data->last_next_child()->next_data = $3->current_node_data;

			if(!$1->current_type || !$3->current_type){
				cout<<"Something's wrong, type info not available for node!"<<endl;
				exit(1);
			}

			if($1->current_type->getDataType() != $3->current_type->getDataType()) {
				// Might handle more cases on completion
				cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
				exit(1);
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");
		}
	| UnaryExpr {
		cout<<"Expression: UnaryExpr, Value: ";
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->current_type = $1->current_type;
			$$->current_node_data = $1->current_node_data;
			// cout<<"Unary value"<<endl;
			  cout<<$$->current_node_data->value<<endl;
			// cout<<"Unary value"<<endl;
		}
	;

UnaryExpr:
	MUL PrimaryExpr {
		cout<<"UnaryExpr: MUL PrimaryExpr "<<endl;
		$$ = new Node("UnaryExpr");
		$$->add_terminal_children(string($1));
		$$->add_non_terminal_children($2);
		$$->current_node_data = new NodeData("*unary");
		$$->current_node_data->node_child = $2->current_node_data;
		if($2->current_type->current_data_type != _POINTER){
			cout<<"Can not dereference a non-pointer! Exiting..."<<endl;
			exit(1);
		}
		$$->current_type = dynamic_cast<PointerType*>($2->current_type)->type_of_address_pointing_to->copyClass();
	}
	| AND PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("&unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = new PointerType($2->current_type);
		}
	| ADD PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("+unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
		}
	| SUB PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("-unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
		}
	| NOT PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("!unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
		}
	| PrimaryExpr {
		cout<<"UnaryExpr: PrimaryExpr\n";
		$$ = new Node("UnaryExpr");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		//cout<<"Primary Value: "<<$$->current_node_data->value<<" "<<$1->current_node_data->value<< endl;

	}

 	;

 PrimaryExpr:
 	Operand  {
 		cout<<" PrimaryExpr: Operand, Value:";
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
		cout<<$$->current_node_data->value<<endl;
		//cout<<"Operand Value:"<<$$->current_node_data->value<<endl;
	}
 	| MakeExpr {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		$$ = curr;
	}
 	| PrimaryExpr Selector {
 		cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		$$ = new Node("PrimaryExpr");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = new NodeData("Access");
		$$->current_node_data->node_child = $1->current_node_data;
		$$->current_node_data->node_child->next_data = $2->current_node_data;
		$$->current_node_data->value = true;
		cout<<"Primary Expr Value Selector: "<<$$->current_node_data->value<<endl;
		auto temp_type = $1->current_type;
		if(temp_type==NULL) {
			cout<<($1->current_node_data->data_name)<<" has not been declared in the current scope\n";
			exit(1);
		}
		cout<<"A\n";
		if($1->current_type->current_data_type == _POINTER)
		{
			if((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type == _BASIC)
			{
				temp_type = (dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to;
			}
		}
		cout<<"A\n";

		if (temp_type->current_data_type == _BASIC) {
        	cout<<"D\n";
        	cout<<temp_type->getDataType()<<"\n";
        	for(auto valval:tt->get_type_table_data())
        	{
        		cout<<valval.first<<" -> "<<valval.second<<"\n";
        	}
        	temp_type = (tt->get_type_table_data())[temp_type->getDataType()]->copyClass() ;
    		cout<<"E\n";
    	}
		cout<<"A\n";

    	if (temp_type->current_data_type != _STRUCT &&
	        (temp_type->current_data_type != _POINTER ||
	         ((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type !=_STRUCT))) {
	        cout <<"[Type mismatch] Expected a struct type or pointer to struct type but got "	<< $1->current_node_data->data_name <<" which is "<<temp_type->getDataType() << "\n";
	        exit(1);
	    }
		cout<<"A\n";

	    if(temp_type->current_data_type==_STRUCT)
	    {
	    	cout<<"B\n";
	    	auto temp = (dynamic_cast<StructType *>(temp_type))->data_of_struct;
	    	// auto temp2 = *temp;
	   	    	cout<<"B\n";
		 	if(temp.find($2->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<$2->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    $$->current_type =  temp[$2->current_node_data->data_name];
	    }
	    else{
	    	    	cout<<"C\n";
			auto temp = (dynamic_cast<StructType *>((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to))->data_of_struct;
	    	// auto temp = *temp;
	    		    	cout<<"C\n";

	    	if(temp.find($2->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<$2->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
	    	cout<<"C\n";
		    $$->current_type =  temp[$2->current_node_data->data_name];
	    }
	    $$->current_node_data = new NodeData("Access");
	    $$->current_node_data->node_child = $1->current_node_data;
        $$->current_node_data->node_child->next_data = $2->current_node_data;
        $$->current_node_data->value = true;


	}
 	| PrimaryExpr Index {
 		cout<<"PrimaryExpr Index"<<endl;
 		$$ = new Node("PrimaryExpr");
 		$$->add_non_terminal_children($1);
 		$$->add_non_terminal_children($2);

 		DataType* t = $1->current_type;
 		if(t->current_data_type == _POINTER){
 			t = dynamic_cast<PointerType*>(t)->type_of_address_pointing_to;
 		}
 		if(t->current_data_type == _SLICE){
 			SliceType *tp = (SliceType *)t;
 			$$->current_type = tp->slice_base->copyClass();
 			if($2->current_type->getDataType() != "int"){
 				cout<<"Index can not be integer. Exiting.."<<endl;
 				exit(1);
 			}
 			else if(t->current_data_type == _ARRAY){
 				ArrayType *tp = (ArrayType *)t;
	 			$$->current_type = tp->array_index_type->copyClass();
	 			if($2->current_type->getDataType() != "int"){
	 				cout<<"Index can not be integer. Exiting.."<<endl;
	 				exit(1);
	 			}	
 			}
 			else if(t->current_data_type == _MAP){
 				MapType *tp = (MapType *)t;
	 			if($2->current_type->getDataType() != tp->key_datatype->getDataType()){
	 				cout<<"Expected key type : [ "<<tp->key_datatype->getDataType()<<" ]. Found: ["<<$2->current_type->getDataType() <<endl;
	 				exit(1);
	 			}
 			}
 			else{
 				cout<<"Tried to index something of type: [ "<<t->getDataType()<<" ]."<<endl;
 				exit(1);
 			}

 			$$->current_node_data = $1->current_node_data;
 			$$->current_node_data->value = true; 
 		}

 	}
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
 	| OperandName StructLiteral {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
	| PrimaryExpr TypeAssertion {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
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


Selector:
	DOT IDENTIFIER {
		cout<<"Selector:  DOT IDENTIFIER\n";
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

MakeExpr:
	MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);
		curr->add_non_terminal_children($7);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = $5->current_node_data;
		curr->current_node_data->node_child->next_data = $7->current_node_data;

		$$ = curr;
	}
	| MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = $5->current_node_data;
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

// remaining: Check if this last usage is correct: Note to TK.
ExpressionList:
	Expression {
		cout<<"ExpressionList: Expression, Value: ";
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children($1);

		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		 cout<<$$->current_node_data->value<<endl;
		$$ = curr;
	}
	| ExpressionList COMMA Expression {
		$$ = new Node("ExpressionList");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->current_node_data = $1->current_node_data;
		($$->last_current_node_data())->next_data = $3->current_node_data;
		$$->current_type = $1->current_type;
		($$->last_current_type())->next_type = $3->current_type;

	}
	;
// remaining
TypeDecl:
	/* TYPE LEFTPARAN TypeSpec SCOLON RIGHTPARAN {
		$$ = new Node("TypeDecl");
		$$->add_non_terminal_children($3);
	}
	| */
	TYPE TypeSpec {
		$$ = new Node("TypeDecl");
		$$->add_non_terminal_children($2);

		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;
	}
	;
// remaining
/* TypeSpecList:
	TypeSpecList TypeSpec SCOLON {
		$$ = new Node("TypeSpecList");
		$$ -> add_non_terminal_children($1);
		$$ -> add_non_terminal_children($2);
	}
	| TypeSpec SCOLON {
		$$ = new Node("TypeSpecList");
		$$->add_non_terminal_children($1);
	}
	; */
TypeSpec:
	/* AliasDecl {
		$$ = new Node("TypeSpec");
		$$->add_non_terminal_children($1);
	}
	| */
	TypeDef {
		$$ = new Node("TypeSpec");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
	}
	;

TypeDef:
	IDENTIFIER Type {
		$$ =  new Node("TypeDef");
		$$->add_terminal_children($1);
		$$->add_non_terminal_children($2);
		tt->add_in_type_table(string($1), $2->current_type);
		$$->current_node_data = new NodeData("TypeDef");
	}
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
            if(mem1.find(key) != mem1.end()) {
                 cout<<"Redeclaration of struct member: "<<endl;;
                 exit(1);
            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		$$ = curr;
	}
	;

FieldDecl:
	IdentifierList Type String {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		curr->add_non_terminal_children($3);

		DataType* tp = $2->current_type;
		tp->next_type = NULL;

		
		map< string, DataType*> m;

		for(NodeData* lp = $1->current_node_data; lp != NULL; lp = lp->next_data){
			string key = lp->data_name;
			DataType* value = tp->copyClass();
			m[key] = value;
		}

		curr->current_type = new StructType(m);
		$$ = curr;
		}
	| IdentifierList Type {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);

		DataType* tp = $2->current_type;
		tp->next_type = NULL;

		map< string, DataType*> m;

		for(NodeData* lp = $1->current_node_data; lp != NULL; lp = lp->next_data){
			string key = lp->data_name;
			DataType* value = tp->copyClass();
			m[key] = value;
		}

		curr->current_type = new StructType(m);
		$$ = curr;
		}
	;

PointerType:
	MUL BaseType {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children($1);
		curr->add_non_terminal_children($2);

		curr->current_type = $2->current_type;
		curr->current_node_data = $2->current_node_data;
		if($2->current_type->getDataType() == "undefined")
		{
			$2->current_type = new BasicType($2->current_node_data->data_name);
		}
		curr-> current_type = new PointerType($2->current_type->copyClass());
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
// remaining: Please check if this is correct, TK and SA
ArrayType:
	LEFTSQUARE Expression RIGHTSQUARE Type {
		cout<<"ArrayType : LEFTSQUARE Expression RIGHTSQUARE Type"<<endl;
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children($2);
		 curr->add_non_terminal_children($4);

		 bool is_basic = false;
		 int val_stored = 0;
		 if($2->current_type->getDataType() == "int")
		 {
			 Node* iter = $2;
			 while(iter != NULL && iter->current_node_children.size() == 1)
			 {
				 if(iter->node_name == "BasicLit")
				 {
					 is_basic = true;
					 val_stored = stoi(iter->current_node_data->data_name);
					 break;
				 }
				 iter = iter->current_node_children[0].non_terminal_node;
			 }
			 if(is_basic)
			 {
				 DataType* tp = $4->current_type->copyClass();
				 curr->current_type = new ArrayType(tp, val_stored);
			 }
			 else
			 {
				 cout<<"the array indices are not literals\n";
			 }
		 }
		 else
		 {
			 cout<<"The array indices is not an integer";
		 }
		 $$ = curr;
		 }
		 ;


Literal:
	BasicLit {
		cout<<"Literal:BasicLit\n";
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = $1->current_type;
		 $$ = curr;
		 cout<<($$->current_type)<<"\n";
		 }
    |CompositeLit{
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
		cout<<"BasicLit:String ";
		 cout<<($$->current_type)<<"\n";
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
			 curr->current_type = new BasicType("string");
			 $$ = curr;}
	| INTERPRETED_STRING {
			cout<<"INTERPRETED_STRING: "<<string($1)<<endl;
			 Node* curr = new Node("String");
			 curr->add_terminal_children(string($1));
			 curr->current_node_data = new NodeData($1);
			 curr->current_type = new BasicType("string");
			 $$ = curr;
		}
	;

%%





int main (int argc, char **argv) {

	// tt->add_in_type_table("void", new BasicType("void"));
 //    tt->add_in_type_table("int", new BasicType("int"));
 //    tt->add_in_type_table("bool", new BasicType("bool"));
 //    tt->add_in_type_table("byte", new BasicType("byte"));
 //    tt->add_in_type_table("float", new BasicType("float"));
 //    tt->add_in_type_table("string", new BasicType("string"));
	// tt->add
	
	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
