// 549A` 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    string s = "face";
    char tmp;
    int cnt = 0;
    cin >> n;
    cin >> m;
    vector<vector<char>> v(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<m-1; j++) {
            if(v[i][j]!='x' && v[i+1][j]!='x' && v[i][j+1]!='x' && v[i+1][j+1]!='x') {
                if((v[i][j]!=v[i+1][j]) && (v[i][j]!=v[i][j+1]) && (v[i][j]!=v[i+1][j+1])) {
                    for(int k=0; k<4; k++) {
                        if(v[i][j]==s[k]) {
                            s.erase(k,1);
                            k = -1;
                        }
                        else if(v[i+1][j]==s[k]) {
                            s.erase(k,1);
                            k = -1;
                        }
                        else if(v[i][j+1]==s[k]) {
                            s.erase(k,1);
                            k = -1;
                        }
                        else if(v[i+1][j+1]==s[k]) {
                            s.erase(k,1);
                            k = -1;
                        }
                    }
                    if(s=="") {
                        cnt++;
                        s = "face";
                    }
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}