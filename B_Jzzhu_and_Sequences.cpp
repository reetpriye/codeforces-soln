// 450B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll x, y;
    ll n;
    ll M = 1e9+7;
    ll res = 0;
    ll temp;
    cin >> x >> y >> n;
    if(n==1) {
        cout << x%M;
    }
    else if(n==2) {
        cout << y%M;
    }
    else {
        n -= 2;
        while(n--) {
            res = (y-x);
            temp = y;
            y = (y-x);
            x = temp;
        }
        cout << res%M;
    }
    return 0;
}