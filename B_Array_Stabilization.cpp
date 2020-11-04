// 1095B` 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    v[n-2]-v[0] <= v[n-1]-v[1] ? 
        cout << v[n-2]-v[0] << endl: 
        cout << v[n-1]-v[1] << endl;
    return 0;
}