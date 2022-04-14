#ifndef _TABLES_H
#define _TABLES_H

#include<bits/stdc++.h>
#include "datatypes.hpp"
using namespace std;


class SymbolTable{

private:
	map< pair<string,string> , DataType*> symbol_table;
	string current_scope;
	vector<int> current_block_numbers;
	int current_block_inside_count;

public:
	void           update_current_scope();
	SymbolTable(): current_block_inside_count(0){
		current_block_numbers.resize(1);
		current_block_numbers[0]=0;
		// current_block_numbers[1]=0;
		update_current_scope();
	};
	void           enter_new_scope();
	void 		   exit_latest_scope();
	void 		   output_csv_for_function(string name_of_function, string prefix);
	int            scope_level(string variable_name);
	bool           add_in_symbol_table(pair<string,string> new_variable,DataType* new_datatype);
	string         get_current_scope();
	map<pair<string,string>, DataType*>         get_symbol_table_data();
	DataType*      get_value_from_key(string _variable_name);
	DataType*      get_type(string variable_name);
	void           erase_in_symbol_table(pair<string,string> old_key);
	string         get_scope_for_variable(string variable_name);
};

class TypesTable{
private:
	map< string ,DataType*> type_table;
public:
	bool 		   								add_in_type_table(string new_key,DataType* new_datatype);
	map< string, DataType*>         get_type_table_data();
};

class BreakLabels{
private:
	vector<string> break_labels_list;
	int            break_labels_list_position;
	// int            break_label_count;
public:
	BreakLabels(): break_labels_list_position(0) {};
	void           add_new_break_label(string _current_break_label);
	bool 		   is_empty();
	void           remove_last_break_label();
	string		   return_top_label();
};

class Labels{
private:
	int            label_count;
public:
	Labels(): label_count(0) {};
	string           get_new_label();
};

struct CaseLabel{
	bool is_default;
	string case_name;
	bool has_fallthrough;

	CaseLabel(bool _is_default,string _case_name, bool _has_fallthrough): is_default(_is_default),case_name(_case_name),has_fallthrough(_has_fallthrough) {};
};

class SwitchCaseList{
	vector<CaseLabel *> case_label_list;
	bool has_default;

public:
	SwitchCaseList(): has_default(false) {};
	void              add_case_label(bool _is_default,bool _has_fallthrough);

};

#endif