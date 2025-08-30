// Q : https://codeforces.com/problemset/problem/677/A
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
    int width=0;
    ITE(0,n,1){
        int l; cin >> l;
        if (l>h){width+=2;}
        else{width++;}
    }
    cout << width << endl;

}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






