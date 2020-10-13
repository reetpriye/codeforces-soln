// 231A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    int cnt = 0;
    int flag;
    cin >> T;
    while(T--) {
        flag = 0;
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if(v[0]==1)
            flag++;
        if(v[1]==1)
            flag++;
        if(v[2]==1)
            flag++;
        if(flag>=2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}