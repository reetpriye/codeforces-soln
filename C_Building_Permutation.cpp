// 285C 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    cin >> n;
    ll res = 0;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(ll i=1; i<=n; i++)
        res += abs(v[i-1]-i);
    cout << res;
    return 0;
}