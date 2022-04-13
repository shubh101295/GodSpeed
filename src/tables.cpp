#include<bits/stdc++.h>
#include "tables.hpp"
using namespace std;

#define pb push_back

void SymbolTable::update_current_scope() {
	current_scope = "";
	for( int i=0;i<=current_block_inside_count;i++)
	{
		current_scope+=to_string(current_block_numbers[i])+";";
	}
}

string SymbolTable::get_current_scope() {
	return current_scope;
}

void SymbolTable::enter_new_scope() {
	// cout<<"Inside SymbolTable::enter_new_scope\n";
	current_block_inside_count+=1;
	if(current_block_inside_count>=current_block_numbers.size())
	{
		// sizes increase only one at a time
		current_block_numbers.pb(0);
		// vector<int> new_cbn(current_block_inside_count+1);
		// for(int i=0;i<(current_block_inside_count);i++)
		// {
		// 	new_cbn[i]= current_block_numbers[i];
		// }
		// new_cbn[current_block_inside_count] = 0;
		// current_block_numbers = new_cbn;
	}
	current_block_numbers[current_block_inside_count]+=1;
	update_current_scope();
}

void SymbolTable::exit_latest_scope(){
	// delete all from current scope left
	current_block_inside_count-=1;
	// cout<<"EXit SymbolTable::enter_new_scope\n";
	update_current_scope();
}

bool isPrefix(string s1,string s2)
{
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i]) return false;
	}
	return true;
}

void SymbolTable::output_csv_for_function(string name_of_function, string prefix){
	ofstream my_function_dump("./bin/"+name_of_function+".csv");
	// cout<<"A FORM output_csv_for_function\n";
	my_function_dump<<"Scope,    variable_name,    variable_type\n";
	// cout<<symbol_table[{"0;",name_of_function}]<<"\n";
	my_function_dump<<"0;,    "<<name_of_function<<",    "<<symbol_table[{"0;",name_of_function}]->getDataType()<<"\n";
	// for(auto val:)
	// cout<<"In output_csv_for_function \n";
	for (auto temp:symbol_table)
	{
		if(isPrefix(prefix,temp.first.first))
		{
			cout<<temp.first.first<<",    "<<temp.first.second<<",    \n";
			cout<<temp.second->getDataType()<<"\n";
		 	my_function_dump<<temp.first.first<<",    "<<temp.first.second<<",    "<<temp.second->getDataType()<<"\n";
			// my_function_dump
		}
	 	// cout<<temp.second<<"\n";
	 	// cout<<temp.second->getDataType()<<"\n";
	 	// x+=1;
	}
}

// for functions
void SymbolTable::erase_in_symbol_table(pair<string,string> old_key){
	symbol_table.erase(old_key);
}


map<pair<string,string>, DataType*> SymbolTable::get_symbol_table_data() {
	return symbol_table;
}

bool SymbolTable::add_in_symbol_table(pair<string,string> new_key,DataType* new_datatype) {
	// pair<string,string> new_key = {current_scope,new_variable};
	// auto new_key  = {"A","B"};
	if(symbol_table.find(new_key)==symbol_table.end())
	{
		symbol_table[new_key] = new_datatype;
		return true;
	}
	cout<<"[Redeclation of Variable]  " <<new_key.second<<" "<<"Is already declared in the scope \n";
	exit(1);
	// was already present in the scope
	return false;
}

int SymbolTable::scope_level(string variable_name){
	string temp_scope = "";
	vector<string> temp_scopes;
	for( int i=0;i<=current_block_inside_count;i++) {
		temp_scope+=to_string(current_block_numbers[i])+";";
		temp_scopes.pb(temp_scope);
	}
	reverse(temp_scopes.begin(),temp_scopes.end());
	int ans=0;
	for(auto val:temp_scopes){
		if (symbol_table.find({val,variable_name})!=symbol_table.end()) return ans;
		ans+=1;
	}
	return -1;
}

DataType * SymbolTable::get_value_from_key(string _variable_name){
	pair<string,string> new_key = {current_scope,_variable_name};
	if(symbol_table.find(new_key)!=symbol_table.end())
	{
		return symbol_table[new_key];
	}
	return NULL;
}

DataType* SymbolTable::get_type(string variable_name){
	// returns the DataType* from the latest scope
	string temp_scope = "";
	vector<string> temp_scopes;
	for( int i=0;i<=current_block_inside_count;i++) {
		temp_scope+=to_string(current_block_numbers[i])+";";
		temp_scopes.pb(temp_scope);
	}
	reverse(temp_scopes.begin(),temp_scopes.end());
	for(auto val:temp_scopes){
		if (symbol_table.find({val,variable_name})!=symbol_table.end()) return symbol_table[{val,variable_name}]->copyClass();
	}
	return NULL;
}

bool TypesTable::add_in_type_table(string new_key,DataType* new_datatype) {
	// check all levels left
	if(type_table.find(new_key)==type_table.end())
	{
		type_table[new_key] = new_datatype;
		return true;
	}
	// was already present in the scope
	return false;
}

map<string, DataType*> TypesTable::get_type_table_data() {
	return type_table;
}

void BreakLabels::add_new_break_label(){
	break_labels_list_position+=1;
	break_label_count+=1;
	string _break_label = "Label"+to_string(break_label_count);
	if(break_labels_list_position>break_labels_list.size())
	{
		break_labels_list.resize(break_labels_list_position);
	}
	break_labels_list[break_labels_list_position-1]=_break_label;
}

bool BreakLabels::is_empty(){
	return (break_labels_list_position==0);
}

void BreakLabels::remove_last_break_label(){
	break_labels_list_position-=1;
}

string BreakLabels::return_top_label(){
	return break_labels_list[break_labels_list_position - 1];
}

string Labels::get_new_label(){
	label_count+=1;
	string _label = "Label:"+to_string(label_count);
	return _label;
}

void SwitchCaseList::add_case_label(bool _is_default,bool _has_fallthrough){
	if(_is_default && has_default) {
		cout<<"HAS MORE THAN 1 DEFAULT CASES\n";
		exit(1);
	}
	string current_case_label_string = "Case "+to_string(case_label_list.size());
	has_default = has_default || _is_default;
	CaseLabel* current_case_label = new CaseLabel(_is_default,current_case_label_string,_has_fallthrough);
	case_label_list.pb(current_case_label);
	// current_position+=1;
}