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

    double n;
    double l;
    double max_diff = LONG_LONG_MIN;
    cin >> n >> l;
    vector<double> v(n);
    for(double i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(double i=0; i<n-1; i++) {
        max_diff = max(max_diff, v[i+1]-v[i]);
    }
    (max_diff/2)<(max(v[0], (l-v.back()))) ?
    cout << setprecision(10) << fixed << (max(v[0], (l-v.back()))) : 
    cout << setprecision(10) << fixed << (max_diff/2);
    return 0;
}