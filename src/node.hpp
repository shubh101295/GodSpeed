#ifndef _NODE_H
#define _NODE_H


#include<bits/stdc++.h>
#include "datatypes.hpp"
#include "place.hpp"
#include "tac.hpp"
using namespace std;



struct Node;
struct NodeChildren;
struct NodeData;

struct NodeData {
	string data_name;
	NodeData *next_data;
	NodeData *node_child;
	bool value;
	string lval;

	NodeData(string _data_name): data_name(_data_name), next_data(NULL),node_child(NULL), value(false), lval("<no_lval>") { /*cout<<"NodeData "<<_data_name<<"\n";*/ };
	NodeData* last_next_child();
};

struct NodeChildren {
	bool is_terminal_node;
	Node *non_terminal_node;
	string terminal_string_value;

	NodeChildren(bool _is_terminal_node,Node *_non_terminal_node,string _terminal_string_value):
			is_terminal_node(_is_terminal_node),non_terminal_node(_non_terminal_node),
			terminal_string_value(_terminal_string_value) {};
	NodeChildren(string _terminal_string_value):
			is_terminal_node(true),non_terminal_node(NULL),
			terminal_string_value(_terminal_string_value) {};
	NodeChildren(Node *_non_terminal_node):
			is_terminal_node(false),non_terminal_node(_non_terminal_node),
			terminal_string_value("") {};
};

struct Node{
	string node_name;
	vector<NodeChildren> current_node_children;
	NodeData* current_node_data;
	DataType* current_type;
	Place * current_place;
	int current_code_count;
	map<int,Instruction*> current_code;



	Node(string _node_name): node_name(_node_name), current_code_count(0), current_place(NULL), current_type(NULL), current_node_data(NULL) {};
	void add_non_terminal_children(Node *_non_terminal_node);
	void add_terminal_children(string _terminal_string_value);
	NodeData* last_current_node_data();
	DataType* last_current_type();
	Place* last_current_place();
	void add_code_in_map(Instruction* _code);
	void add_code_in_map(map<int,Instruction*> _code);
	void print_code_in_file(string file_name);
};

#endif