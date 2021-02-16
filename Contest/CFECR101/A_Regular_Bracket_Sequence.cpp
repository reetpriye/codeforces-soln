//  
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
        string s;
        cin >> s;
        if(s.size()&1)
            cout << "NO\n";
        else if(s.back()=='(' || s.front()==')')
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}