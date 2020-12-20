// 268B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    cin >> n;
    int i = n-1;
    int sum = 0;
    sum += n;
    while(i!=0) {
        sum += i*(n-i);
        i--;
    }
    cout << sum;
    return 0;
}