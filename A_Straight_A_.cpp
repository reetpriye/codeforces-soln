// 810A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int k;
    float sum = 0;
    int av;
    int cnt = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    av = round(sum/n);
    while(av!=k) {
        n++;
        sum += k;
        av = round(sum/n);
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}