// 276A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    vector<int> res;
    int n;
    ll k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first; //fi
        cin >> v[i].second;//ti
        // fi - ti - k
    }
    for(int i=0; i<n; i++) {
        if(v[i].second>k)
            res.push_back(v[i].first-(v[i].second-k));
        else res.push_back(v[i].first);
    }
    cout << *max_element(res.begin(),res.end()) << endl;
    return 0;
}