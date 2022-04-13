#ifndef _PLACE_H
#define _PLACE_H

#include "datatypes.hpp"

static int place_id=0;

class Place {

public:
    string place_name;
    DataType *current_type;
    Place *next_place;

    Place(DataType *_current_type=NULL): current_type(_current_type),place_name(";"+to_string(place_id)),next_place(NULL) { cout<<"PLACE ID "<<place_id<<" TYPE 1\n";place_id+=1; };
    Place( string _place_name,DataType *_current_type=NULL): current_type(_current_type),place_name(_place_name),next_place(NULL) { cout<<"PLACE ID "<<place_id<<" TYPE 2"<<_place_name<<"\n";place_id+=1; };

};

#endif
