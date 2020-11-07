// 801B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string x;
    string y;
    string z;
    cin >> x >> y;
    for(int i=0; i<x.size(); i++) {
        if(y[i]=='z') {
            cout << -1 << "\n";
            return 0;
        }
        if(x[i]==y[i])
            z += x[i]+1;
        else if(x[i]<y[i]) {
            cout << -1 << "\n";
            return 0;
        }
        else
            z += y[i];
    }
    cout << z << "\n";
    return 0;
}