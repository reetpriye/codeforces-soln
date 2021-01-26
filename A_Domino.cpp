// 353A 
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
    int up = 0;
    int lo = 0;
    bool present = false;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
        up += v[i].first;
        lo += v[i].second;
    }
    if((!(up&1)) && (!(lo&1))) {
        cout << "0";
    }
    else if((up&1) && (lo&1)) {
        for(int i=0; i<n; i++) {
            if((v[i].first&1) && (!(v[i].second&1))) {
                present = true;
                break;
            }
            if(!(v[i].first&1) && (v[i].second&1)) {
                present = true;
                break;
            }
        }
        present ? cout << "1" : cout << "-1";
    }
    else {
        cout << "-1";
    }
    return 0;
}