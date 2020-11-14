// 1324A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        while(1) {
            *max_element(v.begin(), v.end());
            *min_element(v.begin(), v.end());
        }
    }
    return 0;
}