// 1313A 
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
        int a; // Dumplings
        int b; // Cranberry
        int c; // Pancake + Condensed Milk
        int cnt = 0;
        cin >> a >> b >> c;
        /*
        a
        b
        c 
        a b
        a c
        b c
        a b c
        2 2 3
        5
        3 2 2
        2 1 1 -> 3
        1 0 1 -> 4
        0 0 0 -> 5

        1 1 2 -> 3
        0 0 1 -> 4
        1

        */
        if(a>=1) {
            cnt++;
            a--;
        }
        if(b>=1) {
            cnt++;
            b--;
        }
        if(c>=1) {
            cnt++;
            c--;
        }
        if(a>=1 && b>=1) {
            cnt++;
            a--;
            b--;
        }
        if(b>=1 && c>=1) {
            cnt++;
            b--;
            c--;
        }
        if(a>=1 && c>=1) {
            cnt++;
            a--;
            c--;
        }
        if(a>=1 && b>=1 && c>=1) {
            cnt++;
            a--;
            b--;
            c--;
        }
        cout << cnt << "\n";
    }
    return 0;
}