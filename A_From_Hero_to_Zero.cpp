// 1175A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;
typedef unsigned long long ull;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        ull k;
        ull n;
        ull cnt = 0;
        ull rem;
        cin >> n >> k;
        while(n!=0) {
            if(n%k==0) {
                n /= k;
                cnt++;
            }
            else {
                rem = n%k;
                n -= rem;
                cnt += rem; 
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}