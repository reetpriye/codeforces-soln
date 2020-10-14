// 546A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a;
    int b;
    int c;
    int sum = 0;
    cin >> a >> b >> c;
    for(int i=1; i<=c; i++) {
        sum += i*a;
    }
    if(b<sum) {
        cout << sum-b << endl;
    }
    else cout << "0" << endl;
    return 0;
}