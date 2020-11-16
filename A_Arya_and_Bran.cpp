// 839A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int k;
    int sum = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    return 0;
}