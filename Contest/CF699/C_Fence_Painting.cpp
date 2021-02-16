// Upsolve
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
        vector<vector<int>> h1(1e5+1);
        vector<vector<int>> h2(1e5+1);
        ll n;
        ll m;
        bool flag = false;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(m);
        for(ll i=0; i<n; i++)
            cin >> a[i];
        for(ll i=0; i<n; i++)
            cin >> b[i];
        for(ll i=0; i<m; i++) {
            cin >> c[i];
            h1[c[i]].push_back(i);
        }
        bool allElSame = true;
        for(ll i=0; i<n; i++) {
            if(a[i]!=b[i])
                allElSame = false;
        }
        bool elFound = false;
        ll idx;
        if(allElSame) {
            for(ll i=0; i<m; i++) {
                for(ll j=0; j<n; j++) {
                    if(c[i]==b[j]) {
                        elFound = true;
                        idx = j+1;
                    }
                }
            }
            if(!elFound)
                cout << "NO\n";
            else {
                
            }
            continue;
        }
        ll val;
        ll pos = 1;
        for(ll i=0; i<n; i++) {
            if(a[i]!=b[i]) {
                pos = i+1;
                if(h1[b[i]].size()==0) {
                    flag = true;
                    break;
                }
                val = h1[b[i]].back();
                h1[b[i]].pop_back();
                h2[b[i]].push_back(i+1);
            }
        }
        if(flag) cout << "NO\n";
        else {
            cout << "YES\n";
            for(ll i=0; i<c.size(); i++) {
                if(h2[c[i]].size()==0) {
                    cout << pos << " ";
                }
                else {
                    cout << h2[c[i]].back() << " ";
                    h2.pop_back();
                }
            }
            cout << "\n";
        }
    }
    return 0;
}