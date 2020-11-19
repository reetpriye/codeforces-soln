// 127A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int k;
    cin >> n >> k;
    int v[n][2];
    double dis=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            cin >> v[i][j]; 
        }
    }
    for(int i=0; i<n-1; i++) {
        dis += sqrt(pow(v[i][0]-v[i+1][0],2)+pow(v[i][1]-v[i+1][1],2));
    }
    cout << fixed << setprecision(9) << dis/50*k << "\n";
    return 0;
}