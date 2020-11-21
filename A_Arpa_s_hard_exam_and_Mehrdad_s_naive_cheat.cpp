// 742A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if(n==0)
        cout << "1\n";
    else if(n%4==0) {
        cout << "6\n";
    }
    else if(n%4==3) {
        cout << "2\n";
    }
    else if(n%4==2) {
        cout << "4\n";
    }
    else cout << "8\n";
    return 0;
}

/*
1378
1 8
2 4
3 2
4 6
5 8
6 4
7 2
8 6
*/