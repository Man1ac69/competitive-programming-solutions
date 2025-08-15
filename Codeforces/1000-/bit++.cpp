// Q : https://codeforces.com/contest/282/problem/A 

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int n; cin >> n; 
	int x = 0;
	for(int i = 0; i < n; ++i){
		string s; cin >> s; 
		if (s=="++X" || s=="X++"){
			x++;
		}
		else {x--;}
	}
	cout << x << endl;
 
	return 0;
}
