// Q : https://codeforces.com/gym/348180/problem/C
#include <iostream>
#define ll long long int
using namespace std;
ll n,m,k,a,b,c;
 
void solve(){
    cin >> n >> k;
    k--;
 
    if (n%2 == 0){
        cout << 1+ (k%n) << "\n";
    }
    else{
        ll isect = k/((n-1)/2);
        cout << 1+ ((k+isect) %n) << '\n';
    }
}
 
 
int main() {
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
 
    return 0;
}


