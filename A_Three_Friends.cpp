// 1272A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        vector<ll> v(3);
        for(int i=0; i<3; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        if(v[0]==v[1] && v[1]==v[2]) {
            cout << 0 << endl;
            continue;
        }
        if(v[0]==v[1] && v[1]!=v[2]) {
            v[0]++;
            v[1]++;
            if(v[1]!=v[2])
                v[2]--;
            cout << 2*(v[2]-v[1]) << endl;
            continue;
        }
        if(v[1]==v[2] && v[0]!=v[1]) {
            v[1]--;
            v[2]--;
            if(v[0]!=v[1])
                v[0]++;
            cout << 2*(v[1]-v[0]) << endl;
            continue;
        }
        v[0]++;
        v[2]--;
        cout << v[2]-v[1] + v[1]-v[0] + v[2]-v[0] << endl;
    }
    return 0;
}