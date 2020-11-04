// 1204B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int l;
    int r;
    int el = 1;
    int min = 0;
    int max = 0;
    int i = 0;
    cin >> n >> l >> r;
    while(i<l) {
        min += el;
        el *= 2;
        i++;
    }
    i = 0;
    el = 1;
    while(i<r) {
        max += el;
        el *= 2;
        i++;
    }
    el /= 2;
    min += n-l;
    max += el*(n-r);
    cout << min << " " << max << "\n";
    return 0;
}