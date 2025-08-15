// Q : https://codeforces.com/contest/1986/problem/A

#include <iostream>
#include <algorithm>
 
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int t; 
	cin >> t; 
	while (t>0){
		int a,b,c; 
		int dist = 100; 
		cin >> a >> b >> c; 
		for (int i = min(min(a,b), c); i <= max(max(a,b), c); ++i){
			dist = min(dist, (abs(a-i)+ abs(b-i) + abs(c-i))); 
		}
		cout << dist << endl;
 
		t--;
	}
	return 0;
}
