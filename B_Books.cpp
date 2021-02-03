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
    ll sum = 0;
    vector<ll> v(n);
    vector<ll> psum(n);
    for(ll i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
        psum[i] = sum;
    }
    
    return 0;
}