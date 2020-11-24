// 1005B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    int j;
    string s;
    string t;
    cin >> s >> t;
    i = s.size()-1;
    j = t.size()-1;
    while(i>=0) {
        if(s[i]!=t[j])
            break;
        i--;
        j--;
    }
    cout << i+j+2;
    return 0;
}