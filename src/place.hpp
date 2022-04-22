#ifndef _PLACE_H
#define _PLACE_H

#include "datatypes.hpp"

static int place_id=0;

class Place {

public:
    string place_name;
    DataType *current_type;
    Place *next_place;

    Place(DataType *_current_type=NULL): current_type(_current_type),next_place(NULL) { 
        place_name = "__local";
        while(_current_type!=NULL){
            if(_current_type->current_data_type==_BASIC){
                place_name+= "_"+_current_type->getDataType();
                break;
            } else if(_current_type->current_data_type==_ARRAY) {
                place_name+="_Array";
                _current_type= dynamic_cast<ArrayType*>(_current_type)->array_index_type;
            } else if(_current_type->current_data_type==_STRUCT) {
                place_name+= "_Struct";
                break;
            } else if(_current_type->current_data_type==_FUNCTION) {
                place_name+= "_Funtion";
                break;
            } else if(_current_type->current_data_type==_POINTER){
                place_name+= "_Pointer";
                 _current_type=dynamic_cast<PointerType*>(_current_type)->type_of_address_pointing_to;
            } else{
                cout<<"Invalid Data Type* FROM PLACE.hpp\n\n";
                exit(1);
            }
        }
        place_name+="_"+to_string(place_id);
        cout<<"PLACE ID "<<place_id<<" TYPE 1\n";place_id+=1; 
    };
    Place( string _place_name,DataType *_current_type=NULL): current_type(_current_type),place_name(_place_name),next_place(NULL) { cout<<"PLACE ID "<<place_id<<" TYPE 2 "<<_place_name<<"\n"; };

};

#endif
