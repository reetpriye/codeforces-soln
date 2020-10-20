// 1374B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll n;
        int cnt = 0;
        cin >> n;
        if(n==1) {
            cout << cnt << endl;
            continue;
        }
        while(1) {
            if(n==1) {
                cout << cnt << endl;
                break;
            }
            if(n%6==0) {
                n/=6;
                cnt++;
            }
            else {
                n*=2;
                cnt++;
                if(n%6!=0) {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}