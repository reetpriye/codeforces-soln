// 1295A
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
        int m;
        cin >> n;
        if(n%2!=0) {
            cout << 7;
            n -= 3;
        }
        m = n/2;
        while(m--)
            cout << 1;
        cout << "\n";
    }
    return 0;
}