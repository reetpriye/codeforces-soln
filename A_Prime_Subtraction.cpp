// 1238A` 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n) {
    if(n<=1)
        return false; 
    if(n<=3)
        return true; 
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i=i+6)
        if(n%i==0 || n%(i+2)==0)
           return false; 
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        ll x;
        ll diff;
        ll y;
        cin >> x >> y;
        if(isPrime(x-y))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}