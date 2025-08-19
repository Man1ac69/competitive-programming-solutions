// Q : https://codeforces.com/problemset/problem/34/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> h;
    int in[2] = {0,0};
    ITE(0,n,1){
        int k; cin >> k;
        h.push_back(k);
    }
    int mH = 1<<20;
    ITE(0,n,1){
        if (i==(n-1)){
            if (mH > abs(h[i]-h[0])){
                mH = abs(h[i]-h[0]);
                in[0]=i;in[1]=0;
                }
        }
        else{
            if (mH > abs(h[i]-h[i+1])){
                mH = abs(h[i]-h[i+1]);
                in[0]=i;in[1]=i+1;
                }
        }
    }
    cout << in[0]+1 << " " << in[1]+1 << endl;

	return 0;
}

