//Q:  https://codeforces.com/contest/2131/problem/B

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define endl '\n'
#define ll long long
using namespace std; 
 
 
 
int main(){	
	int t; cin >> t; 
	while (t){		
		int n; cin >> n; 
		if (n==2){
			cout << "-1 2" << endl;
		}
		else 
        {
            for (int i = 1; i <= n; ++i){
				if ((i==n) && (n%2==0)){
						cout << 2; 
				}
				else if (i%2!=0){cout << -1 << " ";}
				else {cout << 3 << " ";}
		
			}
				cout << endl;
        }
 
		t--;
	}
	return 0;
}
