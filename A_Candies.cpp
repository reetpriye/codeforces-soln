// 1343A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// k>1
// x>0
int main() {
    int T;
    cin >> T;
    while(T--) {
        double n;
        double sum = 3;
        ll k = 2;
        ll x;
        cin >> n;
        while(1) {
            if((floor(sum/n))==(sum/n)) {
                cout << ll(sum/n) << endl; 
                break;
            }
            sum += pow(2,k-1);
            k++;
        }
    }
    return 0;
}
// 1+2+4+8+2^k-1 = n/x