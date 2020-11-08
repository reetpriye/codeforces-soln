// 424A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int x = 0;
    int X = 0;
    int i = 0;
    int k = 0;
    string s;
    cin >> n; 
    cin >> s;
    for(int i=0; i<n; i++)
        s[i]=='x'? x++ : X++;
    while(x>X && i<abs(x-X)/2) {
        if(s[k]=='x') {
            s[k]='X';
            i++;
        }
        k++;
    }
    i = 0;
    k = 0;
    while(X>x && i<abs(x-X)/2) {
        if(s[k]=='X') {
            s[k]='x';
            i++;
        }
        k++;
    }
    cout << abs(x-X)/2 << "\n" << s << "\n";
    return 0;
}

// XXXXXXXXXXxx
// xxxxXXXXXXxx