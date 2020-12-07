// 1343A 
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
        int n;
        cin >> n;
        int k = 2;
        while(n%((int)pow(2,k)-1))
            k++;
        cout << n/((int)pow(2,k)-1) << "\n";
    }
    return 0;
}

// n (3≤n≤109)
// x+2x+4x+...+2^k-1x = n;
// (k-1)*x = n/2^k-1
// 1+2+4+....+2^(k-1) = n/x;
// 1+2+4+....+2^(k-1) = n/x;
// x = n/2^k-1
// Sum of AP Series=n/2[2a+(n-1)d]
// n=k/2[2k-2]
// n=(k*k-k)*x
// 2*n=k[2*x+(k-1)*2]
// 2*n=2*k*x+2*k*k-2*k
// n=k*x+k*k-k
// (n+k-k*k)/k=x
// x=(n/k+1-k)

// Fuck this was a GP Series, and I wasted
// many hours figuring out the solution
// Sum of n terms in GP is calculated by,
// S(n) = a(r^n-1)/(r-1)
// 1+2+4+....+2^(k-1) = n/x;
// Here S(k) = (2^k-1)/(2-1) = pow(2,k)-1