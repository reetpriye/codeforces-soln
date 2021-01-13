// 222A 
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
    int k;
    int idx = 0;
    bool flag = false;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=k-1; i<n-1; i++) {
        if(v[i]!=v[i+1]) {
            flag = true;
            break;
        }
    }
    if(!flag) {
        for(int i=k-1; i>0; i--) {
            if(v[i]!=v[i-1]) {
                idx = i;
                break;
            }
        }
    }
    flag ? cout << -1 : cout << idx;
    return 0;
}