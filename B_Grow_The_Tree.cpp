// 1248B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    ll x = 0, y;
    ll sum = 0;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<floor(n/2); ++i) {
        x += v[i];
    }
    y = sum-x;
    // cout << pow(x,2)+pow(y,2) << "\n";
    cout << ((x*x)+(y*y)) << "\n";
    return 0;
}