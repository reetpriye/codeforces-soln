// 208A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size()-2; i++)
        if(s.substr(i,3) =="WUB")
            s.replace(i,3," ");
    for(int i=0; i<s.size()-1; i++)
        if(s[i]==' ' && s[i+1]==' ')
            s.erase(i,1);
    cout << s << endl;
    return 0;
}

/*
Input "A"
Throws error
*/