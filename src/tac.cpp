#include "tac.hpp"

void Instruction::update_instruction_with_scope(Instruction* instr,SymbolTable* st){
	if(instr->address1!=NULL)
	{
		instr->address1->place_name = st->get_scope_for_variable(instr->address1->place_name) + instr->address1->place_name;
	}		
	if(instr->address2!=NULL)
	{
		instr->address2->place_name = st->get_scope_for_variable(instr->address2->place_name) + instr->address2->place_name;
	}		
	if(instr->address3!=NULL)
	{
		instr->address3->place_name = st->get_scope_for_variable(instr->address3->place_name) + instr->address3->place_name;
	}		
	
}