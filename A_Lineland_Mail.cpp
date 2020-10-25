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
    for(int i=0; i<n; i++) {
        max = INT_MIN;
        min = INT_MAX;
        for(int j=0; j<n; j++) {
            if(i!=j && abs(v[i]-v[j])>=max)
                max = abs(v[i]-v[j]);
            if(i!=j && abs(v[i]-v[j])<=min)
                min = abs(v[i]-v[j]);
        }
        cout << min << " " << max << endl;
    }
    return 0;
}