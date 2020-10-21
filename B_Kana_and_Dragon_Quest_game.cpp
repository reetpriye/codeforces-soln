// 1337B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a;
        int b;
        int z;
        int x; // Initial hit point
        int n; // Void Absorption h/2+10
        int m; // Lightning Strikes h-10
        cin >> x >> n >> m;
        while(n!=0 && m!=0) {
            a = floor(x/2)+10;
            b -= 10;
            if(a<=b) {
                x = floor(x/2)+10;
                n--;
            }
            else {
                x -= 10;
                m--;
            }
            if(x<=0) {
                cout << "YES" << endl;
                return 0;
            }
        }
        while(n--) {
            x = floor(x/2)+10;
        }
        while(m--) {
            x -= 10;
        }

        x <= 0 ? cout << "YES" << endl : cout << "NO" << endl;   
    }
    return 0;
}