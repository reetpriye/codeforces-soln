// 1426B 
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
        bool matchFound = false;
        bool isEven = false;
        int n;
        int m;
        int a;
        int b;
        int c;
        int d;
        cin >> n >> m;
        if(m%2==0)
            isEven = true;
        while(n--) {
            cin >> a >> b >> c >> d;
            if(b==c)
                matchFound = true;
        }
        isEven && matchFound ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}