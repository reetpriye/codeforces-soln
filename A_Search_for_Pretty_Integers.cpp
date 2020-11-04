// 870A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int min1;
    int min2;
    int ans;
    cin >> n;
    cin >> m;
    vector<int> v(n);
    vector<int> w(m);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<m; i++)
        cin >> w[i];
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(v[i]==w[j]) {
                cout << v[i] << "\n";
                return 0;
            }
        }
    }
    cout << min(v[0], w[0]) << max(v[0], w[0]) << "\n";
    return 0;
}