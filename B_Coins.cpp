// 58B
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
#define SIZE 1e6+1

// vector<bool> sieve(SIZE, true);

// void generatePrimeSieve() {
//     sieve[0] = false;
//     sieve[1] = false;
//     for(int i=2; i<SIZE; i++) {
//         if(sieve[i]) {
//             for(int j=i*i; j<SIZE; j+=i) {
//                 sieve[j] = false;
//             }
//         }
//     }
// }

// void solve() {
//     int n;
//     cin >> n;
//     generatePrimeSieve();
//     while(1) {
//         if(n==1) {
//             cout << "1";
//             return;
//         }
//         if(sieve[n]) {
//             cout << n << " 1";
//             return;
//         }
//         cout << n << " ";
//         for(int i=2; i*i<=n; i++) {
//             if(n%i==0) {
//                 n /= i;
//                 break;
//             }
//         }
//     }
// }

void solve() {
    int n;
    cin >> n;
    for(int i=n; i>=1; i--) {
        if(n%i==0) {
            cout << i << " ";
            n = i;
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