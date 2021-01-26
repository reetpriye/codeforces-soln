// 166A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

int main() {
    FAST_IO;

    int n;
    int k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), comp);
    cout << count(v.begin(), v.end(), v[k-1]);
    return 0;
}