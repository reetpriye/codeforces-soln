// 263B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    if(v[k] == v[k-1] || k>n)
        cout << -1 << "\n";
    else
        cout << v[k-1] << " 0\n";
    return 0;
}
