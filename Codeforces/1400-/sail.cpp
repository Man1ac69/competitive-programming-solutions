// Q : https://codeforces.com/problemset/problem/298/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
using ll = long long;
using namespace std;
 
void solve(){
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey; 
    char xDir, yDir; 
    if (ex > sx){
        xDir = 'E';
    }
    else if (ex==sx){xDir = 'Y';}
    else {
        xDir = 'W';
    }
    if (ey>sy){
        yDir = 'N';
    }
    else if (ey==sy){yDir = 'X';}
    else{
        yDir = 'S';
    }
    string s; cin >> s; 
    int yMov=0, xMov=0;
    int xtMov = abs(ex-sx), ytMov = abs(ey-sy);  
    ITE(0,n,1){
        if (s[i] == yDir) {
            yMov++;
        }
        else if (s[i] == xDir){
            xMov++;
        }
        if (xMov == xtMov && yMov == ytMov){
            cout << i+1 << endl;
            return; 
        }
        if (xMov==xtMov){xDir='Y';}
        if (yMov==ytMov){yDir = 'X';}
        
    }
    cout << -1 << endl;
}
int main(){
    int t=1; //cin >> t; 
    while(t--){
        solve();
    }

    return 0;
}

