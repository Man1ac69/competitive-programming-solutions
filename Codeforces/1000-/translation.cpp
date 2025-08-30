// Q : https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    string s,t; cin >> s;
    cin >> t;
    if (s.size() != t.size()){
        cout << "NO" << endl; return 0;
    }
    ITE(0,s.size(), 1){
        if (s[i] == t[s.size()-i-1]){
            continue;
        }
        else{
            cout << "NO" << endl; return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}

