//  
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
        int m;
        int sum = 0;
        int x;
        int y;
        cin >> n;
        vector<int> r(n);
        for(int i=0; i<n; i++) {
            cin >> r[i];
            sum += r[i];
            r[i] = sum;
        }
        cin >> m;
        vector<int> b(m);
        sum = 0;
        for(int i=0; i<m; i++) {
            cin >> b[i];
            sum += b[i];
            b[i] = sum;
        }
        x = *max_element(r.begin(), r.end());
        y = *max_element(b.begin(), b.end());
        if(x>0 && y<=0)
            cout << x << "\n";
        else if(y>0 && x<=0)
            cout << y << "\n";
        else if(x<0 && y<0)
            cout << "0\n";
        else
            cout << x+y << "\n";
    }
    return 0;
}