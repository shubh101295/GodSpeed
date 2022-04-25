#include <bits/stdc++.h>
#include "datatypes.hpp"
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define sz(s) (s.size())
#define all(s) s.begin(),s.end()
auto random_address = [] { char *p = new char; delete p; return (unsigned long long)(p); };
const unsigned long long SEED = chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1);
// mt19937_64 rng2(SEED);

inline int64_t rnd(int l,int r)
{
    // uniform_int_distribution<int64_t> generator(l,r);
    // return generator(rng2);
	return rand()%(r-l+1)+l;
}




class Registers{
public:
	map<string, pair<string, int>> regs;
	string rip,rbp;
	vector<string> argument_regs ;
	map<string, string> last_byte;
	map<string, pair<string, string>> locs;
	int cnt;
	string RBP,RIP;

	Registers(){
		cnt=0;
		regs["%rbx"] = {"",0};
		regs["%r10"] = {"",0};
		regs["%r11"] = {"",0};
		regs["%r12"] = {"",0};
		regs["%r13"] = {"",0};
		regs["%r14"] = {"",0};
		regs["%r15"] = {"",0};

		argument_regs = {"%rdi","%rsi","%rdx","%rcx","%r8","%r9"};
		last_byte["%rax"]="%al";
		last_byte["%rbx"]="%bl";
		last_byte["%rcx"]="%cl";
		last_byte["%rdx"]="%dl";
		last_byte["%r8"]="%r8b";
		last_byte["%r9"]="%r9b";
		last_byte["%r10"]="%r10b";
		last_byte["%r11"]="%r11b";
		last_byte["%r12"]="%r12b";
		last_byte["%r13"]="%r13b";
		last_byte["%r14"]="%r14b";
		last_byte["%r15"]="%r15b";
	}

	string get_reg_lru(){
		int mn=1e9+5;
		string reg;
		for(auto t:regs){
			if(t.second.second <= mn){
				mn=t.second.second;
				reg = t.first;
			}
		}
		// cout<<reg<<" REturned from lru"<<"\n\n\n\n";
		// for(auto x:locs){
		// 	cout<<x.ff<<" "<<x.ss.ff<<" -A- "<<x.ss.ss<<"\n";
		// }

		// auto it=locs.begin();
		// while(it!=locs.end())
		// {

		// 	if((*it).ss.ff==reg)
		// 	{
		// 		cout<<"FOUND ONE\n";
		// 		cout<<(*it).ff<<" "<<(*it).ss.ff<<" "<<(*it).ss.ss<<"\n";
		// 		break;
		// 	}
		// 	it++;
		// }
		// if(it!=locs.end())
		// {
		// 	cout<<"locs.erase(A)\n";
		// 	locs.erase(it);			
		// 	// locs[(*it).ff]={"",""};

			
		// }
		// for(auto x:locs){
		// 	cout<<x.ff<<" "<<x.ss.ff<<" -A- "<<x.ss.ss<<"\n";
		// }
		// cout<<"-----------ended\n\n\n\n";
		return reg;
	}

	vector<string> write_back(vector<string> v={},bool flush=true){
		if(v.size()==0){
			for(auto t:regs){
				v.push_back(t.first);
			}
		}
		cout<<v.size()<<" == V.size()\n";
		// for(auto x:locs){
		// 	cout<<x.ff<<" "<<x.ss.ff<<" -E- "<<x.ss.ss<<"\n";
		// }
		vector<string> ins;
		for(string s:v){
			if(regs[s].first!=""){
				string loc = locs[regs[s].first].ss;
				cout<<"loc == "<<loc<<"\n";
				if(loc!= ""){
					string temp = "\tmov ";
					temp+=s;
					temp+=",\t";
					temp+=loc;
					ins.push_back(temp);
				}
				if(flush){
					locs[regs[s].ff].ff="";
					regs[s].ff="";
					regs[s].ss=0;
				}

			}
		}
		for(auto x:locs){
			cout<<x.ff<<" "<<x.ss.ff<<" -F- "<<x.ss.ss<<"\n";
		}
		return ins;
	}	

	bool in_loc(string s){
		for(auto x:locs){
			if(x.ff==s)
				return true;
		}
		return false;
	}


	pair<string, vector<string>> get_register(string s=""){
		if(s.size()==0){
			string ascii = "abcdefghijklmnopqrstuvwxyz";

			for (int i = 0; i < 8; ++i)
			{
				int k = rnd(0,25);
				s+=ascii[k];
			}
		}
		bool found=false;
		// debug(locs);

		// debug("locs");
		for(auto x:locs){
			cout<<x.ff<<" "<<x.ss.ff<<" -A- "<<x.ss.ss<<"\n";
			if(x.ff == s){
				found=true;
				cout<<"found==true\n";
				// debug(found);
				break;
			}
		}
		
		if(found && locs[s].ff.size()){
			// debug("yo");
				cout<<"yo found==true\n";
			cnt++;
			regs[locs[s].ff].ss = cnt;

			return {locs[s].ff, {}};
		}

		string reg = get_reg_lru();
		vector<string> instructions = write_back({reg});
		for(auto yoyo:instructions) {
			cout<<yoyo<<"  === 186\n";
		}
		cout<<"==188\n";
		cnt++;
		regs[reg].ff=s;
		regs[reg].ss = cnt;
		for(auto val:locs)
		{
			cout<<val.ff<<" / "<<val.ss.ff<<" / "<<val.ss.ss<<"\n";
		}

		if(in_loc(s)){
			cout<<"\n\n";
			cout<<s<<"\n";
			cout<<"AAAA\n";
			locs[s].ff=reg;
			string temp = "\tmov\t";

			temp+=locs[s].ss;
			temp+=", ";
			temp+=reg;
			cout<<temp<<" --===207\n";
			
			if(locs[s].ss=="") 
			{
				exit(1);
			}
			instructions.push_back(temp);
			// cout<<temp<<"\n\n\n";
			// exit(1);
			// cout
		}
		else{
			locs[s] = {reg,""};
		}

		for(auto val:instructions) cout<<val<<"-\n";
			cout<<"\n\n\n";

		return {reg,instructions};

	}

};

class ASM {
public:
	vector<string> instructions;
	map<string, DataType*> sym_tab;
	map<string, DataType*> type_tab;
	vector<vector<string>> tacList;
	vector<string> constants;
	Registers r;

	ASM(map<string, DataType*> _sym, map<string, DataType*> _type,vector<vector<string>> _tacList){
		sym_tab = _sym;
		type_tab = _type;
		tacList = _tacList;
		Registers * rr = new Registers();
		r=*rr;
	}
	string to_upper(string s){
		string ans;
		for (int i = 0; i < sz(s); ++i)
		{
			ans+=toupper(s[i]);
		}

		return ans;
	}

	void gen(){

		instructions.push_back(".global main");
		instructions.push_back("");
		instructions.push_back(".bss");
		cout<<"MAI YAHAN HU\n";
		for(auto x:sym_tab){
			vector<string> temp = split(x.ff,'-');
			if(temp.size()==2 && temp[0]=="0"){
				if(dynamic_cast<FunctionType*>(x.ss) != NULL || temp[1]=="printf" || temp[1]=="scanf"){
					continue;
				}
				instructions.push_back(temp[1]+":");
				instructions.push_back("\t.space "+ to_string(x.ss->getSize()));
				r.locs[x.ff] = {"","(" + temp[1] + ")"};
			}
		}
		cout<<"MAI YAHAN HU2\n";
		
		instructions.push_back("");
		instructions.push_back(".text");
		instructions.push_back("");
		cout<<"MAI YAHAN HU4\n";
		
		tac_to_ins();
		cout<<"MAI YAHAN HU8\n";
		
		instructions.push_back("");
		instructions.push_back(".data");
		for(string s:constants)
			instructions.push_back(s);

		cout<<"\n\n\n\n\n\n\nBEGINNING ASM PART\n\n\n\n\n\n\n";
		ofstream my_function_dump("./bin/output.s");

		for(auto val:instructions)
		{
			my_function_dump<<val<<"\n";
			cout<<val<<"\n";
		}

	}

	string str_constant(string op){
		int l = constants.size();
		string ans="format"+to_string(l);
		constants.push_back(ans+":");
		constants.push_back("\t.asciz\t"+op);
		return "$"+ans;
	}

	DataType* getBase(DataType* x){
		if(dynamic_cast<ArrayType *>(x)!=NULL){
			return dynamic_cast<ArrayType *>(x)->array_index_type;
		}
		else if(dynamic_cast<PointerType *>(x)!=NULL){
			return dynamic_cast<PointerType *>(x)->type_of_address_pointing_to;
		}
		else if(dynamic_cast<SliceType *>(x)!=NULL){
			return dynamic_cast<SliceType *>(x)->slice_base;
		}
		else if(dynamic_cast<StructFieldElement *>(x)!=NULL){
			return dynamic_cast<StructFieldElement *>(x)->base;
		}
		cout<<"Trying to find base of something that does not have it!"<<endl;
		return NULL;
	}

	string parse_arguments(vector<string> t,bool rval=true){
		vector<string> temp;
		for(string s:t){
			if(s[0]=='"'){
				temp.push_back("\t"+str_constant(s));
			}
			else if(find(all(s),'[')!=s.end()){
				vector<string> matches = find_matches(s,"\\[.*?\\]");
				string base = split(s,'[')[0];
				for(auto val:matches) cout<<val<<" -- FROMMMMMM \n";
				cout<<base<<"\n";
				// exit(1);
				DataType* base_type = sym_tab[base];
				base = r.locs[base].ss;
				cout<<s<<"FROM parse_arguments\n\n\n";
				auto p=r.get_register();
				auto q = r.get_register();
				auto f = r.write_back({},false);


				for(string x:p.ss){
					cout<<x<<" WAS APPENDED\n";
					instructions.push_back(x);
				}
				for(string x:q.ss)
				{
					cout<<x<<" WAS APPENDED\n";
					instructions.push_back(x);
				}	
				for(auto zz:f)
				{
					instructions.push_back(zz);
				}
				// exit(1);
				if(dynamic_cast<ArrayType*>(base_type)!=NULL){
					instructions.push_back("\tlea\t"+base+", "+p.ff);				
				}
				else if(dynamic_cast<PointerType*>(base_type)!=NULL){
					instructions.push_back("\tmov\t"+base+", "+p.ff);
					base_type = dynamic_cast<PointerType*>(base_type)->type_of_address_pointing_to;
					// idx -> [10],[20]..
				}
				for(string idx:matches){
					base_type = getBase(base_type);
					idx = strip(parse_arguments({idx.substr(1,sz(idx)-2)}));
					instructions.push_back("\tmov\t"+idx+", "+q.ff);
					idx= q.ff;
					// instructions.push_back("\timulq\t$"+to_string(base_type->getSize())+", "+p.ff);
					instructions.push_back("\timulq\t$"+to_string(base_type->getSize())+", "+idx);
					instructions.push_back("\taddq\t"+idx+", "+p.ff);
				}

				if(rval){
					instructions.push_back("\tmov\t("+p.ff+"), "+p.ff);
				}

				temp.push_back(p.ff);
			}
			else if(find(all(s),'#')!=s.end()){
				if(find(all(s),'.') == s.end()){
					temp.push_back("\t"+split(s,'-').back());
				}
				else{
					s = s.substr(1);
					vector<string> y = split(s,'.');
					string str = y[0];
					string sel = y[1];
					if(type_tab.find(str)!=type_tab.end()){
						temp.push_back("\ts" + to_upper(str) + "f" + to_upper(sel) );
					}
					else{
						cout<<"Error:  Unknown Struct Type Encountered"<<endl;
						exit(1);
					}
				}
			}
			else if( find(all(s),'.')!=s.end()){
				vector<string> x = split(s,'.');
				DataType* str = sym_tab[x[0]];
				string str_name="";
				if(dynamic_cast<BasicType*>(str)!=NULL){
					string name = dynamic_cast<BasicType*>(str)->base_type;
					if(type_tab.find(name)!=type_tab.end()){
						str_name = name;
					}
				}
				string sel = x[1];
				if(type_tab.find(str_name)!=type_tab.end()){
					auto p = r.get_register();
					for(string x:p.ss)
						instructions.push_back(x);
					string loc = r.locs[x[0]].ss;
					instructions.push_back("\tlea\t"+loc+",\t"+p.ff);
					instructions.push_back("\tlea\t"+to_string(dynamic_cast<StructType*>(type_tab[str_name])->getOffset(sel)) + "("+p.ff+"),\t"+p.ff);
					if(rval){
						instructions.push_back("\tmov\t("+p.ff+"), "+p.ff);
					}
					temp.push_back(p.ff);
				}
				else{
					DataType* str = sym_tab[x[0]];
					string name;
					string str_name;
					if(dynamic_cast<PointerType*>(str)!=NULL){
						name=strip(getBase(str)->getDataType());
						if(type_tab.find(name)!=type_tab.end()){
							str_name = name;
						}
						else{
							for(auto p:type_tab){
								if(strip(type_tab[p.ff]->getDataType())==name){
									str_name = p.ff;
									break;
								}
							}
						}
						vector<string> v = r.write_back({},false);
						for(string k:v)
							instructions.push_back(k);
						auto p = r.get_register();
						for(string k:p.ss)
							instructions.push_back(k);
						string loc = r.locs[x[0]].ss;
						instructions.push_back("\tmov\t"+loc+",\t"+p.ff);
						instructions.push_back("\tlea\t"+to_string(dynamic_cast<StructType*>(type_tab[str_name])->getOffset(sel)) + "("+p.ff+"),\t"+p.ff);
						if(rval){
							instructions.push_back("\tmov\t("+p.ff+"), "+p.ff);
						}

						temp.push_back(p.ff);
					}
					else{
						cout<<"Error:  Unknown Struct Type Encountered"<<endl;
						exit(1);
					}
				}
			}
			else if((isdigit(s[0]) || s[0]=='*') && find(all(s),'-')!=s.end()){
				// Symbol table entry
				cout<<"Inside isdigit\n";
				if(sym_tab.find(s)==sym_tab.end()){
					assert(s.find("*-local")!=string::npos);
				}
				// for(auto x:r.locs)
				// {
				// 	cout<<x.ff<<" "<<x.ss.ff<<" -B- "<<x.ss.ss<<"\n";
				// }
				// cout<<"ENDED IN PARSE ARGUMENTS\n";
				
				auto p=r.get_register(s);
				// for(auto x:r.locs)
				// {
				// 	cout<<x.ff<<" "<<x.ss.ff<<" -G- "<<x.ss.ss<<"\n";
				// }
				// cout<<"\n\n\n\n";
				for(string k:p.ss)
				{
					instructions.push_back(k);
					// cout<<"k:p.ss "<<k<<"\n";
				}	
				// cout<<"p.ff "<<p.ff<<"\n";
				// for(auto x:r.locs)
				// {
				// 	cout<<x.ff<<" "<<x.ss.ff<<" -C- "<<x.ss.ss<<"\n";
				// }
				// cout<<"PART1\n";
				r.locs[s].ff=p.ff;
				// for(auto x:r.locs)
				// {
				// 	cout<<x.ff<<" "<<x.ss.ff<<" -D- "<<x.ss.ss<<"\n";
				// }
				// cout<<"PART1\n";
				
				// r.locs.erase(r.locs.find(p.ff));
				temp.push_back("\t"+p.ff);
			}
			else if(isdigit(s[0]))
				temp.push_back("\t$"+s+" ");
			else
				temp.push_back("\t"+s);
		}

		string ans;
		if(!temp.size())
			return ans;
		ans+=temp[0];
		for (int i = 1; i < temp.size(); ++i)
		{
			ans+=","+temp[i];
		}

		return ans;
	}

	void tac_to_ins(){
		vector<string> argument_list; // When args are more than regs
		int offset = 16;
		long long int rsp = 8;
		long long int rbp = rsp;
		long long int index = 0;
		stack<long long> rbps;
		rbps.push(rbp);
		for(int i=0;i<tacList.size();i++){
			vector<string> tac = tacList[i];
			instructions.push_back("");
			cout<<"START "<<tac[0]<<"\n";
			if(tac[0]=="LBL"){
				
				string x = split(tac[1],'-').back();
				vector<string> p = r.write_back();
				for(string s:p)
					instructions.push_back(s);

				// if(rsp%16 && x.substr(0,5)=="Label"){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				instructions.push_back(x+":");
			}
			else if(tac[0] == "NEW"){
				string label = tac[2];
				int siz = type_tab[tac[1]]->getSize();
				instructions.push_back("\tmov $"+to_string(siz)+", %rdi");
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				instructions.push_back("\tcall malloc");
				instructions.push_back("\tmov %rax,"+parse_arguments({label}));
			}
			else if(tac[0] == "JMP"){
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				// if(rsp%16){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				instructions.push_back("\tjmp "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] == "JE"){
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				// if(rsp%16){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				instructions.push_back("\tje "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] == "JNE"){
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				// if(rsp%16){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				instructions.push_back("\tjne "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] == "JEQZ"){
				string temp = parse_arguments({tac[1]});
				instructions.push_back("\tcmp $0, "+temp);
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				// if(rsp%16){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				instructions.push_back("\tje "+parse_arguments({tac[2]}));
			}
			else if(tac[0] == "PUSHARG"){
				if(stoi(tac[1]) < 6){
					if(stoi(tac[1])==0){
						instructions.push_back("# Debug: WB without flush");
						vector<string> t = r.write_back({},false);
						for(string k:t) instructions.push_back(k);
					}

					tac[1] = r.argument_regs[stoi(tac[1])];
					// cout<<"parse_arguments({tac[2],tac[1]}) == "<<parse_arguments({tac[2],tac[1]})<<"\n";
					// cout<<"\tmov " + parse_arguments({tac[2],tac[1]})<<" ==PUSHARG \n\n\n\n\n\n\n";
					string temp = parse_arguments({tac[2],tac[1]});
					// string temp2= temp.substr(1,4);
					// for(auto x:r.locs)
					// {
					// 	if(x.ss.ff==temp2)
					// 	{
					// 		temp = temp[0]+r.locs[tac[2]].ss+temp.substr(5);
					// 		break;
					// 	}
					// }
					instructions.push_back("\tmov " +temp);
				}
				else{
					string temp = parse_arguments({tac[2]});
					string temp2= temp.substr(1,4);
					for(auto x:r.locs)
					{
						if(x.ss.ff==temp2)
						{
							temp = temp[0]+r.locs[tac[2]].ss+temp.substr(5);
							break;
						}
					}
					argument_list.push_back("\tpush" +temp);
					rsp += 8;
					// argument_list.push_back("\tpush"+parse_arguments({tac[2]}));
				}	
			}
			else if(tac[0] == "ARGDECL"){
				int n = stoi(tac[1]);
				if(n<6){
					tac[1] = r.argument_regs[n];
					instructions.push_back("\tmov "+tac[1]+", "+parse_arguments({tac[2]}));
				}
				else{
					instructions.push_back("\tmov "+to_string(offset)+"(%rbp), "+parse_arguments({tac[2]}));
					offset += sym_tab[tac[2]]->getSize();
				}
			}

			else if(tac[0]=="USTOR"){
				if(tac[1].find("[")!=string::npos && tac[2].find("[")==string::npos){
					string mem = strip(parse_arguments({tac[1]}));
					string write = strip(parse_arguments({tac[2]}));
					instructions.push_back("\tmov\t"+mem+",\t"+write);
				}
				else if(tac.size()>2 && ((tac[2].find("[")!=string::npos) || (tac[2].find(".")!=string::npos))){
					string from = strip(parse_arguments({tac[1]}));
					string to = strip(parse_arguments({tac[2]},false));
					instructions.push_back("\tmovq\t"+from+", ("+to+")");
				}
				else{
					instructions.push_back("\tmov "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				}
			}
			else if(tac[0]=="RSTOR"){
				auto p = r.write_back({});
				for(string s:p){
					instructions.push_back(s);
				}
				string from = strip(parse_arguments({tac[1]}));
				string to = strip(parse_arguments({tac[2]}));
				instructions.push_back("\tmov\t"+from+", ("+to+")");
			}
			else if(tac[0] == "CALL"){
				auto p = r.write_back();
				for(string s:p){
					instructions.push_back(s);
				}
				vector<string> x = argument_list;
				reverse(all(x)); // So put in stack in correct order
				for(string s:x)
					instructions.push_back(s);
				// if(tac[1].substr(0,8)=="0-printf")
				instructions.push_back("\txor\t%rax,\t%rax");
				if(rsp%16 && tac[1].substr(0,8)!="0-printf"){
					instructions[index] = "\tsub $8, %rsp";
					rsp += 8;
				}
				instructions.push_back("\tcall "+parse_arguments({"#"+tac[1]}));
				if(tac[1].substr(0,8)=="0-printf"||tac[1].substr(0,7)=="0-scanf"){
					instructions.push_back("\tpop %rax");
					instructions.push_back("\tpop %rcx");
					rsp -= 16; //+8 for printf

				}
				argument_list.clear();
			}
			else if(tac[0] =="ADD"){
				instructions.push_back("\tadd "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] =="SUB"){
				instructions.push_back("\tsub "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0]=="MUL"){
				instructions.push_back("\timul "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0]=="QUOT"){
				instructions.push_back("\tmov $0, %rdx");
				// string xx=parse_arguments({tac[1]});
				// string yy=parse_arguments({tac[2]});
				// string xx2=strip(xx);
				// string yy2=strip(yy);
					
				// cout<<xx<<" -- "<<xx2<<"  FROM QUOT \n\n\n\n\n\n";
				// cout<<yy<<" -- "<<yy2<<"  FROM QUOT \n\n\n\n\n\n";
				// exit(1);
				
				string src = strip(parse_arguments({tac[1]}));
				if(src[0]=='$'){
					cout<<" from QUOT get_register\n\n";
					auto p=r.get_register();
					cout<<" from QUOT get_register end\n\n";
					for(string s:p.ss){
						cout<<s<<"\n\n";
						instructions.push_back(s);
					} 
					instructions.push_back("\tmov "+src+", "+p.ff);
					src = p.ff;
					cout<<"\tmov "+src+", "+p.ff<<"\n";
					// exit(1);
				}
				// else{
				// 	src = r.last_byte[src];
				// }
				string dst = strip(parse_arguments({tac[2]}));
				instructions.push_back("\tmov "+dst+", %rax");
				instructions.push_back("\tcqo");
				instructions.push_back("\tidiv "+src);
				instructions.push_back("\tmov %rax, "+dst);
			}
			else if(tac[0]=="MOD"){
				instructions.push_back("\tmov $0, %rdx");
				// string xx=parse_arguments({tac[1]});
				// string yy=parse_arguments({tac[2]});
				// string xx2=strip(xx);
				// string yy2=strip(yy);
					
				// cout<<xx<<" -- "<<xx2<<"  FROM QUOT \n\n\n\n\n\n";
				// cout<<yy<<" -- "<<yy2<<"  FROM QUOT \n\n\n\n\n\n";
				// exit(1);
				
				string src = strip(parse_arguments({tac[1]}));
				if(src[0]=='$'){
					cout<<" from MOD get_register\n\n";
					auto p=r.get_register();
					cout<<" from MOD get_register end\n\n";
					for(string s:p.ss){
						cout<<s<<"\n\n";
						instructions.push_back(s);
					} 
					instructions.push_back("\tmov "+src+", "+p.ff);
					src = p.ff;
					cout<<"\tmov "+src+", "+p.ff<<"\n";
					// exit(1);
				}
				// else{
				// 	src = r.last_byte[src];
				// }
				string dst = strip(parse_arguments({tac[2]}));
				instructions.push_back("\tmov "+dst+", %rax");
				instructions.push_back("\tcqo");
				instructions.push_back("\tidiv "+src);
				instructions.push_back("\tmov %rdx, "+dst);
			}
			else if(tac[0] =="AND"){
				instructions.push_back("\tand "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] =="OR"){
				instructions.push_back("\tor "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] =="XOR"){
				instructions.push_back("\txor "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] =="SHL"){
				if(tac[1][0] == '*' || tac[1].find("-")!=string::npos){
					cout<<"Error: Expected Integer for Shifting Left"<<endl;
					exit(1);
				}
				instructions.push_back("\tshl "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0] =="SHR"){
				if(tac[1][0] == '*' || tac[1].find("-")!=string::npos){
					cout<<"Error: Expected Integer for Shifting Right"<<endl;
					exit(1);
				}
				instructions.push_back("\tshr "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0]=="UADDR"){
				if(r.in_loc(tac[1]) ){
					instructions.push_back("\tlea "+r.locs[tac[1]].ss+","+parse_arguments(vector<string>(tac.begin()+2,tac.end())));
				}
				else{
					string dst = strip(parse_arguments({tac[1]},false));
					instructions.push_back("\tmov "+dst+","+parse_arguments(vector<string>(tac.begin()+2,tac.end())));
				}
			}
			else if(tac[0]=="UREF"){
				auto p = r.write_back({},false);
				for(string t:p)
					instructions.push_back(t);
				instructions.push_back("\tmov ("+parse_arguments({tac[1]})+"), "+parse_arguments(vector<string>(tac.begin()+2,tac.end())));
			}
			else if(tac[0]=="ISEQ"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsete "+r.last_byte[reg]);
			}
			else if(tac[0]=="GRTEQ"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsetge "+r.last_byte[reg]);
			}
			else if(tac[0]=="GRT"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsetg "+r.last_byte[reg]);
			}
			else if(tac[0]=="LESSEQ"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsetle "+r.last_byte[reg]);
			}
			else if(tac[0]=="LESS"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				// string reg="%r13";
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsetl "+r.last_byte[reg]);
				// cout<<"\tmov $0,"+reg<<"----\n\n\n";
				// cout<<"\tsetl "+r.last_byte[reg]<<"\n\n\n\n";
				// for(auto val:r.last_byte)
				// {
				// 	cout<<val.first<<" -YY- "<<val.second<<"\n";
				// 	if(val.first==reg) cout<<"A\n";
				// 	cout<<val.first.size()<<"  "<<reg.size();
				// 	for(int kk=0;kk<(int)min(val.first.size(),reg.size());kk++)
				// 	{
				// 		cout<<(val.first[kk]==reg[kk])<<" ";
				// 	}
				// 	cout<<"\n";
				// }
				// cout<<"\n\n\n\n\n\n";

			}
			else if(tac[0]=="NEQ"){
				string reg = strip(parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				instructions.push_back("\tmov $0,"+reg);
				instructions.push_back("\tsetne "+r.last_byte[reg]);
			}
			else if(tac[0]=="CMP"){
				vector<string> t = r.write_back();
				for(string k:t) instructions.push_back(k);
				instructions.push_back("\tcmp "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
			}
			else if(tac[0]=="NEWFUNC"){
				if(tacList[i-1][1] != "0-main") rsp = 0;
				else rsp = 8;
				auto p = r.write_back();
				for(string s:p) instructions.push_back(s);
				instructions.push_back("\tpush %rbp");
				instructions.push_back("\tmov %rsp, %rbp");
				instructions.push_back("");
				rsp += 8;
				rbps.push(rbp);
				rbp = rsp;
				cout<<"A\n";
				int j=i;
				int off=0;
				while(tacList[j][0]!="NEWFUNCEND"){
					vector<string> curr = tacList[j];
					cout<<tacList[j][0]<<"\n";
					if(tacList[j][0]=="DECL"){
						cout<<"B\n";
						cout<<curr[1]<<"\n";
						DataType* curr_type = sym_tab[curr[1]];
						for(auto val:sym_tab) cout<<val.ff<<"        ------FROM MMM \n";
						cout<<"B\n";
						cout<<(curr_type==NULL)<<"\n";
						int siz = curr_type->getSize();
						cout<<"B\n";
						if(type_tab.find(curr_type->getDataType())!= type_tab.end()){
							cout<<"B2\n";
							siz = type_tab[curr_type->getDataType()]->getSize();
							cout<<"B2\n";
						}
						cout<<"B4\n";
						off+= siz;
						// Variable of size siz and name will be at this location
						cout<<"B\n";
						r.locs[curr[1]] = {"",to_string(-off)+"(%rbp)"};
						// cout<<r.locs[curr[1]].
					}
					else if(tacList[j][0]=="ARGDECL"){
						off += sym_tab[curr[2]]->getSize();
						r.locs[curr[2]]={"",to_string(-off)+"(%rbp)"};
					}
					else{
						for(string s:curr){
							if(s.substr(0,7)=="*-local"){
								off+=8;
								r.locs[s] = {"",to_string(-off) + "(%rbp)"};
							}
						}
					}
					j++;
				}
				instructions.push_back("\tsub $"+to_string(off)+", %rsp");
				rsp += off;
			}
			else if(tac[0] == "RETURNEMPTY"){
				auto p= r.write_back();
				for(string s:p) instructions.push_back(s);
				instructions.push_back("");
				instructions.push_back("\tmov %rbp, %rsp");
				instructions.push_back("\tpop %rbp");
				instructions.push_back("\tret " + parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				rsp = rbp -8;
				rbp = rbps.top();
				rbps.pop();
			}
			else if(tac[0] == "RETURNSTART"){
				instructions.push_back("");
				auto v= r.write_back();
				for(string s:v) instructions.push_back(s);
				auto p = r.get_register();
				auto q = r.get_register();
				for(string s:p.ss) instructions.push_back(s);
				for(string s:q.ss) instructions.push_back(s);
				instructions.push_back("\tmov (%rbp), "+p.ff);
				instructions.push_back("\tmov 8(%rbp), "+q.ff);
				instructions.push_back("\tmov %rbp, %rsp");
				instructions.push_back("\tadd $8, %rsp");
				r.RBP = p.ff;
				r.RIP = q.ff;
				rsp = rbp+8;
			}
			else if(tac[0] == "PUSHSTACK"){
				instructions.push_back("\tpush "+parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				rsp += 8;
			}
			else if(tac[0] == "POP"){
				instructions.push_back("\tpop " + parse_arguments(vector<string>(tac.begin()+1,tac.end())));
				rsp -= 8;
			}
			else if(tac[0] == "RETURNEND"){
				string r1 = r.RBP;
				string r2 = r.RIP;
				instructions.push_back("\tpush "+r2);
				instructions.push_back("\tpush "+r1);
				instructions.push_back("\tpop %rbp");
				instructions.push_back("\tret");
				rsp += 8;
			}
			else if(tac[0] == "NEWFUNCEND"){
				cout<<"Inside NEWFUNCEND \n";
				auto v= r.write_back();
				for(string s:v) instructions.push_back(s);
				instructions.push_back("");
				instructions.push_back("\tmov %rbp, %rsp");
				instructions.push_back("\tpop %rbp");
				instructions.push_back("\tret");
				rsp = rbp-8;
				rbp = rbps.top();
				rbps.pop();
			}
			else if(tac[0]=="EXIT"){
				auto v= r.write_back();
				for(string s:v) instructions.push_back(s);
				instructions.push_back("\tmov $60, %rax");
				instructions.push_back("\txor %rdi, %rdi");
				instructions.push_back("\tsyscall");
			}
			else if(tac[0]=="DECL") continue;
			else if (tac[0]=="NORMALCALLINCOMING"){
				index = instructions.size();
				instructions.push_back("");
			}
			else if(tac[0]=="PRINTCALLINCOMING" || tac[0]=="SCANCALLINCOMING" )
			{
				int j=0,k=0;
				instructions.push_back("# PRINT/SCAN CALL INCOMING");
				instructions.push_back("\tpush %rcx");
				instructions.push_back("\tpush %rax");
				rsp += 16;
				// while(tacList[i+1+k][0]!="PUSHARG"){
				// 	k++;
				// }
				// while(tacList[i+1+k+j][0]=="PUSHARG"){
				// 	j++;
				// }
				// j = max(j-6,0);
				// cout << "PUSHARGS: " << j << "\n";
				// if((rsp+8*j)%16){
				// 	instructions.push_back("\tsub $8, %rsp");
				// 	rsp += 8;
				// }
				index = instructions.size();
				instructions.push_back("");

				

			}
			else{
				cout<<"UNKNOWN INSTRUCTION: "<<tac[0]<<endl;
				exit(1);
			}
		}

	}



};

// void solve(){
    
    
 
// }

// int32_t main()
// {
   
//     int t=1;
//     // cin>>t;
//     while(t--)
//     solve();

//     return 0;
// }
