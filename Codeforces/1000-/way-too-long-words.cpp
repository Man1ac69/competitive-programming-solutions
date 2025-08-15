// Question : https://codeforces.com/contest/71/problem/A
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
	int t; cin >> t; 
	while (t){
		string s; cin >> s; 
		if (s.size() > 10) {
			cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
 
		}
		else {
			cout << s << endl;
		}
		t--;
	}
	return 0;
}
