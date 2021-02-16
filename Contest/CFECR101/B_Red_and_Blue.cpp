//  
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
        int sum = 0;
        int x;
        int y;
        cin >> n; vector<int> r(n+1);
        r[0] = 0;
        for(int i=1; i<n+1; i++) {
            cin >> r[i];
            sum += r[i];
            r[i] = sum;
        }
        cin >> m; vector<int> b(m+1);
        b[0] = 0;
        sum = 0;
        for(int i=1; i<m+1; i++) {
            cin >> b[i];
            sum += b[i];
            b[i] = sum;
        }
        x = *max_element(r.begin(), r.end());
        y = *max_element(b.begin(), b.end());
        cout << x+y << "\n";
    }
    return 0;
}