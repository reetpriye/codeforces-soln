// 991B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k = 0;
    cin >> n;
    float sum = 0;
    float av;
    int cnt = 0;
    vector<float> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    while(1) {
        av = sum/n;
        if(av>=4.5) {
            cout << cnt;
            break;
        }
        sum -= v[k++];
        sum += 5;
        cnt++;
    }
    return 0;
}