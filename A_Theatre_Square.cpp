// 1A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll m;
    ll a;
    ll x;
    ll y;
    cin >> n >> m >> a;
    if(n%a==0)
        x = n/a;
    else
        x = (n/a)+1;
    if(m%a==0)
        y = m/a;
    else
        y = (m/a)+1;
    cout << x*y;
    return 0;
}