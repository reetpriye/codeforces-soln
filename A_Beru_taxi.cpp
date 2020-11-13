// 706A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a;
    int b;
    int n;
    cin >> a >> b >> n;
    vector<vector<double>> v(n);
    vector<vector<double>> res(n);
    vector<double> w(3);
    for(int i=0; i<n; i++) {
        cin >> w[0] >> w[1] >> w[2];
        v.push_back(w);
        w.clear();
    }

    for(int i=0; i<n; i++) {
        res.push_back(v[i][0]-)
    }
    return 0;
}