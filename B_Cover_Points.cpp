// 1047B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ft first
#define sd second

typedef long long ll;

bool sortAcToSum(pair<int, int> a, pair<int, int> b) {
    return a.ft+a.sd > b.ft+b.sd;
}

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].ft >> v[i].sd;
    sort(v.begin(), v.end(), sortAcToSum);
    cout << v[0].ft+v[0].sd;
    return 0;
}