// 1300B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v(2*n);
        vector<int> a;
        vector<int> b;
        for(int i=0; i<2*n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for(int i=0; i<2*n; i++) {
            if(i%2==0)
                a.push_back(v[i]);
            else
                b.push_back(v[i]);
        }
        cout << abs(a[a.size()/2]-b[b.size()/2]) << "\n";
    }
    return 0;
}