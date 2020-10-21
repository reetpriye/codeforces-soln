// 460A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int z;
    int tmp;
    int i = 0;
    cin >> n >> m;
    if(m>n) {
        cout << n << endl;
        return 0;
    }
    if(m==n) {
        cout << n+1 << endl;
        return 0;
    }
    z = n + n/m;
    i += z-n;
    while(((z-n)/m>0)) {
        n=z;
        i+=((z-n)/m);
        z+=((z-n)/m);
    }
    if((z-n)/m==0)
        i++;
    cout << n+i << endl;
    return 0;
}

// 10 2 -> 15 + 2 -> 17