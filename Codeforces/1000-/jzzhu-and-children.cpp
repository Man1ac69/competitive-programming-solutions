// Q : https://codeforces.com/contest/450/problem/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int n, t, m=0,s=0; cin >> n >> t; 
	for (int i = 1; i <= n;++i){
		int k; cin >> k; 
		if (ceil((double)k/t)>=m){m=ceil((double)k/t);s=i;}
	}
	cout << s << endl;
 
 
	return 0;
}
