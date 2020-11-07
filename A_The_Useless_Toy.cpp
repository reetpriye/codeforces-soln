//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
    ===========ASCII VALUES===========
    v -> (ASCII code 118, lowercase v)
    < -> (ASCII code 60)
    ^ -> (ASCII code 94)
    > -> (ASCII code 62)
*/

int main() {
    int n;
    int k;
    int cwcnt = 0;
    int ccwcnt = 0;
    char a;
    char b;
    cin >> a >> b;
    cin.ignore();
    cin >> n;

    vector<char> cw = {'^', '>', 'v', '<'};
    vector<char> ccw = {'^', '<', 'v', '>'};
    for(int i=0; i<4; ++i) {
        k = i;
        if(cw[i]==a) {
            while(cw[k]!=b) {
                if(k>=4) {
                    k=0;
                    continue;
                }
                k++;
                cwcnt++;
            }
        }
    }
    for(int i=0; i<4; ++i) {
        k = i;
        if(ccw[i]==a) {
            while(ccw[k]!=b) {
                if(k>=4) {
                    k=0;
                    continue;
                }
                k++;
                ccwcnt++;
            }
        }
    }
    n %= 4;
    if(cwcnt == ccwcnt)
        cout << "undefined\n";
    else if(cwcnt == n)
        cout << "cw\n";
    else cout << "ccw\n";
    return 0;
}