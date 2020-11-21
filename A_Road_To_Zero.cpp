// 1342A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        ll res = 0;
        ll x;
        ll y;
        ll a;
        ll b;
        ll p;
        cin >> x >> y >> a >> b;
        x<=y ? p = x: p = y;
        if(b<=a*2) {  
            x -= p;
            y -= p;
            res += p*b;
        }
        else {
            x -= p;
            y -= p;
            res += p*2*a;
        }
        if(x==0)
            res += y*a;
        else 
            res += x*a;
        cout << res << "\n";
    }
    return 0;
}