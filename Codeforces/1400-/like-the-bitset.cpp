// Q : https://codeforces.com/contest/2136/problem/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;


void solve(){
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int lC = 0, gC = 0;
    ITE(0,n,1){
        if (s[i]=='1'){
            lC++;
            gC++;
            if (lC >= k){
                cout << "no" << endl; return;
            }
        }
        else{
            lC = 0;
        }
    }
    // valid
    vector<int> arr(n,0);
    int oAs=0;
    ITE(0,n,1){
        if (s[i]=='1'){
            arr[i] = gC-oAs;
            oAs++;

        }
        else{
            arr[i] = n-i+oAs;
        }
    }
    cout << "yes" << endl;
    ITE(0,n,1){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






