// Q : https://codeforces.com/problemset/problem/215/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;


void solve(){
    int n, m; cin >> n;
    vector<int> forw, rear;
    ITE(0,n,1){
        int l; cin >> l;
        forw.push_back(l);
    }
    cin >> m;
    ITE(0,m,1){
        int l; cin >> l;
        rear.push_back(l);
    }
    int mG = 0;
    int mC = 0;
    ITE(0,n,1){
        for (int j = 0; j < m; j++){
            if (rear[j]%forw[i]==0){
                if (rear[j]/forw[i]>mG){
                    mG = rear[j]/forw[i];
                    mC = 1;
                }   
                else if (rear[j]/forw[i] == mG){
                    mC++;
                }
            }
        }
    }
    cout << mC << endl;


}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






