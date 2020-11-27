// 935B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int x = 0;
    int y = 0;
    int n;
    int cnt = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++) {
        if(s[i]=='U')
            y++;
        else
            x++;
        if(x==y && s[i]=='U' && s[i+1]=='U')
            cnt++;
        else if(x==y && s[i]=='R' && s[i+1]=='R')
            cnt++;
    }
    cout << cnt;
    return 0;
}