// 1328C 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int n;
        string x;
        string a;
        string b;
        cin >> n;
        cin >> x;
        for(int i=0; i<n; i++) {
            if(x[i]=='0') {
                a += '0';
                b += '0';
            }
            else if(x[i]=='1') {
                a += '1';
                b += '0';
            }
            else {
                a += '1';
                b += '1';
            }
        }
        cout << a << "\n" << b << "\n";
    }
    return 0;
}