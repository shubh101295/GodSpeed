#include<bits/stdc++.h>
using namespace std;


extern int yylex();
extern char* yytext;
extern int yyleng;
extern FILE *yyin;
extern int yylineno;
extern int mode;
extern long long column;

#define lld long long int

map<lld,string> num_to_lexeme;

void pre_process(){
  num_to_lexeme[256] = "BREAK";
  num_to_lexeme[257] = "FUNC";
  num_to_lexeme[258] = "STRUCT";
  num_to_lexeme[259] = "ELSE";
  num_to_lexeme[260] = "PACKAGE";
  num_to_lexeme[261] = "IF";
  num_to_lexeme[262] = "CONTINUE";
  num_to_lexeme[263] = "FOR";
  num_to_lexeme[264] = "IMPORT";
  num_to_lexeme[265] = "RETURN";
  num_to_lexeme[266] = "VAR";
  num_to_lexeme[267] = "NEW";
  num_to_lexeme[268] = "CONST";
  num_to_lexeme[269] = "ADD";
  num_to_lexeme[308] = "SUB";
  num_to_lexeme[270] = "NOT";
  num_to_lexeme[271] = "XOR";
  num_to_lexeme[272] = "MUL";
  num_to_lexeme[273] = "AND";
  num_to_lexeme[274] = "OR";
  num_to_lexeme[275] = "LOGOR";
  num_to_lexeme[276] = "LOGAND";
  num_to_lexeme[277] = "ISEQ";
  num_to_lexeme[278] = "NEQ";
  num_to_lexeme[279] = "LESS";
  num_to_lexeme[280] = "LESSEQ";
  num_to_lexeme[281] = "GRT";
  num_to_lexeme[282] = "GRTEQ";
  num_to_lexeme[283] = "MOD";
  num_to_lexeme[284] = "QUOT";
  num_to_lexeme[285] = "SHL";
  num_to_lexeme[286] = "SHR";
  num_to_lexeme[287] = "EQ";
  num_to_lexeme[304] = "INFER_EQ";
  num_to_lexeme[288] = "LEFTPARAN";
  num_to_lexeme[289] = "RIGHTPARAN";
  num_to_lexeme[290] = "LEFTBRACE";
  num_to_lexeme[291] = "RIGHTBRACE";
  num_to_lexeme[292] = "LEFTSQUARE";
  num_to_lexeme[293] = "RIGHTSQUARE";
  num_to_lexeme[294] = "SCOLON";
  num_to_lexeme[295] = "COLON";
  num_to_lexeme[296] = "DOT";
  num_to_lexeme[297] = "COMMA";
  num_to_lexeme[298] = "FLOAT_VAL";
  num_to_lexeme[300] = "INTEGER_VAL";
  num_to_lexeme[301] = "IDENTIFIER";
  num_to_lexeme[302] = "COMMENT";
  num_to_lexeme[303] = "SPACE";
  num_to_lexeme[305] = "TAB";
  num_to_lexeme[306] = "PLUSPLUS";
  num_to_lexeme[307] = "PLUSEQUAL";
  num_to_lexeme[309] = "MINUSMINUS";
  num_to_lexeme[310] = "MINUSEQUAL";
  num_to_lexeme[311] = "NEWLINE";
  
  num_to_lexeme[312] = "ELIPSIS";
  num_to_lexeme[313] = "MAP";
  num_to_lexeme[314] = "MAKE";
  num_to_lexeme[315] = "NULLPOINTER";
  num_to_lexeme[316] = "TRUE";
  num_to_lexeme[317] = "FALSE";
  num_to_lexeme[320] = "SWITCH";
  num_to_lexeme[321] = "CASE";
  num_to_lexeme[322] = "DEFAULT";
  num_to_lexeme[318] = "FALLTHORUGH";
  num_to_lexeme[319] = "GOTO";
  num_to_lexeme[323] = "TYPE";
  num_to_lexeme[324] = "RANGE";

  num_to_lexeme[325]= "MULTEQUAL";
  num_to_lexeme[326]= "DIVEQUAL";
  num_to_lexeme[327]= "BITANDEQUAL";
  num_to_lexeme[328]= "BITOREQUAL";
  num_to_lexeme[329]= "BITXOREQUAL";
  num_to_lexeme[330]= "MODULOEQUAL";
  num_to_lexeme[331]= "LEFTSHIFTEQUAL";
  num_to_lexeme[332]= "RIGHTSHIFTEQUAL";
  num_to_lexeme[333]= "ANDNOT";

  num_to_lexeme[334] = "STRING_VAL";
  num_to_lexeme[335] = "BYTE_VAL";
 
  num_to_lexeme[336] = "FLOAT";
  num_to_lexeme[337] = "BYTE";
  num_to_lexeme[338] = "INTEGER";
  num_to_lexeme[339] = "STRING";
  num_to_lexeme[340] = "BOOL";
  

}


int main(int argc, char *argv[]) {
  pre_process();
  int token;
  yylineno = 1;
  int tabs_taken = 0;
  yyin = fopen(argv[1],"r");
  token = yylex();
  cout<< setw(15) <<"Token"<<setw(10)<<"Line#"<<setw(10)<<"Column#"<<setw(10)<<"Lexeme\n";
  while (token )
  {
    cout<<setw(15)<<num_to_lexeme[token]<<setw(10)<<yylineno<<setw(10)<<column-yyleng<<setw(10)<<yytext<<"\n";
    token = yylex();
  }

  return 0;
}