#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c) 
#define ll long long
using namespace std; 
 
int main(){
	int n; cin >> n;
	char p;
	int r = 0;
	ITE(0,n,1){
 
		char c; cin >> c; 
		if (i==0){p=c; continue;}
		if (c==p){r++;}
		else{p=c;}
	}
 
	cout << r << endl;
 
	return 0;
}
