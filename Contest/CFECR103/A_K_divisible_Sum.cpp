//  
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
    while(T--) {
        ll n;
        ll k;
        cin >> n >> k;
        ll temp = k;
        ll table = 2;
        while(n>k) {
            k = temp*table;
            table++;
        }
        if(k%n==0)
            cout << (k/n) << "\n";
        else
            cout << (k/n)+1 << "\n";
    }
    return 0;
}