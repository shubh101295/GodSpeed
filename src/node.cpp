#include<bits/stdc++.h>
#include "node.hpp"
using namespace std;

#define pb push_back

void Node::add_non_terminal_children(Node *_non_terminal_node){
	NodeChildren* current_child = new NodeChildren(_non_terminal_node);
	current_node_children.pb(*current_child);
}

void Node::add_terminal_children(string _terminal_string_value){
	NodeChildren* current_child = new NodeChildren(_terminal_string_value);
	current_node_children.pb(*current_child);
}