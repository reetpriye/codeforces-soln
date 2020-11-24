// 499B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    string s;
    cin >> n >> m;
    vector<pair<string, string>> u(m);
    vector<string> v(n);
    for(int i=0; i<m; i++) {
        cin >> u[i].first >> u[i].second;
    }
    for(int i=0; i<n; i++) {
        cin >> v[i];
        for(int j=0; j<m; j++) {
            if(u[j].first == v[i]) {
                u[j].first.size()>u[j].second.size() ?
                s = u[j].second :
                s = u[j].first;
                cout << s << " ";
            }
        }
    }
    return 0;
}