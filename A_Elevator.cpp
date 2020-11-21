// 120A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    int a;
    cin >> s;
    cin >> a;
    if((s[0]=='f' && a==1) || (s[0]=='b' && a==2))
        cout << "L";
    else
        cout << "R";
    return 0;
}