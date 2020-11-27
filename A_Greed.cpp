// 892A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    ll sum = 0;
    cin >> n;
    vector<int> u(n);
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> u[i];
        sum += u[i];
    }
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    sum<=v[0]+v[1] ? cout << "YES" : cout << "NO";
    return 0;
}