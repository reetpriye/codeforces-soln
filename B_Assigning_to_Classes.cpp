// 1300B 
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
        vector<int> v(2*n);
        for(int i=0; i<2*n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[n]-v[n-1] << "\n";
    }
    return 0;
}