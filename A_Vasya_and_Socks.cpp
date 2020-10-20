// 460A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int mom;
    int rem;
    int ans = n;
    cin >> n >> m;
    mom = n/m;
    ans += mom;
    while(mom>=m) {
        ans += mom/m;
        mom /= m;
    }
    cout << ans << endl;
    return 0;
}