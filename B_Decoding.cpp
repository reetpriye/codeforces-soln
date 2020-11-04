// 746B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    string s;
    string res;
    cin >> n;
    cin >> s;
    while(n!=0) {
        n%2!=0 ? n = floor(n/2) : n = floor(n/2)-1;
        res += s[n];
        s.erase(n,1);
        n = s.size();
    }
    res += s;
    cout << res << "\n";
    return 0;
}

/*
# Process of Encoding
      n->5  
logva n->2  g
lova  n->1  go
lva   n->1  gov
la    n->0  govl
Loop exit
a     n->   govla

# Process of Decoding
      n->5
logva 
*/