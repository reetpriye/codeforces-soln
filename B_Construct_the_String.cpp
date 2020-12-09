// 1335B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n; // Length of the string
        int a; // Length of substring
        int b; // No. of distinct letters
        int k = 0;
        string s;
        string al = "abcdefghijklmnopqrstuvwxyz";
        cin >> n >> a >> b;
        for(int i=0; i<n; i++) {
            for(int j=i; j<a; j++) {
                if(k>=26)
                    k=0;
                s+=al[]
            }
        }
        cout << s << endl;
    }

    return 0;
}