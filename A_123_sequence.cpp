// 52A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int one = 0;
    int two = 0;
    int thr = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==1)
            one++;
        else if(v[i]==2)
            two++;
        else
            thr++;
    }
    if(one>=two && one>=thr)
        cout << two+thr;
    else if(two>=one && two>=thr)
        cout << one+thr;
    else
        cout << one+two;
    return 0;
}
/*
1 vs 2&3
2 vs 1&3
3 vs 1&2
*/