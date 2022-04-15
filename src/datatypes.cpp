#include<bits/stdc++.h>
#include "tables.hpp"
using namespace std;

#define fi first
#define se second

string ArrayType::getDataType(){
	return "["+to_string(array_size)+"]" + array_index_type->getDataType();
}

// DataType* ArrayType::copyClass() {
// 	// Todo: complete the class correctly
// 	ArrayType current_copy = new ArrayType();
// 	return &current_copy;
// }

DataType *ArrayType::copyClass() {
    return (new ArrayType(*this));
}

string BasicType::getDataType(){
	return base_type;
}

DataType *BasicType::copyClass() {
    return (new BasicType(*this));
}

string FunctionType::getDataType(){
	string current_type = " func(";
		// cout<<current_type<<"\n";
		// cout<<argument_types.size()<<" "<<return_type.size()<<"\n";
		// cout<<((argument_types.size()-1))<<(0<(argument_types.size()-1))<<"\n";
	if(argument_types.size())
	{
		for(int i=0;i<(argument_types.size()-1);i++)
		{
			// cout<<"A "<<i<<"\n";
			current_type+=argument_types[i]->getDataType()+", ";
		}
		// cout<<current_type<<"\n";

		// if(argument_types.size()) 
		current_type+=argument_types[argument_types.size()-1]->getDataType();

	}
	current_type+=") (";
	// cout<<current_type<<"\n";
	if(return_type.size())
	{
		for(int i=0;i<return_type.size()-1;i++)
		{
			current_type+=return_type[i]->getDataType()+", ";
		}
		// if(return_type.size()) 
			current_type+=return_type[return_type.size()-1]->getDataType();

	}
	return current_type+")";
}

DataType *FunctionType::copyClass() {
    return (new FunctionType(*this));
}


string MapType::getDataType(){
	string current_type = "map [ ";
	current_type+=key_datatype->getDataType()+" ] ";
	current_type+=value_datatype->getDataType();
	return current_type;
}

DataType *MapType::copyClass() {
    return (new MapType(*this));
}


string NullType::getDataType(){
	return "NULL";
}

DataType *NullType::copyClass() {
    return (new NullType(*this));
}

string PointerType::getDataType(){
	string current_type = "* ";
	current_type+=type_of_address_pointing_to->getDataType();
	return current_type;
}

DataType *PointerType::copyClass() {
    return (new PointerType(*this));
}

string SliceType::getDataType(){
	string current_type = "[ ] ";
	current_type+=slice_base->getDataType();
	return current_type;
}

DataType *SliceType::copyClass() {
    return (new SliceType(*this));
}


string StructType::getDataType(){
	string current_type = "struct { ";
	auto it = data_of_struct.begin();
	while(it!=data_of_struct.end())
	{
		current_type+=(*it).first+" ";
		current_type+=(*it).second->getDataType()+"; ";
		it++;
	}
	current_type+="};";
	return current_type;
}

DataType *StructType::copyClass() {
    return (new StructType(*this));
}
