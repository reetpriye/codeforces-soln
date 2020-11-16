// 1225A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int da;
    int db;
    cin >> da >> db;
    if(da==9 && db==1)
        cout << "9 10\n";
    else if(abs(da-db)>=2)
        cout << -1 << "\n";
    else if(abs(da-db)==1) {
        if(da==0 || db==0)
            cout << "0 1\n";
        else if(da<db)
            cout << da << "9" << " " << db << "0\n";
        else
            cout << "-1\n";
    }
    else cout << da << "1 " << db << "2\n";
    return 0;
}