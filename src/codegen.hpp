#ifndef _CODEGEN_H
#define _CODEGEN_H

#define debug(x) cerr<<#x<<" ";print_print(x);cerr<<'\n';
void print_print(int t) {cerr << t;}
void print_print(string t) {cerr << t;}
void print_print(char t) {cerr << t;}
void print_print(double t) {cerr << t;}
template <class T, class V> void print_print(pair <T, V> p);
template <class T> void print_print(vector <T> v);
template <class T> void print_print(set <T> v);
template <class T, class V> void print_print(map <T, V> v);
template <class T> void print_print(multiset <T> v);
template <class T, class V> void print_print(pair <T, V> p) {cerr << "{"; print_print(p.first); cerr << ","; print_print(p.second); cerr << "}";}
template <class T> void print_print(vector <T> v) {cerr << "[ "; for (T i : v) {print_print(i); cerr << " ";} cerr << "]";}
template <class T> void print_print(set <T> v) {cerr << "[ "; for (T i : v) {print_print(i); cerr << " ";} cerr << "]";}
template <class T> void print_print(multiset <T> v) {cerr << "[ "; for (T i : v) {print_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void print_print(map <T, V> v) {cerr << "[ "; for (auto i : v) {print_print(i); cerr << " ";} cerr << "]";}


#endif