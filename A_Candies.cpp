// 1343A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// k>1
int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n; 
        ll x;
        ll k = 2;
        cin >> n;
        for(int i=k; i<n; i++) {
            if(((x^i)-1)==n) {
                cout << x << endl;
                break;
            };
        }
    }
    return 0;
}