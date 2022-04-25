%{

	#include<bits/stdc++.h>
	#include "node.hpp"
	#include "tables.hpp"
	#include "datatypes.hpp"
	#include "dot_generator.hpp"
	#include "tac.hpp"
	#include "place.hpp"
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
	BreakLabels* cl = new BreakLabels(); // this one is for the continue labels
	Labels *l = new Labels();
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
	#include "tac.hpp"
	#include "codegen.cpp"
	// #include "dot_generator.hpp"
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

%type <nt> SourceFile Expression forMarker EmptyExpr
%type <nt> Block StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt MapType
%type <nt> Assignment ShortVarDecl Declaration VarSpec PackageName
%type <nt> Signature Result Parameters ParameterList ParameterDecl
%type <nt> MethodDecl Receiver TopLevelDecl LabeledStmt
%type <nt> ReturnStmt BreakStmt ContinueStmt GotoStmt FallthroughStmt StructType
%type <nt> FunctionBody ForStmt
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
			 cout<<"SourceFile:	PackageClause SCOLON ImportDeclList TopLevelDeclList\n";
			 curr->add_code_in_map($4->current_code);

			 $$ = curr;
			 Instruction* ins1 = new Instruction("EXIT");
			 $$->add_code_in_map(ins1);
		
			 //$$->add_code_in_map();
			 dump_dot_file("ast.dot", $$);
			 $$->print_code_in_file("bin/output.tac");
			 vector<vector<string> > final_tac_code;
			 $$->convert_code_to_vector(final_tac_code);
			 for(auto a:final_tac_code)
			 {
			 	for(auto b:a)
			 	{
			 		cout<<b<<" X ";
			 	}
			 	cout<<"\n";
			 }
			// tt->get_type_table_data gives the type map
			 map< string ,DataType*> final_symbol_table;
			 map<pair<string,string>, DataType*>  initial_symbol_table= st->get_symbol_table_data();
			 for(auto val:initial_symbol_table){
			 	final_symbol_table[val.first.first+val.first.second] = val.second;
			 	cout<<val.first.first+val.first.second<<"   FROM ST\n\n";
			 }

			 ASM* a = new ASM(final_symbol_table,tt->get_type_table_data(),final_tac_code);
			 a->gen();
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
		($$->last_current_node_data())->next_data = $2->current_node_data;
		$$->add_code_in_map($1->current_code);
		$$->add_code_in_map($2->current_code);
		cout<<"YO\n";
	}
	| TopLevelDecl SCOLON {
		Node* curr = new Node("TopLevelDeclList");
		 cout<<"TopLevelDeclList: TopLevelDecl SCOLON\n";
		curr->add_non_terminal_children($1);
		$$ = curr;
		$$->current_node_data = $1->current_node_data;
		$$->add_code_in_map($1->current_code);
		cout<<"YO2\n";
	}
	;

TopLevelDecl:
	Declaration {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| FunctionDecl {
		Node* curr = new Node("TopLevelDecl");
		 cout<<"TopLevelDecl : FunctionDecl\n";
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
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
		curr->current_place = $3->current_place;
		curr->add_code_in_map($3->current_code);
		$$ = curr;
    }
    ;

//remTAC check correctness
Condition:
	Expression {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
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
		$$->add_code_in_map($1->current_code);
		$$->add_code_in_map($2->current_code);

		// for checking if the fallthrough statement is the last one
		if(fallthrough_expression_count){
			// cout<<"INC fallthrough_expression_count\n";
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
		// cout<<"HERE\n";
		if($1->current_node_data==NULL){
			cout<<"NO AST found here! Exiting ";
			exit(1);
		}
		// cout<<"HERE\n";
		$$->current_node_data->node_child = $1->current_node_data;
		$$->add_code_in_map($1->current_code);
		// cout<<"HERE\n";

	}
	;

Statement:
	Declaration {
		cout<<"Statement: 	Declaration\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| LabeledStmt {
		cout<<"Statement:	LabeledStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| SimpleStmt {
		// cout<<"Statement:	SimpleStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;

		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		// cout<<"Statement:	SimpleStmt "<<($1->current_node_data==NULL)<<"\n";
		$$ = curr;
	}
	| ReturnStmt{
		// cout<<"Statement:	ReturnStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| BreakStmt {
		// cout<<"Statement:	BreakStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| ContinueStmt {
		// cout<<"Statement:	ContinueStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| GotoStmt {
		// cout<<"Statement:	GotoStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| SwitchStmt {
		// cout<<"Statement:	SwitchStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| FallthroughStmt {
		// cout<<"Statement:	FallthroughStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| Block {
		// cout<<"Statement:	Block\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| IfStmt {
		// cout<<"Statement:	IfStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| ForStmt {
		// cout<<"Statement:	ForStmt\n";
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	;

Declaration:
	TypeDecl {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| VarDecl {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children($1);
		curr->current_type = $1->current_type;
		curr->current_node_data = $1->current_node_data;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
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
//remTAC: scopeExpr
FunctionDecl:
	FUNC IDENTIFIER OpenBlock Signature 
	{
		cout<<"AAA\n";
		st->add_in_symbol_table({"0-",string($2)},$4->current_type);
		//cout<<"AAA4\n";
		cout<<"AAA2\n";

	} FunctionBody CloseBlock {
		// cout<<"FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock \n";
		st->output_csv_for_function(string($2),st->get_current_scope());
		
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		curr->add_non_terminal_children($6);
		$$ = curr;
		// st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		// cout<<($4->current_type->copyClass())->getDataType()<<"\n";
		// exit(1);
		$$-> current_node_data = new NodeData("Function-" + string($2));
		$$-> current_node_data->node_child = $6->current_node_data;
		dump_dot_file("./bin/"+string($2)+".dot", $$);

		Instruction* ins1 = new Instruction("LBL", new Place(string($2), NULL));
		$$->add_code_in_map(ins1);
		Instruction* ins2 = new Instruction("NEWFUNC");
		$$->add_code_in_map(ins2);
		$$->add_code_in_map($4->current_code);
		$$->add_code_in_map($6->current_code);
		Instruction* ins3 = new Instruction("NEWFUNCEND");
		$$->add_code_in_map(ins3);
		update_instructions_with_scope(&($$->current_code), st);
		//Instruction* ins5 = new Instruction("LBL", new Place(string($2), NULL));
		////$$->add_code_in_map(ins5);
		//$$->current_code[1]=ins5;
	}
	| FUNC IDENTIFIER OpenBlock Signature {
		st->add_in_symbol_table({"0-",string($2)},$4->current_type);
		st->output_csv_for_function(string($2),st->get_current_scope());
	} CloseBlock  {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string($2));
		curr->add_non_terminal_children($4);
		$$ = curr;
		// st->add_in_symbol_table({st->get_current_scope(),string($2)},$4->current_type);
		$$->current_node_data = new NodeData("Function-"+ string($2));
		dump_dot_file("./bin/"+string($2)+".dot", $$);
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
	/* | FUNC Receiver IDENTIFIER Signature FunctionBody {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));
		curr->add_non_terminal_children($4);
		curr->add_non_terminal_children($5);
		curr->add_code_in_map($5->current_code);
		$$=curr;
	} */
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
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| ExpressionStmt {
		// cout<<"SimpleStmt: ExpressionStmt\n";
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| IncDecStmt {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| Assignment {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
		// cout<<"SimpleStmt: Assignment "<<($$->current_node_data==NULL)<<"\n";
	}
	| ShortVarDecl {
		$$ = new Node("SimpleStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
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
		$$->current_place = new Place($$->current_type);
	}
	;

//remTAC: scopeExpr ka kya karu.
ExpressionStmt:
	Expression {
		// cout<<"ExpressionStmt: Expression\n";
		$$ = new Node("ExpressionStmt");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
		update_instructions_with_scope(&($$->current_code), st);
	}
	;

//remTAC: scopeExpr
IncDecStmt:
	Expression PLUSPLUS {
		$$ = new Node("IncDecStmt");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->current_node_data = new NodeData(string($2) + "unary");
		$$->current_node_data->node_child = $1->current_node_data;
		Place* p1 = new Place($1->current_type);
		Place* p2 = new Place($1->current_type);

		$$->add_code_in_map($1->current_code);
		Instruction* ins1 = new Instruction("USTOR", $1->current_place, p1);
		Instruction* ins2 = new Instruction("ADD", new Place("1"), p1);
		Instruction* ins3 = new Instruction("USTOR", p1, p2);
		Instruction* ins4 = new Instruction("USTOR", p2, $1->current_place);
		$$->add_code_in_map(ins1);
		$$->add_code_in_map(ins2);
		$$->add_code_in_map(ins3);
		$$->add_code_in_map(ins4);
		update_instructions_with_scope(&($$->current_code), st);

	}
	| Expression MINUSMINUS {
		$$ = new Node("IncDecStmt");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->current_node_data = new NodeData(string($2) + "unary");
		$$->current_node_data->node_child = $1->current_node_data;
		Place* p1 = new Place($1->current_type);
		Place* p2 = new Place($1->current_type);

		$$->add_code_in_map($1->current_code);
		Instruction* ins1 = new Instruction("USTOR", $1->current_place, p1);
		Instruction* ins2 = new Instruction("SUB", new Place("1"), p1);
		Instruction* ins3 = new Instruction("USTOR", p1, p2);
		Instruction* ins4 = new Instruction("USTOR", p2, $1->current_place);
		$$->add_code_in_map(ins1);
		$$->add_code_in_map(ins2);
		$$->add_code_in_map(ins3);
		$$->add_code_in_map(ins4);
		update_instructions_with_scope(&($$->current_code), st);
	}
	;

//remTAC: scopeEXpr
Assignment:
	ExpressionList ASSGN_OP ExpressionList {
		// cout<<"Assignment: ExpressionList ASSGN_OP ExpressionList "<<"\n";

		$$ = new Node("Assignment");
		$$->add_non_terminal_children($1);
		$$->add_terminal_children(string($2));
		$$->add_non_terminal_children($3);
		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($1->current_code);

		cout<<($1)<<" "<<($3)<<"\n";

		// Node* left_expr = $1;
		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		Place* left_place = $1->current_place;
		Place* right_place = $3->current_place;
		// cout<<"A  AAA \n";
		// cout<<left_data->value<<" "<<right_data->value<<endl;
		// cout<<"A  AAA \n";
		while(left_data || right_type){
			// cout<<"ENTERED!"<<endl;
			// if(left_data){
			// 	cout<<"LEFT: "<<left_data->data_name<<endl;
			// }
			// if(right_type){
			// 	cout<<"RIGHT"<<right_type->getDataType()<<endl;
			// }
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
				// cout<<"Here 1"<<endl;
				string j = name;
				// cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				// if(name==j) cout<<"UNCHANGED!\n";
			}

				// cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}
					// cout<<"HERE 4\n";

			if(!st->get_type(name)){
						// cout<<"HERE 16\n";

				cout<<"[Undeclared Identifier] "<<name<<" not declared yet!";
				exit(1);
			}
			else{
				// cout<<"HERE 8\n";
				// cout<<(left_type==NULL)<<" "<<(right_type==NULL)<<"\n";
				// cout<<left_type->getDataType()<<"\n";
				// cout<<right_type->getDataType()<<"\n";

				if(left_type->getDataType() != right_type->getDataType()){
					if(left_type->getDataType()!="byte" || right_type->getDataType()!="int"){
						cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
						exit(1);
					}
				}

			}
			cout<<"HUM YAHAN HAI in line 752"<<string($2)<<"\n\n\n\n";
			if(string($2) == "=")
			{
				cout<<"inside assignment operator, generating a store instruction\n";
				Instruction* ins = new Instruction("USTOR", right_place, left_place);
				
					cout<< "csfs:"<<ins->address2->place_name<<"\n\n";
				if(ins->address2->place_name=="<no_lval>")
				{
					cout<< "csfs:"<<ins->address2->place_name<<"\n\n";
					exit(1);
				}
				//exit(1);
				$$->add_code_in_map(ins);
			}
			else if(string($2).length() >= 2)
			{
				string operation = operator_to_tac(string($2));
				cout<<"inside += operator, generate " <<operation<<" instruction\n";
				Place* p1 = new Place($1->current_type);
				Place* p2 = new Place($1->current_type);
				Instruction* ins1 = new Instruction("USTOR", left_place, p1);
				Instruction* ins2 = new Instruction(operation, right_place, p1);
				Instruction* ins3 = new Instruction("USTOR", p1, p2);
				Instruction* ins4 = new Instruction("USTOR", p2, left_place);
				$$->add_code_in_map(ins1);
				$$->add_code_in_map(ins2);
				$$->add_code_in_map(ins3);
				$$->add_code_in_map(ins4);
			}
			// Node* child_expr = left_expr->current_node_children[0].non_terminal_node;
			// child_expr = child_expr->current_node_children[0].non_terminal_node;
			// cout << "NodeName: " << child_expr->node_name << "\n";
			// cout << "Val: " << child_expr->current_node_children[0].terminal_string_value << "\n";
			// if(child_expr->node_name == "UnaryExpr"){
			// 	if(child_expr->current_node_children[0].terminal_string_value == "*"){
			// 		Place *p1 = child_expr->current_node_children[1].non_terminal_node->current_place;
			// 		Instruction* ins1 = new Instruction("RSTOR", left_place, p1 );
			// 		$$->add_code_in_map(ins1);
			// 	}
				
			// }

				// cout<<"HERE 4\n";
			left_data = left_data->next_data;
			left_type = left_type->next_type;
			left_place = left_place->next_place;
			// if(left_expr->current_node_children.size()==2) left_expr = left_expr->current_node_children[1].non_terminal_node;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = $1->current_node_data;
		parRight->node_child = $3->current_node_data;
		parLeft->next_data = parRight;
		cout<<string($2)<<"------\n";
		// printf("%sSHUBH\n",string($2));
		NodeData * temp_node_data = new NodeData(string($2));

		// cout<<"temp_node_data "<<(temp_node_data==NULL) <<"    "<<(temp_node_data!=NULL)<<"\n";
		$$->current_node_data = temp_node_data;

		$$->current_node_data->node_child = parLeft;
		update_instructions_with_scope(&($$->current_code), st);
	}
	;

//remTAC: scopeEXpr
ShortVarDecl:
	IdentifierList INFER_EQ ExpressionList {
		// cout<<"ShortVarDecl : IdentifierList INFER_EQ ExpressionList"<<endl;
		$$ = new Node("ShortVarDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->add_code_in_map($3->current_code);

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		DataType* left_type = $1->current_type;
		DataType* right_type = $3->current_type;

		Place* right_place = $3->current_place;

		bool newVar = false;
		int yoyoyo=0;
		while(left_data || right_type){
			yoyoyo+=1;
			 if(left_data){
			 	cout<<"LEFT :"<<left_data->data_name<<endl;
			 }
			 if(right_type){
			 	cout<<"Right: "<<right_type->getDataType()<<endl;
			 }
			if(!left_data || !right_type){
				cout<<yoyoyo<<" == yoyoyo\n";
				cout<<"[unpacking error], ':=' operator expected same number of operands on LHS and RHS\n";
				cout<<(left_data==NULL)<<" == for left\n";
				cout<<(right_type==NULL)<<" == for right\n";
				
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
					if(left_type->getDataType()!="byte" || right_type->getDataType()!="int"){ //confirm check
						cout<<"[Type Mismatch]"<<name<<" has different types on LHS and RHS";
						exit(1);
					}
				}
			}
			else{
				newVar = true;
				// cout<<"ADDING IN INFER_EQ mode \n\n\n\n";
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}
			Instruction* ins2 = new Instruction("DECL",new Place(left_data->data_name, right_type));
			$$->add_code_in_map(ins2);

			Instruction* ins = new Instruction("USTOR", right_place, new Place(left_data->data_name, right_type));
			$$->add_code_in_map(ins);

			left_data = left_data -> next_data;
			right_type = right_type->next_type;
			right_data = right_data? right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
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
		update_instructions_with_scope(&($$->current_code), st);

	}
	;

VarDecl:
	VAR VarSpec {
		$$ = new Node("VarDecl");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
		$$->current_place = $2->current_place;
		$$->add_code_in_map($2->current_code);
	}
	| VAR LEFTPARAN VarSpecList RIGHTPARAN {
		$$ = new Node("VarDecl");
		$$->add_non_terminal_children($3);
		$$->current_type = $3->current_type;
		$$->current_node_data = $3->current_node_data;
		$$->current_place = $3->current_place;
		$$->add_code_in_map($3->current_code);
	}
	;

VarSpecList:
	VarSpecList VarSpec SCOLON {
		$$ = new Node("VarSpecList");

		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = $1->current_node_data;
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
		$$->add_code_in_map($1->current_code);
		$$->add_code_in_map($2->current_code);
		// might need to add type checks
	}
	| VarSpec SCOLON {
		$$ = new Node("VarSpecList");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->add_code_in_map($1->current_code);
	}
	;

VarSpec:
	IdentifierList Type {
		cout<<"VarSpec: IdentifierList Type\n";
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
			// cout<<curr->data_name<<"    "<< $2->current_type<<"   "<<$2->current_type->getDataType()<<"\n";
			Instruction* ins = new Instruction("DECL", new Place(st->get_current_scope() + curr->data_name));
			$$->add_code_in_map(ins);
			DataType * temp = $2->current_type->copyClass();
			// cout<<temp<<" "<<temp->getDataType()<<"  " <<temp->getDataType()<<"\n";
			// cout<<"VarSpec:	IdentifierList Type \n ";
			// exit(1);
			$$->current_type = $2->current_type;
			curr = curr->next_data;
		}

		$$->current_node_data = new NodeData("");
	}
	| IdentifierList Type ASSGN_OP ExpressionList {
		if(string($3) != "=")
		{
			cout<<"Coding an assign operation other than =, quitting.\n";
			exit(1);
		}

		$$ = new Node("VarSpec");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->add_non_terminal_children($4);
		$$->add_code_in_map($4->current_code);
		DataType* right_type = $4->current_type;

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $4->current_node_data;

		Place* right_place = $4->current_place;

		while(left_data || right_type){
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
				// cout<<"Here 1"<<endl;
				string j = name;
				// cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				// if(name==j) cout<<"UNCHANGED!\n";
			}

				// cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->scope_level(left_data->data_name)){
				cout<<left_data->data_name<<" already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),name},$2->current_type);
			auto p1 = new Place(st->get_current_scope() + name );
			Instruction* ins = new Instruction("DECL", p1 );

			$$->add_code_in_map(ins);
			$$->current_type = $2->current_type;

			if(right_type->getDataType() != $2->current_type->getDataType()){
					if($2->current_type->getDataType()!="byte"||right_type->getDataType()!="int"){
						cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<$2->current_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
						exit(1);
					}
				}
			//cout<<"inside assignment operator, generating a store instruction\n";
			ins = new Instruction("USTOR", right_place, new Place(st->get_current_scope() + name));
			$$->add_code_in_map(ins);
			left_data = left_data->next_data;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
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
		if(string($2) != "=")
		{
			cout<<"Coding an assign operation other than =, quitting.\n";
			exit(1);
		}
		$$ = new Node("VarSpec");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->add_code_in_map($3->current_code);
		DataType* right_type = $3->current_type;

		NodeData* left_data = $1->current_node_data;
		NodeData* right_data = $3->current_node_data;

		Place* right_place = $3->current_place;

		while(left_data || right_type){
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
				// cout<<"Here 1"<<endl;
				string j = name;
				// cout<<"HERE 2\n";
				name = (temp_left_data->node_child)? temp_left_data->node_child->data_name:temp_left_data->data_name;
				// if(name==j) cout<<"UNCHANGED!\n";
			}

				// cout<<name<<" "<<"HERE 4\n";
			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->scope_level(left_data->data_name)){
				cout<<left_data->data_name<<" already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),name},right_type);
			auto p1 = new Place(st->get_current_scope() + name);
			Instruction* ins = new Instruction("DECL", p1 );

			$$->add_code_in_map(ins);
			//$$->current_type = $2->current_type;

			//cout<<"inside assignment operator, generating a store instruction\n";
			ins = new Instruction("USTOR", right_place, new Place(st->get_current_scope() + name));
			$$->add_code_in_map(ins);
			left_data = left_data->next_data;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
			right_place = right_place? right_place->next_place: right_place;
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
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
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

		int i = 0;
		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);
			Place* p1 = new Place(std::to_string(i++));
			Place* p2 = new Place(st->get_current_scope() + dcurr->data_name);
			Instruction* ins = new Instruction("ARGDECL", p1, p2);
			$$->add_code_in_map(ins);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}
		$$ -> current_type = new FunctionType(arguments,return_types);
		cout<<"Signature: Parameters2\n";
	}
	| Parameters Result {
		$$ = new Node("Signature");
		// cout<<"Signature: Parameters Result\n";
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

		int i = 0;
		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			Place* p1 = new Place(std::to_string(i++));
			Place* p2 = new Place(st->get_current_scope() + dcurr->data_name);
			Instruction* ins = new Instruction("ARGDECL", p1, p2);
			$$->add_code_in_map(ins);

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
    	// cout<<"TypeList: TypeList COMMA Type"<<endl;
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->add_non_terminal_children($3);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
        $$->current_node_data->next_data = $3->current_node_data;
        $$->current_type->next_type = $3->current_type;
    }
    | Type {
    	// cout<<"TypeList: TypeList COMMA Type"<<endl;
        $$ = new Node("TypeList");
        $$->add_non_terminal_children($1);
        $$->current_type = $1->current_type;
        $$->current_node_data = $1->current_node_data;
    }
    ;

Parameters:
	LEFTPARAN RIGHTPARAN {
		// cout<<"Parameters: LEFTPARAN RIGHTPARAN \n";
		$$ = new Node("Parameters");
		$$->current_node_data = new NodeData("Empty Params");
		$$-> current_type = NULL;
	}
	| LEFTPARAN ParameterList RIGHTPARAN {
		// cout<<"Parameters: LEFTPARAN ParameterList RIGHTPARAN"<<endl;
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
		// cout<<"ParameterList: ParameterDecl"<<endl;
		$$ = new Node("ParameterList");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$-> current_type = $1->current_type;
	}
	| ParameterList COMMA ParameterDecl{
		// cout<<"ParameterList: ParameterList COMMA ParameterDecl"<<endl;
		$$ = new Node("Parameters");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		$$->current_node_data = $1->current_node_data;
		$$-> current_type = $1->current_type;
		// cout<<"Here"<<endl;
		// cout<<(($$->last_current_node_data()))<<" \n";
		// cout<<"  "<<(($$->last_current_type()))<<"\n";
		($$->last_current_node_data())->next_data = $3->current_node_data;
		($$->last_current_type())->next_type = $3->current_type;
		// cout<<"Here1"<<endl;
	}
	;

ParameterDecl:
	IdentifierList Type {
		// cout<<"ParameterDecl: IdentifierList Type"<<endl;
		$$ = new Node("ParameterDecl");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		NodeData *data = $1 -> current_node_data;
		DataType *type = $2 -> current_type -> copyClass();
		$$->current_type = $2->current_type->copyClass();
		$$->current_node_data = data;

		while(data){
			// cout<<"HERE"<<endl;
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			// cout<<"add_in_symbol_table from ParameterDecl\n";
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, $2->current_type);
			// auto val = st->get_symbol_table_data();
			//  int x=0;
			//  for (auto temp:val)
			//  {

			//  	cout<<temp.first.first<<" - "<<temp.first.second<<" -  \n";
			//  	cout<<temp.second<<"\n";
			//  	if(x) cout<<temp.second->getDataType()<<"\n";
			//  	x+=1;
			//  }
			//  cout<<"\n\n\n\n\n\n";
			// exit(1);
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
		cout<<"IdentifierList: Identifier"<<endl;
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
		// cout<<"CompositeLit: LiteralType LiteralValue"<<endl;
        $$ = new Node("CompositeLit");
        $$->add_non_terminal_children($1);
        $$->add_non_terminal_children($2);
        int num;
        DataType *iter;
        ArrayType* array;
        SliceType* slice;
        switch ($1->current_type->current_data_type) {
            case _ARRAY:
                array = dynamic_cast<ArrayType*>($1->current_type);
                num = 0;
                iter = $2->current_type;
                while (iter != NULL) {
                    if (iter->getDataType() != array->array_index_type->getDataType()) {
                        cout<<"Element of wrong datatype in array declaration" << iter->getDataType();
                        exit(1);
                    }
                    num++;
                    iter = iter->next_type;
                }
                if (num > array->array_size) {
                	cout<<"Number of elements more than size: Expected [ "<<array->array_size<<" ]"<<endl;
                	exit(1);
                }
                $$->current_node_data = new NodeData("ArrayLiteral");
                $$->current_node_data->node_child = new NodeData("Type");
                $$->current_node_data->node_child->next_data = new NodeData("Value");
                $$->current_node_data->node_child = $1->current_node_data;
                $$->current_node_data->node_child->next_data->node_child = $2->current_node_data;
                $$->current_type = $1->current_type->copyClass();
				$$->current_place = new Place($$->current_type);
                break;
            case _SLICE:
                slice = dynamic_cast<SliceType*>($1->current_type);
                iter = $2->current_type;
                while (iter != NULL) {
                    if (iter->getDataType() != slice->slice_base->getDataType()) {
                        cout<<"Element of wrong datatype in slice declaration" << iter->getDataType();
                        exit(1);
                    }
                    iter = iter->next_type;
                }
                $$->current_node_data = new NodeData("SliceLiteral");
                $$->current_node_data->node_child = new NodeData("Type");
                $$->current_node_data->node_child->next_data = new NodeData("Value");
                $$->current_node_data->node_child = $1->current_node_data;
                $$->current_node_data->node_child->next_data->node_child = $2->current_node_data;
                $$->current_type = $1->current_type->copyClass();
				$$->current_place = new Place($$->current_type);
            default:
                cerr << "Composite type not yet supported" << endl;
                exit(1);
        }
    }
	;

LiteralType:
	StructType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| ArrayType {
		// cout<<"LiteralType: ArrayType"<<endl;
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| PointerType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	| SliceType {
		$$ = new Node("LiteralType");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
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
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
	}
	;

Type:
	LiteralType {
		// cout<<"Type: LiteralType"<<endl;
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
		//cout<<"Type:OperandName"<<endl;
	}
	;

Operand:
	Literal {
		// cout<<"Operand: Literal"<<endl;
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
		// cout<<"Operand Value "<<$$->current_node_data->value<<endl;
	}
	| OperandName {
		 cout<<"Operand: OperandName";
		$$ = new Node("Operand");
		$$->add_non_terminal_children($1);
		$$->current_node_data = $1->current_node_data;
		$$->current_type = $1->current_type;
		$$->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
		 cout<<"Value: "<<$$->current_node_data->value<<endl;
		 cout<<$$->current_node_data->lval<<" ----\n";
	
	}
	| LEFTPARAN Expression RIGHTPARAN {
		$$ = new Node("Operand");
		$$->add_non_terminal_children($2);
		$$->current_node_data = $2->current_node_data;
		$$->current_type = $2->current_type;
		$$->current_place = $2->current_place;
		$$->add_code_in_map($2->current_code);
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
		 cout<<"OperandName4:	IDENTIFIER - "<<string($1)<<"\n";
		$$->current_place = new Place(string($1));
		//cour
		cout<<string($1);
		//cout<<st->get_type(string($1))<<"\n";
		for(auto val:st->get_symbol_table_data())
		{
			cout<<val.first.first<<" "<<val.first.second<<"\n";
		}
		//if(st->get_type(string($1))->current_data_type==_BASIC)
		//{
		//	exit(1);
		//}
		$$->current_type = st->get_type(string($1))?st->get_type(string($1)):new BasicType("undefined");
		//cout<<
		cout<<($$->current_type->current_data_type)<<"\n";
		 cout<<"OperandName5:	IDENTIFIER - "<<string($1)<<"\n";
		//if(string($1)=="byte") exit(1);
		 $$->current_node_data->lval = $$->current_place->place_name;
		 cout<<" SET lval == "<<$$->current_node_data->lval<<"\n";
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
		$$->current_place = $2->current_place;
		$$->add_code_in_map($2->current_code);
	}
	| LEFTBRACE ElementList COMMA RIGHTBRACE {
		$$ = new Node("LiteralValue");
		$$->add_non_terminal_children($2);
		$$->current_type = $2->current_type;
		$$->current_node_data = $2->current_node_data;
		$$->current_place = $2->current_place;
		$$->add_code_in_map($2->current_code);
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
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| ElementList COMMA KeyedElement {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($3);

		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		curr->current_place = $1->current_place;

		$$ = curr;

		($$->last_current_node_data())->next_data = $3->current_node_data;
		($$->last_current_type())->next_type = $3->current_type;
		($$->last_current_place())->next_place = $3->current_place;

	}
	;

KeyedElement:
	Element {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
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
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	| LiteralValue {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		$$ = curr;
	}
	;

ReturnStmt:
	RETURN {
		$$ = new Node("ReturnStmt");
		$$ -> current_node_data = new NodeData(string($1));
		$$->add_code_in_map(new Instruction("RETURNEMPTY"));

	}
	| RETURN ExpressionList {
		$$ = new Node("ReturnStmt");
		$$ -> add_non_terminal_children($2);
		$$->current_node_data = new NodeData(string($1));
		$$->current_node_data->node_child = $2->current_node_data;
		Place* current_return_place = $2->current_place;
		DataType* current_return_type = $2->current_type;
		$$->add_code_in_map($2->current_code);

		vector<Place *> args_places;
		while(current_return_place!=NULL){
			args_places.push_back(new Place(current_return_type));
			Instruction* ins = new Instruction("USTOR", current_return_place,args_places[args_places.size()-1]);
			$$->add_code_in_map(ins);
			current_return_place= current_return_place->next_place;
			current_return_type= current_return_type->next_type;
		}	
		$$->add_code_in_map(new Instruction("RETURNSTART"));
		vector<Instruction*> temp_instrs; // we need to push the returns in the opposite order

		//current_return_place = $2->current_place;
		//vector<Instruction*> temp_instrs; // we need to push the returns in the opposite order

		//current_return_place = $2->current_place;
		//while(current_return_place!=NULL){
		//	// we need to push the returns in the opposite order
		//	temp_instrs.push_back(new Instruction("PUSHSTACK", current_return_place));
		//	//$$->add_code_in_map(ins);
		//	current_return_place= current_return_place->next_place;
		//}	
		for(int i=args_places.size()-1;i>=0;i--)
		{
			//$$->add_code_in_map(temp_instrs[i]);
			$$->add_code_in_map(new Instruction("PUSHSTACK", args_places[i]));
		}
		$$->add_code_in_map(new Instruction("RETURNEND"));
		update_instructions_with_scope(&($$->current_code),st);
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
		Instruction* ins = new Instruction("JMP", new Place(bl->return_top_label()));
		$$->add_code_in_map(ins);
	}
	| BREAK IDENTIFIER {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string($2));
		curr->current_node_data = new NodeData (string($1));
		curr->current_node_data->node_child = new NodeData(string($2));
		$$ = curr;
		Instruction* ins = new Instruction("JMP", new Place("<unimplemented>"));
		$$->add_code_in_map(ins);
	}
	;


//remTAC: Please check if break label top element retrieved correctly.
ContinueStmt:
	CONTINUE {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string($1));
		$$ = curr;
		if(cl->is_empty()){
			cout<<"[INVALID CONTINUE] Tried to continue when not inside a loop!";
			exit(1);
		}
		Instruction* ins = new Instruction("JMP", new Place(cl->return_top_label()));
		$$->add_code_in_map(ins);
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

//remTAC: look after this.
SwitchStmt:
	ExprSwitchStmt {
		// cout<<"SwitchStmt: ExprSwitchStmt\n";
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
	 	// cout<<"SWITCH SimpleStmt SCOLON LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";

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
		// cout<<"SWITCH Expression LEFTBRACE { scl = new SwitchCaseList(); } ExprCaseClauseList RIGHTBRACE\n";
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
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";
		$$ = new Node("ExprCaseClauseList");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = $1->current_node_data;
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause \n";
		// cout<<(($$->current_node_data->last_next_child())==NULL)<<"\n";
		($$->current_node_data->last_next_child())->next_data = $2->current_node_data;
		// cout<<"ExprCaseClauseList: ExprCaseClauseList ExprCaseClause\n";

	}
	| ExprCaseClause {
		// cout<<"ExprCaseClauseList: ExprCaseClause\n";
		$$ = new Node("ExprCaseClauseList");
		$$->add_non_terminal_children($1);
		$$->current_node_data = new NodeData("list");
		$$->current_node_data->node_child = $1->current_node_data;
		// $$->current_type = $1->current_type;
	}
	;

ExprCaseClause:
	ExprSwitchCase COLON StatementList {
		// cout<<"ExprCaseCause:	ExprSwitchCase COLON StatementList\n";
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
		// cout<<"ExprSwitchCase:  CASE ExpressionList\n";
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
		// cout<<"SET fallthrough_expression_count ==1\n";
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

//remTAC: adding scopes
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
		string jmp_label = l->get_new_label();
		$$->add_code_in_map($3->current_code);
		Instruction* ins = new Instruction("JEQZ", $3->current_place, new Place(jmp_label));
		$$->add_code_in_map(ins);
		$$->add_code_in_map($4->current_code);
		$$->add_code_in_map(new Instruction("LBL", new Place(jmp_label)));
	}
	|IF OpenBlock SimpleStmt SCOLON Expression Block CloseBlock {
		cout << "Simple Stmt\n";
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
		string jmp_label = l->get_new_label();
		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($5->current_code);
		Instruction* ins = new Instruction("JEQZ", $5->current_place, new Place(jmp_label));
		$$->add_code_in_map(ins);
		$$->add_code_in_map($6->current_code);
		$$->add_code_in_map(new Instruction("LBL", new Place(jmp_label)));
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

		string label_else = l->get_new_label();
		string label_after_else = l->get_new_label();

		$$->add_code_in_map($3->current_code);
		Instruction* ins1 = new Instruction("JEQZ", $3->current_place, new Place(label_else));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($4->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_after_else));
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_else));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($6->current_code);
		Instruction* ins4 = new Instruction("LBL", new Place(label_after_else));
		$$->add_code_in_map(ins4);

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

		string label_else = l->get_new_label();
		string label_after_else = l->get_new_label();

		$$->add_code_in_map($3->current_code);
		Instruction* ins1 = new Instruction("JEQZ", $3->current_place, new Place(label_else));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($4->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_after_else));
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_else));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($6->current_code);
		Instruction* ins4 = new Instruction("LBL", new Place(label_after_else));
		$$->add_code_in_map(ins4);

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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($5->current_code);
		Instruction* ins1 = new Instruction("JEQZ", $5->current_place, new Place(label_if));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($6->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($8->current_code);
		Instruction* ins4 = new Instruction("LBL", new Place(label_else));
		$$->add_code_in_map(ins4);
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

		string label_if = l->get_new_label();
		string label_else = l->get_new_label();

		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($5->current_code);
		Instruction* ins1 = new Instruction("JEQZ", $5->current_place, new Place(label_if));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($6->current_code);
		Instruction* ins2 = new Instruction("JMP", new Place(label_else));
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("LBL", new Place(label_if));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($8->current_code);
		Instruction* ins4 = new Instruction("LBL", new Place(label_else));
		$$->add_code_in_map(ins4);

	}
	;
//remTAC: code for forMArker. need to fixed for hsubh.
ForStmt:
	FOR forMarker Block 
	{
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->current_node_data = new NodeData("For");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it=it->node_child;
		it->node_child = $3->current_node_data;

		string label_loop_start = cl->return_top_label();
		string label_loop_end = bl->return_top_label();

		Instruction* ins = new Instruction("LBL", new Place(label_loop_start));
		$$->add_code_in_map(ins);
		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($2->current_code);
		Instruction* ins1 = new Instruction("JMP", new Place(label_loop_start));
		$$->add_code_in_map(ins1);
		Instruction* ins2 = new Instruction("LBL", new Place(label_loop_end));
		$$->add_code_in_map(ins2);
		//$$->add_code_in_map($4->current_code);
		bl -> remove_last_break_label();
		cl -> remove_last_break_label();
	
	} 
	| FOR OpenBlock SimpleStmt SCOLON forMarker EmptyExpr SCOLON SimpleStmt Block CloseBlock {
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$->add_non_terminal_children($9);
		$$->current_node_data = new NodeData("For");
		NodeData* it = $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = $9->current_node_data;

		string label_loop_start = l->get_new_label();
		string continue_loop_label = cl->return_top_label();
		string label_loop_end = bl->return_top_label();

		$$->add_code_in_map($3->current_code);
		$$->add_code_in_map($5->current_code);
		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($6->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), $6->current_place);
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($9->current_code);
		Instruction* ins6 = new Instruction("LBL", new Place(continue_loop_label));
		$$->add_code_in_map(ins6);
		$$->add_code_in_map($8->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		$$->add_code_in_map(ins4);
		//$$->add_code_in_map($10->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		$$->add_code_in_map(ins5);
		bl -> remove_last_break_label();
		cl -> remove_last_break_label();
	
	} 
	| FOR OpenBlock SimpleStmt SCOLON forMarker ExpressionStmt SCOLON SimpleStmt Block  CloseBlock {
		$$ = new Node("ForStmt");
		$$->add_non_terminal_children($3);
		$$->add_non_terminal_children($6);
		$$->add_non_terminal_children($8);
		$$->add_non_terminal_children($9);

		$$ -> current_node_data = new NodeData("For");
		NodeData* it= $$->current_node_data;
		it->node_child = new NodeData("ForBody");
		it->node_child->node_child = $9->current_node_data;

		string label_loop_start = l->get_new_label();
		string continue_loop_label = cl->return_top_label();
		string label_loop_end = bl->return_top_label();

		$$->add_code_in_map($3->current_code);
		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($6->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), $6->current_place);
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($9->current_code);
		$$->add_code_in_map($5->current_code);
		Instruction* ins6 = new Instruction("LBL", new Place(continue_loop_label));
		$$->add_code_in_map(ins6);
		
		$$->add_code_in_map($8->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		$$->add_code_in_map(ins4);
		//$$->add_code_in_map($10->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		$$->add_code_in_map(ins5);

		bl -> remove_last_break_label();
		cl -> remove_last_break_label();
	
	} 
	| FOR OpenBlock Condition forMarker Block CloseBlock {
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

		string label_loop_start = cl->return_top_label();
		string label_loop_end = bl->return_top_label();

		Instruction* ins1 = new Instruction("LBL", new Place(label_loop_start));
		$$->add_code_in_map(ins1);
		$$->add_code_in_map($3->current_code);
		Instruction* ins2 = new Instruction("CMP", new Place("0"), new Place($3->current_place->place_name));
		$$->add_code_in_map(ins2);
		Instruction* ins3 = new Instruction("JE", new Place(label_loop_end));
		$$->add_code_in_map(ins3);
		$$->add_code_in_map($5->current_code);
		$$->add_code_in_map($4->current_code);
		Instruction* ins4 = new Instruction("JMP", new Place(label_loop_start));
		$$->add_code_in_map(ins4);
		//$$->add_code_in_map($6->current_code);
		Instruction* ins5 = new Instruction("LBL", new Place(label_loop_end));
		$$->add_code_in_map(ins5);
		bl -> remove_last_break_label();
		cl -> remove_last_break_label();
	
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

//remTAC: Fix next labels, shubh
forMarker:
	{
		$$ = new Node("");
		bl -> add_new_break_label(l->get_new_label());
		cl -> add_new_break_label(l->get_new_label());
		cout<<" beginning for Loop --- "<<bl->return_top_label()<<"\n\n\n\n";
	}

	;

//forMarkerEnd:
//	{
//		$$ = new Node("");
//		//Instruction* ins5 = new Instruction("LBL", new Place(bl->return_top_label()));
//		//$$->add_code_in_map(ins5);
//		bl -> remove_last_break_label();
//		cl -> remove_last_break_label();
		
//	;
//	}
//	;
//Empty:
	/* empty */
	//{

	//}
	//;

// Might change, temporarily added
//RangeClause:
//	RANGE Expression {
//		$$ = new Node("RangeClause");
//		$$->add_non_terminal_children($2);
//		$$ -> current_node_data = new NodeData("RangeClause");
//		$$ -> current_node_data -> node_child = new NodeData("Expression");
//		$$ -> current_node_data ->node_child->node_child = $2->current_node_data;
//	}
//	| IdentifierList INFER_EQ RANGE Expression {
//		$$ = new Node("RangeClause");
//		$$->add_non_terminal_children($1);
//		$$->add_non_terminal_children($4);
//		$$ -> current_node_data = new NodeData("RangeClause");
//		$$ -> current_node_data -> node_child = new NodeData("IdentifierList");
//		$$ -> current_node_data -> node_child -> node_child = $1->current_node_data;
//		NodeData* it = $$->current_node_data -> node_child;
//		it->next = new NodeData("RangeExpression");
//		it->next->node_child = $4->current_node_data;
//	}
//	| ExpressionList ASSGN_OP RANGE Expression {
//		$$ = new Node("RangeClause");
//		$$->add_non_terminal_children($1);
//		$$->add_non_terminal_children($4);
//		$$ -> current_node_data = new NodeData("RangeClause");
//		$$ -> current_node_data -> node_child = new NodeData("ExpressionList");
//		$$ -> current_node_data -> node_child -> node_child = $1->current_node_data;
//		NodeData* it = $$->current_node_data -> node_child;
//		it->next = new NodeData("RangeExpression");
//		it->next->node_child = $4->current_node_data;

//	}
//	;
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			//cout<<$1->current_type
			cout<<"MAI YAHA HU\n";
			cout<<($1->current_place==NULL)<<"  Expression MUL Expression1 \n";
			cout<<($$->current_place==NULL)<<"  Expression MUL Expression2 \n";

			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("MUL",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);


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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("QUOT",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("MOD",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("SHL",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("SHR",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("AND",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("ANDNOT",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("ADD",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("SUB",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("OR",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);

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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = $1->current_type;

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("XOR",$3->current_place,p1);
			Instruction* ins3 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);

			Place* p1 = new Place(l->get_new_label());

			Instruction* ins1 = new Instruction("CMP",new Place("$0"),$1->current_place);
			Instruction* ins2 = new Instruction("USTOR",$1->current_place,$$->current_place);
			Instruction* ins3 = new Instruction("JE",p1);
			$$->add_code_in_map($3->current_code);
			Instruction* ins4 = new Instruction("USTOR",$3->current_place,$$->current_place);
			Instruction* ins5 = new Instruction("LBL",p1);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);
			$$->add_code_in_map(ins5);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);

			Place* p1 = new Place(l->get_new_label());

			Instruction* ins1 = new Instruction("CMP",new Place("$0"),$1->current_place);
			Instruction* ins2 = new Instruction("USTOR",$1->current_place,$$->current_place);
			Instruction* ins3 = new Instruction("JNE",p1);
			$$->add_code_in_map($3->current_code);
			Instruction* ins4 = new Instruction("USTOR",$3->current_place,$$->current_place);
			Instruction* ins5 = new Instruction("LBL",p1);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);
			$$->add_code_in_map(ins5);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("ISEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("NEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("GRTEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("GRT",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("LESSEQ",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
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
				if($1->current_type->getDataType()!="byte" || $3->current_type->getDataType()!="int"){
					cout<<"[Type Mismatch]: "<<$1->current_type->getDataType() <<" and "<<$3->current_type->getDataType()<<endl;
					exit(1);
				}
			}

			string temp = string($2);
			$$->current_type = new BasicType("bool");

			$$->current_place = new Place($$->current_type);

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($3->current_code);

			Place* p1 = new Place($1->current_type);
			Instruction* ins1 = new Instruction("USTOR",$1->current_place,p1);
			Instruction* ins2 = new Instruction("CMP",$3->current_place,p1);
			Instruction* ins3 = new Instruction("LESS",p1);
			Instruction* ins4 = new Instruction("USTOR",p1,$$->current_place);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->add_code_in_map(ins3);
			$$->add_code_in_map(ins4);

			update_instructions_with_scope(&($$->current_code),st);
		}
	| UnaryExpr {
		 cout<<"Expression: UnaryExpr, Value: ";
			$$ = new Node("Expression");
			$$->add_non_terminal_children($1);
			$$->current_type = $1->current_type;
			$$->current_node_data = $1->current_node_data;
			$$->current_place = $1->current_place;
			cout<<"INSIDE 2984 UnaryExpr "<<($$->current_place==NULL)<<"\n";
			$$->add_code_in_map($1->current_code);
			// cout<<"Unary value"<<endl;
			  cout<<$$->current_node_data->value<<endl;
			// cout<<"Unary value"<<endl;
		}
	;

UnaryExpr:
	MUL PrimaryExpr {
		// cout<<"UnaryExpr: MUL PrimaryExpr "<<endl;
		$$ = new Node("UnaryExpr");
		$$->add_terminal_children(string($1));
		$$->add_non_terminal_children($2);
		$$->current_node_data =  $2->current_node_data;
		$$->add_code_in_map($2->current_code);
		if($2->current_type->current_data_type != _POINTER){
			cout<<"Can not dereference a non-pointer! Exiting..."<<endl;
			exit(1);
		}
		$$->current_type = dynamic_cast<PointerType*>($2->current_type)->type_of_address_pointing_to->copyClass();
		Place* p1 = new Place($$->current_type);
		Instruction* ins = new Instruction("UREF",$2->current_place,p1);
		$$->add_code_in_map(ins);
		$$->current_place = p1;
	}
	| AND PrimaryExpr {
		$$ = new Node("UnaryExpr");
		$$->add_terminal_children(string($1));
		$$->add_non_terminal_children($2);
		$$->current_node_data = new NodeData("&unary");
		$$->current_node_data->node_child = $2->current_node_data;
		$$->current_type = new PointerType($2->current_type);
		$$->add_code_in_map($2->current_code);
		Place* p1 = new Place($$->current_type);
		Instruction* ins = new Instruction("UADDR",$2->current_place,p1);
		cout << "Primary:::" << $2->current_place->place_name << "\n";
		$$->add_code_in_map(ins);
		$$->current_place = p1;
		}
	| ADD PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("+unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
			$$->add_code_in_map($2->current_code);
			Place* p1 = new Place($$->current_type);

			Instruction* ins1 = new Instruction("USTOR",new Place("0",$$->current_type),p1);
			Instruction* ins2 = new Instruction("ADD",$2->current_place,p1);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->current_place = p1;
		}
	| SUB PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("-unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
			$$->add_code_in_map($2->current_code);
			Place* p1 = new Place($$->current_type);

			Instruction* ins1 = new Instruction("USTOR",new Place("0",$$->current_type),p1);
			Instruction* ins2 = new Instruction("SUB",$2->current_place,p1);
			cout<<$2->current_place->place_name<<"SUB PrimaryExpr \n";
			//exit(1);
			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->current_place = p1;
		}
	| NOT PrimaryExpr {
			$$ = new Node("UnaryExpr");
			$$->add_terminal_children(string($1));
			$$->add_non_terminal_children($2);
			$$->current_node_data = new NodeData("!unary");
			$$->current_node_data->node_child = $2->current_node_data;
			$$->current_type = $2->current_type->copyClass();
			$$->add_code_in_map($2->current_code);
			Place* p1 = new Place($$->current_type);

			Instruction* ins1 = new Instruction("USTOR",$2->current_place,p1);
			Instruction* ins2 = new Instruction("NOT",$2->current_place,p1);

			$$->add_code_in_map(ins1);
			$$->add_code_in_map(ins2);
			$$->current_place = p1;
		}
	| PrimaryExpr {
		 cout<<"UnaryExpr: PrimaryExpr\n";
		$$ = new Node("UnaryExpr");
		$$->add_non_terminal_children($1);
		$$->current_type = $1->current_type;
		$$->current_node_data = $1->current_node_data;
		$$->current_place = $1->current_place;
		cout << ($1->current_place==NULL) << "Hi\n";
		$$->add_code_in_map($1->current_code);
		//cout<<"Primary Value: "<<$$->current_node_data->value<<" "<<$1->current_node_data->value<< endl;

	}

 	;
// remaining
 PrimaryExpr:
 	Operand  {
 		 cout<<" PrimaryExpr: Operand, Value:";
		Node* curr = new Node("PrimaryExpr");
		//cout<<"ABC\n";
		curr->add_non_terminal_children($1);
		//cout<<"ABC\n";
		curr->current_node_data = $1->current_node_data;

		//cout<<"ABC\n";
		curr->current_type = $1->current_type;
		//cout<<"ABC2\n";
		curr->current_place = $1->current_place;
		//cout<<"ABC2\n";
		curr->add_code_in_map($1->current_code);
		//cout<<"ABC4\n";
		$$ = curr;
		cout<<$$->current_node_data->value<<endl;
		cout<<"Operand Value:"<<$$->current_node_data->value<<endl;
		cout<<"Operand lval:"<<$$->current_node_data->lval<<endl;

	}
 	| MakeExpr {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->current_node_data = $1->current_node_data;
		curr->current_type = $1->current_type;
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);

		$$ = curr;
	}
 	| PrimaryExpr Selector {
 		// cout<<"PrimaryExpr: PrimaryExpr Selector\n";
		$$ = new Node("PrimaryExpr");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = new NodeData("Access");
		$$->current_node_data->node_child = $1->current_node_data;
		$$->current_node_data->node_child->next_data = $2->current_node_data;
		$$->current_node_data->value = true;

		// cout<<"Primary Expr Value Selector: "<<$$->current_node_data->value<<endl;
		auto temp_type = $1->current_type;
		if(temp_type==NULL) {
			cout<<($1->current_node_data->data_name)<<" has not been declared in the current scope\n";
			exit(1);
		}
		// cout<<"A\n";
		if($1->current_type->current_data_type == _POINTER)
		{
			if((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type == _BASIC)
			{
				temp_type = (dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to;
			}
		}
		// cout<<"A\n";

		if (temp_type->current_data_type == _BASIC) {
        	// cout<<"D\n";
        	// cout<<temp_type->getDataType()<<"\n";
        	// for(auto valval:tt->get_type_table_data())
        	// {
        	// 	cout<<valval.first<<" -> "<<valval.second<<"\n";
        	// }
        	temp_type = (tt->get_type_table_data())[temp_type->getDataType()]->copyClass() ;
    		// cout<<"E\n";
    	}
		// cout<<"A\n";

    	if (temp_type->current_data_type != _STRUCT &&
	        (temp_type->current_data_type != _POINTER ||
	         ((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to->current_data_type !=_STRUCT))) {
	        cout <<"[Type mismatch] Expected a struct type or pointer to struct type but got "	<< $1->current_node_data->data_name <<" which is "<<temp_type->getDataType() << "\n";
	        exit(1);
	    }
		// cout<<"A\n";

	    if(temp_type->current_data_type==_STRUCT)
	    {
	    	// cout<<"B\n";
	    	auto temp = (dynamic_cast<StructType *>(temp_type))->data_of_struct;
	    	// auto temp2 = *temp;
	   	    	// cout<<"B\n";
		 	if(temp.find($2->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<$2->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
		    $$->current_type =  temp[$2->current_node_data->data_name];
	    }
	    else{
	    	    	// cout<<"C\n";
			auto temp = (dynamic_cast<StructType *>((dynamic_cast<PointerType *>(temp_type))->type_of_address_pointing_to))->data_of_struct;
	    	// auto temp = *temp;
	    		    	// cout<<"C\n";

	    	if(temp.find($2->current_node_data->data_name) == temp.end())
	    	{
	    		cout<<"[Invalid Member Access] Expected a access for type "<<temp_type->getDataType()<<" but found "<<$2->current_node_data->data_name<<"\n";
	    		exit(1);
	    	}
	    	// cout<<"C\n";
		    $$->current_type =  temp[$2->current_node_data->data_name];
	    }
	    $$->current_node_data = new NodeData("Access");
	    $$->current_node_data->node_child = $1->current_node_data;
        $$->current_node_data->node_child->next_data = $2->current_node_data;
        $$->current_node_data->value = true;
		$$->current_place = new Place($1->current_place->place_name + "." + $2->current_place->place_name);
		$$->current_node_data->lval = $$->current_place->place_name;
		$$->add_code_in_map($1->current_code);


	}
 	| PrimaryExpr Index { //remaining lval
 		cout<<"PrimaryExpr: PrimaryExpr Index"<<endl;
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

			$$->add_code_in_map($1->current_code);
			$$->add_code_in_map($2->current_code);
			//lval

			string p_lval = $1->current_node_data->lval;
			p_lval =  st->get_scope_for_variable(p_lval) + p_lval;

			string i_lval = $2->current_place->place_name;
			i_lval =  st->get_scope_for_variable(i_lval) + i_lval;

			$$->current_place = new Place(p_lval + "[" + i_lval + "]");
			$$->current_node_data->lval = $$->current_place->place_name;

 		}
 	| PrimaryExpr Slice {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children($1);
		curr->add_non_terminal_children($2);
		$$ = curr;
	}
 	| PrimaryExpr Arguments { // remaining
 		cout<<"PrimaryExpr Arguments\n";
		$$ = new Node("PrimaryExpr");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($2);
		$$->current_node_data = new NodeData("FunctionCall");
		$$->current_node_data->node_child = $1->current_node_data;
		$$->current_node_data->node_child->next_data = $2->current_node_data;
			cout<<"HEH";
		//if($1->current_type->current_data_type==_PRINTF)
		//{
		//	exit(1);
		//}
		cout<<$1->current_type->current_data_type<<"\n";
		cout<<$1->current_place->place_name<<"\n\n\n";
		if($1->current_place->place_name=="printf")
		{
			Instruction* ins = new Instruction("PRINTCALLINCOMING",$1->current_place);
			$$->add_code_in_map(ins);
			
			$$->add_code_in_map($2->current_code);
			Instruction* ins2 = new Instruction("CALL",$1->current_place);
			$$->add_code_in_map(ins2);
				
		}
		else if($1->current_place->place_name=="scanf")
		{
			Instruction* ins = new Instruction("SCANCALLINCOMING",$1->current_place);
			$$->add_code_in_map(ins);
			
			$$->add_code_in_map($2->current_code);
			Instruction* ins2 = new Instruction("CALL",$1->current_place);
			$$->add_code_in_map(ins2);
				
		}
		else{

			if($1->current_type->current_data_type != _FUNCTION){
				cout<<$1->current_type->getDataType()<<" is not a function\n";
				exit(1);
			}

			int pos=1;
			auto fxn = dynamic_cast<FunctionType *>($1->current_type);
			DataType* argType = $2->current_type;
			for(auto req_arg_type: fxn->argument_types){
				cout<<req_arg_type->getDataType()<<endl;
				if(argType == NULL){
					cout<<"Insufficient number of arguments for function "<<endl;
					exit(1);
				}
				if(argType->getDataType()!= req_arg_type->getDataType()){
					cout<<"[Type Mismatch] at position: " << pos<<". Expected arg type: "<<req_arg_type->getDataType()<<" . Found Type: "<<argType->getDataType()<<endl;
					exit(1);
				}
				argType = argType -> next_type;
				pos++;
			}
			if(argType){

				cout<<"Extra arguments provided to function"<<endl;
				cout<<argType->getDataType()<<endl;
				exit(1);
			}

			DataType* head = new BasicType("");
			DataType* temp = head;
			for(auto x: fxn->return_type){
				head -> next_type = x;
				head = head->next_type;
			}
			$$->current_type = temp->next_type;
			$$->current_place =  new Place("");
			Instruction* ins4 = new Instruction("NORMALCALLINCOMING",$1->current_place);
			$$->add_code_in_map(ins4);
			
			$$->add_code_in_map($2->current_code);
			Instruction* ins = new Instruction("CALL",$1->current_place);
			$$->add_code_in_map(ins);
			update_instructions_with_scope(&($$->current_code),st);

			Place* pp = $$->current_place;

			for(DataType* tp = $$->current_type; tp != NULL; tp = tp->next_type){
				pp->next_place = new Place(tp);
				Instruction* ins = new Instruction("POP",pp->next_place);
				pp = pp->next_place;
				$$->add_code_in_map(ins);
			}
			$$->current_place = $$->current_place->next_place;
			// remaining
			$$->current_node_data->value = false;
		}
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
		// cout<<"Selector:  DOT IDENTIFIER\n";
		Node* curr = new Node("Selector");
		curr->add_terminal_children($2);

		curr->current_node_data = new NodeData(string($2));
		curr->current_place = new Place(string($2));

		$$ = curr;
	}
	;

Index:
	LEFTSQUARE Expression RIGHTSQUARE {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children($2);

		curr->current_type = $2->current_type;
		curr->current_node_data = $2->current_node_data;
		curr->current_place = $2->current_place;
		curr->add_code_in_map($2->current_code);

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

		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place($3->current_type->getDataType()));
		curr->add_code_in_map(ins);

		$$ = curr;
	}
	| MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);
		curr->add_non_terminal_children($5);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");

		curr->current_node_data->node_child = $5->current_node_data;

		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place($3->current_type->getDataType()));
		curr->add_code_in_map(ins);

		$$ = curr;
	}
	| MAKE LEFTPARAN Type RIGHTPARAN {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children($3);

		curr->current_type = $3->current_type;
		curr->current_node_data = new NodeData("Make");

		auto mk_lbl = l->get_new_label();
		curr->current_place = new Place(mk_lbl);
		Instruction* ins = new Instruction("MAKE",curr->current_place, new Place($3->current_type->getDataType()));
		curr->add_code_in_map(ins);

		$$ = curr;
	}
	| NEW LEFTPARAN Type RIGHTPARAN {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children($3);

		curr->current_type = new PointerType($3->current_type);
		curr->current_node_data = new NodeData("New");

		curr->current_place = new Place(curr->current_type);
		Instruction* ins = new Instruction("NEW",new Place($3->current_type->getDataType()),new Place(curr->current_place->place_name));
		curr->add_code_in_map(ins);

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
		cout<<"Arguments\n";
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children($2);

		curr->current_node_data = $2->current_node_data;
		curr->current_type = $2->current_type;
		curr->current_place = $2->current_place;
		curr->add_code_in_map($2->current_code);

		Place *temp = $2->current_place, *p1, *p2;
		Instruction* inst;
        int i=0;

        while (temp != NULL) {
			p1 = new Place(std::to_string(i++));
			p2 = new Place(temp->place_name);
			inst = new Instruction("PUSHARG",p1,p2);
            curr->add_code_in_map(inst);
            temp = temp->next_place;
        }

		$$ = curr;
	}
	| LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children($2);
		curr->add_terminal_children(string($3));

		curr->current_node_data = $2->current_node_data;
		curr->current_type = $2->current_type;
		curr->current_place = $2->current_place;
		curr->add_code_in_map($2->current_code);

		Place *temp = $2->current_place, *p1, *p2;
		Instruction* inst;
        int i=0;

        while (temp != NULL) {
			p1 = new Place(std::to_string(i++));
			p2 = new Place(temp->place_name);
			inst = new Instruction("PUSHARG",p1,p2);
            curr->add_code_in_map(inst);
            temp = temp->next_place;
        }


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
		curr->current_place = $1->current_place;
		curr->add_code_in_map($1->current_code);
		curr->current_type->next_type=NULL;
		cout<<$$->current_node_data->value<<endl;
		$$ = curr;
	}
	| ExpressionList COMMA Expression {
		cout<<"ExpressionList COMMA Expression\n";
		$$ = new Node("ExpressionList");
		$$->add_non_terminal_children($1);
		$$->add_non_terminal_children($3);
		cout<<"A\n";
		$$->current_node_data = $1->current_node_data;
		cout<<"A\n";
		($$->last_current_node_data())->next_data = $3->current_node_data;
		cout<<"A\n";
		$$->current_type = $1->current_type;
		cout<<"A\n";
		//$3->current_type->next_type=NULL;
		($$->last_current_type())->next_type = $3->current_type;

		cout<<"A\n";
		$$->current_place = $1->current_place;
		cout<<"A\n";
		($$->last_current_place())->next_place = $3->current_place;
		cout<<"A\n";
		$$->add_code_in_map($1->current_code);
		$$->add_code_in_map($3->current_code);
		cout<<"ExpressionList COMMA Expression\n";
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
		$$->current_place = $2->current_place;
		$$->add_code_in_map($2->current_code);
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
		// curr->current_place = $1->current_place;
		$$->add_code_in_map($1->current_code);
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
		curr->current_place = $3->current_place;
		curr->add_code_in_map($3->current_code);

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
		curr->current_place = $2->current_place;
		curr->add_code_in_map($2->current_code);
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
		// cout<<"ArrayType : LEFTSQUARE Expression RIGHTSQUARE Type"<<endl;
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
		// cout<<"Literal:BasicLit\n";
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = $1->current_type;
		 curr->current_place = $1->current_place;
		 curr->add_code_in_map($1->current_code);
		 $$ = curr;
		 cout<<($$->current_type)<<"\n";
		 }
    |CompositeLit{
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = $1->current_type;
		 curr->current_place = $1->current_place;
		 curr->add_code_in_map($1->current_code);
		 $$ = curr;
		 }
	;

BasicLit:
	INTEGER_VAL {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("int");
		 curr->current_place = new Place(string($1),curr->current_type);
		 $$ = curr;
		 }
	| FLOAT_VAL {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("float");
		 curr->current_place = new Place(string($1),curr->current_type);
		 $$ = curr;
		 }
	| BYTE_VAL  {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children($1);
		 curr->current_node_data = new NodeData(string($1));
		 curr->current_type = new BasicType("byte");
		 string temp = string($1);
		 curr->current_place = new Place(to_string((int)temp[1]),curr->current_type);
		 $$ = curr;
		 }
	| String {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children($1);
		 curr->current_node_data = $1->current_node_data;
		 curr->current_type = new BasicType("string");
		 curr->current_place = new Place($1->current_place->place_name,curr->current_type);
		 $$ = curr;
		// cout<<"BasicLit:String ";
		 cout<<($$->current_type)<<"\n";
		 }
	| TRUE      {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("bool");
		 curr->current_place = new Place(to_string(1),curr->current_type);
		 $$ = curr;
		 }
	| FALSE     {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string($1));
		 curr->current_node_data = new NodeData($1);
		 curr->current_type = new BasicType("bool");
		 curr->current_place = new Place(to_string(0),curr->current_type);
		 $$ = curr;
		 }
	;

String:
	RAW_STRING { Node* curr = new Node("String");
			 curr->add_terminal_children(string($1));
			 curr->current_node_data = new NodeData($1);
			 curr->current_type = new BasicType("string");
			 curr->current_place = new Place(string($1),curr->current_type);
			 $$ = curr;}
	| INTERPRETED_STRING {
			cout<<"INTERPRETED_STRING: "<<string($1)<<endl;
			 Node* curr = new Node("String");
			 curr->add_terminal_children(string($1));
			 curr->current_node_data = new NodeData($1);
			 curr->current_type = new BasicType("string");
			 curr->current_place = new Place(string($1),curr->current_type);
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
	map<string, DataType *> fmt_functions = {
        {"Printf", new FunctionType(vector<DataType *>{new BasicType("string"), new BasicType("int")},
                                    vector<DataType *>{})},
        {"Scanf", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{new BasicType("int")})},
        {"Println", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{})},
        {"Scanln", new FunctionType(vector<DataType *>{new BasicType("string")},
                                    vector<DataType *>{new BasicType("int")})}
    };


    auto fmt_struct = new StructType(fmt_functions);

    tt->add_in_type_table("void", new BasicType("void"));
    tt->add_in_type_table("int", new BasicType("int"));
    tt->add_in_type_table("bool", new BasicType("bool"));
    tt->add_in_type_table("byte", new BasicType("int"));
    tt->add_in_type_table("float", new BasicType("float"));
    tt->add_in_type_table("string", new BasicType("string"));
    tt->add_in_type_table(string("fmt"), fmt_struct);

    // st->add_in_symbol_table({"0-",string("fmt")}, fmt_struct);
    DataType* x=new DataType();
    x->current_data_type=_FUNCTION;
    cout<<"Aaax === "<< x->current_data_type<<"\n\n\n\n\n\n";
	st->add_in_symbol_table({"0-",string("printf")}, x);
	st->add_in_symbol_table({"0-",string("scanf")}, x);
	
	// FunctionType* xyz = new FunctionType(vector<DataType *>{new BasicType("string"), new BasicType("int")},
 //                                    vector<DataType *>{});

	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}