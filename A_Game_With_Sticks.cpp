// 451A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    int z;
    cin >> n >> m;
    n >= m ? z = m: z = n;
    if(z==0) {
        cout << "Akshat" << endl;
        return 0;
    }
    z % 2 != 0 ? cout << "Akshat" << endl : cout << "Malvika" << endl;
    return 0;
}