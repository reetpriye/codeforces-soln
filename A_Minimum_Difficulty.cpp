// 496A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int max = INT_MIN;
    int max_idx;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    for(int i=n-1; i+2>=0; i--) {
        if(v[i]-v[i-2]>max)
            max = v[i]-v[i-2];
    }
    cout << max;
    return 0;
}