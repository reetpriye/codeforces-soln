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
        ll x;
        ll min = 0;
        ll sum = 0;
        ll max = 0;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
            if(v[i]%x==0)
                max += (v[i]/x);
            else
                max += (v[i]/x)+1;
        }
        min = sum/x;
        if(sum%x!=0)
            min++;
        cout << min << " " << max << "\n";
    }
    return 0;
}