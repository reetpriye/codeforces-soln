// 58A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    int i = 0;
    cin >> s;
    while(s[i]!='h') {
        if(s=="") {
            cout << "NO\n";
            return 0;
        }
        s.erase(i,1);
    }
    i++;
    while(s[i]!='e') {
        if(s=="h") {
            cout << "NO\n";
            return 0;
        }
        s.erase(i,1);
    }
    i++;
    while(s[i]!='l') {
        if(s=="he") {
            cout << "NO\n";
            return 0;
        }
        s.erase(i,1);
    }
    i++;
    while(s[i]!='l') {
        if(s=="hel") {
            cout << "NO\n";
            return 0;
        }
        s.erase(i,1);
    }
    i++;
    while(s[i]!='o') {
        if(s=="hell") {
            cout << "NO\n";
            return 0;
        }
        s.erase(i,1);
    }
    s.erase(s.begin()+5, s.end());
    s=="hello" ? cout << "YES\n" : cout << "NO\n";
}