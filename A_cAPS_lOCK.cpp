// 131A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int cnt = 0;
    bool isFirstSmall = false;
    bool isRestCapital = false;
    bool isAllCapital = false;
    string s;
    cin >> s;
    n = s.size();
    if(n==1) {
        if(s[0]>='a' && s[0]<='z')
            cout << char(s[0]-32) << "\n";
        else 
            cout << char(s[0]+32) << "\n";
        return 0;
    }
    if(s[0]<'A' || s[0]>'Z')
        isFirstSmall = true;
    for(int i=0; i<n; i++) {
        if(s[i]<'A' || s[i]>'Z') {
            isAllCapital = false;
            break;
        }
        else isAllCapital = true;
    }
    for(int i=1; i<n; i++) {
        if(s[i]<'A' || s[i]>'Z') {
            isRestCapital = false;
            break;
        }
        else isRestCapital = true;
    }
    for(int i=0; i<n; i++) {
        if(isAllCapital)
            s[i] += 32;
    }
    if(isFirstSmall && isRestCapital)
            s[0] -= 32;
    for(int i=1; i<n; i++) {
        if(isFirstSmall && isRestCapital)
            s[i] += 32;
    }
    cout << s << "\n";
}