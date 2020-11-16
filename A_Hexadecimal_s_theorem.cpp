// 199A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    int i = 1;
    int j = 1;
    cin >> n;
    if(n==0) {
        cout << "0 0 0\n";
        return 0;
    }
    if(n==1) {
        cout << "0 0 1\n";
        return 0;
    }
    if(n==2) {
        cout << "0 1 1\n";
        return 0;
    }
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    while(i+j<=n) {
        v.push_back(i+j);
        i = *(v.rbegin()+1);
        j = v.back();
    }
    cout << *(v.rbegin()+4) << " " << *(v.rbegin()+3) << " " << *(v.rbegin()+1) << "\n";
    return 0;
}