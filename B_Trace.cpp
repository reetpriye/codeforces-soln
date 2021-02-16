// 157B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

#define PI 3.1415926536
typedef long long ll;
int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<double> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double ans = 0.0;
    int z = n-1;
    cout << fixed << setprecision(10);
    if(n&1) {
        while(1) {
            if(z==0) {
                ans += v[z]*v[z];
                ans *= PI;
                break;
            }
            ans += ((v[z]*v[z])-(v[z-1]*v[z-1]));
            z -= 2;
        }
        cout << ans;
    }
    else {
        while(z!=-1) {
            ans += ((v[z]*v[z])-(v[z-1]*v[z-1]));
            z -= 2;
        }
        ans *= PI;
        cout << ans;
    }
    return 0;
}