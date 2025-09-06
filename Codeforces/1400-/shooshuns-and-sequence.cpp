// Q :https://codeforces.com/problemset/problem/222/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
using ll = long long;
using namespace std;


void solve(){
    int n, k; cin >> n >> k; 
    vector<int> arr; 
    ITE(0,n,1){
        int l; cin >> l;
        arr.push_back(l);
    }
    ITE(k-1,n,1){
        
            if (arr[i] == arr[k-1]){continue;}
            else{cout << -1 << endl; return;}
        
    } 
    int y = 0; 
    for (int i = k-2; i >= 0; i--){
        if (arr[i] == arr[k-1]){
            y++;
        }
        else{break;}
    }
    cout << k-1-y << endl;
    return;

}
int main(){
    int t=1; //cin >> t; 
    while(t--){
        solve();
    }

    return 0;
}
