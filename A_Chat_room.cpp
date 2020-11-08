// 58A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string t = "hello";
    string s;
    string str;
    int idx = -1;
    int flag = 1;
    int lcnt = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(t.find(s[i])==string::npos) {
            s.erase(i,1);
            i=-1;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='h' && idx<i) {
            idx = i;
        }
        else if(s[i]=='e' && idx<i) {
            idx = i;
        }
        else if(s[i]=='l' && idx<i) {
            idx = i;
            lcnt++;
        }
        else if(s[i]=='o' && idx<i) {
            idx = i;
        }
        else flag = 0;
    }
    if(flag==0)
        cout << "NO\n";
    else if(lcnt<2)
        cout << "NO\n";
    else cout << "YES\n";
}