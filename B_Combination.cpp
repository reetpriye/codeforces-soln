// 155B
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

bool sortBySec(pair<int, int> a, pair<int, int> b) {
    return a.se > b.se;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].fi >> v[i].se;
    }
    int rem_moves = 1;
    int scores = 0;
    sort(all(v), sortBySec);
    for(int i=0; i<n; i++) {
        if(v[i].se>0) {
            rem_moves--;
            rem_moves += v[i].se;
            scores += v[i].fi;
            v[i].fi = -1;
        }
    }
    sort(lla(v));
    for(int i=0; i<n; i++) {
        if(rem_moves>0 && v[i].fi!=-1) {
            rem_moves--;
            scores += v[i].fi;
        }
    }
    cout << scores;
}

signed main() {
    FAST_IO;

    int T;
    T = 1;
    // cin >> T;
    while(T--) solve();
    return 0;
}