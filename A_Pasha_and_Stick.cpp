// 610A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    cin >> n;
    if(n%2!=0 | n==1)
        cout << 0;
    else if((n/2)%2==0)
        cout << n/4-1;
    else
        cout << n/4;
    return 0;
}