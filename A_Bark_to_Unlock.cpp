// 868A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    int n;
    bool isFirstLetterPresent = false;
    bool isLastLetterPresent = false;
    cin >> p;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++) {
        if(v[i]==p) {
            cout << "YES\n";
            return 0;
        }
        if(v[i][0]==p[1])
            isLastLetterPresent = true;
        if(v[i][1]==p[0])
            isFirstLetterPresent = true;
    }
    if(isFirstLetterPresent && isLastLetterPresent)
        cout << "YES\n";
    else 
        cout << "NO\n";
    return 0;
}