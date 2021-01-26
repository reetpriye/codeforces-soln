// 239A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll y;
    ll k;
    ll n;
    ll quo;
    ll cnt = 0;
    cin >> y >> k >> n;
    quo = y/k;
    quo++;
    while(1) {
        if(quo*k<=n) {
            cout << (quo*k)-y << " ";
            quo++;
            cnt++;
        }
        else break;
    }
    if(!cnt) cout << -1;
    return 0;
}