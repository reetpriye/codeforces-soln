// 1295A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v = {6,2,5,5,4,5,6,3,7,6};
        for(int i=9; i>=0; i--) {
            if(v[i]==n)
                cout << i << endl;
        }
        
    }
    return 0;
}