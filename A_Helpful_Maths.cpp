// 339A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    vector<char> c;
    vector<int> v;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!='+')
            c.push_back(s[i]);
    }
    for(int i=0; i<c.size(); i++) {
        v.push_back(int(c[i]-48));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) {
        cout << v[i]; 
        if(i!=v.size()-1)
            cout << "+";
    }

    return 0;
}