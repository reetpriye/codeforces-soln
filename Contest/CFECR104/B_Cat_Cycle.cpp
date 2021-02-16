//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll k;
        ll ans;
        cin >> n >> k;
        if(n&1) {
            ll col = n/2;
            ll colhappened = (k-1)/col;
            ans = k%n;
            ans += colhappened;
            ans %= n;
            if(ans==0)
                ans = n;
            // if((k-1)%col==0 && k!=1) {
            //     if(ans==n)
            //         ans = 1;
            //     else ans++;
            // }
        }
        else {
            ans = k%n;
            if(ans==0)
                ans = n;
        }
        cout << ans << "\n";
    }
    return 0;
}