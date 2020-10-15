// 318A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    ll m;
    cin >> n >> m;
    if(m==n && n%2==0) {
        cout << m << endl;
        return 0;
    }
    if(n%2==0) {
        if(m>n/2) {
            cout << 2*(m%(n/2)) << endl;
            return 0;
        }
        else {
            cout << 2*m-1 << endl;
            return 0;
        }
    }
    if(m>((n/2)+1)) { 
        cout << 2*(m%((n/2)+1)) << endl;
        return 0;
    }
    else {
        cout << 2*m-1 << endl;
        return 0;
    }
}