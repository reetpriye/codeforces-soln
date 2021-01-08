// 266B
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
    int t;
    int i;
    string s;
    cin >> n >> t;
    cin >> s;
    while(t--) {
        i = 0;
        while(i<s.size()-1) {
            if(s[i]=='B' && s[i+1]=='G') {
                swap(s[i],s[i+1]);
                i += 2;
            }
            else i++;
        }
    }
    cout << s;
    return 0;
}