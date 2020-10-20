// 1141B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int cnt = 0;
    int max = 0;
    int frnt = 0;
    int bck = 0;
    int k = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(v[0]==1 && v[n-1]==1) {
        while(v[k]!=0) {
            frnt++;
            k++;
        }
        k = n-1;
        while(v[k]!=0) {
            bck++;
            k--;
        }
    }
    for(int i=0; i<n; i++) {
        if(v[i]==1)
            cnt++;
        else cnt = 0;
        if(cnt>=max)
            max = cnt;
    }
    frnt+bck >= max ? cout << frnt+bck << endl: cout << max << endl;
    return 0;
}