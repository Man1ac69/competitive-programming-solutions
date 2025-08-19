//Q : https://codeforces.com/problemset/problem/205/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    int n,in;cin >> n;
    int s = 1<<30;
    int c=0;
    ITE(0,n,1){
        int k; cin >> k; 
        if (k<s){s = k;in = i;c = 1;}
        else if (k==s){c++;}
    }
    if (c>1){cout << "Still Rozdil" << endl;}
    else {cout << in+1 << endl;}
	return 0;
}

