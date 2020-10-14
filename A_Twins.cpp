// 160A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int sum1 = 0;
    int sum2 = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum1 += v[i];    
    }
    sum1 /= 2;
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; i++) {
        sum2 += v[i];
        if(sum2>sum1) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << n << endl;
}