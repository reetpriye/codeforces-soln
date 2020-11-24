// 584A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string t;
    string s;
    cin >> n >> t;
    if(n==1 && t=="10")
        cout << -1;
    else if(t=="10") {
        s = '1';
        while(--n) {
            s += '0';  
        }
        cout << s;
    }
    else {
        while(n--) {
            s += t;
        }
        cout << s;
    }
    return 0;
}