// Q : https://codeforces.com/problemset/problem/276/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;
bool isPal(string s){
    map<char, int> cMap;
    ITE(0, s.size(), 1){
        if (cMap.find(s[i]) == cMap.end()){
            cMap[s[i]] = 1;
        }
        else{
            cMap[s[i]]++;
        }
    }
    bool found = false;
    for (auto it : cMap){
        if (s.size()%2==0){
            if (it.second%2!=0){
                return false;
            }
        }
        else{
            if (it.second%2!=0 && !found){
                found = true;
            }
            else if (it.second%2!=0 && found){
                return false;
            }


        }
    }
    return true;
}

void solve(){
    string s; cin >> s;
    if (isPal(s)){
        cout << "First" << endl;
    }
    else{
        if (s.size()%2==0){cout << "Second" << endl;}
        else{cout << "First" << endl;}
    }
}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






