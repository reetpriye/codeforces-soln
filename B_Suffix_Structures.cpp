// 448B 
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
    bool present = false;
    vector<int> hashTable1(27);
    vector<int> hashTable2(27);
    for(int i=0; i<s.size(); i++)
        hashTable1[s[i]-97+1]++;
    for(int i=0; i<t.size(); i++)
        hashTable2[t[i]-97+1]++;
    for(int i=1; i<27; i++) {
        if(hashTable2[i]>hashTable1[i]) {
            cout << "need tree";
            return 0;
        }
    }
    int a = 0;
    int b = 0;
    while(1) {
        if(b==t.size()-1) {
            present = true;
            break;
        }
        if(a==s.size()-1) {
            break;
        }
        if(t[b]==s[a]) {
            a++;
            b++;
        } 
        else a++;
    }
    if(!present && s.size()==t.size()) {
        cout << "array";
        return 0;
    }   
    cout << (present ? "automaton" : "both");
    return 0;
}