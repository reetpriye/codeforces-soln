// 1354A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll a;
        ll b;
        ll c;
        ll d;
        ll s;
        ll rem = 0;
        ll t_sleep = 0;
        cin >> a >> b >> c >> d;
        if(b>=a) {
            cout << b << "\n";
            continue;
        }
        else {
            if(d>=c) {
                cout << -1 << "\n";
                continue;
            }
            t_sleep += b;
            s = c-d;
            rem = a-t_sleep;
            if(rem%s==0)
                rem /= s;
            else {
                rem /= s;
                rem++;
            }
            t_sleep += rem*s;
            t_sleep += rem*d;
            cout << t_sleep << "\n";
        }



    }
    return 0;
}