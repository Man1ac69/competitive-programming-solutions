// Q : https://codeforces.com/problemset/problem/139/A
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
using namespace std;

int main(){
	int pages, piw=0; cin >> pages;
	vector<int> pw;
	ITE(0,7,1){
		int k; cin >> k;
		pw.push_back(k);
		piw+=k;
		if (piw >= pages){
			cout << i+1 << endl;
			return 0;
		}
	}
	pages = pages - ((pages/piw)*piw);
	if (pages == 0){
    int lastDay = 0;
	ITE(0,7,1){
         if (pw[i]!=0){lastDay = max(lastDay, i);}
        }
        cout << lastDay+1 << endl;
    }
	else{
		ll s=0;
		ITE(1,8,1){
			s+=pw[i-1];
			if (s>=pages){cout << i << endl;break;}
		}
	}


	return 0;
}

