// 1025A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    string s;
    cin >> n >> s;
    if(n==1) {
        cout << "Yes";
        return 0;
    }
    vector<int> hashTable(27);
    for(int i=0; i<n; i++)
        hashTable[s[i]-97+1]++;
    for(int i=1; i<27; i++) {
        if(hashTable[i]>=2) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}