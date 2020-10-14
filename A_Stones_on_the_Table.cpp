//  266A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    string s;
    cin >> s;
    for(int i=0; i<n-1; i++) {
        if(s[i]==s[i+1])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}