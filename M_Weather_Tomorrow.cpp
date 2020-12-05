// 847M 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int flag = 0;
    int diff;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    diff = v[1]-v[0];
    for(int i=0; i<n-1; i++) {
        if(v[i+1]-v[i]!=diff) {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << v.back();
    else
        cout << v.back()+diff;
    return 0;
}