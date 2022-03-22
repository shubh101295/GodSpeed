#include<bits/stdc++.h>
#include "tables.hpp"
using namespace std;

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
	current_block_inside_count+=1;
	if(current_block_inside_count>=current_block_numbers.size())
	{
		vector<int> new_cbn(current_block_inside_count+1);
		for(int i=0;i<(current_block_inside_count);i++)
		{
			new_cbn[i]= current_block_numbers[i];
		}
		new_cbn[current_block_inside_count] = 0;
		current_block_numbers = new_cbn;
	}
	current_block_numbers[current_block_inside_count]+=1;
	update_current_scope();
}

void SymbolTable::exit_latest_scope(){
	// delete all from current scope left
	current_block_inside_count-=1;
	update_current_scope();
}

map<pair<string,string>, DataType*> SymbolTable::get_symbol_table_data() {
	return symbol_table;
}

bool SymbolTable::add_in_symbol_table(pair<string,string> new_key,DataType* new_datatype) {
	// check all levels left
	if(symbol_table.find(new_key)==symbol_table.end())
	{
		symbol_table[new_key] = new_datatype;
		return true;
	}
	// was already present in the scope
	return false;
}

bool TypesTable::add_in_type_table(pair<string,string> new_key,DataType* new_datatype) {
	// check all levels left
	if(type_table.find(new_key)==type_table.end())
	{
		type_table[new_key] = new_datatype;
		return true;
	}
	// was already present in the scope
	return false;
}

map<pair<string,string>, DataType*> TypesTable::get_type_table_data() {
	return type_table;
}


void BreakLabels::add_new_break_label(string _break_label){
	break_labels_list_position+=1;
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