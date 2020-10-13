// 4A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    if(n == 2) {
        cout << "NO\n";
        return 0;
    }
    n % 2 == 0 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}