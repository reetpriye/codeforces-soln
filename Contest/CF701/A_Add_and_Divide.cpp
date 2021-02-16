//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        ll a;
        ll b;
        cin >> a >> b;
        if(b>a)
            cout << 1 << "\n";
        else if(b==a)
            cout << 2 << "\n";
        else {
            int cnt = 0;
            while(a!=0) {
                a /= b;
                cnt++;
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}