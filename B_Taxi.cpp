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
    ll th = 0;
    ll on = 0;
    ll tax_req = 0;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==3)
            th++;
        if(v[i]==1)
            on++;
        sum += v[i];
    }
    tax_req += min(on,th);
    sum -= (3*min(on,th));
    sum -= (min(on,th));
    th -= min(on,th);
    on -= min(on,th);
    tax_req += th;
    sum -= (th*3);
    tax_req += (sum/4);
    sum %= 4;
    if(sum>0)
        tax_req++;
    cout << tax_req;
    return 0;
}