// 1330A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        int x;
        int tmp;
        int k = 1;
        cin >> n >> x;
        vector<bool> hashTable(201);
        for(int i=0; i<n; i++) {
            cin >> tmp;
            hashTable[tmp] = true;
        }
        while(1) {
            if(!hashTable[k]) {
                x--;
            }
            if(x==0)
                break;
            k++;
        }
        k++;
        while(hashTable[k])
            k++;
        cout << k-1 << "\n";
    }
    return 0;
}