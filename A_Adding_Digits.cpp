// 260A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll a;
    ll b;
    ll n;
    bool flag = false;
    cin >> a >> b >> n;
    a *= 10;
    for(ll i=0; i<=9; i++) {
        if((a+i)%b==0) {
            flag = true;
            a += i;
            break;
        }
    }
    if(flag) {
        string s = to_string(a);
        while(--n)
            s.push_back('0');
        cout << s;
    }
    else {
        cout << "-1";
    }
    return 0;
}