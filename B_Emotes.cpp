// 1117B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    ll m;
    ll k;
    ll res = 0;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    res = (m/(k+1)*k*v[0])+(m/(k+1)*v[1])+(m%(k+1)*v[0]);
    cout << res << "\n";
    return 0;
}

// 9 2 
// 7 7 4 7 7 4 7 7 4 -> 54

// 10 2 
// 7 7 4 7 7 4 7 7 4 7 -> 61