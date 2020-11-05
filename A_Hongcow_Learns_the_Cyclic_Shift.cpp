// 745A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    string ori;
    int cnt = 1;
    cin >> ori;
    string s = ori;
    while(1) {
        s.insert(0,&s[s.size()-1]);
        s.erase(s.size()-1);
        if(s!=ori)
            cnt++;
        if(s==ori)
            break;
    }
    cout << cnt << "\n";
    return 0;
}