#ifndef _TAC_H
#define _TAC_H

#include "datatypes.hpp"
#include "place.hpp"

// for storing TAC
class Instruction {
	enum opcode_types {
		ADD       =   0,
		SUB       =   1,
		MUL       =   2,
		DIC       =   3
	};
	
	Place * address1;
	Place *address2;
	Place *address3; 
	opcode_types current_opcode;

	Instruction(Instruction::opcode_types _current_opcodes,Place* _address1=NULL,Place* _address2=NULL,Place* _address3=NULL):
		current_opcode(_current_opcodes) {
			address1 = _address1;
			address2 = _address2;
			address3 = _address3;
		};
};

#endif