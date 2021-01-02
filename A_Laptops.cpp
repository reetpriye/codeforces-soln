// 456A 
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
    bool ansFound = false;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++) {
        if(v[i+1].first!=v[i].first && v[i+1].second<v[i].second) {
            ansFound = true;
            break;
        }
    }
    ansFound ? 
        cout << "Happy Alex":
        cout << "Poor Alex";
    return 0;
}