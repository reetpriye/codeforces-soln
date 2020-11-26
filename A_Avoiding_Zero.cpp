// 1427A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    start:
    while(T--) {
        int n;
        int sum = 0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0; i<n; i++) {
            sum += v[i];
            if(sum==0) {
                cout << "NO\n";
                goto start;
            }
        }
        cout << "YES\n";
        for(auto i:v)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}