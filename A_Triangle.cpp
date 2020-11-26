// 6A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(4);
    for(int i=0; i<4; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    return 0;
}

// 1 2 3 4
// 1 2 3
// 1 3 4
// 2 3 4
// 1 2 4