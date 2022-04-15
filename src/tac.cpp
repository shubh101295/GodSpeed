#include "tac.hpp"

string operator_to_tac(string op)
{
    if(op == "+=") return "ADD";
    else if (op == "-=") return "SUB";
    else if (op == "*=") return "MUL";
    else if (op == "/=") return "QUOT";
    else if (op == "%=") return "MOD";
    else if (op == "^=") return "XOR";
    else if (op == "|=") return "OR";
    else if (op == "&=") return "AND";
    else if (op == ">>=") return "SHR";
    else if (op == "<<=") return "SHL";
    else if (op == "&^=") return "ANDNOT";
    else
    {
        cout<<"no operator matching to generate TAC, refer to tac.cpp\n";
        exit(1);
    }
}