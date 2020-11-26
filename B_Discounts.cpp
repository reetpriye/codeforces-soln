// 1132B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    int k = 0;
    ll sum = 0;
    cin >> n;
    vector<int> u(n);
    for(int i=0; i<n; i++) {
        cin >> u[i];
        sum += u[i];
    }
    cin >> m;
    vector<int> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i];
    sort(u.begin(), u.end(), greater<int>());
    while(m--)
        cout << sum-u[v[k++]-1] << "\n";
    return 0;
}