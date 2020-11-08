// 379A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a;
    int b;
    int ext;
    int rem;
    int sum;
    cin >> a >> b;
    sum = a;
    while(a>=b) {
        ext = a/b;
        rem = a%b;
        sum += ext;
        a = ext;
        a += rem;
    }
    cout << sum << "\n";
    return 0;
}