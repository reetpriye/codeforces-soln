// 688B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    string res;
    cin >> s;
    res = s;
    reverse(s.begin(), s.end());
    res += s;
    cout << res;
    return 0;
}