// Q: https://codeforces.com/contest/231/problem/A


#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ll long long
using namespace std;



int main(){
	int t,b=0; cin >> t;
	while (t){
		vector<int> a;
		int y=0;
		for (int i = 0; i < 3; ++i){
			int k; cin >> k;
			if (k==1){y++;}
		}
		if (y>1){b++;}
		t--;
	}
	cout << b << endl;
	return 0;
}
