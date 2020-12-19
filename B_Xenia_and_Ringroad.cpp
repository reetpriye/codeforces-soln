// 339B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int m;
    ll sum;
    cin >> n >> m;
    vector<int> v(m);
    for(int i=0; i<m; i++)
        cin >> v[i];
    sum = v[0]-1;
    for(int i=1; i<m; i++) {
        if(v[i]==v[i-1])
            continue;
        if(v[i]>v[i-1])
            sum += v[i]-v[i-1];
        else 
            sum += n-(v[i-1]-v[i]);
    }
    cout << sum;
    return 0;
}