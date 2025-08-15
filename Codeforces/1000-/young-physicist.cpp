// Q: https://codeforces.com/contest/69/problem/A

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
	int X=0,Y=0,Z=0;
	for (int i = 0;i<n; ++i){
		int x,y,z; cin >> x >> y >> z; 
		X += x; Y+=y; Z+=z;
	}
	if ((X==Y) && (Y==Z) && (X==0)){cout << "YES" << endl;}
	else {cout << "NO" << endl;}
 
	return 0;
}
