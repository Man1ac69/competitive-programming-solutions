// Q : https://codeforces.com/problemset/problem/459/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;


void solve(){
    ll n;cin >> n;

    vector<int> arr;
    ITE(0,n,1){
        int l; cin >> l;
        arr.push_back(l);
    }
    ll mC=0, MC=0;

    sort(arr.begin(), arr.end());
    int mD = arr.back() - arr[0];
    if (mD == 0){
        cout << mD << " " << (n*(n-1))/2 << endl;
        return;
    }
    else{

        for (auto it : arr){
            if (it==arr[0]){mC++;}
            if (it==arr.back()){MC++;}
        }
    }
    cout << mD << " " << mC*MC << endl;
}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






