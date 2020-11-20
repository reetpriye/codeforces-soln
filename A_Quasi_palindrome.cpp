// 863A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    while(!s.empty() && s.back()=='0')
        s.pop_back();
    if(equal(s.begin(), s.end(), s.rbegin()))
        cout << "YES";
    else cout << "NO";
    return 0;
}