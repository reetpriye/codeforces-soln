// 1362A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        ll a;
        ll b;
        ll num;
        ll rem;
        ll op = 0;
        cin >> a >> b;
        if(a==b) {
            cout << "0\n";
            continue;
        }
        a >= b ? num = a/b : num = b/a;
        rem = num/8;
        op++;
        num /= 8;
        if(rem!=0) {
            rem = rem/4;
            op += rem/4;
        }
        if(rem!=0) {
            rem = rem/2;
            op += rem/2;
        }
        if(rem==0)
            cout << op << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}