// 1141A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int m;
    int q;
    int cnt = 0;
    cin >> n >> m;
    if(m%n!=0)
        cout << -1;
    else {
        q = m/n;
        while(q!=1) {
            if(q%3==0) {
                q/=3;
                cnt++;
            }
            else if(q%2==0) {
                q/=2;
                cnt++;
            }
            else {
                cout << "-1";
                return 0;
            }
        }
        cout << cnt;
    }
    return 0;
}

// 51840 17280 5760 1920 640 320 160
// 51840/120 = 432
// 432 144 48 16 8 4 2 1

// 42/42 = 1
// 1

