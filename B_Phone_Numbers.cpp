// 151B
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
    int z, p = -1 ,t = -1 ,g = -1;
	cin >> z;
	string fint, finp, fing;
	while(z--) {
		int k, pizza=0, girl=0, taxi=0;
		char tem;
		string str;
		cin >> k >> str;
		for(int i=0;i<k;i++) {
			int a,b,c;
			cin>>a>>tem>>b>>tem>>c;
			if(a%10==a/10 && a==b && a==c)
				taxi++;
			else if(a/10>a%10 && a%10>b/10 && b/10>b%10 && b%10>c/10 && c/10>c%10)
				pizza++;
			else
				girl++;
		}
		if(taxi>t) fint=" "+str, t=taxi;
		else if(taxi==t) fint+=", "+str;
		if(pizza>p) finp=" "+str, p=pizza;
		else if(pizza==p) finp+=", "+str;
		if(girl>g) fing=" "+str, g=girl;
		else if(girl==g) fing+=", "+str;
	}
	cout<<"If you want to call a taxi, you should call:"<<fint<<"."<<endl;
	cout<<"If you want to order a pizza, you should call:"<<finp<<"."<<endl;
	cout<<"If you want to go to a cafe with a wonderful girl, you should call:"<<fing<<"."<<endl;
}

signed main() {
    FAST_IO;

    int T;
    T = 1;
    // cin >> T;
    while(T--) solve();
    return 0;
}