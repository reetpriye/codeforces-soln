// 673A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(v[0]>15) {
        cout << "15" << endl;
        return 0;
    }
    if(n==1) {
        cout << v[0]+15 << endl;
        return 0;
    }
    for(int i=0; i<n-1; i++) {
        if(v[i+1]-v[i]>15) {
            cout << v[i]+15 << endl;
            return 0;
        }
    }
    if(v.back()>74) {
        cout << "90" << endl;
        return 0;
    }
    else cout << v.back()+15 << endl;
    return 0;
}