// 1150B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    char tmp;
    int cnt = 0;
    vector<vector<char>> v(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    if(v[0][0]=='.' || v[0][n-1]=='.' || v[n-1][0]=='.' || v[n-1][n-1]=='.') {
        cout << "NO\n";
        return 0;
    }
    for(int i=1; i<n-1; i++) {
        for(int j=1; j<n-1; j++) {
            if(v[i][j]=='.' && v[i-1][j]=='.' && v[i+1][j]=='.' && v[i][j+1]=='.' && v[i][j-1]=='.') {
                v[i][j]= '#';
                v[i-1][j]= '#';
                v[i+1][j]= '#';
                v[i][j+1]= '#';
                v[i][j-1]= '#';
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(v[i][j]=='.') {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}