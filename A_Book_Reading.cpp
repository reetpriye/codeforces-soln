// 884A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int t;
    cin >> n >> t;
    // t is in seconds
    // n is the number of days
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++) {
        t-=86400-v[i];
        if(t<=0) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}