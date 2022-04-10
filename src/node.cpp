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

void Node::add_code_in_map(Instruction* _code){
	current_code_count+=1;
	current_code[current_code_count]= _code;
}

void Node::add_code_in_map(map<int,Instruction*> _code)
{
	// int i=1;
	for(auto val:_code){
		add_code_in_map(val.second);
	}
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
	cout<<"B2\n";
	DataType* temp = current_type;
	cout<<"B2\n";
	while(temp->next_type!=NULL)
	{
		cout<<"B2\n";
		cout<<(temp==NULL)<<"\n";
		cout<<(temp->next_type==NULL)<<"\n";
		temp = temp->next_type;
		cout<<(temp==NULL)<<"\n";
		cout<<(temp->next_type==NULL)<<"AA\n";
	}
	cout<<"B24\n";
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

Place* Node::last_current_place(){
	cout<<"B2\n";
	Place* temp = current_place;
	cout<<"B2\n";
	while(temp->next_place!=NULL)
	{
		cout<<"B2\n";
		cout<<(temp==NULL)<<"\n";
		cout<<(temp->next_place==NULL)<<"\n";
		temp = temp->next_place;
		cout<<(temp==NULL)<<"\n";
		cout<<(temp->next_place==NULL)<<"AA\n";
	}
	cout<<"B24\n";
	return temp;
}