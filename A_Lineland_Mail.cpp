// 567A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    cout << v[1]-v[0] << " " << v.back()-v[0] << "\n";
    for(int i=1; i<n-1; i++) {
        cout << min(v[i]-v[i-1], v[i+1]-v[i]) << " ";
        cout << max(v[i]-v[0], v.back()-v[i]) << "\n";
    }
    cout << v.back()-v[v.size()-2] << " " << v.back()-v[0] << "\n";
    return 0;
}