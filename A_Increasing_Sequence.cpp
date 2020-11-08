// 11A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int z = 1;
    int ori;
    int cnt = 0;
    int d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(i!=0 && v[i]<=v[i-1]) {
            ori = v[i];
            while(1) {
                v[i] = v[i-1]+z;
                if((v[i]-ori)%d==0) {
                    cnt += (v[i]-ori)/d;
                    z = 1;
                    break;
                }
                z++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}