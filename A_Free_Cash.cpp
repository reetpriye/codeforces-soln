// 237A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int cnt = 1;
    int n;
    cin >> n;
    vector<int> res;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++) {
        if(v[i].first==v[i+1].first && v[i].second == v[i+1].second)
            cnt++;
        else {
            res.push_back(cnt); 
            cnt = 1;
        }
    }
    res.push_back(cnt); 
    cout << *max_element(res.begin(), res.end());
    return 0;
}