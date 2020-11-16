// 1216B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sortDescBySec(pair<int, int> a, pair<int, int> b) {
    return a.second>b.second;
}

int main() {
    int n;
    cin >> n;
    ll cnt = 1;
    ll sum = 1;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        v[i].first = i+1;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end(), sortDescBySec);
    for(int i=1; i<n; i++) {
        sum += cnt*v[i].second + 1;
        cnt++;
    }
    cout << sum << "\n";
    for(int i=0; i<n; i++)
        cout << v[i].first << " ";
    return 0;
}