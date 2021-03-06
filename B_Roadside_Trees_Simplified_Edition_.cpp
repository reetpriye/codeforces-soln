// 265B 
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
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];
    vector<ll> req(n, 2);
    req[0] = v[0]+1;
    for(ll i=0; i<n-1; i++) {
        if(v[i+1]<v[i]) {
            req[i] += v[i]-v[i+1];
        }
        else if(v[i+1]>v[i]) {
            req[i+1] += v[i+1]-v[i];
        }
    }
    cout << accumulate(req.begin(), req.end(), 0);
    return 0;
}