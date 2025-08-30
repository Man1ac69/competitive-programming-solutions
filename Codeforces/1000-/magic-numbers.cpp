// Q : https://codeforces.com/problemset/problem/320/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;


void solve(){
    unsigned int n,m,a; cin >> n >> m >> a;
    unsigned ll b, l;
    if (n%a==0){b = (n/a);}
    else if (n%a!=0){b= (n/a) + 1;}

    if (m%a==0){l = (m/a);}
    else if (m%a!=0){l= (m/a) + 1;}
    cout << l*b << endl;

}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






