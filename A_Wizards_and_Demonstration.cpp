// 168A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x;
    float y;
    int r;
    cin >> n >> x >> y;
    r = ceil(y/100*n);
    if(r<=x)
        cout << "0\n";
    else
        cout << r-x << "\n"; 
    return 0;
}