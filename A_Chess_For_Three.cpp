// 893A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int s; // Spectator
    int w; // Winner
    bool isValid = true;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(v[0]==3) isValid = 0;
    else if(v[0]==1 && v[1]==2)
        isValid = 0;
    else if(v[0]==2 && v[1]==1)
        isValid = 0;
    if(!isValid) {
        cout << "NO\n";
        return 0;
    }
    if(v[0]==1) s = 2;
    if(v[0]==2) s = 1;
    // Next can only be previous winner or spectator. No one else.
    // for(int i=2; i<n; i++) {
    //     if(v[i]!=w || v[i]!=s) {
    //         isValid = false;
    //         break;
    //     }
    //     else w = v[i];
    //     if(s==1 && w==2)
    //         s=3;
    // }
    return 0;
}

/*
1 Alex
2 Bob
3 Carl
*/
