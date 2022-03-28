#include<bits/stdc++.h>
#include "node.hpp"
#include "datatypes.hpp"
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

NodeData* Node::last_current_node_data(){
	NodeData* temp = current_node_data;
	while(temp->next_data!=NULL)
	{
		temp = temp->next_data;
	}
	return temp;
}

DataType* Node::last_current_type(){
	DataType* temp = current_type;
	while(temp->next_type!=NULL)
	{
		temp = temp->next_type;
	}
	return temp;
}

NodeData* NodeData::last_next_child(){
	cout<<"A\n";
	NodeData* temp = node_child;
	cout<<"A\n";
	cout<<(temp==NULL)<<"\n";
	while(temp->next_data!=NULL)
	{
		cout<<"A\n";
		temp = temp->next_data;
	}
	cout<<"A\n";

	return temp;
}