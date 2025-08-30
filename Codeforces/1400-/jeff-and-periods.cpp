// Q : https://codeforces.com/problemset/problem/352/B
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define ITE(a,b,c) for(int i = a; i < b; i+=c)
#define ll long long
#define endl '\n'

using namespace std;
struct tObj{
    int last_pos;
    int dist;
    int tOcc;
};

void solve(){
    int n; cin >> n;
    vector<int> arr;
    ITE(0,n,1){
        int l; cin >> l;
        arr.push_back(l);
    }
    map<int, tObj> seen;
    vector<int> bList;
    ITE(0,n,1){
        if (seen.find(arr[i]) != seen.end() && find(bList.begin(), bList.end(), arr[i]) == bList.end()){
            if (abs(seen[arr[i]].last_pos - i) == seen[arr[i]].dist && seen[arr[i]].dist != 0){
                seen[arr[i]].last_pos = i;
                seen[arr[i]].tOcc++;
            }
            else if (seen[arr[i]].dist == 0){
                seen[arr[i]].dist = abs(i - seen[arr[i]].last_pos);
                seen[arr[i]].last_pos = i;
                seen[arr[i]].tOcc++;
            }
            else{
                seen.erase(arr[i]);
                bList.push_back(arr[i]);
            }
        }
        else if (seen.find(arr[i]) == seen.end() && find(bList.begin(), bList.end(), arr[i]) == bList.end()){
            seen[arr[i]] = {i,0, 1};
        }
    }
    cout << seen.size() << endl;
    for (auto it : seen){
        cout << it.first << " " << it.second.dist << endl;
    }

}
int main(){
    int t=1;// cin >> t;
    while (t--){
        solve();
    }
    return 0;
}






