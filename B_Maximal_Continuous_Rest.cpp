// 1141B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int i = 0;
    int cnt = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> res;
    while(i!=1) {
        i++;
    }
    while(1) {
        if(i<n-1 && v[i]==v[i+1]==1) {
            cnt++;
            if(i==n-1) {
                i = 0;
            }
            else i++;
        }
        else {
            res.push_back(cnt+1);
            cnt = 0;
            i++;
        }
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}