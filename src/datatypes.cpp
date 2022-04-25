#include<bits/stdc++.h>
#include "tables.hpp"
using namespace std;

#define fi first
#define se second
#define sz(s) (s.size())
#define all(s) s.begin(),s.end()


bool is_match(string s,string rex){
	return regex_match(s,regex(rex));
}
// Source: https://www.geeksforgeeks.org/program-to-find-all-match-of-a-regex-in-a-string/
vector<string> find_regex_capture_groups(string s,string rex){
	regex r(rex);
	smatch match;
	vector<string> ans;
	while(regex_search(s,match,r)){
		for (int i = 1; i < match.size(); ++i)
		{
			ans.push_back(match[i]);
		}
	}

	return ans;
}
// Source: https://stackoverflow.com/questions/16710076/python-split-a-string-respect-and-preserve-quotes
vector<string> find_matches(string s, string rex="(?:[^\\s,\"]|\"(?:\\.|[^\"])*\")+"){
	regex r(rex);
	smatch match;
	vector<string> ans;
	while(regex_search(s, match, r)){
		ans.push_back(match.str(0));
		s=match.suffix().str();
	}

	return ans;
}

vector<string> split (string s, char delim) {
    vector<string> ans;
    stringstream ss (s);
    string token;

    while (getline(ss, token, delim)) {
        ans.push_back(token);
    }

    return ans;
}


string strip(string s){
	string t="";
	int start=0;
	int end=s.size()-1;
	while(start<s.size())
	{
		if(s[start]==' ' || s[start]=='\t') start+=1;
		else break;
	}
	while(end>=0)
	{
		if(s[end]==' ' || s[end]=='\t') end-=1;
		else break;
	}	
	for(int i=start;i<=end;i++) t+=s[i];
	for(int i=0;i<s.size();i++)
	{
		cout<<i<<" --"<<s[i]<<'\n';
	}
	cout<<start<<" "<<end<<" -"<<s<<"- t=="<<t<<"-\n";

	// while(s.size() > 0 && s.back()==' ') s.pop_back();
	// reverse(s.begin(),s.end());
	// while(s.size() > 0 && s.back()==' ') s.pop_back();
	// reverse(s.begin(),s.end());
	return t;
}

DataType* find_type(string s){
	if(is_match(s,"^struct \\{.*\\}$")){
		map<string,DataType*> mpp;
		// int i=0,j=s.size()-1;
		// i = find(all(s),'{') - s.begin();
		// while(j>=0 && s[j]!='}') j--;
		// j--;i++;
		// vector<string> temp = split(strip(s.substr(i,j-i+1)),',');
		// for(string t:temp){
		// 	int k=0;
		// 	while(t[k]!=' ' && k<t.size()) k++;
		// 	string key = t.substr(0,k);
		// 	string val = t.substr(k+1);
		// 	mpp[strip(key)] = find_type(strip(val));
		// }

		vector<string> temp = split(find_regex_capture_groups(s,"^struct \\{(.*)\\}$")[0],',');
		for(string t:temp){
			t = strip(t);
			if(t=="") continue;
			int i = find(all(t),' ')-t.begin();
			mpp[strip(s.substr(0,i))] = find_type(strip(s.substr(i+1)));
		}

		return (new StructType(mpp));
	}
	else if(is_match(s,"^\\[\\].*$")){
		int i=0;
		// while(i<s.size() && s[i]!=']') i++;
		// string temp = s.substr(i+1);
		DataType* temp = find_type(find_regex_capture_groups(s,"^\\[\\].*$")[0]);
		return (new SliceType(temp));
	}
	else if(is_match(s,"^\\[.*?\\].*$")){
		// string temp = strip(s);
		// int i=0;
		// while(i<sz(s) && s[i]!='[') i++;
		// int siz=0;
		// i++;
		// while(i<s.size() && s[i]!=']'){
		// 	siz=siz*10 + (s[i]-'0');
		// 	i++;
		// }
		vector<string> temp = find_regex_capture_groups(s,"^\\[(.*?)\\](.*)$");
		int siz = stoi(temp[0]);
		return new ArrayType(find_type(temp[1]),siz);
	}
	else if(s.substr(0,4) == "func"){
		return new FunctionType(s);
	}
	else if(s[0]=='*'){
		return new PointerType(find_type(s.substr(1)));
	}
	else if(s[0]=='('){
		return new PairType(s);
	}
	else{
		return new BasicType(s);
	}
}

string ArrayType::getDataType(){
	return "["+to_string(array_size)+"]" + array_index_type->getDataType();
}

int ArrayType::getSize(){
	return tot_size;
}

int BasicType::getSize(){
	return size;
}
int PointerType::getSize(){
	return size;
}
int StructFieldElement::getOffset(){
	return offset;
}
int SliceType::getSize(){
	return size;
}

int StructType::getSize(){
	return size;
}

int StructType::getOffset(string name){
	return elem_of_struct[name]->getOffset();
}
// TODO: Find re.findall custom split, create Tuple Type and insert else if PairType
FunctionType::FunctionType(string s){
	current_data_type = _FUNCTION;
	vector<string> temp = find_regex_capture_groups(s,"^func \\((.*)\\) (.*)$");
	for (int i = 0; i+1 < temp.size(); i+=2)
	{
		vector<string> x = find_matches(temp[0]);
		for(string j:x){
			argument_types.push_back(find_type(strip(j)));
		}
		tuple_ret = find_type(temp[i+1]);	
	}

	size = 8;

}

int FunctionType::getSize(){
	return size;
}

// DataType* ArrayType::copyClass() {
// 	// Todo: complete the class correctly
// 	ArrayType current_copy = new ArrayType();
// 	return &current_copy;
// }

DataType *StructFieldElement::copyClass(){
	return (new StructFieldElement(*this));
}

DataType *PairType::copyClass(){
	return (new PairType(*this));
}

PairType::PairType(string s){
	vector<string> temp = find_matches(s);
	for (int i = 0; i < temp.size(); ++i)
	{
		elements.push_back(find_type(strip(temp[i])));
	}
	size=0;
	for (int i = 0; i < sz(elements); ++i)
	{
		size+=elements[i]->getSize();
	}
}
string PairType::getDataType(){
	string ans="(";
	if(elements.size()==0)
		return ans+")";
	ans+=elements[0]->getDataType();
	for (int i = 1; i < sz(elements); ++i)
	{
		ans+=", "+elements[i]->getDataType();
	}

	return ans+")";

}

int PairType::getSize(){
	return size;
}
string StructFieldElement::getDataType(){
	return name + " "+ base->getDataType();
}

DataType *ArrayType::copyClass() {
    return (new ArrayType(*this));
}

string BasicType::getDataType(){
	return base_type;
}

DataType *BasicType::copyClass() {
    return (new BasicType(*this));
}

string FunctionType::getDataType(){
	string current_type = " func (";
		// cout<<current_type<<"\n";
		// cout<<argument_types.size()<<" "<<return_type.size()<<"\n";
		// cout<<((argument_types.size()-1))<<(0<(argument_types.size()-1))<<"\n";
	if(argument_types.size())
	{
		for(int i=0;i<(argument_types.size()-1);i++)
		{
			// cout<<"A "<<i<<"\n";
			current_type+=argument_types[i]->getDataType()+", ";
		}
		// cout<<current_type<<"\n";

		// if(argument_types.size()) 
		current_type+=argument_types[argument_types.size()-1]->getDataType();
		// if (argument_types[argument_types.size()-1]->getDataType() == "[10]int")
		// {
		// 	cout<<"OHOHOWOQEW=>" <<static_cast<ArrayType*>(argument_types[argument_types.size()-1])->array_size<<endl;
		// }
	}
	current_type+=") (";
	// cout<<current_type<<"\n";
	if(return_type.size())
	{
		for(int i=0;i<return_type.size()-1;i++)
		{
			current_type+=return_type[i]->getDataType()+", ";
		}
		// if(return_type.size()) 
			current_type+=return_type[return_type.size()-1]->getDataType();

	}
	return current_type+")";
}

DataType *FunctionType::copyClass() {
    return (new FunctionType(*this));
}


string MapType::getDataType(){
	string current_type = "map [ ";
	current_type+=key_datatype->getDataType()+" ] ";
	current_type+=value_datatype->getDataType();
	return current_type;
}

DataType *MapType::copyClass() {
    return (new MapType(*this));
}


string NullType::getDataType(){
	return "NULL";
}

DataType *NullType::copyClass() {
    return (new NullType(*this));
}

string PointerType::getDataType(){
	string current_type = "*";
	current_type+=type_of_address_pointing_to->getDataType();
	return current_type;
}

DataType *PointerType::copyClass() {
    return (new PointerType(*this));
}

string SliceType::getDataType(){
	string current_type = "[]";
	current_type+=slice_base->getDataType();
	return current_type;
}

DataType *SliceType::copyClass() {
    return (new SliceType(*this));
}

// struct{ x int,y int}
string StructType::getDataType(){
	string current_type = "struct { ";
	auto it = data_of_struct.begin();
	while(it!=data_of_struct.end())
	{
		current_type+=(*it).first+" ";
		current_type+=(*it).second->getDataType()+",";
		it++;
	}
	current_type+="}";
	return current_type;
}

DataType *StructType::copyClass() {
    return (new StructType(*this));
}

