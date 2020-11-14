// 460A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int q;
    int socks;
    cin >> n >> m;
    socks = n;
    q = m;
    while(q<=n) {
        socks++;
        n++;
        q += m;
    }
    cout << socks << "\n";
}

// 10 2 -> 15 + 2 -> 17