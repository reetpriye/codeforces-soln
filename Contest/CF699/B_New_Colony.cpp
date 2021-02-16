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
        ll idx;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) {
            cin >> v[i];
        }
        ll z = 0;
        while(z<n-1) {
            if(v[z+1]<=v[z]) {
                z++;
                continue;
            }
            if(v[z+1]>v[z]) {
                k--;
                v[z]++;
                if(k<=0) {
                    idx = z+1;
                    break;
                }
                z = 0;
            }
        }
        if(z==n-1) {
            if(v.back()-v[z]<k)
                cout << -1 << "\n";
            else
                cout << z+1 << "\n";
        }   
        else cout << idx << "\n";
    }
    return 0;
}