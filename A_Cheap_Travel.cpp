// 466A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int m;
    int a;
    int b;
    int res = 0;
    int rem;
    cin >> n >> m >> a >> b;
    (n/m)*b <= n*a ? res = (n/m)*b : res = n*a;
    if(n%m!=0) {
        rem = n%m;
        b <= rem*a ? res += b : res += rem*a;
    }
    cout << res;
    return 0;
}