// Q : https://codeforces.com/contest/2132/problem/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;
 
void solve(){
    ll n; cin >> n;
    vector<ll> vec;
    ITE(1,19,1){
        if (n%(1+(ll)pow(10,i))==0){
            vec.push_back(n/(1+(ll)pow(10,i)));
        }
    }
    if (vec.size() != 0){
        sort(vec.begin(), vec.end());
        cout << vec.size() << endl;
        for (auto i : vec){
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        cout << 0 << endl;
    }
}
 
int main(){
    int t; cin >> t;
    while (t--) {solve();}
    return 0;
 
}
