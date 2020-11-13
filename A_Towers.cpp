// 37A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int max = INT_MIN;
    int sum = 0;
    int res = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> hashTable(1001);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        hashTable[v[i]]++;
    }
    for(int i=0; i<1001; i++) {
        if(hashTable[i]>max)
            max = hashTable[i];
    }
    for(int i=0; i<1001; i++) {
        if(hashTable[i]>=1)
            res++;
        if(hashTable[i]>max)
            max = hashTable[i];
    }
    cout << max << " " << res;
}