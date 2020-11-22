// 961A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    int tmp;
    cin >> n >> m;
    vector<int> v(n+1,0);
    for(int i=0; i<m; i++) {
        cin >> tmp;
        v[tmp]++;
    }
    cout << *min_element(v.begin()+1, v.end());
    return 0;
}