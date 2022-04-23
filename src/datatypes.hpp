#ifndef _DATATYPES_H
#define _DATATYPES_H

#include<bits/stdc++.h>
using namespace std;

// Last 2 for ASM
enum dataTypes{
	_ARRAY=1,
	_BASIC=2,
	_FUNCTION=3,
	_MAP=4,
	_NULL=5, 
	_POINTER=6,
	_SLICE=7,
	_STRUCT=8,
	_STRUCT_FIELD_ELEMENT=9,
	_TUPLE=10,
	_PRINTF=11,
	_SCANF=12
};



class DataType {
public:

	dataTypes current_data_type;
	DataType* next_type=NULL;
	
	virtual DataType* copyClass() { return new DataType();};
	virtual int getSize() { return -1;} 
	virtual string getDataType() {return "NO TYPE";};

};
bool is_match(string s,string rex);
vector<string> find_regex_capture_groups(string s,string rex);
vector<string> find_matches(string s,string rex);
vector<string> split(string s,char delim);
string strip(string s);
DataType* find_type(string s);

class StructFieldElement : public DataType{
public:
	DataType* base;
	string name;
	int offset;
	int getOffset();
	string getDataType();
	DataType* copyClass();
	StructFieldElement(string _name, DataType* _base,int _offset):
		name(_name), 
		base(_base),
		offset(_offset) { current_data_type = _STRUCT_FIELD_ELEMENT;};

};

class ArrayType: public DataType{
public:
	DataType* array_index_type;
	int array_size;
	int tot_size;

	string getDataType();
	int getSize();
	DataType* copyClass();
	ArrayType(DataType* _array_index_type,int _array_size): 
				array_index_type(_array_index_type),
				array_size(_array_size)
				{ current_data_type=_ARRAY; tot_size = _array_size * array_index_type->getSize(); };  
};

class PairType: public DataType {
public:
	vector<DataType *> elements;
	string name;
	int size=0;

	PairType(string s);
	int getSize();
	string getDataType();
	DataType* copyClass();

};

class BasicType: public DataType{
public:
	string base_type;
	int size;
	int getSize();
	string getDataType();
	DataType* copyClass();
	BasicType(string _current_type): base_type(_current_type) {current_data_type=_BASIC; size=8;};
};

class FunctionType: public DataType{
public:
	vector<DataType *> argument_types;
	vector<DataType *> return_type;
	DataType* tuple_ret;
	int size;
	int getSize();
	string getDataType();
	DataType* copyClass();
	FunctionType(vector<DataType *> _argument_types, vector<DataType *> _return_type):
				argument_types(_argument_types), return_type(_return_type) 
				{ current_data_type=_FUNCTION; };
	FunctionType(string s); // While reading TAC, will receive a string only
};

class MapType: public DataType{
public:
	DataType* key_datatype;
	DataType* value_datatype;
	
	string getDataType();
	DataType* copyClass();
	MapType(DataType* _key_datatype,DataType* _value_datatype): key_datatype(_key_datatype), value_datatype(_value_datatype)
					{ current_data_type=_MAP;}
};

class NullType: public DataType{
public:
	string getDataType();
	DataType* copyClass();
	NullType() { current_data_type=_NULL; };	
};

class PointerType: public DataType{
public:
	DataType* type_of_address_pointing_to;
	int size;
	int getSize();
	string getDataType();
	DataType* copyClass();
	PointerType(DataType* _type_of_address_pointing_to): type_of_address_pointing_to(_type_of_address_pointing_to) 
			{ current_data_type=_POINTER; size=8;};
};

class SliceType: public DataType{
public:
	DataType* slice_base;
	int size;
	int getSize();
	string getDataType();
	DataType* copyClass();
	SliceType(DataType* _slice_base): slice_base(_slice_base) {
		current_data_type=_SLICE;
		size=8;
	}
};

class StructType: public DataType{
public:
	map<string, DataType*> data_of_struct;
	map<string, StructFieldElement*> elem_of_struct; // ASM offset related
	int size;
	int getSize();
	int getOffset(string name);
	string getDataType();
	DataType* copyClass();
	StructType(map<string, DataType*> _data_of_struct): data_of_struct(_data_of_struct)
			{ 
				current_data_type=_STRUCT;
				size=0;
				for(auto t:_data_of_struct){
					elem_of_struct[t.first] = new StructFieldElement(t.first,t.second,size);
					size+= t.second -> getSize();
				}	
			};
};

#endif