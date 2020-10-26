// 709A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int b;
    int d;
    ll sum = 0;
    int cnt = 0;
    cin >> n >> b >> d;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++) {
        if(v[i]<=b)
            sum += v[i];
        if(sum>d) {
            sum = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}