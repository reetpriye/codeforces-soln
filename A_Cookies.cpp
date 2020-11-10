// 129A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int sum = 0;
    int odd_cnt = 0;
    int even_cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
        v[i]%2==0 ? even_cnt++ : odd_cnt++;
    }
    sum%2==0 ? cout << even_cnt : cout << odd_cnt;
    cout << "\n";
    return 0;
}