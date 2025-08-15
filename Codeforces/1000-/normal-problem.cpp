// Q : https://codeforces.com/contest/2044/problem/B
#include <iostream>
#include <string>
#define endl '\n'
 
using namespace std; 
 
 
 
 
int main(){	
	int t; 
	string s; 
	cin >> t; 
	while (t > 0){
		cin >> s; 
		for (int i = s.size()-1; i >= 0; i--){
			if (s[i] == 'p'){cout << 'q';}
			else if (s[i] == 'q') {cout << 'p';}
			else cout << 'w'; 
		}
		cout << endl;
		t--;
	}
	return 0;
}
