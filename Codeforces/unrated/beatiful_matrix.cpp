// Q : https://codeforces.com/contest/263/problem/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;
 
int main(){
    int res;
    bool found = false;
    ITE(0,5,1){
        for (int j =0; j<5;j++){
            int m; cin >> m;
            if (m==1){
                    res = abs(j-2) + abs(i-2);
                    found = true;
                    break;
                }
            if (found){break;}
        }
    }
    cout << res << endl;
    return 0;
 
}
