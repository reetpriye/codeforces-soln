// 467B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int m;
    int k;
    int res = 0;
    int fedor;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i=0; i<=m; i++)
        cin >> v[i];
    fedor = v[m];
    for(int i=0; i<m; i++)
        res += __builtin_popcount(fedor^v[i])<=k;
    cout << res;
    return 0;
}