// 670A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int q;
    int r;
    cin >> n;
    r = n%7;
    q = n/7;
    if(r==0)
        cout << 2*q << " " << 2*q;
    else if(r==1)
        cout << 2*q << " " << 2*q+1;
    else if(r>=2 && r<=5)
        cout << 2*q << " " << 2*q+2;
    else // For 6
        cout << 2*q+1 << " " << 2*q+2;
    return 0;
}