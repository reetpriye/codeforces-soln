// 253A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FAST_IO;
    string res;
    int n;
    int m;
    cin >> n >> m;
    if(n>=m) {
        while(1) {
            if(!n && !m)
                break;
            if(n) {
                res += 'B';
                n--;
            }
            if(m) {
                res += 'G';
                m--;
            }
        }
    }
    else {
        while(1) {
            if(!n && !m)
                break;
            if(m) {
                res += 'G';
                m--;
            }
            if(n) {
                res += 'B';
                n--;
            }
        }
    }
    cout << res;
    return 0;
}