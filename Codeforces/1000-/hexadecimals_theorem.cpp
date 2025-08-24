// Q : https://codeforces.com/contest/199/problem/A
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
    if (n==0){
        cout << "0 0 0" << endl;
        return 0;
    }
    else if (n==1){
        cout << "1 0 0" << endl;
        return 0;
    }
    else if (n==2){
        cout << "0 1 1" << endl;
        return 0;
    }
    else if (n==3){
        cout << "1 1 1" << endl;
        return 0;
    }
    else if (n==5){
        cout << "0 2 3" << endl;
        return 0;
    }
    vector<int> fibb = {0,1,1};
    ITE(2, n+1, 1){
        fibb.push_back(fibb[i] + fibb[i-1]);
        if (fibb[i] + fibb[i-1]==n){break;}
    } // generated all fibonacci till n; guaranteed that n is last element.
 
    cout << fibb[fibb.size()-5] << " " << fibb[fibb.size()-4] << " " << fibb[fibb.size()-2] << endl;
 
 
    return 0;
}
