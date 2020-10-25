// 320A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int flag = 0;
    cin >> n;
    int i = 0;
    string s;
    s = to_string(n);
    while(i<s.size()) {
        if(s[i]!='1' && s[i]!='4') {
            flag = 1;
            break;
        }
        else if(s.substr(i,3)=="144") {
            i+=3;
        }
        else if(s.substr(i,2)=="14") {
            i+=2;
        }
        else if(s.substr(i,1)=="1") {
            i++;
        }
        else {
            flag = 1;
            break;
        }
    }
    flag == 1? cout << "NO\n" : cout << "YES\n";
    return 0;
}