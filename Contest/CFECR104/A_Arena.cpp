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
        int cnt = 0;
        cin >> n;
        int mini = INT_MAX;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mini = min(mini, v[i]);
        }
        for(int i=0; i<n; i++) {
            if(v[i]==mini)
                cnt++;
        }
        cout << n-cnt << endl;
    }
    return 0;
}