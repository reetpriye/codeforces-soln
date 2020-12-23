// 1101A 
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
        bool ansFound = false;
        int l;
        int r;
        int d;
        cin >> l >> r >> d;
        for(int i=1; i<l; i++) {
            if(i%d==0) {
                cout << i << "\n";
                ansFound = true;
                break;
            }
        }
        if(ansFound)
            continue;
        if(d>=l && d<=r) {
            r++;
            while(1) {
                if(r%d==0) {
                    cout << r << "\n";
                    ansFound = true;
                    break;
                }
                r++;
            }
        }
        else
            cout << d << "\n";
    }
    return 0;
}