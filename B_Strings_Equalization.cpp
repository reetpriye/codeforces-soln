// 1223B 
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
        string s;
        string t;
        cin >> s >> t;
        if(s==t) {
            cout << "YES\n";
            continue;
        }
        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<t.size(); j++) {
                if(s[i]==t[j]) {
                    ansFound = true;
                    break;
                }
            }
        }
        cout << (ansFound ? "YES\n" : "NO\n");
    }
    return 0;
}