// 16B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sortBySec(pair<int, int> a, pair<int, int> b) {
    return a.second>b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll m;
    ll res = 0;
    int k = 0;
    cin >> n >> m;
    vector<pair<int ,int>> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), sortBySec);
    while(1) {
        if(n==0 || k>=m)
            break;
        else if(v[k].first<=n) {
            res += v[k].second*v[k].first;
            n -= v[k].first;
            k++;
        }
        else {
            res += n*v[k].second;
            break;
        }
    }
    cout << res;
    return 0;
}