// 1373B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int o = 0;
        int z = 0;
        int min;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++)
            if(s[i]=='1')
                o++;
            else z++;
        z <= o ? min = z: min = o;
        if((z==0 && o!=0) || (z!=0 && o==0))
            cout << "NET" << endl;
        else if(z==o) {
            if(z%2==0)
                cout << "NET" << endl;
            else cout << "DA" << endl;
        }
        else if(min%2==0)
            cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    return 0;
}