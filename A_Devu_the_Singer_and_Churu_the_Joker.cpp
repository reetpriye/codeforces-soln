// 439A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int d;
    int sum = 0;
    cin >> n >> d;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if((sum+((n-1)*10))<=d)
        cout << (((d-(sum+((n-1)*10)))/5)+((n-1)*2)) << endl;
    else cout << -1 << endl;
    return 0;
}