// 10A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int p1;
    int p2;
    int p3;
    int t1;
    int t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    return 0;
}