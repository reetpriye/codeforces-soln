// 653A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++) {
        if(v[i]==v[i+1])
            v[i]=INT_MIN;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-2; i++) {
        if(v[i+2]-v[i+1]==1 && v[i+1]-v[i]==1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}