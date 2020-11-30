// 389A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    bool isAllElementSame = false;
    int sum = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    while(!isAllElementSame) {
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0; i<n-1; i++) {
            if(v[i]>v[i+1]) {
                v[i] -= v[i+1];
            }
        }
        for(int i=0; i<n; i++) {
            if(v[i]==v[i+1])
                isAllElementSame = true;
            else {
                isAllElementSame = false;
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
        sum += v[i];
    cout << sum;
    return 0;
}

// 45 12 27 30 18
// 45 30 27 18 12
// 12 18 27 30 45
// 12 6  9  3  15
// 15 12 9  6  3
// 3  3  3  3  3

// 2 4 6
// 2 2 2

// 12 18
// 18 12
// 6 12
// 12 6
// 6 6