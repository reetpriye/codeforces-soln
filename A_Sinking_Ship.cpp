// 63A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for(int i=0; i<n; i++) {
        if(v[i].second == "rat") {
            cout << v[i].first << "\n";
            continue;
        }
    }
    for(int i=0; i<n; i++) {
        if(v[i].second == "woman" || v[i].second == "child") {
            cout << v[i].first << "\n";
        }
    }
    for(int i=0; i<n; i++) {
        if(v[i].second == "man") {
            cout << v[i].first << "\n";
        }
    }
    for(int i=0; i<n; i++) {
        if(v[i].second == "captain") {
            cout << v[i].first << "\n";
            break;
        }
    }
    return 0;
}
// rats
// w & c
// captain