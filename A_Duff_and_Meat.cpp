// 588A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int min_cost = INT_MAX;
    int min_idx = 0;
    ll sum = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second; 
        if(min_cost>v[i].second)
            min_cost = v[i].second;
    }
    sum += v[0].first * v[0].second;
    for(int i=1; i<n; i++) {
        if(v[i].second>=v[min_idx].second) {
            sum += v[min_idx].second*v[i].first;
        }
        else {
            sum += v[i].first*v[i].second;
            min_idx = i;
        }
    }
    cout << sum;
    return 0;
}