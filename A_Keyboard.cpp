// 474A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string ori1 = "qwertyuiop";
    string ori2 = "asdfghjkl;";
    string ori3 = "zxcvbnm,./";
    string s;
    string res;
    char c;
    cin >> c;
    cin >> s;
    if(c=='R') {
        for(int k=0; k<s.size(); k++) {
            for(int i=1; i<11; i++) {
                if(s[k]==ori1[i])
                    res+=ori1[i-1];
                    continue;
            }            
            for(int i=1; i<11; i++) {
                if(s[k]==ori2[i])
                    res+=ori2[i-1];
                    continue;
            }            
            for(int i=1; i<11; i++) {
                if(s[k]==ori3[i])
                    res+=ori3[i-1];
            }            
        }
        cout << res << endl;
    }
    else {
        for(int k=0; k<s.size(); k++) {
            for(int i=0; i<10; i++) {
                if(s[k]==ori1[i])
                    res+=ori1[i+1];
                    continue;
            }            
            for(int i=0; i<10; i++) {
                if(s[k]==ori2[i])
                    res+=ori2[i+1];
                    continue;
            }            
            for(int i=0; i<10; i++) {
                if(s[k]==ori3[i])
                    res+=ori3[i+1];
            }            
        }
        cout << res << endl;
    }
    return 0;
}