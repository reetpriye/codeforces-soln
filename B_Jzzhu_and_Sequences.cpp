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
    ll res;
    cin >> x >> y >> n;
    n %= 6;
    if(n==1)
        res = x;
    else if(n==2)
        res = y;
    else if(n==3) 
        res = y-x;
    else if(n==4)
        res = -x;
    else if(n==5)
        res = -y;
    else
        res = x-y;
    res %= M;
    if(res<0)
        res += M;
    cout << res;
    return 0;
}