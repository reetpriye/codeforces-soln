// 509B
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
#define xx      first
#define yy      second
 
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
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<int> tmp;
    tmp = v;
    sort(all(tmp));
    if(tmp.back()>((2*tmp[0])+(k-tmp[0]))) {
        cout << "NO\n";
        return;
    }
    // if(tmp.back()>2*tmp[0] and ) {
    //     cout << "NO";
    //     return;
    // }
    // int maxdiff = tmp.back()-tmp[0];
    // if(maxdiff>2*k) {
    //     cout << "NO";
    //     return;
    // }
    else {
        cout << "YES\n";
        for(int i=0; i<n; i++) {
            ll z = 1;
            while(v[i]--) {
                if(z>k) z=1;
                cout << z << " ";
                z++;
            }
            cout << "\n";
        }
    }
}
 
signed main() {
    FAST_IO;
 
    int T;
    T = 1;
    // cin >> T;
    while(T--) solve();
    return 0;
}