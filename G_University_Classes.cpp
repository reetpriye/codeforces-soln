// 847G 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> hashTable(8);
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        for(int j=0; j<7; j++) {
            if(v[i][j]=='1')
                hashTable[j+1]++;
        }
    }
    cout << *max_element(hashTable.begin()+1, hashTable.end());
    return 0;
}