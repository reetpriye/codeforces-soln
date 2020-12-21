// 102B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    string tmp;
    string s;
    ll sum = 0;
    int cnt = 1;
    cin >> s;
    if(s.size()==1) {
        cout << 0;
        return 0;
    }
    for(int i=0; i<s.size(); i++) {
        sum += s[i]-48;
    }
    while(sum>9) {
        tmp = to_string(sum);
        sum = 0;
        for(int i=0; i<tmp.size(); i++) {
            sum += tmp[i]-48;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}