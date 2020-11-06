//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int m;
    string s;
    cin >> s;
    cin >> n;
    vector<string> mon = {"Zero", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(int i=1; i<13; i++) {
        if(s==mon[i])
            m = i;
    }
    m += n;
    m %= 12;
    if(m==0) m=12;
    cout << mon[m] << "\n";
    return 0;
}