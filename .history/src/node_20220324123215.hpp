#ifndef _NODE_H
#define _NODE_H


#include<bits/stdc++.h>
#include "datatypes.hpp"
using namespace std;



struct Node;
struct NodeChildren;
struct NodeData;

struct NodeData {
	string data_name;
	NodeData *next_data;

	NodeData(string _data_name): data_name(_data_name), next_data(NULL) {};
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
	DataT
	Node(string _node_name): node_name(_node_name) {};
	void add_non_terminal_children(Node *_non_terminal_node);
	void add_terminal_children(string _terminal_string_value);
};

#endif