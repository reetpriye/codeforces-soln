// 1257B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int flag = 0;
        double x;
        double y;
        cin >> x >> y;
        while(x<y) {
            if(((int)x%2)!=0)
                x--;
            x *= 3;
            x /= 2;
            if(floor(x)!=x) {
                flag = 1;
                break;
            }
        }
        flag==1 ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}