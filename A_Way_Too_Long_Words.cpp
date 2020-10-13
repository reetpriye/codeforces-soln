// 71A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        if(s.size()>10) {
            cout << s[0] << to_string(s.size()-2) << s[s.size()-1] << endl;
        }
        else cout << s << endl;
    }
    return 0;
}