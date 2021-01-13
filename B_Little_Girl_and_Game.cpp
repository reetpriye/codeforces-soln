// 276B 
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
    vector<int> hashTable(27);
    int odd_cnt = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        hashTable[s[i]-97+1]++;
    }
    for(int i=1; i<27; i++) {
        if(hashTable[i]&1)
            odd_cnt++;
    }
    odd_cnt&1 || odd_cnt==0 ? cout << "First" : cout << "Second";
    return 0;
}