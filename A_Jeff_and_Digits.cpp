// 352A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    string res;
    int sum = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    for(int i=0; i<n; i++) {
        if(v[i]==5 && sum%9==0)
            res += to_string(v[i]);
        else
            sum -= v[i];
    }
    for(int i=0; i<n; i++) {
        if(v[i]==0 && res[0]!='0')
            res += to_string(v[i]);
    }
    if(res.empty() || res.back()!='0')
        res = "-1";
    cout << res;
    return 0;
}