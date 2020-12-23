// 219A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int k;
    int rep;
    string s;
    string res;
    cin >> k;
    cin >> s;
    vector<int> hashTable(27);
    for(int i=0; i<s.size(); i++) {
        hashTable[s[i]-97]++;
    }
    for(int i=0; i<27; i++) {
        if(hashTable[i]!=0 && hashTable[i]%k!=0) {
            cout << -1;
            return 0;
        }
    }
    for(int i=0; i<27; i++) {
        rep = hashTable[i]/k;
        while(rep--) {
            res += (i+97);
        }
    }
    while(k--)
        cout << res;
    return 0;
}