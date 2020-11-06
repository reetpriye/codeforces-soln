// 63A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int j = 0;
    map<string, string> mp;
    string last;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        getline(cin, v[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        while(v[i][j]!=' ')
            j++;
        j++;
        while(v[i][j]!='\0') {
            last += v[i][j];
            j++;
        }
        mp[last] = v[i];
        j = 0;
        last = "";
    }
    for (auto i : mp)
    {
        cout << "{" << i.first << "," << i.second << "} ";
    }
    cout << endl;
    return 0;
}