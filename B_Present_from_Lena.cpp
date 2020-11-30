// 118B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int i = 0;
    int cnt = 0;
    int k = 1; // For Size
    cin >> n;
    vector<vector<int>> v;
    while(cnt<=n/2+1) {
        vector<int> t;
        while(i<=k/2) {
            t.push_back(i);
            i++;
        }
        i--;
        while(i>=0 && k!=1) {
            t.push_back(i);
            i--;
        }
        v.push_back(t);
        t.clear();
        if(cnt<=n+1)
            k += 2;
        else
            k -= 2;
        i = 0;
        cnt++;
    }
    for(int i=0; i<n*2+1; i++) {
        for(int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}