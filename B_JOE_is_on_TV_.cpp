// 1293B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    double n;
    double res = 0;
    cin >> n;
    for(double i=n; i>=1; i--)
        res += 1/i;
    cout << fixed << setprecision(12) << res;
    return 0;
}