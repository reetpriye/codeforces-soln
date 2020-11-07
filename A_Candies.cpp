// 1343A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// k>1
// x>0
int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll sum; 
        cin >> n;
        for(int x=1; x<=LONG_LONG_MAX; x++) {
            sum = x;
            for(int k=2; sum<=n; k++) {
                if(sum==n) {
                    cout << x << "\n";
                    goto end;
                }
                sum += (pow(2,k-1))*x;
            }
        }
        end : continue;
    }
    return 0;
}
// 1+2+4+8+2^k-1 = n/x