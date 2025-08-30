// Q : https://codeforces.com/problemset/problem/34/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;


void solve(){
    int n, h; cin >> n >> h;
    vector<int> arr;
    ITE(0,n,1){
        int k; cin >> k;
        arr.push_back(k);
    }
    int cost = 0;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (arr[i] < 0 && i < h){
        cost -= arr[i];
        i++;
    }
    cout << cost << endl;

}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






