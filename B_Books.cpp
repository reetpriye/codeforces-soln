// 279B 
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
    ll t;
    cin >> n >> t;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];
    ll sum = 0;
    ll cnt = 0;
    ll k = 0;
    for(ll i=0; i<n; i++) {
        sum += v[i];
        if(sum<=t) {
            cnt++;
        }
        else {
            sum -= v[k];
            k++;
        }
    }
    cout << cnt;
    return 0;
}