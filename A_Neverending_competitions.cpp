// 765A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    n&1 ? cout << "contest" : cout << "home";
    return 0;
}

// 0 0 0 0 || 0*2^3+0*2^2+0*2^1+0*2^0=0
// 0 0 0 1 || 0*2^3+0*2^2+0*2^1+1*2^0=1
// 0 0 1 0 || 0*2^3+0*2^2+1*2^1+0*2^0=2
// 0 0 1 1 || 0*2^3+0*2^2+1*2^1+1*2^0=3
// 0 1 0 0 || 0*2^3+1*2^2+0*2^1+0*2^0=4