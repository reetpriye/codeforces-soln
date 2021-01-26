// 254A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

bool sortBySec(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main() {
    FAST_IO;
    
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    bool isSame = true;
    vector<pair<int, int>> v(2*n);
    for(int i=0; i<2*n; i++) {
        cin >> v[i].second;
        v[i].first = i+1;
    }
    sort(v.begin(), v.end(), sortBySec);
    for(int i=0; i<2*n-1; i+=2) {
        if(v[i].second!=v[i+1].second) {
            isSame = false;
            break;
        }
    }
    if(!isSame) {
        cout << "-1";
        return 0;
    }
    for(int i=0; i<2*n-1; i+=2) {
        cout << v[i].first << " " << v[i+1].first;
        cout << "\n";
    }
    return 0;
}