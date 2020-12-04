// 1326B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> x(n);
    vector<int> b(n);
    cout << 0 << " ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(i!=0) {
            x[i] = *max_element(a.begin(), a.begin()+i);
            b[i] = a[i]-x[i];
            cout << b[i] << " ";
        }
    }
    return 0;
}

/*
2 1 2 2 3
0 2 2 2 2
2 -1 0 0 1
*/

/*
a={0,1,2,0,3}, then x={0,0,1,2,2}
    [bi=ai−xi]  
    x={0,0,1,2,2}
    b={0,1,1,−2,1}
*/