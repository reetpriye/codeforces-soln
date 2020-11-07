// 63A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int j;
    map<string, string> mp;
    string last;
    string first;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        getline(cin, v[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        j = 0;
        first = "";
        last = "";
        while(v[i][j]!=' ') {
            first += v[i][j];
            j++;
        }
        j++;
        while(v[i][j]!='\0') {
            last += v[i][j];
            j++;
        }
        mp[first] = last;
    }
    for (auto it = mp.begin(); it!=mp.end(); ++it) {
        if(it->second=="rat") {
            cout << it->first << "\n";
        }
    }
    for (auto it = mp.begin(); it!=mp.end(); ++it) {
        if(it->second=="woman") {
            cout << it->first << "\n";
        }
    }
    for (auto it = mp.begin(); it!=mp.end(); ++it) {
        if(it->second=="child") {
            cout << it->first << "\n";
        }
    }
    for (auto it = mp.begin(); it!=mp.end(); ++it) {
        if(it->second=="man") {
            cout << it->first << "\n";
        }
    }
    for (auto it = mp.begin(); it!=mp.end(); ++it) {
        if(it->second=="captain") {
            cout << it->first << "\n";
        }
    }
    return 0;

}