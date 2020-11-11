// 1278A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int cnt = 0;
        bool flag = false;
        int k = 0;
        string p;
        string h;
        vector<int> passTable(27);
        vector<int> hashTable(27);
        cin >> p >> h;
        for(int i=k; i<p.size(); i++)
            passTable[p[i]-97]++;
        while(k+p.size()<=h.size()) {
            for(int i=k; i<p.size(); i++)
                hashTable[h[i]-97]++;
            for(int i=k; i<27; i++) {
                if(passTable[i]!=0 && (passTable[i]==hashTable[i]))
                    cnt++;
                flag = false;
            }
            if(cnt==p.size()) {
                cout << "YES\n";
                break;
            }
            k++;
            hashTable.clear();
        }
        if(!flag) cout << "YES\n";
    }
    return 0;
}