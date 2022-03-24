#ifndef _DATATYPES_H
#define _DATATYPES_H

#include<bits/stdc++.h>
using namespace std;

enum dataTypes{
	_ARRAY,
	_BASIC,
	_FUNCTION,
	_MAP,
	_NULL, 
	_POINTER,
	_SLICE,
	_STRUCT
};

class DataType {
public:
	dataTypes current_data_type;

	DataType* copyClass() { return new DataType();}; 
	string getDataType() {return "NO TYPE";};
};

class ArrayType: public DataType{
	DataType* array_index_type;
	int array_size;

	string getDataType();
	DataType* copyClass();
	ArrayType(DataType* _array_index_type,int _array_size): 
				array_index_type(_array_index_type),
				array_size(_array_size)
				{ current_data_type=_ARRAY; };  
};

class BasicType: public DataType{
	string base_type;

	string getDataType();
	DataType* copyClass();
	BasicType(string _current_type): base_type(_current_type) {current_data_type=_BASIC;};
};

class FunctionType: public DataType{
	vector<DataType *> argument_types;
	DataType * return_type;
	
	string getDataType();
	DataType* copyClass();
	FunctionType(vector<DataType *> _argument_types, DataType * _return_type):
				argument_types(_argument_types), return_type(_return_type) 
				{ current_data_type=_FUNCTION; };
};

class MapType: public DataType{
	DataType* key_datatype;
	DataType* value_datatype;
	
	string getDataType();
	DataType* copyClass();
	MapType(DataType* _key_datatype,DataType* _value_datatype): key_datatype(_key_datatype), value_datatype(_value_datatype)
					{ current_data_type=_MAP;}
};

class NullType: public DataType{
	string getDataType();
	DataType* copyClass();
	NullType() { current_data_type=_NULL; };	
};

class PointerType: public DataType{
	DataType* type_of_address_pointing_to;

	string getDataType();
	DataType* copyClass();
	PointerType(DataType* _type_of_address_pointing_to): type_of_address_pointing_to(_type_of_address_pointing_to) 
			{ current_data_type=_POINTER; };
};

class SliceType: public DataType{
	DataType* slice_base;

	string getDataType();
	DataType* copyClass();
	SliceType(DataType* _slice_base): slice_base(_slice_base) {
		current_data_type=_SLICE;
	}
};

class StructType: public DataType{
	map<string, DataType*> data_of_struct;

	string getDataType();
	DataType* copyClass();
	StructType(map<string, DataType*> _data_of_struct): data_of_struct(_data_of_struct)
			{ current_data_type=_STRUCT; };
};

#endif