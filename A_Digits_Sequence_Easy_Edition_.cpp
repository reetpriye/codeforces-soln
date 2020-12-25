// 1177A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int tmp;
    string s;
    cin >> n;
    vector<int> v;
    for(int i=1; i<=n; i++) {
        s = to_string(i);
        for(int j=0; j<s.size(); j++) {
            if(v.size()==n)
                goto end;
            tmp = s[j]-48;
            v.push_back(tmp);
        }
    }
    end:
        cout << v.back();
    return 0;
}