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
        int last = 1;
        cin >> n >> x;
        vector<int> hashTable(101);
        for(int i=0; i<n; i++) {
            cin >> tmp;
            hashTable[tmp]++;
        }
        for(int i=1; i<=100; i++) {
            if(x==-1)
                break;
            if(hashTable[i]==0)
                x--;
            last = i;
        }
        cout << last-1 << endl;      
    }
    return 0;
}