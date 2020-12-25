// 1211A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int tmp;
    int a = 0;
    int a_val = 0;
    int b = 0;
    int b_val = 0;
    int c = 0;
    int c_val = 0;
    vector<pair<int, int>> v(3);
    bool aFound = false;
    bool bFound = false;
    bool cFound = false;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        if(tmp>v[0].first && !aFound) {
            v[0].first = tmp;
            v[0].second = i+1;
            aFound = true;
        }
        else if(tmp!=v[0].first && aFound && !bFound) {
            v[1].first = tmp;
            v[1].second = i+1;
            bFound = true;
        }
        else if(tmp!=v[0].first && tmp!=v[1].first && aFound && bFound && !cFound) {
            v[2].first = tmp;
            v[2].second = i+1;
            cFound = true;
        }
    }
    sort(v.begin(), v.end());
    if(aFound && bFound && cFound)
        cout << v[0].second << " " << v[1].second << " " << v[2].second;
    else
        cout << "-1 -1 -1";
    return 0;
}