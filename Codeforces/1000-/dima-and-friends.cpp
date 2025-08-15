// Q: https://codeforces.com/contest/272/problem/A
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
	int f = 0;
	ITE(0,n,1){
		int k; cin >> k; 
		f+=k;
	}
	// if f%(n+1) == 1, then it comes to main. 
	int y = 0;
	ITE(1,6,1){
		if ((f+i)%(n+1) != 1){
			y++;
		}
	}
	cout << y << endl;
 
 
	return 0;
}

