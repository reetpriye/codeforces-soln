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
        int d;
        bool found = false;
        bool great = false;
        cin >> n >> d;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        for(int i=0; i<n; i++) {
            if(v[i]>d)
                great = true;
        }
        if(!great) {
            cout << "YES\n";
            continue;
        } 
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(v[i]+v[j]<=d && i!=j) {
                    found = true;
                }
            }
        }
        found ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}