// 433A
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
    cin >> n;
    int oh = 0;
    int th = 0;
    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        tmp==100 ? oh++ : th++;
    }
    if(th&1)
        oh -= 2;
    (oh%2==0 && oh>=0) ? cout << "YES" : cout << "NO";
    return 0;
}