// 125B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    vector<char> v;
    cin >> s;
    string t = "<>/";
    for(int i=0; i<s.size(); i++) {
        if(t.find(s[i])==string::npos)
            v.push_back(s[i]);
    }
    
    return 0;
}