// Q : https://codeforces.com/contest/2123/problem/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n,j,k; cin >> n >> j >> k;
        int s = 0;
        vector<int> str;
        ITE(0,n,1){int m; cin >> m;s = max(s,m);str.push_back(m);}
        if (k>1){cout << "YES" << endl;}
        else if ((k==1) && (str[j-1]==s)){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
 
}
