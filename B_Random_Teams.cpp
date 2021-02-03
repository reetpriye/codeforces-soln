// 478B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

ll findFact(ll num) {
    return (num*(num-1))/2;
}

int main() {
    FAST_IO;

    ll n;
    ll m;
    cin >> n >> m;
    if(m==1) {
        cout << findFact(n) << " " << findFact(n);
        return 0;
    }
    ll quo = n/m;
    ll rem = n%m;
    ll res = findFact(quo)*(m-rem); 
    res += findFact(quo+1)*rem;
    cout << res << " ";
    // For maximum
    n -= (m-1);
    cout << findFact(n);
    return 0;
}