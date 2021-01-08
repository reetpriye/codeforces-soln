// 32B 
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
    cin >> s;
    string res;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='-' && s[i+1]=='.') {
            res += '1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-') {
            res += '2';
            i++;
        }
        else if(s[i]=='.') {
            res += '0';
        }
    }
    cout << res;
    return 0;
}