// 515A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int b;
    int s;
    cin >> a >> b >> s;
    if(a<0)
        a *= -1;
    if(b<0)
        b *= -1;
    if(s<(a+b))
        cout << "No";
    else if((s-(a+b))%2==0)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}

// (x + 1, y)
// (x - 1, y)
// (x, y + 1)
// (x, y - 1)