// 1199B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int h;
    int l;
    cin >> h >> l;
    float x;
    float y;
    y = sqrt(pow(h,2)+pow(l,2));
    x = sqrt(pow(x,2)+pow(l,2))*h/y;
    cout << fixed << setprecision(13) << x;
    return 0;
}