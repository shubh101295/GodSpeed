#ifndef _TAC_H
#define _TAC_H

#include "datatypes.hpp"
#include "place.hpp"
#include "tables.hpp"

string operator_to_tac(string op);

// for storing TAC
class Instruction {
	public:

	Place * address1;
	Place *address2;
	Place *address3;
	string current_opcode;

	Instruction(string _current_opcode,Place* _address1=NULL,Place* _address2=NULL,Place* _address3=NULL):
		current_opcode(_current_opcode) {
			address1 = _address1;
			address2 = _address2;
			address3 = _address3;
		};
};

#endif