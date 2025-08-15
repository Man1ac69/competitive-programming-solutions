// Q : https://codeforces.com/contest/151/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long
using namespace std;



int main(){
	int  n, k, l, c, d, p, nl, np;
	cin >> n >>  k>> l>> c>> d>> p>> nl>> np;
	int tV = k*l, tS=c*d;
	int pL = tV/nl, pS=p/np;
	int a= min(min(pL, pS), tS);
	a /= n;
	cout << a << endl;

	return 0;
}
