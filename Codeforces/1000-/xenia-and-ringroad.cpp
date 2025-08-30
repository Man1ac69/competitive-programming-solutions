// Q : https://codeforces.com/problemset/problem/339/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> tasks;
    ITE(0,m,1){
        int k; cin >> k;
        tasks.push_back(k);
    }
    ll time = 0, cHouse = 1;
    ITE(0,m,1){
        if (i==0){
            time += (tasks[i] - cHouse);
        }
        else{
            if (tasks[i] - tasks[i-1] < 0){
                time += (n - (tasks[i-1]-tasks[i]));
            }
            else{
                time += (tasks[i] - tasks[i-1]);
            }
        }
    }
    cout << time << endl;
    return 0;

}

