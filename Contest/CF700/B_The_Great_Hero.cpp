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
        ll a; // Hero attack power
        ll b; // Initial hero health
        ll n;
        cin >> a >> b >> n;
        vector<ll> ap(n); // Attack power
        vector<ll> ih(n); // Initial health
        vector<ll> req(n);
        ll maxpower = LONG_LONG_MIN;
        for(ll i=0; i<n; i++) {
            cin >> ap[i];
            maxpower = max(maxpower, ap[i]);
        }
        for(ll i=0; i<n; i++) {
            cin >> ih[i];
            if(ih[i]%a==0)
                req[i] = ih[i]/a;
            else 
                req[i] = ((ih[i]/a)+1);
        }
        bool flag = false;  
        ll z = 0;
        ll cnt = 0;
        ll fight = 0;
        ll drop = 0;
        while(z<n) {
            drop += (req[z]*ap[z]);
            z++;
        }
        ll afh = b-drop; // After fight health
        if(afh>0) {
            cout << "YES\n";
        }
        else {
            afh += maxpower;
            cout << (afh>0 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}