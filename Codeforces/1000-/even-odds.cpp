// Q : https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    ll n, k; cin >> n >> k;
    if (n%2==0){
        if (k>n/2){
            k-=(n/2);
            cout << (k)*2 << endl;
        }
        else{
            cout << k*2 - 1 << endl;
        }
    }
    else {
            if (k>(n/2)+1){
                k -= ((n/2)+1);
                cout << k*2 << endl;
            }
            else{
                cout << k*2 - 1 << endl;

            }
    }

	return 0;
}

