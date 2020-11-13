// 230A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int s;
    int n;
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        if(s>v[i].first) {
            s += v[i].second;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}