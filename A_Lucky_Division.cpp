// 122A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {4, 7, 44, 47, 74, 77, 444, 777, 447, 474, 744, 477, 747, 774};
    int n;
    cin >> n;
    for(int i=0; i<v.size(); i++) {
        if(n%v[i]==0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}