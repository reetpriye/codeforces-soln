// 334A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int z = 0;
    cin >> n;
    int i = 1;
    int j = n*n;
    while(i<j) {
        cout << i++ << " " << j-- << " ";
        z += 2;
        if(z==n) {
            cout << "\n";
            z = 0;
        }
    }

    return 0;
}