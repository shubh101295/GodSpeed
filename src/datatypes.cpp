#include<bits/stdc++.h>
#include "tables.hpp"
using namespace std;

#define fi first
#define se second

string ArrayType::getDataType(){
	return "["+to_string(array_size)+"] " + array_index_type->getDataType();
}

// DataType* ArrayType::copyClass() {
// 	// Todo: complete the class correctly
// 	ArrayType current_copy = new ArrayType();
// 	return &current_copy;
// }

string BasicType::getDataType(){
	return base_type;
}


string FunctionType::getDataType(){
	string current_type = " func(";
	for(int i=0;i<argument_types.size();i++)
	{
		current_type+=argument_types[i]->getDataType()+", ";
	}
	if(argument_types.size()) current_type+=argument_types[argument_types.size()-1]->getDataType();
	current_type+=") ";
	current_type+=return_type->getDataType();
	return current_type;
}

string MapType::getDataType(){
	string current_type = "map [ ";
	current_type+=key_datatype->getDataType()+" ] ";
	current_type+=value_datatype->getDataType();
	return current_type;
}

string NullType::getDataType(){
	return "NULL";
}

string PointerType::getDataType(){
	string current_type = "* ";
	current_type+=type_of_address_pointing_to->getDataType();
	return current_type;
}

string SliceType::getDataType(){
	string current_type = "[ ] ";
	current_type+=slice_base->getDataType();
	return current_type;
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