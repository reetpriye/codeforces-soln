// 808A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int size;
    string s = "";
    cin >> n;
    size = n.size()-1;
    if(stoi(n)>=1 && stoi(n)<=9)
        cout << "1";
    else if(n[0]>='1' && n[0]<='8') {
        s += n[0]+1;
        while(size--)
            s += '0';
        cout << stoi(s)-stoi(n);
    }
    else {
        s += '1';
        size++;
        while(size--)
            s += '0';
        cout << stoi(s)-stoi(n);
    }
    return 0;
}