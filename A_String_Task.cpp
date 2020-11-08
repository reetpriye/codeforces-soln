// 118A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string v = "aeiouy";
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        s[i]= tolower(s[i]);
        if(v.find(s[i])==string::npos)
            cout << "." << s[i];
    }
    return 0;
}