// 729A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int flag = 0;
    int i = 0;
    cin >> n;
    string s;
    cin >> s;
    while(i<s.size()) {
        if(s.substr(i,3)=="ogo") {
            s[i]='*';
            s[i+1]='*';
            s[i+2]='*';
            i+=3;
            while(i<s.size() && s.substr(i,2)=="go")
                s.erase(i,2);
        }
        else i++;
    }
    cout << s << "\n";
    return 0;
}