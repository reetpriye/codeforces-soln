// 1243B1 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int n;
        int flag = 0;
        int cnt = 0;
        string s;
        string t;
        cin >> n;
        vector<pair<char, char>> v;
        cin >> s >> t;
        for(int i=0; i<n; i++) {
            if(cnt>2) {
                flag = 1;
                break;
            }
            if(s[i]!=t[i]) {
                cnt++;
                v.push_back(make_pair(s[i], t[i]));
            }
        }
        if(flag==1) {
            cout << "No\n";
            continue;
        }
        if(cnt==2 && (v[0].fi==v[1].fi) && (v[0].se == v[1].se))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}