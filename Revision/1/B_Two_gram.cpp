// 977B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int max = 0;
    string s;
    string ms;
    cin >> n;
    cin >> s;
    unordered_map<string, ll> u;
    for(ll i=0; i+1<n; ++i) {
        if(++u[s.substr(i,2)] > max) {
            max = u[s.substr(i,2)];
            ms = s.substr(i,2);
        }
    }
    cout << ms << "\n";
    return 0;
}