// 230B 
// Author: REET

// Solving using binary search

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

static bool s[1000001];

int main() {
    vector<ll> primes = {4};
    for(ll i=3; i<1000001; i+=2) {
        if(s[i]) continue;
        primes.push_back(i*i);
        for(int x=i<<1; x<1000001; x+=i) {
            s[x] = true;
        }
    }
    ll n;
    ll tmp;
    cin >> n;
    while(n--) {
        cin >> tmp;
        binary_search(primes.begin(), primes.end(), tmp) ? 
        cout << "YES\n" : cout << "NO\n";
    }
}