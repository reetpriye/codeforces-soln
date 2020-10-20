// 313A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int q;
    int tmp;
    string a;
    string b;
    cin >> n;
    if(n>=0)
        cout << n << endl;
    else {
        tmp = q = n;
        a = to_string(n);
        b = to_string(n);
        a.erase(a.size()-1,1);
        b.erase(b.size()-2,1);
        stoi(a) >= stoi(b) ? cout << stoi(a) << endl : cout << stoi(b) << endl;
    }
    return 0;
}