// 958B1 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int tmp;
    int cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<((n-1)*2); i++) {
        cin >> tmp;
        v[tmp-1]++;
    }
    for(int i=0; i<v.size(); i++) {
        if(v[i]==1)
            cnt++;   
    }
    cout << cnt;
    return 0;
}