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
        int n;
        cin >> n;
        int maxi = INT_MIN;
        int tmp;
        unordered_map<int, int> hash;
        for(int i=0; i<n; i++) {
            cin >> tmp;
            hash[tmp]++;
            maxi = max(maxi, hash[tmp]);
        }
        cout << maxi << "\n";
    }
    return 0;
}