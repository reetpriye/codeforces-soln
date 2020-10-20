// 556A 
// Author: REET
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int one=0;
    int zero=0;
    string s;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='1')
            one++;
        else zero++;
    }
    cout << abs(one-zero) << endl;
}