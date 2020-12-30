// 519B 
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
    bool firstFound = false;
    bool secondFound = false;
    vector<int> u(n);
    vector<int> v(n-1);
    vector<int> w(n-2);
    for(int i=0; i<n; i++) {
        cin >> u[i];
    }
    for(int i=0; i<n-1; i++) {
        cin >> v[i];
    }
    for(int i=0; i<n-2; i++) {
        cin >> w[i];
    }
    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    for(int i=0; i<n; i++) {
        if(u[i]!=v[i]) {
            cout << u[i] << "\n";
            break;
        }
    }
    for(int i=0; i<n-1; i++) {
        if(v[i]!=w[i]) {
            cout << v[i] << "\n";
            break;
        }
    }
    return 0;
}