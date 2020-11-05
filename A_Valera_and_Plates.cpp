// 369A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m; // Clean Bowls
    int k; // Clean Plates
    int one;
    int two;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==1 && m>0) {
            m--;
            one++;
        }
        if(v[i]==2 && (m>0 || n>0)) {
            m >= n ? m-- : n--;
            two++;
        }
    }
    
    cout <<  << "\n";
    return 0;
}