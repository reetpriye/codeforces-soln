// 432B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define fi first
#define se second


typedef long long ll;

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    vector<int> fir(1e5+1);
    vector<int> sec(1e5+1);
    vector<int> home(n, n-1);
    vector<int> away(n, n-1);
    for(int i=0; i<n; i++) {
        cin >> p[i].fi >> p[i].se;
        fir[p[i].fi]++;
    }
    for(int i=0; i<n; i++) {
        if(p[i].fi==p[i].se) {
            if(fir[p[i].se]>1) {
                home[i] += fir[p[i].se];
                away[i] -= fir[p[i].se];
            }
        }
        else if(fir[p[i].se]>0) {
            home[i] += fir[p[i].se];
            away[i] -= fir[p[i].se];
        }
    }
    for(int i=0; i<n; i++) {
        cout << home[i] << " " << away[i] << "\n";
    }
    return 0;
}