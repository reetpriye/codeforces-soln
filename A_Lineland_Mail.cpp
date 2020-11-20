// 567A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int max;
    int min;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    cout << v[1]-v[0] << " ";
    cout << v.back()-v[0] << " \n";
    for(int i=1; i<n; i++) {
        if(v[i+1]-v[i]<=v[i]-v[i-1]) {
            min = v[i+1]-v[i];
        }
        else {
            min = v[i]-v[i-1];
        }
        if(v.back()-v[i]>= v[i]-v.front()) {
            max = v.back()-v[i];
        }
        else {
            max = v[i]-v.front();
        }
        if(max != 0 && min != 0)
            cout << min << " " << max << "\n";
    }
    return 0;
}