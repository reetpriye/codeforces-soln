// 52A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int one = 0;
    int two = 0;
    int thr = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==1)
            one++;
        else if(v[i]==2)
            two++;
        else thr++;
    }
    if(one+two<=thr) {
        cout << one+two << endl;
    }
    else if(one+thr<=two) {
        cout << one+thr << endl;
    }
    else if(two+thr<=one) {
        cout << two+thr << endl;
    }
    return 0;
}
/*
1 
2 
3 
*/