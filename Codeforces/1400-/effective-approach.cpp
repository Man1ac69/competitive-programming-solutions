// Q: https://codeforces.com/contest/227/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int n,m; cin >> n; 
	vector<int> a; 
	map<int, int> M;
	for (int i = 0; i < n; ++i){
		int k; cin >> k;
		M[k] = i; 
 
	}
 
	cin >> m;
	ll v=0,p=0;
	vector<int> q; 
	for (int i = 0; i < m; ++i){
		int l; cin >> l; 
		v += (M[l] + 1);
		p += (n-M[l]); 
		     
	}
 
	cout << v << " " << p << endl;
 
	return 0;
}
