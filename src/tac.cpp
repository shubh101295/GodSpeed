#include "tac.hpp"

void Instruction::update_instructions_with_scope(map<int,Instruction*>* instr,SymbolTable* st){
	int i=1;
	auto it= (*instr).find(i);
	while(it!=(*instr).end())
	{
		auto current_instr = it->second;
		if(current_instr->address1!=NULL)
		{
			current_instr->address1->place_name = st->get_scope_for_variable(current_instr->address1->place_name) + current_instr->address1->place_name;
		}		
		if(current_instr->address2!=NULL)
		{
			current_instr->address2->place_name = st->get_scope_for_variable(current_instr->address2->place_name) + current_instr->address2->place_name;
		}		
		if(current_instr->address3!=NULL)
		{
			current_instr->address3->place_name = st->get_scope_for_variable(current_instr->address3->place_name) + current_instr->address3->place_name;
		}	
		i+=1;
		it= (*instr).find(i);
	}
}

