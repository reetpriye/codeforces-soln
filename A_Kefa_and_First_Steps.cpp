// 580A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int cnt = 1;
    cin >> n;
    vector<int> u(n);
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> u[i];
    }
    v.push_back(1);
    for(int i=0; i<n-1; i++) {
        if(u[i]<=u[i+1]) {
            cnt++;
            v.push_back(cnt);
        }
        else cnt = 1;
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}