// 337A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int z = 999999;
    cin >> n >> m;
    vector<int> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<=m-n; i++)
        if(z>v[i+n-1]-v[i]) 
            z = v[i+n-1]-v[i];
    cout << z << endl;
    return 0;
}