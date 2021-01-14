// 186A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    string t;
    cin >> s >> t;
    if(s.size()!=t.size()) {
        cout << "NO";
        return 0;
    }
    int change = 0;
    vector<int> hashTable1(27);
    vector<int> hashTable2(27);
    for(int i=0; i<s.size(); i++) {
        hashTable1[s[i]-97+1]++;
        hashTable2[t[i]-97+1]++;
    }
    for(int i=1; i<27; i++) {
        if(hashTable1[i]!=hashTable2[i]) {
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(change>2) {
            cout << "NO";
            return 0;
        }
        if(s[i]!=t[i])
            change++;
    }
    change==2 ? cout << "YES" : cout << "NO";
    return 0;
}