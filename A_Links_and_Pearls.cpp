// 980A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dash = 0;
    int pearl = 0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='-')
            dash++;
        else
            pearl++;
    }
    if(pearl==0 || dash%pearl==0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}