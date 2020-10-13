// 158A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int cnt = 0;
    int k;
    int sc;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    sc = v[k-1];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        if(v[i]>=sc && v[i]>0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}