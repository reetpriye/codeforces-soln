// 577A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x;
    int cnt = 0;
    cin >> n >> x;
    for(int i=1; i<=n; i++) {
        if(x%i==0 && x/i<=n)
            cnt++;
    }
    cout << cnt;
    return 0;
}