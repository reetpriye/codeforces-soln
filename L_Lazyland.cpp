// 1089L 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

bool sortBySec(pair<int,int> a, pair<int, int> b) {
    return a.second<b.second;
}

int main() {
    FAST_IO;

    int n;
    int k;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].first;
    for(int i=0; i<n; i++)
        cin >> v[i].second;
    
    
    return 0;
}