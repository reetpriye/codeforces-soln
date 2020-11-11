// 149A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int k;
    int sum = 0;
    int cnt = 0;
    cin >> k;
    vector<int> v(12);
    for(int i=0; i<12; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<12; i++) {
        if(sum>=k) {
            cout << cnt << "\n";
            return 0;
        }
        sum += v[i];
        cnt++;
    }
    if(sum>=k) {
        cout << cnt << "\n";
        return 0;
    }
    cout << "-1\n";
    return 0;
}