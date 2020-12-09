// 1337B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function is just for fun... XD

void VA(int *h) {
    *h = *h/2+10;
}

void LS(int *h) {
    *h = *h-10;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int x; // Initial hit point
        int n; // Void Absorption h/2+10
        int m; // Lightning Strikes h-10
        cin >> x >> n >> m;
        while(n-- && x>20)
            VA(&x);
            // x = x/2+10;
        while(m-- && x>0)
            LS(&x);
            // x -= 10;
        x<=0 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}