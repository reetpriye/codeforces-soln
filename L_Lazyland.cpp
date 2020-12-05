// 1089L 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

bool sortBySec(pair<int,int> a, pair<int, int> b) {
    return a.second<b.second;
}

int main() {
    FAST_IO;

    int n; // No. of idlers
    int k; // No. of jobs
    int el_found = 0;
    int res = 0;
    int q;
    int j; // For loop
    cin >> n;
    cin >> k;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].first;
    for(int i=0; i<n; i++)
        cin >> v[i].second;
    sort(v.begin(), v.end(), sortBySec);
    q = k;
    while(q) {
        for(int i=0; i<n; i++) {
            if(v[i].first==q) {
                for(int j=i; j<n; j++) {
                    if(v[i].first==q) {
                        v[i].first = 0;
                        v[i].second = 0;
                        el_found++;
                        break;
                    }
                }
            }
        }
        q--;
    }
    q = k-el_found; // Now stores how many work is left
    while(q--) {
        j = 0;
        while(j<n) {
            if(v[j].first!=0) {
                res += v[j].second;
                break;
            }
            j++;
        }
    }
    cout << res;
    return 0;
}

/*
7
1 2 3 4 5 6 7
1* 1 3 1 5 3* 7 1*
5  7 4 8 1 3  5 2
After sorting,
5* 1* 3* 3 1 7* 1 1
1  2  3  4 5 5  7 8
*/