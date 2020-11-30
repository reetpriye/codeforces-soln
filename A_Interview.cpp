// 631A 
// Author: REET
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll sum;
    ll f1;
    ll f2;
    ll max = LONG_LONG_MIN;
    cin >> n;
    ll u[n];
    ll v[n];
    // Taking inputs
    for(int i=0; i<n; i++)
        cin >> u[i];
    for(int i=0; i<n; i++)
        cin >> v[i];
    // Doing operations
    for(int i=0; i<n; i++) {
        f1 = u[i];
        f2 = v[i];
        for(int j=i; j<n; j++) {
            f1 |= u[j];
            f2 |= v[j];
            sum = f1+f2;
            if(sum>max)
                max = sum;
        }
    }
    cout << max;
    return 0;
}