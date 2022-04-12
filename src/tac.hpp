#ifndef _TAC_H
#define _TAC_H

#include "datatypes.hpp"
#include "place.hpp"

// for storing TAC
class Instruction {
	public:
	enum opcode_types {
		ADD       =   0,
		SUB       =   1,
		MUL       =   2,
		DIC       =   3,
		PUSHARG   =   4,
		MAKE      =   5,
		UADDR	  =   6,
		UREF	  =   7,
		USTOR     =   8,
		NOT       =   9,
		QUOT      =   10,
		MOD       =   11,
		CMP       =   12,
		ISEQ      =   13,
		NEQ       =   14,
		LESSEQ    =   15,
		GRTEQ     =   16,
		LESS      =   17,
		GRT       =   18,
		SHL       =   19,
		SHR       =   20,
		AND       =   21,
		ANDNOT    =   22,
		OR        =   23,
		ORNOT     =   24,
		XOR       =   25,
		DECL      =   26,
		ARGDECL	  =   27,
		JNE       =   28,
		JE        =   29,
		LBL       =   30,
		RET 	  =   31,
		JMP		  =   32

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
	Instruction(Instruction::opcode_types _current_opcodes, string loc, string val, Place* _address3=NULL):
		current_opcode(_current_opcodes) {
			address1 = new Place(loc);
			address2 = new Place(val);
			address3 = _address3;
		};
};

#endif