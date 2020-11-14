// 1353C 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll sum = 0;
        cin >> n;
        ll i;
        for(ll i=1; i<=floor(n/2); i++)
            sum += 8*i*i;
        cout << sum << "\n";
    }
    return 0;
}