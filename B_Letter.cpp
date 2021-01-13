// 43B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    bool found;
    for(int i=0; i<t.size(); i++) {
        found = false;
        for(int j=0; j<s.size() && t[i]!=' '; j++) {
            if(s[j]==t[i]) {
                s[j] = ' ';
                found = true;
                break;
            }
            if(!found && j==s.size()-1) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}