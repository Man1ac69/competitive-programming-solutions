// Q : https://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    map<string, int> goals;
    int n; cin >> n;
    int maxGoals = 0;
    ITE(0,n,1){
        string s; cin >> s;
        if (goals.count(s) == 1){
            goals[s]++;
        }
        else{
            goals[s] = 1;
        }
    }
    string team;
    for (auto it : goals){
        if (it.second > maxGoals){
            maxGoals = it.second;
            team = it.first;
        }
    }
    cout << team << endl;

    return 0;
}

