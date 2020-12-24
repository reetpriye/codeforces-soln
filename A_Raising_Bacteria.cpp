// 579A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int cnt = 0;
    cin >> n;
    // while(n!=0) {
    //     if(((1&n)==0))
    //         n >>= 1;
    //     else {
    //         n--;
    //         cnt++;
    //     }
    // }
    // Another best approach
    // Just get the numbers of setbit
    // using __builtin_popcount STL
    // Because ultimately all the set bits
    // are going to the extreme right and
    // finally changed to 0
    cout << __builtin_popcount(n);
    return 0;
}