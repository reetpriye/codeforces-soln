// 1350A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll findMinFactor(ll n) {
    ll i = 3;
    if(n%2==0) return 2;
    else while(n%i!=0) {
        i++;
    }
    return i;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll k;
        ll f;
        bool flag = 0;
        cin >> n >> k;
        k++;
        while(--k) {
            if(n%2==0) {
                cout << n + (k*2) << "\n";
                flag = 1;
                break;
            }
            f = findMinFactor(n);
            n += f;
        }
        if(!flag) cout << n << "\n";
    }
    
    return 0;
}