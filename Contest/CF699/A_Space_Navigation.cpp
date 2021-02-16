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
        int l=0, r=0, u=0, d=0;
        map<char, int> m;
        int x;
        int y;
        string s;
        bool xpresent = false;
        bool ypresent = false;
        cin >> x >> y;
        cin >> s;
        for(int i=0; i<s.size(); i++) {
            m[s[i]]++;
        }
        if(y==0 && x>0 && m['R']>=x) {
            xpresent = true;
            ypresent = true;
        }
        else if(y==0 && x<0 && m['L']>=abs(x)) {
            xpresent = true;
            ypresent = true;
        }
        else if(x>0 && m['R']>=x)
            xpresent = true;
        else if(x<0 && (m['L']>=(abs(x))))
            xpresent = true;
        if(x==0 && y>0 && m['U']>=y) {
            xpresent = true;
            ypresent = true;
        }
        else if(x==0 && y<0 && m['D']>=abs(y)) {
            xpresent = true;
            ypresent = true;
        }
        else if(y>0 && m['U']>=y)
            ypresent = true;
        else if(y<0 && (m['D']>=(abs(y))))
            ypresent = true;
        if(xpresent==true && ypresent==true)
            cout << "YES\n";    
        else cout << "NO\n";    
    }
    return 0;
}