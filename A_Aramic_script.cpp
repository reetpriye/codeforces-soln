// 975A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    string tmp;
    cin >> n;
    vector<string> v(n);
    set<string> s;
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    for(int i=0; i<n; i++) {
        sort(v[i].begin(), v[i].end());
        for(int j=0; j<v[i].size(); j++) {
            if(v[i][j]==v[i][j+1]) {
                v[i].erase(j,1);
                j = -1;
            }
        }
    }
    for(int i=0; i<n; i++) {
        s.insert(v[i]);
    }
    cout << s.size() << "\n";
    return 0;
}