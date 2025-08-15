 // Q : https://codeforces.com/contest/2131/problem/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int t; cin >> t; 
	while (t){		
		// code goes here
		int n; cin >> n;
		vector<int> a,b;
		for (int i = 0; i <n; ++i){
			int k; cin >> k; 
			a.push_back(k);	
		}
		for (int i = 0; i <n; ++i){
			int k; cin >> k; 
			b.push_back(k);	
		}
		int pd = 0, nd = 0;
		for (int i = 0; i <n; ++i){
			if (a[i]-b[i] > 0){ 
				pd += (a[i]-b[i]);}
			if (a[i]-b[i] < 0){
				nd += abs(a[i]-b[i]);
			}
		}
		cout << pd + 1 << endl;
		
		
 
 
		t--;
	}
	return 0;

