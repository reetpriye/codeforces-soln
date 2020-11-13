// 48A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void main() {
    vector<string> v = {"rock", "scissor", "paper", "rock"};
    string f;
    string m;
    string s;
    cin >> f >> m >> s;
    if(f==m && m==s) {
        cout << "?\n";
        return;
    }
    
    return;
}

// rock > scissor > paper > rock