// 1420A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        int flag = 0;
        int swapCnt = 0;
        int maxCnt;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        maxCnt = ((n*n-1)/2)-1;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n-1; j++) {
                if(maxCnt<swapCnt) {
                    flag = 1;
                    break;
                }
                if(v[j+1]<v[j]) {
                    swap(v[j+1],v[j]);
                    swapCnt++;
                }
            }
        }
        flag == 1 ? cout << "NO\n": cout << "YES\n";
    }
    return 0;
}
/*
5 3 2 1 4
3 5 2 1 4
3 2 5 1 4
3 2 1 5 4
3 2 1 4 5
2 3 1 4 5
2 1 3 4 5
1 2 3 4 5
*/