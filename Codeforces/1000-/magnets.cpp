// Question : https://codeforces.com/contest/344/problem/A
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
	string s="";
	int g = 0;
	ITE(0,n,1){
		string p; cin >> p;
		if (p!=s){s=p; g++;} 
	}
	cout << g << endl;
 
	return 0;
}
