// 44A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string tmp;
    set<string> v;
    cin.ignore();
    for(int i=0; i<n; i++) {
        getline(cin, tmp);
        v.insert(tmp);
    }
    cout << v.size() << "\n";
    return 0;
}