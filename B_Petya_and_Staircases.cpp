// 362B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    ll m;
    cin >> n >> m;
    if(m==0) {
        cout << "YES";
        return 0;
    }
    vector<ll> v(m);
    for(ll i=0; i<m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0]==1 || v.back()==n) {
        cout << "NO";
        return 0;
    }
    bool flag = false;
    for(ll i=0; i<m-2; i++) {
        if(v[i]+1==v[i+1] && v[i]+2==v[i+2]) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "NO" : "YES");
    return 0;
}