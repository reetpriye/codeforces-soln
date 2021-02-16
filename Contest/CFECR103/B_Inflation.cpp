//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {

    int T;
    cin >> T;
    while(T--) {
        ll n;
        ll k;
        cin >> n >> k;

        vector<ll> v(n);
        vector<ll> s(n);
        vector<ll> diff;
        ll i, j;
        ll sum = 0;
        for(ll a=0; a<n; a++) {
            cin >> v[a];
            sum += v[a];
            s[a] = sum*k;
            v[a] *= 100;
        }
        i = 0;
        j = 1;
        while(j<n) {
            // if(((v[j]*100)-(s[i]*k))>0)
            //     diff.push_back(((v[j]*100)-(s[i]*k)));
            if((v[j]-s[i])>0)
                diff.push_back((v[j]-s[i]));
            i++;
            j++;
        }
        if(!diff.empty()) {
            while(1) {
                
            }
        }
        if(diff.empty())
            cout << "0\n";
        else
            cout << mine(diff) << "\n";
    }
    return 0;
}