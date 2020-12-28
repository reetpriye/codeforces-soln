// 158B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    ll k = 0;
    ll sum = 0;
    ll tax_req = 0;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    tax_req += (sum/4);
    sum %= 4;
    if(sum>0)
        tax_req++;
    cout << tax_req;
    return 0;
}