// 733A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int jump = 0;
    int max = 0;
    string v = "AEIOUY";
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        // If vowel
        if(v.find(s[i]) != string::npos)
            jump = 0;
        else {
            jump++;
            if(jump>max)
                max = jump;
        }
    }
    cout << max+1;
    return 0;
}