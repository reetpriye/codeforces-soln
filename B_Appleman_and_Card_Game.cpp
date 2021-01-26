// 462B 
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
    ll k;
    ll z = 0;
    ll res = 0;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<ll> v(27);
    v[0] = 0;
    for(ll i=0; i<n; i++)
        v[s[i]-'A']++;
    sort(v.begin(), v.end(), greater<ll>());
    while(1) {
        if(v[z]<=k) {
            res += (v[z]*v[z]);
            k -= v[z];
        }
        else {
            res += (k*k);
            break;
        }
        z++;
    }
    cout << res;
    return 0;
}