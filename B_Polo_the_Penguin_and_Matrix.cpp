// 289B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

template <typename T>inline T gcd(T a,T b){ if(b==0)return a; return gcd(b,a%b);}
template <typename T>inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template <typename T>inline T dis(T x1,T y1,T x2, T y2){return sqrt( sqr(x1-x2) + sqr(y1-y2) );}
template<class T> inline bool odd(T x){return x&1;}
template<class T> inline bool even(T x){return !odd(x);}
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

#define int     long long
#define ll      unsigned long long

#define mod     1000000007
#define PI      2*acos(0.0)
#define INF     LLONG_MAX

#define pb      push_back
#define pf      push_front
#define ppb     pop_back
#define ppf     pop_front
#define mp      make_pair
#define fi      first
#define se      second

#define all(x)  (x).begin(),(x).end()
#define lla(x)  (x).rbegin(), (x).rend()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define sz(x)   (int)((x).size())
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define ppc     __builtin_popcount
#define ppcll   __builtin_popcountll

void solve() {
    int n;
    int m;
    int d;
    cin >> n >> m >> d;
    vector<int> v(n*m);
    for(int i=0; i<n*m; i++) {
        cin >> v[i];
    }

    // Complexity - O(n^2*m^2)
    // int sum;
    // int mini = INF;
    // for(int i=0; i<n*m; i++) {
    //     sum = 0;
    //     for(int j=0; j<n*m; j++) {
    //         if(abs(v[i]-v[j])%d!=0) {
    //             cout << "-1";
    //             return;
    //         }
    //         sum += (abs(v[i]-v[j])/d);
    //     }
    //     mini = min(sum, mini);
    // }
    // cout << mini;
    
    // Other approach
    // Complexity: O(n*m)
    sort(all(v));
    int sum = 0;
    int mid_el = v[(n*m)/2];
    for(int i=0; i<n*m; i++) {
        if(abs(v[i]-mid_el)%d) {
            cout << "-1";
            return;
        }
        sum += (abs(v[i]-mid_el)/d);
    }
    cout << sum;
}

signed main() {
    FAST_IO;

    int T;
    T = 1;
    // cin >> T;
    while(T--) solve();
    return 0;
}