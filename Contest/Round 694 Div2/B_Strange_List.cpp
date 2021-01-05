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
        ll res = 0;
        ll nxt;
        ll m;
        ll pos = 0;
        ll cnt;
        bool same = true;
        bool oneTime = false;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            res += v[i];
            if(v[i-1]!=v[i] && i!=0)
                same = false;
            if(v[i]%x!=0)
                oneTime = true;
        }
        ll cnt2 = 1;
        ll temp = v[0];
        if(same) {
            while(temp%x==0) {
                cnt2++;
                temp /= x;
            }
            cout << cnt2*res << "\n";
            continue;
        }
        for(ll i=0; i<n; i++) {
            if(v[i]%x==0) {
                nxt = v[i];
                m = x;
                cnt = 0;
                while(1) {
                    if(nxt%x!=0) {
                        oneTime = true;
                        break;
                    }
                    if(oneTime && cnt>0)
                        break;
                    res += ((nxt/x)*m);
                    nxt /= x;
                    m *= 2;
                    cnt++;
                }
            }
            else
                break;
        }
        cout << res << "\n";
    }
    return 0;
}