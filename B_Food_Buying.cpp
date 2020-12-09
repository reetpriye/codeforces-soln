// 1296B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int s;
        int c_back;
        int left;
        ll tot_spnt = 0;
        cin >> s;
        while(s/10) {
            c_back = s/10;
            tot_spnt += c_back*10;
            left = s%10;
            s = left;
            s += c_back;
        }
        tot_spnt += s;
        cout << tot_spnt << "\n";
    }
    return 0;
}
/*
19
19/10->1
c_back
*/