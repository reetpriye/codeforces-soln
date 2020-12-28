// 14B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x;
    int a;
    int b;
    int z;
    int cntb = 0;
    int cntf = 0;
    vector<int> v(1001);

    cin >> n;
    cin >> x;
    for(int i=0; i<n; i++) {
        cin >> a;
        cin >> b;
        for(int j=a; j<=b; j++) {
            v[j]++;
        }
    }
    z = x;
    while(v[z++]!=n)
        cntf++;
    z = x;
    while(1) {
        if(v[z--]!=n)
            cntb++;
    }

    return 0;
}