#include<bits/stdc++.h>
using namespace std;


extern int yylex();
extern char* yyetext;
extern int yyleng;
extern int yylineno;
extern int mode;
extern long long column;

int main(int argc, char *argv[]) {
  int token;
  yylineno = 1;
  while ((token = yylex()))
  {
    cout<<"recognized as token "<<token<<" with len "<<yyleng<<" with column number "<<column-yyleng<<endl;
  }

  return 0;
}