// 598A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll i = 0;
        ll sum;
        cin >> n;
        sum = (n*(n+1))/2;
        while(powl(2,i)<=n) {
            sum -= 2*(powl(2,i));
            i++;
        }
        cout << sum << "\n";
    }
    return 0;
}

// 4
// 1 2 3 4
// -1 -2 3 -4 -> -4
// 1 + 2 + 3 + 4 -> 10
// 10 - 2 - 4 -8 -> -4