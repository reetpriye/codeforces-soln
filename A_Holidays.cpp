// 670A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int rem;
    int quo;
    cin >> n;
    if(n==6) {
        cout << "1 2\n";
        return 0;
    }
    if(n==7) {
        cout << "2 2\n";
        return 0;
    }
    rem = n%7;
    quo = n/7;
    cout << quo*2 << " ";
    if(rem>2)
        cout << (quo*2)+2 << "\n";
    else
        cout << (quo*2)+rem << "\n";
    return 0;
}