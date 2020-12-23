// 1421A 
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
        int a;
        int b;
        // int x;
        cin >> a >> b;
        cout << (a^b) << "\n";
        // x = a&b;
        // cout << (a^x)+(b^x) << "\n";
    }
    return 0;
}