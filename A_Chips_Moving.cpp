// 1213A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<int> v(n);
    ll odd_sum = 0;
    ll even_sum = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]%2==0)
            even_sum++;
        else
            odd_sum++; 
    }
    cout << min(odd_sum, even_sum);
    return 0;
}