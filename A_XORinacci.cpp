// 1208A 
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
        int n;
        int res = 0;
        cin >> a >> b >> n;
        for(int i=n; i>1; i--) {
            res += n^(n-1);
        }
    }
    return 0;
}