// 282A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    int x = 0;
    while(T--) {
        string s;
        cin >> s;
        if(s=="X++" || s=="++X")
            x++;
        if(s=="X--" || s=="--X")
            x--;
    }
    cout << x << endl;
    return 0;
}