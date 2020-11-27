// 918B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int m;
    cin >> n >> m;
    vector<pair<string, string>> u(n);
    vector<pair<string, string>> v(m);
    string toTest;
    for(int i=0; i<n; i++)
        cin >> u[i].first >> u[i].second;
    for(int i=0; i<m; i++) {
        cin >> v[i].first >> v[i].second;
        toTest = v[i].second;
        toTest.erase(toTest.size()-1,1);
        for(int j=0; j<n; j++) {
            if(u[j].second == toTest) {
                cout << v[i].first << " " << v[i].second << " #" << u[j].first << "\n";
                break;
            }
        }
    }
    return 0;
}