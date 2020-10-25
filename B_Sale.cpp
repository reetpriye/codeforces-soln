// 34B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int sum = 0;
    int n;
    int m;
    cin >> n;
    cin >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<m; i++)
        if(v[i]<0)
            sum += v[i];
    cout << abs(sum) << endl;
    return 0;
}