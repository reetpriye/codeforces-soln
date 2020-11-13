// 11A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    double d;
    ll prev;
    double rem;
    ll cnt = 0;
    cin >> n >> d;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];
    prev = v[0];
    for(ll i=1; i<n; i++) {
        if(prev==v[i]) {
            cnt++;
            prev = v[i]+1;
        }
        else if(prev>=v[i]) {
            rem = prev-v[i]+1;
            cnt += ceil(rem/d);
            prev = v[i]+(ceil(rem/d)*d);
        }
        else prev = v[i];
    }
    cout << cnt << "\n";
    return 0;
}