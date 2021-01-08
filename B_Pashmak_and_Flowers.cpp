// 459B 
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
    cin >> n;
    ll max = LONG_LONG_MIN;
    ll min = LONG_LONG_MAX;
    ll max_cnt;
    ll min_cnt;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]>max)
            max = v[i];
        if(v[i]<min)
            min = v[i];
    }
    max_cnt = count(v.begin(), v.end(), max);
    min_cnt = count(v.begin(), v.end(), min);
    if(max==min) {
        if(!(max_cnt&1)) {
            max_cnt /= 2;
            min_cnt /= 2;
        }
        else {
            max_cnt /= 2;
            min_cnt /= 2;
            min_cnt++;
        }
    }
    cout << abs(min-max) << " " << max_cnt*min_cnt;
    return 0;
}