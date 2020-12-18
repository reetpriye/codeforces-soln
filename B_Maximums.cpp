// 1326B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    // a = b+x
    vector<int> x(n);
    vector<int> b(n);
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }
    return 0;
}

/*
b  | 2 3 5 7 10
x  | 0 2 3 5 7
a  | 2 1 2 2 3

a  | 2 1 2 2 3
*/

/*
a={0,1,2,0,3}
x={0,0,1,2,2}
[bi=ai−xi]  
x={0,0,1,2,2}
b={0,1,1,−2,1}
*/