// Q : https://codeforces.com/contest/315/problem/A
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#define endl '\n'
 
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i){
        int k,l; cin >> k >> l;
        a.push_back(k); b.push_back(l);
    }
    int opened = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if ((b[j] == a[i]) && (i!=j)){
                opened++;
                break;
            }
        }
    }
    cout << n - opened << endl;
	return 0;
}
