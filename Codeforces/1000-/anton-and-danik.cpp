// Question : https://codeforces.com/contest/734/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c) 
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int n; cin >> n; 
	string s; cin >> s;
	int a=0,d=0; 
	ITE(0,n,1){
		if (s[i] == 'A'){a++;}
		else if (s[i] == 'D'){d++;} 
	}
	if (a>d){
		cout << "Anton" << endl;
	}
	else if (d>a){cout << "Danik" << endl;}
	else {cout << "Friendship" << endl;}
 
	return 0;
}
 
