// 621A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LL;

int main() {
    int n;
    cin >> n;
    LL sum = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if(sum%2 == 0) {
        cout << sum << endl;
        return 0;
    }
    for(int i=0; i<n; i++) {
        if(v[i]%2==0)
            continue;
        else {
            sum -= v[i];
            cout << sum << endl;
            break;
        }
    }
    return 0;
}