// Upsolve 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    // sqrt(2b+1), b, b+1
    while(T--) {
        ll n;
        cin >> n;
        ll b = n-1;
        ll max_val_a = sqrt(2*b+1);
        cout << ((max_val_a-1)/2) << "\n";
    }
    return 0;
}