// 69A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    int y;
    int z;
    ll a = 0;
    ll b = 0;
    ll c = 0;
    int n;
    cin >> n;
    while(n--) {
        cin >> x >> y >> z; 
        a += x;
        b += y;
        c += z;
    }
    if(a==0 && b==0 && c==0)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}