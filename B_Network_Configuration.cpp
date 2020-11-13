// 412B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    cout << v[k-1] << "\n";
    return 0;
}