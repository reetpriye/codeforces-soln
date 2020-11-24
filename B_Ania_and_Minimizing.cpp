// 1230B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k;
    int z = 1;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n==1 && k==1)
        cout << "0";
    else {
        if(k>0 && s[0]!='1') {
            s[0] = '1';
            k--;
        }
        while(1) {
            if(k==0)
                break;
            if(s[z]!='0') {
                s[z] = '0';
                k--;
            }
            z++;
        }
        cout << s;
    }
    return 0;
}