// 299B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    bool flag = true;
    int n;
    int hcnt = 0;
    int k;
    cin >> n >> k;
    vector<char> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(hcnt>=k) {
            flag = false;
            break;
        }
        if(v[i]=='#')
            hcnt++;
        else 
            hcnt = 0;
    }
    if(!flag)
        cout << "NO\n";
    else cout << "YES\n";
    return 0;
}