// 106B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int min = INT_MAX;
    int min_idx;
    int tmp;
    cin >> n;
    vector<vector<int>> v(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<4; j++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(v[i][0]<v[j][0] && v[i][1]<v[j][1] && v[i][2]<v[j][2]) {
                v[i][3] = -1;
                break;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(v[i][3]!=-1 && min>v[i][3]) {
            min = v[i][3];
            min_idx = i+1;
        }
    }
    cout << min_idx;
    return 0;
}