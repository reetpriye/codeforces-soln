// 258A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    bool oneFound = false;
    bool ansFound = false;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='1')
            oneFound = true;
        if(s[i]=='0' && oneFound) {
            s = s.erase(i,1);
            ansFound = true;
            break;
        }
    }
    if(ansFound)
        cout << s;
    else {
        s = s.erase(s.size()-1,1);
        cout << s;
    }
    return 0;
}