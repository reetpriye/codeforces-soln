// 1080B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int l;
        int r;
        float le, lo;
        float re, ro;
        float n;
        ll even_sum = 0;
        ll odd_sum = 0;
        cin >> l;
        cin >> r;
        l%2==0 ? le=l : le=l+1;
        l%2!=0 ? lo=l : lo=l+1;
        r%2==0 ? re=r : re=r-1;
        r%2!=0 ? ro=r : ro=r-1;
        n = (re-le)/2+1;
        even_sum = n/2*(2*le+((n-1)*2));
        n = (ro-lo)/2+1;
        odd_sum = n/2*(2*lo+((n-1)*2));
        cout << even_sum - odd_sum << "\n";
    }
    return 0;
}

/*
2+4+6+8+10
Sn = n/2[2a+(n-1)d]
Sn = 5/2[4+8] = 30;
-1+2-3+4-5+6-7+8
-1 -3 -5 -7
4/2[-2-6] = -16
*/