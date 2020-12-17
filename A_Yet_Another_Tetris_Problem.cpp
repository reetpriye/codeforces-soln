// 1342A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        // ========First Approach========

        // int n;
        // bool flag = false;
        // cin >> n;
        // vector<int> v(n);
        // sort(v.begin(), v.end());
        // for(int i=0; i<n; i++) {
        //     cin >> v[i];
        // }
        // for(int i=0; i<n-1; i++) {
        //     if(((v[i+1]-v[i])%2)!=0) {
        //         flag = true;
        //         break;
        //     }
        // }
        // cout << (flag ? "NO" : "YES") << "\n";

        // ========Second Approach========
        bool res;
        int n;
        int s = 0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        for(auto i: v)
            s += (i&1);
        res = (s==n || s==0);
        cout << (res?"YES":"NO") << "\n";
    }
    return 0;
}

/*
Some more test cases
2 2 2 2 2 5 2 4 2 3
2 2 2 2 2 2 2 3 4 5
0 0 0 0 0 0 0 3 2 3
2 2 2 2 2 2 2 3 2 3
0 0 0 0 0 0 0 1 0 1
*/