// 747A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int a;
    int b;
    cin >> n;
    if(floor(sqrt(n))==sqrt(n)) {
        cout << sqrt(n) << " " << sqrt(n) << endl;
        return 0;
    }
    a = sqrt(n);
    b = sqrt(n);
    if(n%a==0) {
        cout << a << " " << n/b << endl;
        return 0;
    }
    while(n%a!=0)
        a--;
    while(1) {
        if(a*b==n) {
            cout << a << " " << b << endl;
            return 0;
        }
        else b++;
    };
    return 0;
}