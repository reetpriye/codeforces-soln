//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        string res;
        for(int i=0; i<s.size(); i++) {
            if(i%2==0) {
                if(s[i]=='a')
                    res += 'b';
                else res += 'a';
            }
            else {
                if(s[i]=='z')
                    res += 'y';
                else res += 'z';
            }
        }
        cout << res << "\n";
    }
    return 0;
}