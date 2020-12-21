// 1197B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int max = INT_MIN;
    int max_idx;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]>max) {
            max = v[i];
            max_idx = i;
        }
    }
    for(int i=max_idx; i<n-1; i++) {
        if(v[i+1]>v[i]) {
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<max_idx; i++) {
        if(v[i+1]<v[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}