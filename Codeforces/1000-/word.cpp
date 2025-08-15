//Question : https://codeforces.com/contest/59/problem/A


#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c) 
#define ll long long
using namespace std; 
 
string LOW(string s){
	for (auto& x:s){
		x = tolower(x);
	}
	return s; 
}
 
string UP(string s){
	for (auto& x:s){
		x = toupper(x);
	}
	return s; 
}
 
int main(){	
	string s; cin >> s; 
	int u=0,l=0;
	ITE(0,s.size(), 1){
		if (isupper(s[i])){u++;}
		else{l++;}
	}
	string b = l>=u? LOW(s):UP(s);
	cout << b << endl;
	return 0;
}
