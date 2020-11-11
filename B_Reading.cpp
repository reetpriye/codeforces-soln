// 234B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

bool sortBySecDesc(pair<int, int> a, pair<int, int> b) {
    return a.second>=b.second;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    vector<int> res;
    for(int i=0; i<n; i++) {
        v[i].first = i+1;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end(), sortBySecDesc);
    cout << v[k-1].second << "\n";
    for(int i=0; i<k; i++)
        res.push_back(v[i].first);
    sort(res.begin(), res.end());
    for(auto i:res)
        cout << i << " ";
    return 0;
}