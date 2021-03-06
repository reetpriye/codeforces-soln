// 1327A 
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
        int n;
        int k;
        cin >> n >> k;
        if((n-k)%2!=0 || k>sqrt(n))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}