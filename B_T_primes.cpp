// 230B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n) {
    if(n<2) return false;
    for(ll i=2; i<=sqrt(n); i++) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];
    for(ll i=0; i<n; i++) {
        if(((sqrt(v[i])*sqrt(v[i]))==v[i]) && isPrime(sqrt(v[i])))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}