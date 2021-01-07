// 1365A 
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
        int m;
        int tmp;
        cin >> n >> m;
        vector<vector<int>> v(n);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> tmp;
                v[i].push_back(tmp);
            }
        }
        while(1) {
            
        }


    }
    return 0;
}